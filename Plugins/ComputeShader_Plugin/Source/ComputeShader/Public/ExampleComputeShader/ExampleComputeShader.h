#pragma once

#include "CoreMinimal.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialRenderProxy.h"
//#include "../../../../../PoseSearch/Source/Runtime/Public/PoseSearch/PoseSearchLibrary.h"
#include "ExampleComputeShader.generated.h"

#define TexWidth 512
#define TexHeight 512


struct COMPUTESHADER_API FExampleComputeShaderDispatchParams
{
	int X;
	int Y;
	int Z;

	
	TArray<float> weightsSqrt;
	int32 arrayLength;
	TArray<float> A;
	TArray<float> B;
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
		TFunction<void(int OutputVal)> AsyncCallback
	);

	// Executes this shader on the render thread from the game thread via EnqueueRenderThreadCommand
	static void DispatchGameThread(
		FExampleComputeShaderDispatchParams Params,
		TFunction<void(int OutputVal)> AsyncCallback
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
		TFunction<void(int OutputVal)> AsyncCallback
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
	//¥À¥¶…Ë÷√xyz
	void SetComputeShaderData(TArray<float> weightsSqrt, TArray<float> poseValueArray, TArray<float> queryArray, int arrayLength, int poseIdx, int DataBaseIdx);
	void start_computeShader();
	FExampleComputeShaderDispatchParams Params;

	// Execute the actual load
	virtual void Activate() override {
		// Create a dispatch parameters struct and fill it the input array with our args
		
		//Params.Input[0] = Arg1;
		//Params.Input[1] = Arg2;
		// Dispatch the compute shader and wait until it completes
		/*
		FExampleComputeShaderInterface::Dispatch(Params, [this](int OutputVal) {
			this->Completed.Broadcast(OutputVal);
		})*/;
	}
	
	
	/*
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", Category = "ComputeShader", WorldContext = "WorldContextObject"))
	static UExampleComputeShaderLibrary_AsyncExecution* ExecuteBaseComputeShader(UObject* WorldContextObject, int Arg1, int Arg2) {
		UExampleComputeShaderLibrary_AsyncExecution* Action = NewObject<UExampleComputeShaderLibrary_AsyncExecution>();
		Action->Arg1 = Arg1;
		Action->Arg2 = Arg2;
		Action->RegisterWithGameInstance(WorldContextObject);

		return Action;
	}
	*/
	UPROPERTY(BlueprintAssignable)
	FOnExampleComputeShaderLibrary_AsyncExecutionCompleted Completed;

	
	//int Arg1;
	//int Arg2;
	
};