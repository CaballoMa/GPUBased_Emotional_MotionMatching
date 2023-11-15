// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchLibrary.h"
#include "Runtime/Public/PoseSearch/PoseSearchTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchLibrary();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchLibrary_NoRegister();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingState();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionMatchingState;
class UScriptStruct* FMotionMatchingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionMatchingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionMatchingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionMatchingState, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("MotionMatchingState"));
	}
	return Z_Registration_Info_UScriptStruct_MotionMatchingState.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FMotionMatchingState>()
{
	return FMotionMatchingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionMatchingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedPoseSearchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedPoseSearchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WantedPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WantedPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpedToPose_MetaData[];
#endif
		static void NewProp_bJumpedToPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpedToPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionMatchingState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseSearchTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time since the last pose jump\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time since the last pose jump" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseSearchTime = { "ElapsedPoseSearchTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionMatchingState, ElapsedPoseSearchTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseSearchTime_MetaData), Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseSearchTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// wanted PlayRate to have the selected animation playing at the estimated requested speed from the query.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "wanted PlayRate to have the selected animation playing at the estimated requested speed from the query." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate = { "WantedPlayRate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionMatchingState, WantedPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate_MetaData), Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_bJumpedToPose_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// true if a new animation has been selected\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "true if a new animation has been selected" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_bJumpedToPose_SetBit(void* Obj)
	{
		((FMotionMatchingState*)Obj)->bJumpedToPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_bJumpedToPose = { "bJumpedToPose", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMotionMatchingState), &Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_bJumpedToPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_bJumpedToPose_MetaData), Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_bJumpedToPose_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionMatchingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseSearchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_bJumpedToPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"MotionMatchingState",
		Z_Construct_UScriptStruct_FMotionMatchingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::PropPointers),
		sizeof(FMotionMatchingState),
		alignof(FMotionMatchingState),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionMatchingState_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingState()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionMatchingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionMatchingState.InnerSingleton, Z_Construct_UScriptStruct_FMotionMatchingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionMatchingState.InnerSingleton;
	}
	DEFINE_FUNCTION(UPoseSearchLibrary::execMotionMatch)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_OBJECT(UPoseSearchDatabase,Z_Param_Database);
		P_GET_STRUCT(FPoseSearchQueryTrajectory,Z_Param_Trajectory);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TrajectorySpeedMultiplier);
		P_GET_PROPERTY(FNameProperty,Z_Param_PoseHistoryName);
		P_GET_OBJECT_REF(UAnimationAsset,Z_Param_Out_SelectedAnimation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SelectedTime);
		P_GET_UBOOL_REF(Z_Param_Out_bLoop);
		P_GET_UBOOL_REF(Z_Param_Out_bIsMirrored);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BlendParameters);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SearchCost);
		P_GET_OBJECT(UAnimationAsset,Z_Param_FutureAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FutureAnimationStartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToFutureAnimationStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_DebugSessionUniqueIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPoseSearchLibrary::MotionMatch(Z_Param_AnimInstance,Z_Param_Database,Z_Param_Trajectory,Z_Param_TrajectorySpeedMultiplier,Z_Param_PoseHistoryName,Z_Param_Out_SelectedAnimation,Z_Param_Out_SelectedTime,Z_Param_Out_bLoop,Z_Param_Out_bIsMirrored,Z_Param_Out_BlendParameters,Z_Param_Out_SearchCost,Z_Param_FutureAnimation,Z_Param_FutureAnimationStartTime,Z_Param_TimeToFutureAnimationStart,Z_Param_DebugSessionUniqueIdentifier);
		P_NATIVE_END;
	}
	void UPoseSearchLibrary::StaticRegisterNativesUPoseSearchLibrary()
	{
		UClass* Class = UPoseSearchLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MotionMatch", &UPoseSearchLibrary::execMotionMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics
	{
		struct PoseSearchLibrary_eventMotionMatch_Parms
		{
			UAnimInstance* AnimInstance;
			const UPoseSearchDatabase* Database;
			FPoseSearchQueryTrajectory Trajectory;
			float TrajectorySpeedMultiplier;
			FName PoseHistoryName;
			UAnimationAsset* SelectedAnimation;
			float SelectedTime;
			bool bLoop;
			bool bIsMirrored;
			FVector BlendParameters;
			float SearchCost;
			const UAnimationAsset* FutureAnimation;
			float FutureAnimationStartTime;
			float TimeToFutureAnimationStart;
			int32 DebugSessionUniqueIdentifier;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Database_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Database;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectorySpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseHistoryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseHistoryName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectedTime;
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static void NewProp_bIsMirrored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMirrored;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendParameters;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FutureAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FutureAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FutureAnimationStartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToFutureAnimationStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSessionUniqueIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DebugSessionUniqueIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Database_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Database = { "Database", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, Database), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Database_MetaData), Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Database_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Trajectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, Trajectory), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Trajectory_MetaData), Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Trajectory_MetaData) }; // 2760805250
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_TrajectorySpeedMultiplier = { "TrajectorySpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, TrajectorySpeedMultiplier), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_PoseHistoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_PoseHistoryName = { "PoseHistoryName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, PoseHistoryName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_PoseHistoryName_MetaData), Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_PoseHistoryName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_SelectedAnimation = { "SelectedAnimation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, SelectedAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_SelectedTime = { "SelectedTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, SelectedTime), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((PoseSearchLibrary_eventMotionMatch_Parms*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PoseSearchLibrary_eventMotionMatch_Parms), &Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bIsMirrored_SetBit(void* Obj)
	{
		((PoseSearchLibrary_eventMotionMatch_Parms*)Obj)->bIsMirrored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bIsMirrored = { "bIsMirrored", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PoseSearchLibrary_eventMotionMatch_Parms), &Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bIsMirrored_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_BlendParameters = { "BlendParameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, BlendParameters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_SearchCost = { "SearchCost", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, SearchCost), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_FutureAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_FutureAnimation = { "FutureAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, FutureAnimation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_FutureAnimation_MetaData), Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_FutureAnimation_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_FutureAnimationStartTime = { "FutureAnimationStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, FutureAnimationStartTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_TimeToFutureAnimationStart = { "TimeToFutureAnimationStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, TimeToFutureAnimationStart), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_DebugSessionUniqueIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_DebugSessionUniqueIdentifier = { "DebugSessionUniqueIdentifier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoseSearchLibrary_eventMotionMatch_Parms, DebugSessionUniqueIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_DebugSessionUniqueIdentifier_MetaData), Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_DebugSessionUniqueIdentifier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Database,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_TrajectorySpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_PoseHistoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_SelectedAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_SelectedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_bIsMirrored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_BlendParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_SearchCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_FutureAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_FutureAnimationStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_TimeToFutureAnimationStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::NewProp_DebugSessionUniqueIdentifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Implementation of the core motion matching algorithm\n\x09*\n\x09* @param AnimInstance\x09\x09\x09\x09\x09Input animation instance\n\x09* @param Database\x09\x09\x09\x09\x09\x09Input database to search\n\x09* @param Trajectory\x09\x09\x09\x09\x09\x09Input motion trajectory samples for pose search queries. Expected to be in the space of the SkeletalMeshComponent. This is provided with the CharacterMovementTrajectory Component output.\n\x09* @param TrajectorySpeedMultiplier\x09\x09Input Trajectory velocity will be multiplied by TrajectorySpeedMultiplier: values below 1 will result in selecting animation slower than requested from the original Trajectory\n\x09* @param PoseHistoryName\x09\x09\x09\x09Input tag of the associated PoseSearchHistoryCollector node in the anim graph\n\x09* @param SelectedAnimation\x09\x09\x09\x09Output selected animation from the Database asset\n\x09* @param SelectedTime\x09\x09\x09\x09\x09Output selected animation time\n\x09* @param bLoop\x09\x09\x09\x09\x09\x09\x09Output selected animation looping state\n\x09* @param bIsMirrored\x09\x09\x09\x09\x09Output selected animation mirror state\n\x09* @param BlendParameters\x09\x09\x09\x09Output selected animation blend space parameters (if SelectedAnimation is a blend space)\n\x09* @param SearchCost\x09\x09\x09\x09\x09\x09Output search associated cost\n\x09* @param FutureAnimation\x09\x09\x09\x09Input animation we want to match after TimeToFutureAnimationStart seconds\n\x09* @param FutureAnimationStartTime\x09\x09Input start time for the first pose of FutureAnimation\n\x09* @param TimeToFutureAnimationStart\x09\x09Input time in seconds before start playing FutureAnimation (from FutureAnimationStartTime seconds)\n\x09* @param DebugSessionUniqueIdentifier\x09Input unique identifier used to identify TraceMotionMatchingState (rewind debugger / pose search debugger) session. Similarly the MM node uses Context.GetCurrentNodeId()\n\x09*/" },
#endif
		{ "CPP_Default_DebugSessionUniqueIdentifier", "6174" },
		{ "CPP_Default_FutureAnimation", "None" },
		{ "CPP_Default_FutureAnimationStartTime", "0.000000" },
		{ "CPP_Default_TimeToFutureAnimationStart", "0.000000" },
		{ "Keywords", "PoseMatch" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implementation of the core motion matching algorithm\n\n@param AnimInstance                                   Input animation instance\n@param Database                                               Input database to search\n@param Trajectory                                             Input motion trajectory samples for pose search queries. Expected to be in the space of the SkeletalMeshComponent. This is provided with the CharacterMovementTrajectory Component output.\n@param TrajectorySpeedMultiplier              Input Trajectory velocity will be multiplied by TrajectorySpeedMultiplier: values below 1 will result in selecting animation slower than requested from the original Trajectory\n@param PoseHistoryName                                Input tag of the associated PoseSearchHistoryCollector node in the anim graph\n@param SelectedAnimation                              Output selected animation from the Database asset\n@param SelectedTime                                   Output selected animation time\n@param bLoop                                                  Output selected animation looping state\n@param bIsMirrored                                    Output selected animation mirror state\n@param BlendParameters                                Output selected animation blend space parameters (if SelectedAnimation is a blend space)\n@param SearchCost                                             Output search associated cost\n@param FutureAnimation                                Input animation we want to match after TimeToFutureAnimationStart seconds\n@param FutureAnimationStartTime               Input start time for the first pose of FutureAnimation\n@param TimeToFutureAnimationStart             Input time in seconds before start playing FutureAnimation (from FutureAnimationStartTime seconds)\n@param DebugSessionUniqueIdentifier   Input unique identifier used to identify TraceMotionMatchingState (rewind debugger / pose search debugger) session. Similarly the MM node uses Context.GetCurrentNodeId()" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoseSearchLibrary, nullptr, "MotionMatch", nullptr, nullptr, Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::PoseSearchLibrary_eventMotionMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::PoseSearchLibrary_eventMotionMatch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchLibrary);
	UClass* Z_Construct_UClass_UPoseSearchLibrary_NoRegister()
	{
		return UPoseSearchLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoseSearchLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoseSearchLibrary_MotionMatch, "MotionMatch" }, // 496852865
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearch/PoseSearchLibrary.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchLibrary_Statics::ClassParams = {
		&UPoseSearchLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPoseSearchLibrary()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchLibrary.OuterSingleton, Z_Construct_UClass_UPoseSearchLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchLibrary.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchLibrary>()
	{
		return UPoseSearchLibrary::StaticClass();
	}
	UPoseSearchLibrary::UPoseSearchLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchLibrary);
	UPoseSearchLibrary::~UPoseSearchLibrary() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMotionMatchingState::StaticStruct, Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewStructOps, TEXT("MotionMatchingState"), &Z_Registration_Info_UScriptStruct_MotionMatchingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionMatchingState), 2816792213U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchLibrary, UPoseSearchLibrary::StaticClass, TEXT("UPoseSearchLibrary"), &Z_Registration_Info_UClass_UPoseSearchLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchLibrary), 1210011548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_2011164906(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
