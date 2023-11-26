#include "ExampleComputeShader.h"
#include "ComputeShader/Public/ExampleComputeShader/ExampleComputeShader.h"
#include "PixelShaderUtils.h"
#include "MeshPassProcessor.inl"
#include "StaticMeshResources.h"
#include "DynamicMeshBuilder.h"
#include "RenderGraphResources.h"
#include "GlobalShader.h"
#include "UnifiedBuffer.h"
#include "CanvasTypes.h"
#include "MeshDrawShaderBindings.h"
#include "RHIGPUReadback.h"
#include "MeshPassUtils.h"
#include "MaterialShader.h"

DECLARE_STATS_GROUP(TEXT("ExampleComputeShader"), STATGROUP_ExampleComputeShader, STATCAT_Advanced);
DECLARE_CYCLE_STAT(TEXT("ExampleComputeShader Execute"), STAT_ExampleComputeShader_Execute, STATGROUP_ExampleComputeShader);

// This class carries our parameter declarations and acts as the bridge between cpp and HLSL.
class COMPUTESHADER_API FExampleComputeShader: public FGlobalShader
{
public:
	
	DECLARE_GLOBAL_SHADER(FExampleComputeShader);
	SHADER_USE_PARAMETER_STRUCT(FExampleComputeShader, FGlobalShader);
	
	
	class FExampleComputeShader_Perm_TEST : SHADER_PERMUTATION_INT("TEST", 1);
	using FPermutationDomain = TShaderPermutationDomain<
		FExampleComputeShader_Perm_TEST
	>;

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )

		// SHADER_PARAMETER(uint32, MyUint32) // On the shader side: uint32 MyUint32;
		// SHADER_PARAMETER(FVector3f, MyVector) // On the shader side: float3 MyVector;

		// SHADER_PARAMETER_TEXTURE(Texture2D, MyTexture) // On the shader side: Texture2D<float4> MyTexture; (float4 should be whatever you expect each pixel in the texture to be, in this case float4(R,G,B,A) for 4 channels)
		// SHADER_PARAMETER_SAMPLER(SamplerState, MyTextureSampler) // On the shader side: SamplerState MySampler; // CPP side: TStaticSamplerState<ESamplerFilter::SF_Bilinear>::GetRHI();

		// SHADER_PARAMETER_ARRAY(float, MyFloatArray, [3]) // On the shader side: float MyFloatArray[3];

		// SHADER_PARAMETER_UAV(RWTexture2D<FVector4f>, MyTextureUAV) // On the shader side: RWTexture2D<float4> MyTextureUAV;
		// SHADER_PARAMETER_UAV(RWStructuredBuffer<FMyCustomStruct>, MyCustomStructs) // On the shader side: RWStructuredBuffer<FMyCustomStruct> MyCustomStructs;
		// SHADER_PARAMETER_UAV(RWBuffer<FMyCustomStruct>, MyCustomStructs) // On the shader side: RWBuffer<FMyCustomStruct> MyCustomStructs;

		// SHADER_PARAMETER_SRV(StructuredBuffer<FMyCustomStruct>, MyCustomStructs) // On the shader side: StructuredBuffer<FMyCustomStruct> MyCustomStructs;
		// SHADER_PARAMETER_SRV(Buffer<FMyCustomStruct>, MyCustomStructs) // On the shader side: Buffer<FMyCustomStruct> MyCustomStructs;
		// SHADER_PARAMETER_SRV(Texture2D<FVector4f>, MyReadOnlyTexture) // On the shader side: Texture2D<float4> MyReadOnlyTexture;

		// SHADER_PARAMETER_STRUCT_REF(FMyCustomStruct, MyCustomStruct)

		
		SHADER_PARAMETER_RDG_BUFFER_SRV(Buffer<float>, A)
		SHADER_PARAMETER_RDG_BUFFER_SRV(Buffer<float>, B)
		SHADER_PARAMETER_RDG_BUFFER_SRV(Buffer<float>, WeightsSqrt)
		SHADER_PARAMETER_RDG_BUFFER_UAV(RWBuffer<float>, PartialCosts)
		
		

	END_SHADER_PARAMETER_STRUCT()

