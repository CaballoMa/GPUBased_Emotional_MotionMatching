// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchDatabase.h"
#include "InstancedStruct.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDatabase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchNormalizationSet_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMode();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchMode;
	static UEnum* EPoseSearchMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMode, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchMode"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchMode.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMode>()
	{
		return EPoseSearchMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enumerators[] = {
		{ "EPoseSearchMode::BruteForce", (int64)EPoseSearchMode::BruteForce },
		{ "EPoseSearchMode::PCAKDTree", (int64)EPoseSearchMode::PCAKDTree },
		{ "EPoseSearchMode::PCAKDTree_Validate", (int64)EPoseSearchMode::PCAKDTree_Validate },
		{ "EPoseSearchMode::PCAKDTree_Compare", (int64)EPoseSearchMode::PCAKDTree_Compare },
		{ "EPoseSearchMode::Num", (int64)EPoseSearchMode::Num },
		{ "EPoseSearchMode::Invalid", (int64)EPoseSearchMode::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enum_MetaDataParams[] = {
		{ "BruteForce.Comment", "// Database searches will be evaluated extensively. the system will evaluate all the indexed poses to search for the best one.\n" },
		{ "BruteForce.Name", "EPoseSearchMode::BruteForce" },
		{ "BruteForce.ToolTip", "Database searches will be evaluated extensively. the system will evaluate all the indexed poses to search for the best one." },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// namespace UE::PoseSearch\n" },
#endif
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPoseSearchMode::Invalid" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EPoseSearchMode::Num" },
		{ "PCAKDTree.Comment", "// Optimized search mode: the database projects the poses into a PCA space using only the most significant \"NumberOfPrincipalComponents\" dimensions, and construct a kdtree to facilitate the search.\n" },
		{ "PCAKDTree.Name", "EPoseSearchMode::PCAKDTree" },
		{ "PCAKDTree.ToolTip", "Optimized search mode: the database projects the poses into a PCA space using only the most significant \"NumberOfPrincipalComponents\" dimensions, and construct a kdtree to facilitate the search." },
		{ "PCAKDTree_Compare.Comment", "// Debug functionality to compare BruteForce vs PCAKDTree.\n" },
		{ "PCAKDTree_Compare.Name", "EPoseSearchMode::PCAKDTree_Compare" },
		{ "PCAKDTree_Compare.ToolTip", "Debug functionality to compare BruteForce vs PCAKDTree." },
		{ "PCAKDTree_Validate.Comment", "// Debug functionality performing diagnostics and validation during searches using PCAKDTree.\n" },
		{ "PCAKDTree_Validate.Name", "EPoseSearchMode::PCAKDTree_Validate" },
		{ "PCAKDTree_Validate.ToolTip", "Debug functionality performing diagnostics and validation during searches using PCAKDTree." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "namespace UE::PoseSearch" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchMode",
		"EPoseSearchMode",
		Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMode()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchMirrorOption;
	static UEnum* EPoseSearchMirrorOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchMirrorOption"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchMirrorOption.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMirrorOption>()
	{
		return EPoseSearchMirrorOption_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enumerators[] = {
		{ "EPoseSearchMirrorOption::UnmirroredOnly", (int64)EPoseSearchMirrorOption::UnmirroredOnly },
		{ "EPoseSearchMirrorOption::MirroredOnly", (int64)EPoseSearchMirrorOption::MirroredOnly },
		{ "EPoseSearchMirrorOption::UnmirroredAndMirrored", (int64)EPoseSearchMirrorOption::UnmirroredAndMirrored },
		{ "EPoseSearchMirrorOption::Num", (int64)EPoseSearchMirrorOption::Num },
		{ "EPoseSearchMirrorOption::Invalid", (int64)EPoseSearchMirrorOption::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPoseSearchMirrorOption::Invalid" },
		{ "MirroredOnly.DisplayName", "Mirrored Only" },
		{ "MirroredOnly.Name", "EPoseSearchMirrorOption::MirroredOnly" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EPoseSearchMirrorOption::Num" },
		{ "UnmirroredAndMirrored.DisplayName", "Original and Mirrored" },
		{ "UnmirroredAndMirrored.Name", "EPoseSearchMirrorOption::UnmirroredAndMirrored" },
		{ "UnmirroredOnly.DisplayName", "Original Only" },
		{ "UnmirroredOnly.Name", "EPoseSearchMirrorOption::UnmirroredOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchMirrorOption",
		"EPoseSearchMirrorOption",
		Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchMirrorOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters;
class UScriptStruct* FPoseSearchExcludeFromDatabaseParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchExcludeFromDatabaseParameters"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchExcludeFromDatabaseParameters>()
{
	return FPoseSearchExcludeFromDatabaseParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceStartInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceStartInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEndInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceEndInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchExcludeFromDatabaseParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines how much of the start of an animation segment is preserved for blending in seconds.\n// Excluding the beginning of animation segments can help ensure an exact past trajectory is used when building the channels.\n" },
#endif
		{ "DisplayName", "Anim Start Interval" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how much of the start of an animation segment is preserved for blending in seconds.\nExcluding the beginning of animation segments can help ensure an exact past trajectory is used when building the channels." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval = { "SequenceStartInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchExcludeFromDatabaseParameters, SequenceStartInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval_MetaData), Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines how much of the end of an animation segment is preserved for blending in seconds.\n// Excluding the end of animation segments helps ensure an exact future trajectory,\n// and also prevents the selection of a anim segment which will end too soon to be worth selecting.\n" },
#endif
		{ "DisplayName", "Anim End Interval" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how much of the end of an animation segment is preserved for blending in seconds.\nExcluding the end of animation segments helps ensure an exact future trajectory,\nand also prevents the selection of a anim segment which will end too soon to be worth selecting." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval = { "SequenceEndInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchExcludeFromDatabaseParameters, SequenceEndInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval_MetaData), Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceStartInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewProp_SequenceEndInterval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchExcludeFromDatabaseParameters",
		Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::PropPointers),
		sizeof(FPoseSearchExcludeFromDatabaseParameters),
		alignof(FPoseSearchExcludeFromDatabaseParameters),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase;
class UScriptStruct* FPoseSearchDatabaseAnimationAssetBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseAnimationAssetBase"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseAnimationAssetBase>()
{
	return FPoseSearchDatabaseAnimationAssetBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseAnimationAssetBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchDatabaseAnimationAssetBase",
		nullptr,
		0,
		sizeof(FPoseSearchDatabaseAnimationAssetBase),
		alignof(FPoseSearchDatabaseAnimationAssetBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchDatabaseSequence>() == std::is_polymorphic<FPoseSearchDatabaseAnimationAssetBase>(), "USTRUCT FPoseSearchDatabaseSequence cannot be polymorphic unless super FPoseSearchDatabaseAnimationAssetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence;
class UScriptStruct* FPoseSearchDatabaseSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseSequence"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseSequence>()
{
	return FPoseSearchDatabaseSequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingRange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A sequence entry in a UPoseSearchDatabase. */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A sequence entry in a UPoseSearchDatabase." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseSequence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseSequence, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to enable or exclude animations from this database. Useful for debugging.\n" },
#endif
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to enable or exclude animations from this database. Useful for debugging." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseSequence*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseSequence), &Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// It allows users to set a time range to an individual animation sequence in the database. \n// This is effectively trimming the beginning and end of the animation in the database (not in the original sequence).\n// If set to [0, 0] it will be the entire frame range of the original sequence.\n" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It allows users to set a time range to an individual animation sequence in the database.\nThis is effectively trimming the beginning and end of the animation in the database (not in the original sequence).\nIf set to [0, 0] it will be the entire frame range of the original sequence." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange = { "SamplingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseSequence, SamplingRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\n// It requires the mirror table to be set up in the config file.\n" },
#endif
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\nIt requires the mirror table to be set up in the config file." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption = { "MirrorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseSequence, MirrorOption), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_MetaData) }; // 3731948995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_SamplingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewProp_MirrorOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
		&NewStructOps,
		"PoseSearchDatabaseSequence",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseSequence),
		alignof(FPoseSearchDatabaseSequence),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchDatabaseBlendSpace>() == std::is_polymorphic<FPoseSearchDatabaseAnimationAssetBase>(), "USTRUCT FPoseSearchDatabaseBlendSpace cannot be polymorphic unless super FPoseSearchDatabaseAnimationAssetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace;
class UScriptStruct* FPoseSearchDatabaseBlendSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseBlendSpace"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseBlendSpace>()
{
	return FPoseSearchDatabaseBlendSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSingleSample_MetaData[];
#endif
		static void NewProp_bUseSingleSample_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSingleSample;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGridForSampling_MetaData[];
#endif
		static void NewProp_bUseGridForSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGridForSampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfHorizontalSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfHorizontalSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfVerticalSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfVerticalSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendParamX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendParamX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendParamY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendParamY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An blend space entry in a UPoseSearchDatabase. */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An blend space entry in a UPoseSearchDatabase." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseBlendSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_MetaData[] = {
		{ "Category", "BlendSpace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\n// It requires the mirror table to be set up in the config file.\n" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\nIt requires the mirror table to be set up in the config file." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption = { "MirrorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, MirrorOption), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_MetaData) }; // 3731948995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseSingleSample_MetaData[] = {
		{ "Category", "BlendSpace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true this BlendSpace will output a single segment in the database.\n" },
#endif
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true this BlendSpace will output a single segment in the database." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseSingleSample_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseBlendSpace*)Obj)->bUseSingleSample = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseSingleSample = { "bUseSingleSample", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseBlendSpace), &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseSingleSample_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseSingleSample_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseSingleSample_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_MetaData[] = {
		{ "Category", "BlendSpace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When turned on, this will use the set grid samples of the blend space asset for sampling. This will override the Number of Horizontal/Vertical Samples.\n" },
#endif
		{ "DisplayPriority", "3" },
		{ "EditCondition", "!bUseSingleSample" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When turned on, this will use the set grid samples of the blend space asset for sampling. This will override the Number of Horizontal/Vertical Samples." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseBlendSpace*)Obj)->bUseGridForSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling = { "bUseGridForSampling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseBlendSpace), &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the number of horizontal samples in the blend space to pull the animation data coverage from. The larger the samples the more the data, but also the more memory and performance it takes.\n" },
#endif
		{ "DisplayPriority", "4" },
		{ "EditCondition", "!bUseSingleSample && !bUseGridForSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of horizontal samples in the blend space to pull the animation data coverage from. The larger the samples the more the data, but also the more memory and performance it takes." },
#endif
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples = { "NumberOfHorizontalSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, NumberOfHorizontalSamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the number of vertical samples in the blend space to pull the animation data coverage from.The larger the samples the more the data, but also the more memory and performance it takes.\n" },
#endif
		{ "DisplayPriority", "5" },
		{ "EditCondition", "!bUseSingleSample && !bUseGridForSampling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of vertical samples in the blend space to pull the animation data coverage from.The larger the samples the more the data, but also the more memory and performance it takes." },
#endif
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples = { "NumberOfVerticalSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, NumberOfVerticalSamples), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamX_MetaData[] = {
		{ "Category", "BlendSpace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlendParams used to sample this BlendSpace\n" },
#endif
		{ "DisplayPriority", "6" },
		{ "EditCondition", "bUseSingleSample" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlendParams used to sample this BlendSpace" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamX = { "BlendParamX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, BlendParamX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamX_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamY_MetaData[] = {
		{ "Category", "BlendSpace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlendParams used to sample this BlendSpace\n" },
#endif
		{ "DisplayPriority", "7" },
		{ "EditCondition", "bUseSingleSample" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlendParams used to sample this BlendSpace" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamY = { "BlendParamY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseBlendSpace, BlendParamY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamY_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "BlendSpace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to enable or exclude animations from this database. Useful for debugging.\n" },
#endif
		{ "DisplayPriority", "8" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to enable or exclude animations from this database. Useful for debugging." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseBlendSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseBlendSpace), &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_MirrorOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseSingleSample,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bUseGridForSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfHorizontalSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_NumberOfVerticalSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_BlendParamY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
		&NewStructOps,
		"PoseSearchDatabaseBlendSpace",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseBlendSpace),
		alignof(FPoseSearchDatabaseBlendSpace),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchDatabaseAnimComposite>() == std::is_polymorphic<FPoseSearchDatabaseAnimationAssetBase>(), "USTRUCT FPoseSearchDatabaseAnimComposite cannot be polymorphic unless super FPoseSearchDatabaseAnimationAssetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite;
class UScriptStruct* FPoseSearchDatabaseAnimComposite::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseAnimComposite"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseAnimComposite>()
{
	return FPoseSearchDatabaseAnimComposite::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimComposite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimComposite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingRange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An entry in a UPoseSearchDatabase. */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An entry in a UPoseSearchDatabase." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseAnimComposite>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite_MetaData[] = {
		{ "Category", "AnimComposite" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite = { "AnimComposite", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseAnimComposite, AnimComposite), Z_Construct_UClass_UAnimComposite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "AnimComposite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to enable or exclude animations from this database. Useful for debugging.\n" },
#endif
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to enable or exclude animations from this database. Useful for debugging." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseAnimComposite*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseAnimComposite), &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange_MetaData[] = {
		{ "Category", "AnimComposite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// It allows users to set a time range to an individual animation sequence in the database. \n// This is effectively trimming the beginning and end of the animation in the database (not in the original sequence).\n// If set to [0, 0] it will be the entire frame range of the original sequence.\n" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It allows users to set a time range to an individual animation sequence in the database.\nThis is effectively trimming the beginning and end of the animation in the database (not in the original sequence).\nIf set to [0, 0] it will be the entire frame range of the original sequence." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange = { "SamplingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseAnimComposite, SamplingRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_MetaData[] = {
		{ "Category", "AnimComposite" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\n// It requires the mirror table to be set up in the config file.\n" },
#endif
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\nIt requires the mirror table to be set up in the config file." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption = { "MirrorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseAnimComposite, MirrorOption), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_MetaData) }; // 3731948995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_AnimComposite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_SamplingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewProp_MirrorOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
		&NewStructOps,
		"PoseSearchDatabaseAnimComposite",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseAnimComposite),
		alignof(FPoseSearchDatabaseAnimComposite),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseSearchDatabaseAnimMontage>() == std::is_polymorphic<FPoseSearchDatabaseAnimationAssetBase>(), "USTRUCT FPoseSearchDatabaseAnimMontage cannot be polymorphic unless super FPoseSearchDatabaseAnimationAssetBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage;
class UScriptStruct* FPoseSearchDatabaseAnimMontage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchDatabaseAnimMontage"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchDatabaseAnimMontage>()
{
	return FPoseSearchDatabaseAnimMontage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingRange;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MirrorOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MirrorOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An anim montage entry in a UPoseSearchDatabase. */" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An anim montage entry in a UPoseSearchDatabase." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseAnimMontage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "AnimMontage" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseAnimMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_AnimMontage_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_AnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "AnimMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to enable or exclude animations from this database. Useful for debugging.\n" },
#endif
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to enable or exclude animations from this database. Useful for debugging." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseAnimMontage*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseAnimMontage), &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_bEnabled_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_bEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_SamplingRange_MetaData[] = {
		{ "Category", "AnimMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// It allows users to set a time range to an individual animation sequence in the database. \n// This is effectively trimming the beginning and end of the animation in the database (not in the original sequence).\n// If set to [0, 0] it will be the entire frame range of the original sequence.\n" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "It allows users to set a time range to an individual animation sequence in the database.\nThis is effectively trimming the beginning and end of the animation in the database (not in the original sequence).\nIf set to [0, 0] it will be the entire frame range of the original sequence." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_SamplingRange = { "SamplingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseAnimMontage, SamplingRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_SamplingRange_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_SamplingRange_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_MirrorOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_MirrorOption_MetaData[] = {
		{ "Category", "AnimMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\n// It requires the mirror table to be set up in the config file.\n" },
#endif
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows users to set if this animation is original only (no mirrored data), original and mirrored, or only the mirrored version of this animation.\nIt requires the mirror table to be set up in the config file." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_MirrorOption = { "MirrorOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseAnimMontage, MirrorOption), Z_Construct_UEnum_PoseSearch_EPoseSearchMirrorOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_MirrorOption_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_MirrorOption_MetaData) }; // 3731948995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_SamplingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_MirrorOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewProp_MirrorOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
		&NewStructOps,
		"PoseSearchDatabaseAnimMontage",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseAnimMontage),
		alignof(FPoseSearchDatabaseAnimMontage),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage.InnerSingleton;
	}
	void UPoseSearchDatabase::StaticRegisterNativesUPoseSearchDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabase);
	UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister()
	{
		return UPoseSearchDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataBaseIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataBaseIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Schema;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFromDatabaseParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeFromDatabaseParameters;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendSpaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationAssets;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseSearchMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseSearchMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoseSearchMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrincipalComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrincipalComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeMaxLeafSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KDTreeMaxLeafSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeQueryNumNeighbors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KDTreeQueryNumNeighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipSearchIfPossible_MetaData[];
#endif
		static void NewProp_bSkipSearchIfPossible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipSearchIfPossible;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NormalizationSet;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A data asset for indexing a collection of animation sequences. */" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Motion Database" },
		{ "IncludePath", "PoseSearch/PoseSearchDatabase.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A data asset for indexing a collection of animation sequences." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_DataBaseIndex_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for Compute shader\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for Compute shader" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_DataBaseIndex = { "DataBaseIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, DataBaseIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_DataBaseIndex_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_DataBaseIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema_MetaData[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Motion Database Config sets what channels this database will use to match against (bones, trajectory and what properties of those you\xe2\x80\x99re interested in, such as position and velocity).\n" },
#endif
		{ "DisplayName", "Config" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Motion Database Config sets what channels this database will use to match against (bones, trajectory and what properties of those you\xe2\x80\x99re interested in, such as position and velocity)." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema = { "Schema", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, Schema), Z_Construct_UClass_UPoseSearchSchema_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters_MetaData[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// These settings allow users to trim the start and end of animations in the database to preserve start/end frames for blending, and prevent the system from selecting the very last frames before it blends out.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These settings allow users to trim the start and end of animations in the database to preserve start/end frames for blending, and prevent the system from selecting the very last frames before it blends out." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters = { "ExcludeFromDatabaseParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, ExcludeFromDatabaseParameters), Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters_MetaData) }; // 4143648241
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence, METADATA_PARAMS(0, nullptr) }; // 4067786765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sequences and Blendspaces are deprecated and its data will be part of the AnimationAssets.\n// All sequences and blend spaces will be added to the AnimationAssets in PostLoad().\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sequences and Blendspaces are deprecated and its data will be part of the AnimationAssets.\nAll sequences and blend spaces will be added to the AnimationAssets in PostLoad()." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, Sequences_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_MetaData) }; // 4067786765
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_Inner = { "BlendSpaces", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace, METADATA_PARAMS(0, nullptr) }; // 3946004711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces = { "BlendSpaces", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, BlendSpaces_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_MetaData) }; // 3946004711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If null, the default preview mesh for the skeleton will be used. Otherwise, this will be used in preview scenes.\n// @todo: Move this to be a setting in the Pose Search Database editor. \n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If null, the default preview mesh for the skeleton will be used. Otherwise, this will be used in preview scenes.\n@todo: Move this to be a setting in the Pose Search Database editor." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PreviewMesh_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PreviewMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_Inner = { "AnimationAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 2114042832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_MetaData[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets = { "AnimationAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, AnimationAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_MetaData) }; // 2114042832
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This dictates how the database will perform the search.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This dictates how the database will perform the search." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode = { "PoseSearchMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, PoseSearchMode), Z_Construct_UEnum_PoseSearch_EPoseSearchMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_MetaData) }; // 474997031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of dimensions used to create the kdtree. More dimensions allows a better explanation of the variance of the dataset that usually translates in better search results, but will imply more memory usage and worse performances.\n" },
#endif
		{ "EditCondition", "PoseSearchMode != EPoseSearchMode::BruteForce" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of dimensions used to create the kdtree. More dimensions allows a better explanation of the variance of the dataset that usually translates in better search results, but will imply more memory usage and worse performances." },
#endif
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents = { "NumberOfPrincipalComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, NumberOfPrincipalComponents), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "256" },
		{ "ClampMin", "1" },
		{ "EditCondition", "PoseSearchMode != EPoseSearchMode::BruteForce" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "UIMax", "256" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize = { "KDTreeMaxLeafSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, KDTreeMaxLeafSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "600" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Out of a kdtree search, results will have only an approximate cost, so the database search will select the best \xe2\x80\x9cKDTree Query Num Neighbors\xe2\x80\x9d poses to perform the full cost analysis, and be able to elect the best pose.\n" },
#endif
		{ "EditCondition", "PoseSearchMode != EPoseSearchMode::BruteForce" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Out of a kdtree search, results will have only an approximate cost, so the database search will select the best \xe2\x80\x9cKDTree Query Num Neighbors\xe2\x80\x9d poses to perform the full cost analysis, and be able to elect the best pose." },
#endif
		{ "UIMax", "600" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors = { "KDTreeQueryNumNeighbors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, KDTreeQueryNumNeighbors), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When evaluating multiple searches, including the continuing pose search, the system keeps track of the best pose and associated cost.\n// if the current database cannot possibly improve the current cost, the database search will be skipped entirely.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When evaluating multiple searches, including the continuing pose search, the system keeps track of the best pose and associated cost.\nif the current database cannot possibly improve the current cost, the database search will be skipped entirely." },
#endif
	};
#endif
	void Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_SetBit(void* Obj)
	{
		((UPoseSearchDatabase*)Obj)->bSkipSearchIfPossible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible = { "bSkipSearchIfPossible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseSearchDatabase), &Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet_MetaData[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This optional asset defines a list of databases you want to normalize together. Without it, it would be difficult to compare costs from separately normalized databases containing different types of animation,\n// like only idles versus only runs animations, given that the range of movement would be dramatically different.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchDatabase.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This optional asset defines a list of databases you want to normalize together. Without it, it would be difficult to compare costs from separately normalized databases containing different types of animation,\nlike only idles versus only runs animations, given that the range of movement would be dramatically different." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet = { "NormalizationSet", nullptr, (EPropertyFlags)0x0014000800000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabase, NormalizationSet), Z_Construct_UClass_UPoseSearchNormalizationSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet_MetaData), Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_DataBaseIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Schema,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_ExcludeFromDatabaseParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_Sequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_BlendSpaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_AnimationAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_PoseSearchMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NumberOfPrincipalComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeMaxLeafSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_KDTreeQueryNumNeighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_bSkipSearchIfPossible,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabase_Statics::NewProp_NormalizationSet,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabase_Statics::ClassParams = {
		&UPoseSearchDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchDatabase()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabase.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchDatabase>()
	{
		return UPoseSearchDatabase::StaticClass();
	}
	UPoseSearchDatabase::UPoseSearchDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseSearchDatabase)
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::EnumInfo[] = {
		{ EPoseSearchMode_StaticEnum, TEXT("EPoseSearchMode"), &Z_Registration_Info_UEnum_EPoseSearchMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 474997031U) },
		{ EPoseSearchMirrorOption_StaticEnum, TEXT("EPoseSearchMirrorOption"), &Z_Registration_Info_UEnum_EPoseSearchMirrorOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3731948995U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchExcludeFromDatabaseParameters::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics::NewStructOps, TEXT("PoseSearchExcludeFromDatabaseParameters"), &Z_Registration_Info_UScriptStruct_PoseSearchExcludeFromDatabaseParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchExcludeFromDatabaseParameters), 4143648241U) },
		{ FPoseSearchDatabaseAnimationAssetBase::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics::NewStructOps, TEXT("PoseSearchDatabaseAnimationAssetBase"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimationAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseAnimationAssetBase), 1516068152U) },
		{ FPoseSearchDatabaseSequence::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics::NewStructOps, TEXT("PoseSearchDatabaseSequence"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseSequence), 4067786765U) },
		{ FPoseSearchDatabaseBlendSpace::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics::NewStructOps, TEXT("PoseSearchDatabaseBlendSpace"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseBlendSpace), 3946004711U) },
		{ FPoseSearchDatabaseAnimComposite::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics::NewStructOps, TEXT("PoseSearchDatabaseAnimComposite"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimComposite, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseAnimComposite), 3473437791U) },
		{ FPoseSearchDatabaseAnimMontage::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics::NewStructOps, TEXT("PoseSearchDatabaseAnimMontage"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseAnimMontage), 1811643569U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchDatabase, UPoseSearchDatabase::StaticClass, TEXT("UPoseSearchDatabase"), &Z_Registration_Info_UClass_UPoseSearchDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabase), 2725118900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_1514014799(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
