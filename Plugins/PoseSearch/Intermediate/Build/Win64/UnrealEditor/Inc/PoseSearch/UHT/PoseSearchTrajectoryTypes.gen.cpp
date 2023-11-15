// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchTrajectoryTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample;
class UScriptStruct* FPoseSearchQueryTrajectorySample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchQueryTrajectorySample"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchQueryTrajectorySample>()
{
	return FPoseSearchQueryTrajectorySample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Facing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Facing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Pose Search Trajectory" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchTrajectoryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchQueryTrajectorySample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Facing_MetaData[] = {
		{ "Category", "Pose Search Query Trajectory" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchTrajectoryTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Facing = { "Facing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchQueryTrajectorySample, Facing), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Facing_MetaData), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Facing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Pose Search Query Trajectory" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchTrajectoryTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchQueryTrajectorySample, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData[] = {
		{ "Category", "Pose Search Query Trajectory" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchTrajectoryTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_AccumulatedSeconds = { "AccumulatedSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchQueryTrajectorySample, AccumulatedSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Facing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewProp_AccumulatedSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchQueryTrajectorySample",
		Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::PropPointers),
		sizeof(FPoseSearchQueryTrajectorySample),
		alignof(FPoseSearchQueryTrajectorySample),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory;
class UScriptStruct* FPoseSearchQueryTrajectory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchQueryTrajectory"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchQueryTrajectory>()
{
	return FPoseSearchQueryTrajectory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchTrajectoryTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchQueryTrajectory>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample, METADATA_PARAMS(0, nullptr) }; // 1338414981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewProp_Samples_MetaData[] = {
		{ "Category", "Pose Search Query Trajectory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This contains zero or more history samples, a current sample, and zero or more future predicted samples.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchTrajectoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This contains zero or more history samples, a current sample, and zero or more future predicted samples." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchQueryTrajectory, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewProp_Samples_MetaData), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewProp_Samples_MetaData) }; // 1338414981
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewProp_Samples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewProp_Samples,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchQueryTrajectory",
		Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::PropPointers),
		sizeof(FPoseSearchQueryTrajectory),
		alignof(FPoseSearchQueryTrajectory),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchQueryTrajectorySample::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchQueryTrajectorySample_Statics::NewStructOps, TEXT("PoseSearchQueryTrajectorySample"), &Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectorySample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchQueryTrajectorySample), 1338414981U) },
		{ FPoseSearchQueryTrajectory::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory_Statics::NewStructOps, TEXT("PoseSearchQueryTrajectory"), &Z_Registration_Info_UScriptStruct_PoseSearchQueryTrajectory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchQueryTrajectory), 2760805250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h_2404456500(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
