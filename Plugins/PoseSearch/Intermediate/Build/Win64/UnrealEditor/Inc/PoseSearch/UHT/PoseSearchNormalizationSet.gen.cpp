// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchNormalizationSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchNormalizationSet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchNormalizationSet();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchNormalizationSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UPoseSearchNormalizationSet::StaticRegisterNativesUPoseSearchNormalizationSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchNormalizationSet);
	UClass* Z_Construct_UClass_UPoseSearchNormalizationSet_NoRegister()
	{
		return UPoseSearchNormalizationSet::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchNormalizationSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Databases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Databases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Databases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Normalization Set" },
		{ "IncludePath", "PoseSearch/PoseSearchNormalizationSet.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchNormalizationSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::NewProp_Databases_Inner = { "Databases", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::NewProp_Databases_MetaData[] = {
		{ "Category", "NormalizationSet" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchNormalizationSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::NewProp_Databases = { "Databases", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchNormalizationSet, Databases), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::NewProp_Databases_MetaData), Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::NewProp_Databases_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::NewProp_Databases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::NewProp_Databases,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchNormalizationSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::ClassParams = {
		&UPoseSearchNormalizationSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchNormalizationSet()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchNormalizationSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchNormalizationSet.OuterSingleton, Z_Construct_UClass_UPoseSearchNormalizationSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchNormalizationSet.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchNormalizationSet>()
	{
		return UPoseSearchNormalizationSet::StaticClass();
	}
	UPoseSearchNormalizationSet::UPoseSearchNormalizationSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchNormalizationSet);
	UPoseSearchNormalizationSet::~UPoseSearchNormalizationSet() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchNormalizationSet, UPoseSearchNormalizationSet::StaticClass, TEXT("UPoseSearchNormalizationSet"), &Z_Registration_Info_UClass_UPoseSearchNormalizationSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchNormalizationSet), 2758138095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h_2621859221(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchNormalizationSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