public:
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		const FPermutationDomain PermutationVector(Parameters.PermutationId);
		
		return true;
	}

	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
		FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);

		const FPermutationDomain PermutationVector(Parameters.PermutationId);

		/*
		* Here you define constants that can be used statically in the shader code.
		* Example:
		*/
		// OutEnvironment.SetDefine(TEXT("MY_CUSTOM_CONST"), TEXT("1"));

		/*
		* These defines are used in the thread count section of our shader
		*/
		OutEnvironment.SetDefine(TEXT("THREADS_X"), NUM_THREADS_ExampleComputeShader_X);
		OutEnvironment.SetDefine(TEXT("THREADS_Y"), NUM_THREADS_ExampleComputeShader_Y);
		OutEnvironment.SetDefine(TEXT("THREADS_Z"), NUM_THREADS_ExampleComputeShader_Z);

		// This shader must support typed UAV load and we are testing if it is supported at runtime using RHIIsTypedUAVLoadSupported
		//OutEnvironment.CompilerFlags.Add(CFLAG_AllowTypedUAVLoads);

		// FForwardLightingParameters::ModifyCompilationEnvironment(Parameters.Platform, OutEnvironment);
	}
private:
};

// This will tell the engine to create the shader and where the shader entry point is.
//                            ShaderType                            ShaderPath                     Shader function name    Type
IMPLEMENT_GLOBAL_SHADER(FExampleComputeShader, "/ComputeShaderShaders/ExampleComputeShader/ExampleComputeShader.usf", "ExampleComputeShader", SF_Compute);

