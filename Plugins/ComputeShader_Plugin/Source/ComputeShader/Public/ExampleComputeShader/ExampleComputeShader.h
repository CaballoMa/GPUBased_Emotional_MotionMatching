#pragma once

#include "CoreMinimal.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialRenderProxy.h"
#include "RHIGPUReadback.h"
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
	static TArray<FRHIGPUBufferReadback*> BufferReadbackPool;
	// Executes this shader on the render thread
	static void DispatchRenderThread(
		FRHICommandListImmediate& RHICmdList,
		FExampleComputeShaderDispatchParams Params,
		FRenderCommandFence RenderFence,
		TFunction<void(float* OutputVal)> AsyncCallback
	);

	// Executes this shader on the render thread from the game thread via EnqueueRenderThreadCommand
	static void DispatchGameThread(
		FExampleComputeShaderDispatchParams Params,
		FRenderCommandFence RenderFence,
		TFunction<void(float* OutputVal)> AsyncCallback
	)
	{
		ENQUEUE_RENDER_COMMAND(SceneDrawCompletion)(
		[Params, RenderFence,AsyncCallback](FRHICommandListImmediate& RHICmdList)
		{
			DispatchRenderThread(RHICmdList, Params, RenderFence,AsyncCallback);
		});
	}

	// Dispatches this shader. Can be called from any thread
	static void Dispatch(
		FExampleComputeShaderDispatchParams Params,
		FRenderCommandFence RenderFence,
		TFunction<void(float* OutputVal)> AsyncCallback
	)
	{
		if (IsInRenderingThread()) {
			DispatchRenderThread(GetImmediateCommandList_ForRenderCommand(), Params, RenderFence,AsyncCallback);
		}else{
			DispatchGameThread(Params,RenderFence,AsyncCallback);
		}
	}

	static void check_connection();
};


UCLASS() // Change the _API to match your project
class COMPUTESHADER_API UExampleComputeShaderLibrary_AsyncExecution : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMyCustomEventDelegate, float, Cost, float, DatabaseIdx, float, PoseIdx);
	FMyCustomEventDelegate OnBroadcast;
	bool bIsBoundToSender = false;
	int32 currFrame;
	TArray<TArray<float>>* outputFromDatabase = nullptr;

	// Execute the actual load
	virtual void Activate(TArray<float> weightsSqrt, TArray<float> new_poseValues, TArray<float> new_queryValues, int array_length, float* PoseIdx, float* dataBaseIndex) {
		/*FExampleComputeShaderDispatchParams Params(1, 1, 1);

		Params.A = new_poseValues;
		Params.B = new_queryValues;
		Params.arrayLength = array_length;
		Params.weightsSqrt = weightsSqrt;
		Params.dataBaseIdx = dataBaseIndex;
		Params.poseIdx = PoseIdx;*/
	}
	
	void Execute(FExampleComputeShaderDispatchParams Params, FRenderCommandFence RenderFence, FCriticalSection* CriticalSection, TArray<TArray<float>>* outputBuffer)
	{
		if (outputFromDatabase == nullptr)
		{
			outputFromDatabase = outputBuffer;
		}

		FExampleComputeShaderInterface::Dispatch(Params, RenderFence, [this, Params, CriticalSection](float* OutputVal)
			{
				if (outputFromDatabase != nullptr)
				{
					float cost = OutputVal[0] + OutputVal[1] + OutputVal[2] + OutputVal[3] + OutputVal[4] + OutputVal[5] + OutputVal[6];
					float bestcost = FLT_MAX;
					CriticalSection->Lock();
					outputFromDatabase->Empty();
					bestcost = cost;
					outputFromDatabase->Add({ cost, OutputVal[7], OutputVal[8] });
					for (int i = 9; i < 921600; i += 9) {
						float poseIdx = OutputVal[i + 8];
						cost = OutputVal[i] + OutputVal[i + 1] + OutputVal[i + 2] + OutputVal[i + 3] + OutputVal[i + 4] + OutputVal[i + 5] + OutputVal[i + 6];
						if (bestcost > cost)
						{
							bestcost = cost;
							outputFromDatabase->RemoveAt(0);
							outputFromDatabase->Add({ cost, OutputVal[i + 7], poseIdx });
						}
					}
					CriticalSection->Unlock();
				}
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
	
	/*int Arg1;
	int Arg2;*/
	
};