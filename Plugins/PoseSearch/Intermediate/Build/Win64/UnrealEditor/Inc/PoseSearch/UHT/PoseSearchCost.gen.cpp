// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchCost() {}
// Cross Module References
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchCost();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchCost;
class UScriptStruct* FPoseSearchCost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchCost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchCost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchCost, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchCost"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchCost.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchCost>()
{
	return FPoseSearchCost::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchCost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalCost;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyCostAddend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NotifyCostAddend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuingPoseCostAddend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContinuingPoseCostAddend;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchCost_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchCost.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchCost>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_TotalCost_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchCost.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_TotalCost = { "TotalCost", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchCost, TotalCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_TotalCost_MetaData), Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_TotalCost_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_NotifyCostAddend_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Contribution from ModifyCost anim notify\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchCost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contribution from ModifyCost anim notify" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_NotifyCostAddend = { "NotifyCostAddend", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchCost, NotifyCostAddend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_NotifyCostAddend_MetaData), Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_NotifyCostAddend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_ContinuingPoseCostAddend_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchCost.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_ContinuingPoseCostAddend = { "ContinuingPoseCostAddend", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchCost, ContinuingPoseCostAddend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_ContinuingPoseCostAddend_MetaData), Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_ContinuingPoseCostAddend_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_TotalCost,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_NotifyCostAddend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewProp_ContinuingPoseCostAddend,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchCost_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchCost",
		Z_Construct_UScriptStruct_FPoseSearchCost_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchCost_Statics::PropPointers),
		sizeof(FPoseSearchCost),
		alignof(FPoseSearchCost),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchCost_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchCost_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchCost_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchCost()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchCost.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchCost.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchCost_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchCost.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchCost::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchCost_Statics::NewStructOps, TEXT("PoseSearchCost"), &Z_Registration_Info_UScriptStruct_PoseSearchCost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchCost), 101048083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h_2334629221(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchCost_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
