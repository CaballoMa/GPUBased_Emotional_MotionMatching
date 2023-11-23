// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/PoseSearchDatabaseFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDatabaseFactory() {}
// Cross Module References
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseFactory();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UPoseSearchDatabaseFactory::StaticRegisterNativesUPoseSearchDatabaseFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseFactory);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseFactory_NoRegister()
	{
		return UPoseSearchDatabaseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseFactory.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::ClassParams = {
		&UPoseSearchDatabaseFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseFactory()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseFactory.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseFactory.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseFactory>()
	{
		return UPoseSearchDatabaseFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseFactory);
	UPoseSearchDatabaseFactory::~UPoseSearchDatabaseFactory() {}
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchDatabaseFactory, UPoseSearchDatabaseFactory::StaticClass, TEXT("UPoseSearchDatabaseFactory"), &Z_Registration_Info_UClass_UPoseSearchDatabaseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseFactory), 4017904801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_3903021404(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
