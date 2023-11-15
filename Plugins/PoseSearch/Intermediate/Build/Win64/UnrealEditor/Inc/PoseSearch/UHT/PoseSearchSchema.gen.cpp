// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchSchema.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchSchema() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor;
	static UEnum* EPoseSearchDataPreprocessor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchDataPreprocessor"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchDataPreprocessor>()
	{
		return EPoseSearchDataPreprocessor_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enumerators[] = {
		{ "EPoseSearchDataPreprocessor::None", (int64)EPoseSearchDataPreprocessor::None },
		{ "EPoseSearchDataPreprocessor::Normalize", (int64)EPoseSearchDataPreprocessor::Normalize },
		{ "EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation", (int64)EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation },
		{ "EPoseSearchDataPreprocessor::Num", (int64)EPoseSearchDataPreprocessor::Num },
		{ "EPoseSearchDataPreprocessor::Invalid", (int64)EPoseSearchDataPreprocessor::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EPoseSearchDataPreprocessor::Invalid" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
		{ "None.Comment", "// The data will be left untouched.\n" },
		{ "None.Name", "EPoseSearchDataPreprocessor::None" },
		{ "None.ToolTip", "The data will be left untouched." },
		{ "Normalize.Comment", "// The data will be normalized against its deviation, and the user weights will be normalized to be a unitary vector.\n" },
		{ "Normalize.Name", "EPoseSearchDataPreprocessor::Normalize" },
		{ "Normalize.ToolTip", "The data will be normalized against its deviation, and the user weights will be normalized to be a unitary vector." },
		{ "NormalizeOnlyByDeviation.Comment", "// The data will be normalized against its deviation\n" },
		{ "NormalizeOnlyByDeviation.Name", "EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation" },
		{ "NormalizeOnlyByDeviation.ToolTip", "The data will be normalized against its deviation" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EPoseSearchDataPreprocessor::Num" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchDataPreprocessor",
		"EPoseSearchDataPreprocessor",
		Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor.InnerSingleton;
	}
	void UPoseSearchSchema::StaticRegisterNativesUPoseSearchSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchSchema);
	UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister()
	{
		return UPoseSearchSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FinalizedChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalizedChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FinalizedChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorDataTable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataPreprocessor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataPreprocessor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataPreprocessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaCardinality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SchemaCardinality;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneReferences;
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_BoneIndicesWithParents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndicesWithParents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIndicesWithParents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuingPoseCostBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContinuingPoseCostBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCostBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseCostBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopingCostBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopingCostBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPermutations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPermutations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PermutationsSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PermutationsSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PermutationsTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PermutationsTimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddDataPadding_MetaData[];
#endif
		static void NewProp_bAddDataPadding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddDataPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInjectAdditionalDebugChannels_MetaData[];
#endif
		static void NewProp_bInjectAdditionalDebugChannels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInjectAdditionalDebugChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Specifies the format of a pose search index. At runtime, queries are built according to the schema for searching.\n*/" },
#endif
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Motion Database Config" },
		{ "IncludePath", "PoseSearch/PoseSearchSchema.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the format of a pose search index. At runtime, queries are built according to the schema for searching." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Schema" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skeleton Reference for Motion Matching Database assets. Must be set to a compatible skeleton to the animation data in the database.\n" },
#endif
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeleton Reference for Motion Matching Database assets. Must be set to a compatible skeleton to the animation data in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Schema" },
		{ "ClampMax", "240" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The update rate at which we sample the animation data in the database. The higher the SampleRate the more refined your searches will be, but the more memory will be required\n" },
#endif
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The update rate at which we sample the animation data in the database. The higher the SampleRate the more refined your searches will be, but the more memory will be required" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner_MetaData[] = {
		{ "Category", "Schema" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Channels itemize the cost breakdown of the config in simpler parts such as position or velocity of a bones, or phase of limbs. The total cost of a query against an indexed database pose will be the sum of the combined channel costs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Channels itemize the cost breakdown of the config in simpler parts such as position or velocity of a bones, or phase of limbs. The total cost of a query against an indexed database pose will be the sum of the combined channel costs" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_MetaData[] = {
		{ "Category", "Schema" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Channels itemize the cost breakdown of the config in simpler parts such as position or velocity of a bones, or phase of limbs. The total cost of a query against an indexed database pose will be the sum of the combined channel costs\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Channels itemize the cost breakdown of the config in simpler parts such as position or velocity of a bones, or phase of limbs. The total cost of a query against an indexed database pose will be the sum of the combined channel costs" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0044008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_FinalizedChannels_Inner = { "FinalizedChannels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_FinalizedChannels_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FinalizedChannels gets populated with UPoseSearchFeatureChannel(s) from Channels and additional injected ones during the Finalize.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FinalizedChannels gets populated with UPoseSearchFeatureChannel(s) from Channels and additional injected ones during the Finalize." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_FinalizedChannels = { "FinalizedChannels", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, FinalizedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_FinalizedChannels_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_FinalizedChannels_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Schema" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Setting up and assigning a mirror data table will allow all your assets in your database to access the mirrored version of the data. This is required for mirroring to work with Motion Matching.\n" },
#endif
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting up and assigning a mirror data table will allow all your assets in your database to access the mirrored version of the data. This is required for mirroring to work with Motion Matching." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_MetaData[] = {
		{ "Category", "Schema" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of operation performed to the full pose features dataset\n" },
#endif
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of operation performed to the full pose features dataset" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor = { "DataPreprocessor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, DataPreprocessor), Z_Construct_UEnum_PoseSearch_EPoseSearchDataPreprocessor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_MetaData) }; // 3972749535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality = { "SchemaCardinality", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, SchemaCardinality), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_Inner = { "BoneReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(0, nullptr) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences = { "BoneReferences", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, BoneReferences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_MetaData) }; // 1286936164
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_Inner = { "BoneIndicesWithParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents = { "BoneIndicesWithParents", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, BoneIndicesWithParents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias_MetaData[] = {
		{ "Category", "Bias" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cost added to the continuing pose from databases that uses this config. This allows users to apply a cost bias (positive or negative) to the continuing pose.\n// This is useful to help the system stay in one animation segment longer, or shorter depending on how you set this bias.\n// Negative values make it more likely to be picked, or stayed in, positive values make it less likely to be picked or stay in.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost added to the continuing pose from databases that uses this config. This allows users to apply a cost bias (positive or negative) to the continuing pose.\nThis is useful to help the system stay in one animation segment longer, or shorter depending on how you set this bias.\nNegative values make it more likely to be picked, or stayed in, positive values make it less likely to be picked or stay in." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias = { "ContinuingPoseCostBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, ContinuingPoseCostBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias_MetaData[] = {
		{ "Category", "Bias" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base Cost added or removed to all poses from databases that use this config. It can be overridden by Anim Notify: Pose Search Modify Cost at the frame level of animation data.\n// Negative values make it more likely to be picked, or stayed in, Positive values make it less likely to be picked or stay in.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base Cost added or removed to all poses from databases that use this config. It can be overridden by Anim Notify: Pose Search Modify Cost at the frame level of animation data.\nNegative values make it more likely to be picked, or stayed in, Positive values make it less likely to be picked or stay in." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias = { "BaseCostBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, BaseCostBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_LoopingCostBias_MetaData[] = {
		{ "Category", "Bias" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cost added to all looping animation assets in a database that uses this config. This allows users to make it more or less likely to pick the looping animation segments.\n// Negative values make it more likely to be picked, or stayed in, Positive values make it less likely to be picked or stay in.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost added to all looping animation assets in a database that uses this config. This allows users to make it more or less likely to pick the looping animation segments.\nNegative values make it more likely to be picked, or stayed in, Positive values make it less likely to be picked or stay in." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_LoopingCostBias = { "LoopingCostBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, LoopingCostBias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_LoopingCostBias_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_LoopingCostBias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_NumberOfPermutations_MetaData[] = {
		{ "Category", "Permutations" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How many times the animation assets of the database using this schema will be indexed.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many times the animation assets of the database using this schema will be indexed." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_NumberOfPermutations = { "NumberOfPermutations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, NumberOfPermutations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_NumberOfPermutations_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_NumberOfPermutations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsSampleRate_MetaData[] = {
		{ "Category", "Permutations" },
		{ "ClampMax", "240" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delta time between every permutation indexing.\n" },
#endif
		{ "EditCondition", "NumberOfPermutations > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delta time between every permutation indexing." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsSampleRate = { "PermutationsSampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, PermutationsSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsSampleRate_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsSampleRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsTimeOffset_MetaData[] = {
		{ "Category", "Permutations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Starting offset of the \"PermutationTime\" from the \"SamplingTime\" of the first permutation.\n// subsequent permutations will have PermutationTime = SamplingTime + PermutationsTimeOffset + PermutationIndex / PermutationsSampleRate.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starting offset of the \"PermutationTime\" from the \"SamplingTime\" of the first permutation.\nsubsequent permutations will have PermutationTime = SamplingTime + PermutationsTimeOffset + PermutationIndex / PermutationsSampleRate." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsTimeOffset = { "PermutationsTimeOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchSchema, PermutationsTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsTimeOffset_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsTimeOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if true a padding channel will be added to make sure the data is 16 bytes (aligned) and padded, to facilitate performance improvements at cost of eventual additional memory\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if true a padding channel will be added to make sure the data is 16 bytes (aligned) and padded, to facilitate performance improvements at cost of eventual additional memory" },
#endif
	};
#endif
	void Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding_SetBit(void* Obj)
	{
		((UPoseSearchSchema*)Obj)->bAddDataPadding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding = { "bAddDataPadding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseSearchSchema), &Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If bInjectAdditionalDebugChannels is true, channels will be asked to inject additional channels into this schema.\n// the original intent is to add UPoseSearchFeatureChannel_Position(s) to help with the complexity of the debug drawing\n// (the database will have all the necessary positions to draw lines at the right location and time).\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bInjectAdditionalDebugChannels is true, channels will be asked to inject additional channels into this schema.\nthe original intent is to add UPoseSearchFeatureChannel_Position(s) to help with the complexity of the debug drawing\n(the database will have all the necessary positions to draw lines at the right location and time)." },
#endif
	};
#endif
	void Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels_SetBit(void* Obj)
	{
		((UPoseSearchSchema*)Obj)->bInjectAdditionalDebugChannels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels = { "bInjectAdditionalDebugChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseSearchSchema), &Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels_MetaData), Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchSchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_Channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_FinalizedChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_FinalizedChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_MirrorDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_DataPreprocessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_SchemaCardinality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BoneIndicesWithParents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_ContinuingPoseCostBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_BaseCostBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_LoopingCostBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_NumberOfPermutations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_PermutationsTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bAddDataPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchSchema_Statics::NewProp_bInjectAdditionalDebugChannels,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPoseSearchSchema_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UPoseSearchSchema, IBoneReferenceSkeletonProvider), false },  // 307433809
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchSchema_Statics::ClassParams = {
		&UPoseSearchSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchSchema_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009020A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchSchema_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSchema_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchSchema()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton, Z_Construct_UClass_UPoseSearchSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchSchema.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchSchema>()
	{
		return UPoseSearchSchema::StaticClass();
	}
	UPoseSearchSchema::UPoseSearchSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchSchema);
	UPoseSearchSchema::~UPoseSearchSchema() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::EnumInfo[] = {
		{ EPoseSearchDataPreprocessor_StaticEnum, TEXT("EPoseSearchDataPreprocessor"), &Z_Registration_Info_UEnum_EPoseSearchDataPreprocessor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3972749535U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchSchema, UPoseSearchSchema::StaticClass, TEXT("UPoseSearchSchema"), &Z_Registration_Info_UClass_UPoseSearchSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchSchema), 1810623101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_340814158(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
