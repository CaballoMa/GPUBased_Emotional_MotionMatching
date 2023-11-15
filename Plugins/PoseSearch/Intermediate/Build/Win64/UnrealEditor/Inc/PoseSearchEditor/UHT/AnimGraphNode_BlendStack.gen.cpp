// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/AnimGraphNode_BlendStack.h"
#include "Runtime/Public/PoseSearch/AnimNode_BlendStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BlendStack() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendStack();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendStack();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendStack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UAnimGraphNode_BlendStack::StaticRegisterNativesUAnimGraphNode_BlendStack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_BlendStack);
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendStack_NoRegister()
	{
		return UAnimGraphNode_BlendStack::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraphNode_BlendStack.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendStack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendStack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_BlendStack, Node), Z_Construct_UScriptStruct_FAnimNode_BlendStack, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::NewProp_Node_MetaData) }; // 1003905143
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BlendStack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::ClassParams = {
		&UAnimGraphNode_BlendStack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendStack()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_BlendStack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_BlendStack.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_BlendStack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_BlendStack.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UAnimGraphNode_BlendStack>()
	{
		return UAnimGraphNode_BlendStack::StaticClass();
	}
	UAnimGraphNode_BlendStack::UAnimGraphNode_BlendStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BlendStack);
	UAnimGraphNode_BlendStack::~UAnimGraphNode_BlendStack() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_BlendStack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_BlendStack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_BlendStack, UAnimGraphNode_BlendStack::StaticClass, TEXT("UAnimGraphNode_BlendStack"), &Z_Registration_Info_UClass_UAnimGraphNode_BlendStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_BlendStack), 4236391625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_BlendStack_h_3461836051(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_BlendStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_AnimGraphNode_BlendStack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
