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
#define POSE_SEARCH_GAP 4

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
	TArray<float> needed_data;

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
		FRenderCommandFence RenderFence, FCriticalSection* CriticalSection,
		TFunction<void(float* OutputVal)> AsyncCallback
	);

	// Executes this shader on the render thread from the game thread via EnqueueRenderThreadCommand
	static void DispatchGameThread(
		FExampleComputeShaderDispatchParams Params,
		FRenderCommandFence RenderFence, FCriticalSection* CriticalSection,
		TFunction<void(float* OutputVal)> AsyncCallback
	)
	{
		ENQUEUE_RENDER_COMMAND(SceneDrawCompletion)(
		[Params, RenderFence, CriticalSection,AsyncCallback](FRHICommandListImmediate& RHICmdList)
		{
			DispatchRenderThread(RHICmdList, Params, RenderFence, CriticalSection,AsyncCallback);
		});
	}

	// Dispatches this shader. Can be called from any thread
	static void Dispatch(
		FExampleComputeShaderDispatchParams Params,
		FRenderCommandFence RenderFence, FCriticalSection* CriticalSection,
		TFunction<void(float* OutputVal)> AsyncCallback
	)
	{
		if (IsInRenderingThread()) {
			DispatchRenderThread(GetImmediateCommandList_ForRenderCommand(), Params, RenderFence, CriticalSection, AsyncCallback);
		}else{
			DispatchGameThread(Params,RenderFence, CriticalSection,AsyncCallback);
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
	int32 currFrame = 1;
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
	
	void Execute(FExampleComputeShaderDispatchParams Params, FRenderCommandFence RenderFence, FCriticalSection* CriticalSection, TArray<TArray<float>>* outputBuffer, int num_pose)
	{
		if (outputFromDatabase == nullptr)
		{
			outputFromDatabase = outputBuffer;
		}

		FExampleComputeShaderInterface::Dispatch(Params, RenderFence, CriticalSection, [this, Params, CriticalSection, num_pose](float* OutputVal)
			{
				if (outputFromDatabase != nullptr)
				{
					float cost = OutputVal[0];
					float bestcost = FLT_MAX;
					CriticalSection->Lock();
					if (outputFromDatabase->Num() >= POSE_SEARCH_GAP)
					{
						outputFromDatabase->RemoveAt(0);
					}
					//outputFromDatabase->Empty();
					bestcost = cost;
					outputFromDatabase->Add({ cost, OutputVal[1], OutputVal[2] });
					for (int i = 3; i < num_pose * 3 - 1; i += 3) {
						if (OutputVal[i] != NULL)
						{
							cost = OutputVal[i];
							if (bestcost > cost && OutputVal[i + 2] >= 0 && OutputVal[i + 2] < num_pose * POSE_SEARCH_GAP)
							{
								bestcost = cost;
								outputFromDatabase->Pop();
								outputFromDatabase->Add({ cost, OutputVal[i + 1], OutputVal[i + 2] });
							}
						
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