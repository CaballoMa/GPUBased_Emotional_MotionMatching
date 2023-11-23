// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseSearchHistoryCollector() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_PoseSearchHistoryCollector_Base>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_PoseSearchHistoryCollector_Base cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base;
class UScriptStruct* FAnimNode_PoseSearchHistoryCollector_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_PoseSearchHistoryCollector_Base"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_PoseSearchHistoryCollector_Base>()
{
	return FAnimNode_PoseSearchHistoryCollector_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseDuration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollectedBones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseSearchHistoryCollector_Base>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The maximum amount of poses that can be stored\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum amount of poses that can be stored" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseCount = { "PoseCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSearchHistoryCollector_Base, PoseCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseCount_MetaData), Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseDuration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The time horizon for how long a pose will be stored in seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time horizon for how long a pose will be stored in seconds" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseDuration = { "PoseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSearchHistoryCollector_Base, PoseDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseDuration_MetaData), Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseDuration_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_CollectedBones_Inner = { "CollectedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_CollectedBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_CollectedBones = { "CollectedBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSearchHistoryCollector_Base, CollectedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_CollectedBones_MetaData), Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_CollectedBones_MetaData) }; // 1286936164
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_PoseDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_CollectedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewProp_CollectedBones,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_PoseSearchHistoryCollector_Base",
		Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::PropPointers),
		sizeof(FAnimNode_PoseSearchHistoryCollector_Base),
		alignof(FAnimNode_PoseSearchHistoryCollector_Base),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_PoseSearchHistoryCollector>() == std::is_polymorphic<FAnimNode_PoseSearchHistoryCollector_Base>(), "USTRUCT FAnimNode_PoseSearchHistoryCollector cannot be polymorphic unless super FAnimNode_PoseSearchHistoryCollector_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector;
class UScriptStruct* FAnimNode_PoseSearchHistoryCollector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_PoseSearchHistoryCollector"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_PoseSearchHistoryCollector>()
{
	return FAnimNode_PoseSearchHistoryCollector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseSearchHistoryCollector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSearchHistoryCollector, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source_MetaData), Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source_MetaData) }; // 1465313103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base,
		&NewStructOps,
		"AnimNode_PoseSearchHistoryCollector",
		Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::PropPointers),
		sizeof(FAnimNode_PoseSearchHistoryCollector),
		alignof(FAnimNode_PoseSearchHistoryCollector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_PoseSearchComponentSpaceHistoryCollector>() == std::is_polymorphic<FAnimNode_PoseSearchHistoryCollector_Base>(), "USTRUCT FAnimNode_PoseSearchComponentSpaceHistoryCollector cannot be polymorphic unless super FAnimNode_PoseSearchHistoryCollector_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector;
class UScriptStruct* FAnimNode_PoseSearchComponentSpaceHistoryCollector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_PoseSearchComponentSpaceHistoryCollector"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_PoseSearchComponentSpaceHistoryCollector>()
{
	return FAnimNode_PoseSearchComponentSpaceHistoryCollector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseSearchComponentSpaceHistoryCollector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PoseSearchComponentSpaceHistoryCollector, Source), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Source_MetaData), Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Source_MetaData) }; // 3609499842
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewProp_Source,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base,
		&NewStructOps,
		"AnimNode_PoseSearchComponentSpaceHistoryCollector",
		Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers),
		sizeof(FAnimNode_PoseSearchComponentSpaceHistoryCollector),
		alignof(FAnimNode_PoseSearchComponentSpaceHistoryCollector),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_PoseSearchHistoryCollector_Base::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base_Statics::NewStructOps, TEXT("AnimNode_PoseSearchHistoryCollector_Base"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseSearchHistoryCollector_Base), 2062140096U) },
		{ FAnimNode_PoseSearchHistoryCollector::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewStructOps, TEXT("AnimNode_PoseSearchHistoryCollector"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseSearchHistoryCollector), 1232578267U) },
		{ FAnimNode_PoseSearchComponentSpaceHistoryCollector::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseSearchComponentSpaceHistoryCollector_Statics::NewStructOps, TEXT("AnimNode_PoseSearchComponentSpaceHistoryCollector"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchComponentSpaceHistoryCollector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseSearchComponentSpaceHistoryCollector), 3149830269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_1989603939(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
