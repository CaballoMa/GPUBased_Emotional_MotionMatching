// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrajectory/Public/CharacterMovementTrajectoryLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementTrajectoryLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterMovementTrajectoryLibrary();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MotionTrajectory();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterMovementTrajectoryLibrary::execStepCharacterMovementGroundPrediction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InAcceleration);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_InCharacterMovementComponent);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCharacterMovementTrajectoryLibrary::StepCharacterMovementGroundPrediction(Z_Param_InDeltaTime,Z_Param_Out_InVelocity,Z_Param_Out_InAcceleration,Z_Param_InCharacterMovementComponent,Z_Param_Out_OutVelocity);
		P_NATIVE_END;
	}
	void UCharacterMovementTrajectoryLibrary::StaticRegisterNativesUCharacterMovementTrajectoryLibrary()
	{
		UClass* Class = UCharacterMovementTrajectoryLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StepCharacterMovementGroundPrediction", &UCharacterMovementTrajectoryLibrary::execStepCharacterMovementGroundPrediction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics
	{
		struct CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms
		{
			float InDeltaTime;
			FVector InVelocity;
			FVector InAcceleration;
			const UCharacterMovementComponent* InCharacterMovementComponent;
			FVector OutVelocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCharacterMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacterMovementComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms, InDeltaTime), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InVelocity_MetaData), Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InAcceleration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InAcceleration = { "InAcceleration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms, InAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InAcceleration_MetaData), Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InCharacterMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InCharacterMovementComponent = { "InCharacterMovementComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms, InCharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InCharacterMovementComponent_MetaData), Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InCharacterMovementComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_OutVelocity = { "OutVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms, OutVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_InCharacterMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::NewProp_OutVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Trajectory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Approximate the behavior of the UCharacterMovementComponent during ground locomotion.\n\x09 * @param InDeltaTime - Length of time to predict forward. Running multiple shorter iterations will generate more accurate results than one large time step.\n\x09 * @param InVelocity - Current velocity.\n\x09 * @param InAcceleration - Current acceleration.\n\x09 * @param InCharacterMovementComponent - Tuning values, such as GroundFriction, are read from the movement component.\n\x09 * @param OutVelocity - The resulting predicted velocity.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterMovementTrajectoryLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Approximate the behavior of the UCharacterMovementComponent during ground locomotion.\n@param InDeltaTime - Length of time to predict forward. Running multiple shorter iterations will generate more accurate results than one large time step.\n@param InVelocity - Current velocity.\n@param InAcceleration - Current acceleration.\n@param InCharacterMovementComponent - Tuning values, such as GroundFriction, are read from the movement component.\n@param OutVelocity - The resulting predicted velocity." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementTrajectoryLibrary, nullptr, "StepCharacterMovementGroundPrediction", nullptr, nullptr, Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::CharacterMovementTrajectoryLibrary_eventStepCharacterMovementGroundPrediction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMovementTrajectoryLibrary);
	UClass* Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_NoRegister()
	{
		return UCharacterMovementTrajectoryLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterMovementTrajectoryLibrary_StepCharacterMovementGroundPrediction, "StepCharacterMovementGroundPrediction" }, // 2567844358
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Library of functions useful for generating trajectories based on the behavior of the UCharacterMovementComponent.\n */" },
#endif
		{ "IncludePath", "CharacterMovementTrajectoryLibrary.h" },
		{ "ModuleRelativePath", "Public/CharacterMovementTrajectoryLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Library of functions useful for generating trajectories based on the behavior of the UCharacterMovementComponent." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMovementTrajectoryLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::ClassParams = {
		&UCharacterMovementTrajectoryLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCharacterMovementTrajectoryLibrary()
	{
		if (!Z_Registration_Info_UClass_UCharacterMovementTrajectoryLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMovementTrajectoryLibrary.OuterSingleton, Z_Construct_UClass_UCharacterMovementTrajectoryLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterMovementTrajectoryLibrary.OuterSingleton;
	}
	template<> MOTIONTRAJECTORY_API UClass* StaticClass<UCharacterMovementTrajectoryLibrary>()
	{
		return UCharacterMovementTrajectoryLibrary::StaticClass();
	}
	UCharacterMovementTrajectoryLibrary::UCharacterMovementTrajectoryLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMovementTrajectoryLibrary);
	UCharacterMovementTrajectoryLibrary::~UCharacterMovementTrajectoryLibrary() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterMovementTrajectoryLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterMovementTrajectoryLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMovementTrajectoryLibrary, UCharacterMovementTrajectoryLibrary::StaticClass, TEXT("UCharacterMovementTrajectoryLibrary"), &Z_Registration_Info_UClass_UCharacterMovementTrajectoryLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMovementTrajectoryLibrary), 2114509855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterMovementTrajectoryLibrary_h_3349706897(TEXT("/Script/MotionTrajectory"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterMovementTrajectoryLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_MotionTrajectory_Source_MotionTrajectory_Public_CharacterMovementTrajectoryLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