void FExampleComputeShaderInterface::DispatchRenderThread(FRHICommandListImmediate& RHICmdList, FExampleComputeShaderDispatchParams Params, TFunction<void(int OutputVal)> AsyncCallback) {
	FRDGBuilder GraphBuilder(RHICmdList);

	{
		SCOPE_CYCLE_COUNTER(STAT_ExampleComputeShader_Execute);
		DECLARE_GPU_STAT(ExampleComputeShader)
		RDG_EVENT_SCOPE(GraphBuilder, "ExampleComputeShader");
		RDG_GPU_STAT_SCOPE(GraphBuilder, ExampleComputeShader);
		
		typename FExampleComputeShader::FPermutationDomain PermutationVector;
		
		// Add any static permutation options here
		// PermutationVector.Set<FExampleComputeShader::FMyPermutationName>(12345);

		TShaderMapRef<FExampleComputeShader> ComputeShader(GetGlobalShaderMap(GMaxRHIFeatureLevel), PermutationVector);
		

		bool bIsShaderValid = ComputeShader.IsValid();

		if (bIsShaderValid) {
			FExampleComputeShader::FParameters* PassParameters = GraphBuilder.AllocParameters<FExampleComputeShader::FParameters>();

			
			const void* A = (void*)Params.A.GetData();
			const void* B = (void*)Params.B.GetData();
			const void* weightsSqrt = (void*)Params.weightsSqrt.GetData();
			int NumInputs = Params.arrayLength;
			int InputSize = sizeof(float);
			FRDGBufferRef InputBufferA = CreateUploadBuffer(GraphBuilder, TEXT("InputBufferA"), InputSize, NumInputs, A, InputSize * NumInputs);

			PassParameters->A = GraphBuilder.CreateSRV(FRDGBufferSRVDesc(InputBufferA, PF_R32_FLOAT));

			FRDGBufferRef InputBufferB = CreateUploadBuffer(GraphBuilder, TEXT("InputBufferB"), InputSize, NumInputs, B, InputSize * NumInputs);

			PassParameters->B = GraphBuilder.CreateSRV(FRDGBufferSRVDesc(InputBufferB, PF_R32_FLOAT));

			FRDGBufferRef InputBufferWeightsSqrt = CreateUploadBuffer(GraphBuilder, TEXT("InputBufferWeightsSqrt"), InputSize, NumInputs, weightsSqrt, InputSize * NumInputs);

			PassParameters->WeightsSqrt = GraphBuilder.CreateSRV(FRDGBufferSRVDesc(InputBufferWeightsSqrt, PF_R32_FLOAT));

			FRDGBufferRef OutputBuffer = GraphBuilder.CreateBuffer(
				FRDGBufferDesc::CreateBufferDesc(sizeof(float), NUM_THREADS_ExampleComputeShader_X),
				TEXT("OutputBuffer"));

			PassParameters->PartialCosts = GraphBuilder.CreateUAV(FRDGBufferUAVDesc(OutputBuffer, PF_R32_FLOAT));
			

			auto GroupCount = FComputeShaderUtils::GetGroupCount(FIntVector(Params.X, Params.Y, Params.Z), FComputeShaderUtils::kGolden2DGroupSize);
			GraphBuilder.AddPass(
				RDG_EVENT_NAME("ExecuteExampleComputeShader"),
				PassParameters,
				ERDGPassFlags::AsyncCompute,
				[&PassParameters, ComputeShader, GroupCount](FRHIComputeCommandList& RHICmdList)
			{
				FComputeShaderUtils::Dispatch(RHICmdList, ComputeShader, *PassParameters, GroupCount);
			});

			FRHIGPUBufferReadback* GPUBufferReadback = new FRHIGPUBufferReadback(TEXT("ExecuteExampleComputeShaderOutput"));
			AddEnqueueCopyPass(GraphBuilder, GPUBufferReadback, OutputBuffer, 0u);

			auto RunnerFunc = [GPUBufferReadback, AsyncCallback](auto&& RunnerFunc) -> void {
				if (GPUBufferReadback->IsReady()) {
					
					float* Buffer = (float*)GPUBufferReadback->Lock(NUM_THREADS_ExampleComputeShader_X);
					int OutVal = Buffer[0] + Buffer[1] + Buffer[2] + Buffer[3] + Buffer[4] + Buffer[5] + Buffer[6];
					
					GPUBufferReadback->Unlock();

					AsyncTask(ENamedThreads::GameThread, [AsyncCallback, OutVal]() {
						AsyncCallback(OutVal);
					});

					delete GPUBufferReadback;
				} else {
					AsyncTask(ENamedThreads::ActualRenderingThread, [RunnerFunc]() {
						RunnerFunc(RunnerFunc);
					});
				}
			};

			AsyncTask(ENamedThreads::ActualRenderingThread, [RunnerFunc]() {
				RunnerFunc(RunnerFunc);
			});
			
		} else {
			#if WITH_EDITOR
				GEngine->AddOnScreenDebugMessage((uint64)42145125184, 6.f, FColor::Red, FString(TEXT("The compute shader has a problem.")));
			#endif

			// We exit here as we don't want to crash the game if the shader is not found or has an error.
			
		}
	}

	GraphBuilder.Execute();
}

void FExampleComputeShaderInterface::check_connection()
{
	UE_LOG(LogTemp, Warning, TEXT(" the connection established .. .. .."));
}
/*
void UExampleComputeShaderLibrary_AsyncExecution::SetComputeShaderData(TArray<float> weightsSqrt, TArray<float> poseValueArray, TArray<float> queryArray, int arrayLength, int poseIdx, int DataBaseIdx)
{
	this->m_arrayLength = arrayLength;
	this->m_weightsSqrt = weightsSqrt;
	this->m_A = poseValueArray;
	this->m_B = queryArray;
	this->m_databaseIdx = DataBaseIdx;
	this->m_poseIdx = poseIdx;
}*/
