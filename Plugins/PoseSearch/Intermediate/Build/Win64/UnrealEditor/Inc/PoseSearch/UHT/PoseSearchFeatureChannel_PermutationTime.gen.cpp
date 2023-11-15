// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/PoseSearchFeatureChannel_PermutationTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_PermutationTime() {}
// Cross Module References
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UPoseSearchFeatureChannel_PermutationTime::StaticRegisterNativesUPoseSearchFeatureChannel_PermutationTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel_PermutationTime);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_NoRegister()
	{
		return UPoseSearchFeatureChannel_PermutationTime::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchFeatureChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Permutation Time Channel" },
		{ "IncludePath", "PoseSearchFeatureChannel_PermutationTime.h" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_PermutationTime.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_PermutationTime.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_PermutationTime, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::NewProp_Weight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel_PermutationTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::ClassParams = {
		&UPoseSearchFeatureChannel_PermutationTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel_PermutationTime>()
	{
		return UPoseSearchFeatureChannel_PermutationTime::StaticClass();
	}
	UPoseSearchFeatureChannel_PermutationTime::UPoseSearchFeatureChannel_PermutationTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel_PermutationTime);
	UPoseSearchFeatureChannel_PermutationTime::~UPoseSearchFeatureChannel_PermutationTime() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_PermutationTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_PermutationTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel_PermutationTime, UPoseSearchFeatureChannel_PermutationTime::StaticClass, TEXT("UPoseSearchFeatureChannel_PermutationTime"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_PermutationTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel_PermutationTime), 1531896156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_PermutationTime_h_1047740502(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_PermutationTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_PermutationTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
