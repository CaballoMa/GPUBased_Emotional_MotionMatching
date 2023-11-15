// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/PoseSearchSchemaFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchSchemaFactory() {}
// Cross Module References
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchSchemaFactory();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchSchemaFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UPoseSearchSchemaFactory::StaticRegisterNativesUPoseSearchSchemaFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchSchemaFactory);
	UClass* Z_Construct_UClass_UPoseSearchSchemaFactory_NoRegister()
	{
		return UPoseSearchSchemaFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchSchemaFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchSchemaFactory.h" },
		{ "ModuleRelativePath", "Public/PoseSearchSchemaFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchSchemaFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::ClassParams = {
		&UPoseSearchSchemaFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPoseSearchSchemaFactory()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchSchemaFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchSchemaFactory.OuterSingleton, Z_Construct_UClass_UPoseSearchSchemaFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchSchemaFactory.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchSchemaFactory>()
	{
		return UPoseSearchSchemaFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchSchemaFactory);
	UPoseSearchSchemaFactory::~UPoseSearchSchemaFactory() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchSchemaFactory, UPoseSearchSchemaFactory::StaticClass, TEXT("UPoseSearchSchemaFactory"), &Z_Registration_Info_UClass_UPoseSearchSchemaFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchSchemaFactory), 2181012309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_3836333692(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchSchemaFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
