// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrajectory/Public/CharacterTrajectoryComponent.h"
#include "Runtime/Public/PoseSearch/PoseSearchTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTrajectoryComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterTrajectoryComponent();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory();
	UPackage* Z_Construct_UPackage__Script_MotionTrajectory();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterTrajectoryComponent::execOnMovementUpdated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_STRUCT(FVector,Z_Param_OldLocation);
		P_GET_STRUCT(FVector,Z_Param_OldVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementUpdated(Z_Param_DeltaSeconds,Z_Param_OldLocation,Z_Param_OldVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterTrajectoryComponent::execGetFacingFromMeshComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetFacingFromMeshComponent_Implementation(Z_Param_MeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterTrajectoryComponent::execUpdateTrajectory)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTrajectory(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	struct CharacterTrajectoryComponent_eventGetFacingFromMeshComponent_Parms
	{
		const USkeletalMeshComponent* MeshComponent;
		FRotator ReturnValue;

		/** Constructor, initializes return property only **/
		CharacterTrajectoryComponent_eventGetFacingFromMeshComponent_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	static FName NAME_UCharacterTrajectoryComponent_GetFacingFromMeshComponent = FName(TEXT("GetFacingFromMeshComponent"));
	FRotator UCharacterTrajectoryComponent::GetFacingFromMeshComponent(const USkeletalMeshComponent* MeshComponent) const
	{
		CharacterTrajectoryComponent_eventGetFacingFromMeshComponent_Parms Parms;
		Parms.MeshComponent=MeshComponent;
		const_cast<UCharacterTrajectoryComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCharacterTrajectoryComponent_GetFacingFromMeshComponent),&Parms);
		return Parms.ReturnValue;
	}
	void UCharacterTrajectoryComponent::StaticRegisterNativesUCharacterTrajectoryComponent()
	{
		UClass* Class = UCharacterTrajectoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFacingFromMeshComponent", &UCharacterTrajectoryComponent::execGetFacingFromMeshComponent },
			{ "OnMovementUpdated", &UCharacterTrajectoryComponent::execOnMovementUpdated },
			{ "UpdateTrajectory", &UCharacterTrajectoryComponent::execUpdateTrajectory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterTrajectoryComponent_eventGetFacingFromMeshComponent_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::NewProp_MeshComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterTrajectoryComponent_eventGetFacingFromMeshComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trajectory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This can be used to override the facing used for trajectory calculation.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This can be used to override the facing used for trajectory calculation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterTrajectoryComponent, nullptr, "GetFacingFromMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::PropPointers), sizeof(CharacterTrajectoryComponent_eventGetFacingFromMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(CharacterTrajectoryComponent_eventGetFacingFromMeshComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics
	{
		struct CharacterTrajectoryComponent_eventOnMovementUpdated_Parms
		{
			float DeltaSeconds;
			FVector OldLocation;
			FVector OldVelocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterTrajectoryComponent_eventOnMovementUpdated_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldLocation = { "OldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterTrajectoryComponent_eventOnMovementUpdated_Parms, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldVelocity = { "OldVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterTrajectoryComponent_eventOnMovementUpdated_Parms, OldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterTrajectoryComponent, nullptr, "OnMovementUpdated", nullptr, nullptr, Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::CharacterTrajectoryComponent_eventOnMovementUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::CharacterTrajectoryComponent_eventOnMovementUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics
	{
		struct CharacterTrajectoryComponent_eventUpdateTrajectory_Parms
		{
			float DeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterTrajectoryComponent_eventUpdateTrajectory_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trajectory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This can be called when bAutoUpdateTrajectory is false to manually control when trajectory updates.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This can be called when bAutoUpdateTrajectory is false to manually control when trajectory updates." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterTrajectoryComponent, nullptr, "UpdateTrajectory", nullptr, nullptr, Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::CharacterTrajectoryComponent_eventUpdateTrajectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::CharacterTrajectoryComponent_eventUpdateTrajectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterTrajectoryComponent);
	UClass* Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister()
	{
		return UCharacterTrajectoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterTrajectoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistoryLengthSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HistoryLengthSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistorySamplesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HistorySamplesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionLengthSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictionLengthSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionSamplesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PredictionSamplesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateTowardsMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateTowardsMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateTrajectory_MetaData[];
#endif
		static void NewProp_bAutoUpdateTrajectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateTrajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxControllerRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxControllerRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkelMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterTrajectoryComponent_GetFacingFromMeshComponent, "GetFacingFromMeshComponent" }, // 3793257830
		{ &Z_Construct_UFunction_UCharacterTrajectoryComponent_OnMovementUpdated, "OnMovementUpdated" }, // 1831766195
		{ &Z_Construct_UFunction_UCharacterTrajectoryComponent_UpdateTrajectory, "UpdateTrajectory" }, // 483076027
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Component for generating trajectories usable by Motion Matching. This component generates trajectories from ACharacter.\n// This is intended to provide an example and starting point for using Motion Matching with a common setup using the default UCharacterMovementComponent.\n// It is expected work flow to extend or replace this component for projects that use a custom movement component or custom movement modes.\n" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "CharacterTrajectoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component for generating trajectories usable by Motion Matching. This component generates trajectories from ACharacter.\nThis is intended to provide an example and starting point for using Motion Matching with a common setup using the default UCharacterMovementComponent.\nIt is expected work flow to extend or replace this component for projects that use a custom movement component or custom movement modes." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_Trajectory_MetaData[] = {
		{ "Category", "Trajectory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Trajectory stored in world space so it can be directly passed to Motion Matching.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trajectory stored in world space so it can be directly passed to Motion Matching." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, Trajectory), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_Trajectory_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_Trajectory_MetaData) }; // 2760805250
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistoryLengthSeconds_MetaData[] = {
		{ "Category", "Trajectory Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This should generally match the longest history required by a Motion Matching Database in the project.\n// Motion Matching will use extrapolation to generate samples if the history doesn't contain enough samples.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This should generally match the longest history required by a Motion Matching Database in the project.\nMotion Matching will use extrapolation to generate samples if the history doesn't contain enough samples." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistoryLengthSeconds = { "HistoryLengthSeconds", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, HistoryLengthSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistoryLengthSeconds_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistoryLengthSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistorySamplesPerSecond_MetaData[] = {
		{ "Category", "Trajectory Settings" },
		{ "ClampMax", "120" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher values will cost more storage and processing time, but give higher accuracy.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher values will cost more storage and processing time, but give higher accuracy." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistorySamplesPerSecond = { "HistorySamplesPerSecond", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, HistorySamplesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistorySamplesPerSecond_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistorySamplesPerSecond_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionLengthSeconds_MetaData[] = {
		{ "Category", "Trajectory Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This should match the longest trajectory prediction required by a Motion Matching Database in the project.\n// Motion Matching will use extrapolation to generate samples if the prediction doesn't contain enough samples.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This should match the longest trajectory prediction required by a Motion Matching Database in the project.\nMotion Matching will use extrapolation to generate samples if the prediction doesn't contain enough samples." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionLengthSeconds = { "PredictionLengthSeconds", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, PredictionLengthSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionLengthSeconds_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionLengthSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionSamplesPerSecond_MetaData[] = {
		{ "Category", "Trajectory Settings" },
		{ "ClampMax", "120" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher values will cost more storage and processing time, but give higher accuracy.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher values will cost more storage and processing time, but give higher accuracy." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionSamplesPerSecond = { "PredictionSamplesPerSecond", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, PredictionSamplesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionSamplesPerSecond_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionSamplesPerSecond_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_RotateTowardsMovementSpeed_MetaData[] = {
		{ "Category", "Trajectory Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the character is forward facing (i.e. bOrientRotationToMovement is true), this controls how quickly the trajectory will rotate\n// to face acceleration. It's common for this to differ from the rotation rate of the character, because animations are often authored \n// with different rotation speeds than the character. This is especially true in cases where the character rotation snaps to movement.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the character is forward facing (i.e. bOrientRotationToMovement is true), this controls how quickly the trajectory will rotate\nto face acceleration. It's common for this to differ from the rotation rate of the character, because animations are often authored\nwith different rotation speeds than the character. This is especially true in cases where the character rotation snaps to movement." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_RotateTowardsMovementSpeed = { "RotateTowardsMovementSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, RotateTowardsMovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_RotateTowardsMovementSpeed_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_RotateTowardsMovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_bAutoUpdateTrajectory_MetaData[] = {
		{ "Category", "Trajectory Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// By default the component will always update trajectory. If desired, this can be disabled and the game can choose when to update.\n// For example, a game might want to only update trajectory for characters that are within view or very close to the local player.\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By default the component will always update trajectory. If desired, this can be disabled and the game can choose when to update.\nFor example, a game might want to only update trajectory for characters that are within view or very close to the local player." },
#endif
	};
#endif
	void Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_bAutoUpdateTrajectory_SetBit(void* Obj)
	{
		((UCharacterTrajectoryComponent*)Obj)->bAutoUpdateTrajectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_bAutoUpdateTrajectory = { "bAutoUpdateTrajectory", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterTrajectoryComponent), &Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_bAutoUpdateTrajectory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_bAutoUpdateTrajectory_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_bAutoUpdateTrajectory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_MaxControllerRotationRate_MetaData[] = {
		{ "Category", "Trajectory Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum controller rotation rate in degrees per second used to clamp the character owner controller desired rotation to generate the prediction trajectory.\n// Negative values disable the clamping behavior\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum controller rotation rate in degrees per second used to clamp the character owner controller desired rotation to generate the prediction trajectory.\nNegative values disable the clamping behavior" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_MaxControllerRotationRate = { "MaxControllerRotationRate", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, MaxControllerRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_MaxControllerRotationRate_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_MaxControllerRotationRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_SkelMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_SkelMeshComponent = { "SkelMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, SkelMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_SkelMeshComponent_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_SkelMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_CharacterMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterTrajectoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_CharacterMovementComponent = { "CharacterMovementComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterTrajectoryComponent, CharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_CharacterMovementComponent_MetaData), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_CharacterMovementComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistoryLengthSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_HistorySamplesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionLengthSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_PredictionSamplesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_RotateTowardsMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_bAutoUpdateTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_MaxControllerRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_SkelMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::NewProp_CharacterMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterTrajectoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::ClassParams = {
		&UCharacterTrajectoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCharacterTrajectoryComponent()
	{
		if (!Z_Registration_Info_UClass_UCharacterTrajectoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterTrajectoryComponent.OuterSingleton, Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterTrajectoryComponent.OuterSingleton;
	}
	template<> MOTIONTRAJECTORY_API UClass* StaticClass<UCharacterTrajectoryComponent>()
	{
		return UCharacterTrajectoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterTrajectoryComponent);
	UCharacterTrajectoryComponent::~UCharacterTrajectoryComponent() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterTrajectoryComponent, UCharacterTrajectoryComponent::StaticClass, TEXT("UCharacterTrajectoryComponent"), &Z_Registration_Info_UClass_UCharacterTrajectoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterTrajectoryComponent), 1673360051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_2166413322(TEXT("/Script/MotionTrajectory"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
