// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Private/PoseSearchDebuggerReflection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDebuggerReflection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UPoseSearchDebuggerReflection::StaticRegisterNativesUPoseSearchDebuggerReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDebuggerReflection);
	UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection_NoRegister()
	{
		return UPoseSearchDebuggerReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedPoseSearchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedPoseSearchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPlayerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AssetPlayerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimAngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Reflection UObject being observed in the details view panel of the debugger\n */" },
#endif
		{ "IncludePath", "PoseSearchDebuggerReflection.h" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reflection UObject being observed in the details view panel of the debugger" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseSearchTime_MetaData[] = {
		{ "Category", "Motion Matching State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time since last PoseSearch */" },
#endif
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time since last PoseSearch" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseSearchTime = { "ElapsedPoseSearchTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDebuggerReflection, ElapsedPoseSearchTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseSearchTime_MetaData), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseSearchTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime = { "AssetPlayerTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDebuggerReflection, AssetPlayerTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime_MetaData), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime = { "LastDeltaTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDebuggerReflection, LastDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime_MetaData), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity = { "SimLinearVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDebuggerReflection, SimLinearVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity_MetaData), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity = { "SimAngularVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDebuggerReflection, SimAngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity_MetaData), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity = { "AnimLinearVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDebuggerReflection, AnimLinearVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity_MetaData), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ForceUnits", "deg/s" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity = { "AnimAngularVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDebuggerReflection, AnimAngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity_MetaData), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseSearchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDebuggerReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::ClassParams = {
		&UPoseSearchDebuggerReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDebuggerReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDebuggerReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDebuggerReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDebuggerReflection>()
	{
		return UPoseSearchDebuggerReflection::StaticClass();
	}
	UPoseSearchDebuggerReflection::UPoseSearchDebuggerReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDebuggerReflection);
	UPoseSearchDebuggerReflection::~UPoseSearchDebuggerReflection() {}
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchDebuggerReflection, UPoseSearchDebuggerReflection::StaticClass, TEXT("UPoseSearchDebuggerReflection"), &Z_Registration_Info_UClass_UPoseSearchDebuggerReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDebuggerReflection), 969491725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_3624497932(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
