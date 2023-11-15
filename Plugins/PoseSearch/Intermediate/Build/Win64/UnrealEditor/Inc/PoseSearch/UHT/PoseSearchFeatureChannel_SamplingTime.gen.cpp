// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/PoseSearchFeatureChannel_SamplingTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_SamplingTime() {}
// Cross Module References
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UPoseSearchFeatureChannel_SamplingTime::StaticRegisterNativesUPoseSearchFeatureChannel_SamplingTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel_SamplingTime);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_NoRegister()
	{
		return UPoseSearchFeatureChannel_SamplingTime::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToMatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchFeatureChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this channel is mainly for debug purposes to augment the features data with the sampling time (default weight is set to zero to be irrelevant during searches)\n" },
#endif
		{ "DisplayName", "Sampling Time Channel" },
		{ "IncludePath", "PoseSearchFeatureChannel_SamplingTime.h" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_SamplingTime.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this channel is mainly for debug purposes to augment the features data with the sampling time (default weight is set to zero to be irrelevant during searches)" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_SamplingTime.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_SamplingTime, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_TimeToMatch_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_SamplingTime.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_TimeToMatch = { "TimeToMatch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_SamplingTime, TimeToMatch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_TimeToMatch_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_TimeToMatch_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::NewProp_TimeToMatch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel_SamplingTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::ClassParams = {
		&UPoseSearchFeatureChannel_SamplingTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel_SamplingTime>()
	{
		return UPoseSearchFeatureChannel_SamplingTime::StaticClass();
	}
	UPoseSearchFeatureChannel_SamplingTime::UPoseSearchFeatureChannel_SamplingTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel_SamplingTime);
	UPoseSearchFeatureChannel_SamplingTime::~UPoseSearchFeatureChannel_SamplingTime() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_SamplingTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_SamplingTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel_SamplingTime, UPoseSearchFeatureChannel_SamplingTime::StaticClass, TEXT("UPoseSearchFeatureChannel_SamplingTime"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_SamplingTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel_SamplingTime), 2341242769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_SamplingTime_h_1709014169(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_SamplingTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_SamplingTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
