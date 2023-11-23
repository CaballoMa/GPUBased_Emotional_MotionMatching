// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/AnimGraphNode_PoseSearchHistoryCollector.h"
#include "Runtime/Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_PoseSearchHistoryCollector() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UAnimGraphNode_PoseSearchHistoryCollector_Base::StaticRegisterNativesUAnimGraphNode_PoseSearchHistoryCollector_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_PoseSearchHistoryCollector_Base);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_NoRegister()
	{
		return UAnimGraphNode_PoseSearchHistoryCollector_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraphNode_PoseSearchHistoryCollector.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseSearchHistoryCollector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PoseSearchHistoryCollector_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::ClassParams = {
		&UAnimGraphNode_PoseSearchHistoryCollector_Base::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UAnimGraphNode_PoseSearchHistoryCollector_Base>()
	{
		return UAnimGraphNode_PoseSearchHistoryCollector_Base::StaticClass();
	}
	UAnimGraphNode_PoseSearchHistoryCollector_Base::UAnimGraphNode_PoseSearchHistoryCollector_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PoseSearchHistoryCollector_Base);
	UAnimGraphNode_PoseSearchHistoryCollector_Base::~UAnimGraphNode_PoseSearchHistoryCollector_Base() {}
	void UAnimGraphNode_PoseSearchHistoryCollector::StaticRegisterNativesUAnimGraphNode_PoseSearchHistoryCollector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_PoseSearchHistoryCollector);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_NoRegister()
	{
		return UAnimGraphNode_PoseSearchHistoryCollector::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraphNode_PoseSearchHistoryCollector.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseSearchHistoryCollector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseSearchHistoryCollector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_PoseSearchHistoryCollector, Node), Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::NewProp_Node_MetaData) }; // 1232578267
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PoseSearchHistoryCollector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::ClassParams = {
		&UAnimGraphNode_PoseSearchHistoryCollector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UAnimGraphNode_PoseSearchHistoryCollector>()
	{
		return UAnimGraphNode_PoseSearchHistoryCollector::StaticClass();
	}
	UAnimGraphNode_PoseSearchHistoryCollector::UAnimGraphNode_PoseSearchHistoryCollector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PoseSearchHistoryCollector);
	UAnimGraphNode_PoseSearchHistoryCollector::~UAnimGraphNode_PoseSearchHistoryCollector() {}
	void UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector::StaticRegisterNativesUAnimGraphNode_PoseSearchComponentSpaceHistoryCollector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_NoRegister()
	{
		return UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraphNode_PoseSearchHistoryCollector.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseSearchHistoryCollector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseSearchHistoryCollector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector, Node), Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Node_MetaData) }; // 3149830269
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::ClassParams = {
		&UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector>()
	{
		return UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector::StaticClass();
	}
	UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector::UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector);
	UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector::~UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector() {}
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_PoseSearchHistoryCollector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_PoseSearchHistoryCollector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base, UAnimGraphNode_PoseSearchHistoryCollector_Base::StaticClass, TEXT("UAnimGraphNode_PoseSearchHistoryCollector_Base"), &Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PoseSearchHistoryCollector_Base), 961246783U) },
		{ Z_Construct_UClass_UAnimGraphNode_PoseSearchHistoryCollector, UAnimGraphNode_PoseSearchHistoryCollector::StaticClass, TEXT("UAnimGraphNode_PoseSearchHistoryCollector"), &Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchHistoryCollector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PoseSearchHistoryCollector), 527625139U) },
		{ Z_Construct_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector, UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector::StaticClass, TEXT("UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector"), &Z_Registration_Info_UClass_UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PoseSearchComponentSpaceHistoryCollector), 1661329282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_PoseSearchHistoryCollector_h_2492275963(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_PoseSearchHistoryCollector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_PoseSearchHistoryCollector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
