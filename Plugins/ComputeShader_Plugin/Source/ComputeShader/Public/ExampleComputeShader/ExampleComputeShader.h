#pragma once

#include "CoreMinimal.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialRenderProxy.h"
#include "ExampleComputeShader.generated.h"

#define TexWidth 512
#define TexHeight 512


struct COMPUTESHADER_API FExampleComputeShaderDispatchParams
{
	int X;
	int Y;
	int Z;

	
	TArray<float> weightsSqrt;
	TArray<int32> arrayLength;
	TArray<float> A;
	TArray<float> B;
	TArray<float> dataBaseIdx;
	TArray<float> poseIdx;
	TArray<float> OutPut;
	/*
	struct dataOutComputeShader {
		int32 databaseIndex;
		int32 poseIdx;
		TArray<float> cost;
	};
	*/

	FExampleComputeShaderDispatchParams(int x, int y, int z)
		: X(x)
		, Y(y)
		, Z(z)
	{
	}
};

// This is a public interface that we define so outside code can invoke our compute shader.
class COMPUTESHADER_API FExampleComputeShaderInterface {
public:
	// Executes this shader on the render thread
	static void DispatchRenderThread(
		FRHICommandListImmediate& RHICmdList,
		FExampleComputeShaderDispatchParams Params,
		TFunction<void(float* OutputVal)> AsyncCallback
	);

	// Executes this shader on the render thread from the game thread via EnqueueRenderThreadCommand
	static void DispatchGameThread(
		FExampleComputeShaderDispatchParams Params,
		TFunction<void(float* OutputVal)> AsyncCallback
	)
	{
		ENQUEUE_RENDER_COMMAND(SceneDrawCompletion)(
		[Params, AsyncCallback](FRHICommandListImmediate& RHICmdList)
		{
			DispatchRenderThread(RHICmdList, Params, AsyncCallback);
		});
	}

	// Dispatches this shader. Can be called from any thread
	static void Dispatch(
		FExampleComputeShaderDispatchParams Params,
		TFunction<void(float* OutputVal)> AsyncCallback
	)
	{
		if (IsInRenderingThread()) {
			DispatchRenderThread(GetImmediateCommandList_ForRenderCommand(), Params, AsyncCallback);
		}else{
			DispatchGameThread(Params, AsyncCallback);
		}
	}

	static void check_connection();
};



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExampleComputeShaderLibrary_AsyncExecutionCompleted, const int, Value);


UCLASS() // Change the _API to match your project
class COMPUTESHADER_API UExampleComputeShaderLibrary_AsyncExecution : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	int overallSize = 9000;
	TArray<float> computeShaderResult;
	//void SetComputeShaderData(TArray<float> weightsSqrt, TArray<float> poseValueArray, TArray<float> queryArray, int arrayLength, int* poseIdx, int* DataBaseIdx);
	//void start_computeShader();
	//FExampleComputeShaderDispatchParams Params;
	// Execute the actual load
	/*
	virtual void Activate(TArray<float> weightsSqrt, TArray<float> new_poseValues, TArray<float> new_queryValues, int array_length, float* PoseIdx, float* dataBaseIndex) {
		FExampleComputeShaderDispatchParams Params(1, 1, 1);

		Params.A = new_poseValues;
		Params.B = new_queryValues;
		Params.arrayLength = array_length;
		Params.weightsSqrt = weightsSqrt;
		Params.dataBaseIdx = dataBaseIndex;
		Params.poseIdx = PoseIdx;
	}*/
	
	void Execute(FExampleComputeShaderDispatchParams Params, TArray<float>& Output)
	{
		
		FExampleComputeShaderInterface::Dispatch(Params, [this, &Output, Params](float* OutputVal)
			{
				for (int i = 0; i < 100000; i += 9) {
					computeShaderResult.Add(OutputVal[i] + OutputVal[i+1] + OutputVal[i+2] + OutputVal[i + 3] + OutputVal[i + 4] + OutputVal[i + 5] + OutputVal[i + 6]);
					//UE_LOG(LogTemp, Warning, TEXT("data base idx : %f"), OutputVal[i + 7]);
					//UE_LOG(LogTemp, Warning, TEXT("pose idx : %f"), OutputVal[i + 8]);
				
				}
				
				//computeShaderResult.Add(OutputVal[7]);
				//computeShaderResult.Add(OutputVal[8]);
			});
	}

	/*UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", Category = "ComputeShader", WorldContext = "WorldContextObject"))
	static UExampleComputeShaderLibrary_AsyncExecution* ExecuteBaseComputeShader(UObject* WorldContextObject, int Arg1, int Arg2) {
		UExampleComputeShaderLibrary_AsyncExecution* Action = NewObject<UExampleComputeShaderLibrary_AsyncExecution>();
		Action->Arg1 = Arg1;
		Action->Arg2 = Arg2;
		Action->RegisterWithGameInstance(WorldContextObject);

		return Action;
	}*/

	UPROPERTY(BlueprintAssignable)
	FOnExampleComputeShaderLibrary_AsyncExecutionCompleted Completed;
	
	/*int Arg1;
	int Arg2;*/
	
};