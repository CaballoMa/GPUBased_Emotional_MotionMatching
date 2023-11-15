// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/AnimGraphNode_MotionMatching.h"
#include "Runtime/Public/PoseSearch/AnimNode_MotionMatching.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_MotionMatching() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionMatching();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatching();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatching_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UAnimGraphNode_MotionMatching::StaticRegisterNativesUAnimGraphNode_MotionMatching()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_MotionMatching);
	UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatching_NoRegister()
	{
		return UAnimGraphNode_MotionMatching::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraphNode_MotionMatching.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_MotionMatching.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_MotionMatching.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_MotionMatching, Node), Z_Construct_UScriptStruct_FAnimNode_MotionMatching, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::NewProp_Node_MetaData) }; // 2832791215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_MotionMatching>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::ClassParams = {
		&UAnimGraphNode_MotionMatching::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatching()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_MotionMatching.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_MotionMatching.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_MotionMatching.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UAnimGraphNode_MotionMatching>()
	{
		return UAnimGraphNode_MotionMatching::StaticClass();
	}
	UAnimGraphNode_MotionMatching::UAnimGraphNode_MotionMatching(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_MotionMatching);
	UAnimGraphNode_MotionMatching::~UAnimGraphNode_MotionMatching() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_MotionMatching, UAnimGraphNode_MotionMatching::StaticClass, TEXT("UAnimGraphNode_MotionMatching"), &Z_Registration_Info_UClass_UAnimGraphNode_MotionMatching, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_MotionMatching), 94825236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_2382659640(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
