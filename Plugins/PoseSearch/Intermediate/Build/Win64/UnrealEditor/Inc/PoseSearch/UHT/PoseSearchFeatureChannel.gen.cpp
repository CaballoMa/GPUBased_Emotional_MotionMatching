// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchFeatureChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EComponentStrippingVector();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPermutationTimeType();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComponentStrippingVector;
	static UEnum* EComponentStrippingVector_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EComponentStrippingVector, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EComponentStrippingVector"));
		}
		return Z_Registration_Info_UEnum_EComponentStrippingVector.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EComponentStrippingVector>()
	{
		return EComponentStrippingVector_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::Enumerators[] = {
		{ "EComponentStrippingVector::None", (int64)EComponentStrippingVector::None },
		{ "EComponentStrippingVector::StripXY", (int64)EComponentStrippingVector::StripXY },
		{ "EComponentStrippingVector::StripZ", (int64)EComponentStrippingVector::StripZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
		{ "None.Comment", "// No component stripping.\n" },
		{ "None.Name", "EComponentStrippingVector::None" },
		{ "None.ToolTip", "No component stripping." },
		{ "StripXY.Comment", "// Stripping X and Y components (matching only on the horizontal plane).\n" },
		{ "StripXY.Name", "EComponentStrippingVector::StripXY" },
		{ "StripXY.ToolTip", "Stripping X and Y components (matching only on the horizontal plane)." },
		{ "StripZ.Comment", "// Stripping Z (matching only vertically - caring only about the height of the feature).\n" },
		{ "StripZ.Name", "EComponentStrippingVector::StripZ" },
		{ "StripZ.ToolTip", "Stripping Z (matching only vertically - caring only about the height of the feature)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EComponentStrippingVector",
		"EComponentStrippingVector",
		Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EComponentStrippingVector()
	{
		if (!Z_Registration_Info_UEnum_EComponentStrippingVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComponentStrippingVector.InnerSingleton, Z_Construct_UEnum_PoseSearch_EComponentStrippingVector_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComponentStrippingVector.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputQueryPose;
	static UEnum* EInputQueryPose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EInputQueryPose, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EInputQueryPose"));
		}
		return Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EInputQueryPose>()
	{
		return EInputQueryPose_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enumerators[] = {
		{ "EInputQueryPose::UseCharacterPose", (int64)EInputQueryPose::UseCharacterPose },
		{ "EInputQueryPose::UseContinuingPose", (int64)EInputQueryPose::UseContinuingPose },
		{ "EInputQueryPose::UseInterpolatedContinuingPose", (int64)EInputQueryPose::UseInterpolatedContinuingPose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
		{ "UseCharacterPose.Comment", "// Use character pose to compose the query.\n" },
		{ "UseCharacterPose.Name", "EInputQueryPose::UseCharacterPose" },
		{ "UseCharacterPose.ToolTip", "Use character pose to compose the query." },
		{ "UseContinuingPose.Comment", "// If available reuse continuing pose from the database to compose the query, or else UseCharacterPose.\n" },
		{ "UseContinuingPose.Name", "EInputQueryPose::UseContinuingPose" },
		{ "UseContinuingPose.ToolTip", "If available reuse continuing pose from the database to compose the query, or else UseCharacterPose." },
		{ "UseInterpolatedContinuingPose.Comment", "// If available reuse and interpolate continuing pose from the database to compose the query, or else UseCharacterPose.\n" },
		{ "UseInterpolatedContinuingPose.Name", "EInputQueryPose::UseInterpolatedContinuingPose" },
		{ "UseInterpolatedContinuingPose.ToolTip", "If available reuse and interpolate continuing pose from the database to compose the query, or else UseCharacterPose." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EInputQueryPose",
		"EInputQueryPose",
		Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose()
	{
		if (!Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton, Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPermutationTimeType;
	static UEnum* EPermutationTimeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPermutationTimeType, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPermutationTimeType"));
		}
		return Z_Registration_Info_UEnum_EPermutationTimeType.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPermutationTimeType>()
	{
		return EPermutationTimeType_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::Enumerators[] = {
		{ "EPermutationTimeType::UseSampleTime", (int64)EPermutationTimeType::UseSampleTime },
		{ "EPermutationTimeType::UsePermutationTime", (int64)EPermutationTimeType::UsePermutationTime },
		{ "EPermutationTimeType::UseSampleToPermutationTime", (int64)EPermutationTimeType::UseSampleToPermutationTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this enumeration controls the channel sampling time:\n// for example if a channel specifies a bone and an origin bone (used to generate the reference system of the features associated to the bone),\n// bone and origin bone will be evaluated at potentially different times:\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this enumeration controls the channel sampling time:\nfor example if a channel specifies a bone and an origin bone (used to generate the reference system of the features associated to the bone),\nbone and origin bone will be evaluated at potentially different times:" },
#endif
		{ "UsePermutationTime.Comment", "// Bone and origin bone are sampled at the same permutation time (plus eventual SampleTimeOffset for the bone):\n// it's defined as SamplingTime (as UseSampleTime) + Schema->PermutationsTimeOffset + PermutationIndex / Schema->PermutationsSampleRate\n// where PermutationIndex is in range [0, Schema->NumberOfPermutations).\n" },
		{ "UsePermutationTime.Name", "EPermutationTimeType::UsePermutationTime" },
		{ "UsePermutationTime.ToolTip", "Bone and origin bone are sampled at the same permutation time (plus eventual SampleTimeOffset for the bone):\nit's defined as SamplingTime (as UseSampleTime) + Schema->PermutationsTimeOffset + PermutationIndex / Schema->PermutationsSampleRate\nwhere PermutationIndex is in range [0, Schema->NumberOfPermutations)." },
		{ "UseSampleTime.Comment", "// Bone and origin bone are sampled at the same sample time (plus eventual SampleTimeOffset for the bone):\n// it's defined as the current animation evaluation time.\n" },
		{ "UseSampleTime.Name", "EPermutationTimeType::UseSampleTime" },
		{ "UseSampleTime.ToolTip", "Bone and origin bone are sampled at the same sample time (plus eventual SampleTimeOffset for the bone):\nit's defined as the current animation evaluation time." },
		{ "UseSampleToPermutationTime.Comment", "// Bone is evaluated at sample time (and plus eventual SampleTimeOffset) and origin bone is evaluated at permutation time.\n" },
		{ "UseSampleToPermutationTime.Name", "EPermutationTimeType::UseSampleToPermutationTime" },
		{ "UseSampleToPermutationTime.ToolTip", "Bone is evaluated at sample time (and plus eventual SampleTimeOffset) and origin bone is evaluated at permutation time." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPermutationTimeType",
		"EPermutationTimeType",
		Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPermutationTimeType()
	{
		if (!Z_Registration_Info_UEnum_EPermutationTimeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPermutationTimeType.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPermutationTimeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPermutationTimeType.InnerSingleton;
	}
	void UPoseSearchFeatureChannel::StaticRegisterNativesUPoseSearchFeatureChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister()
	{
		return UPoseSearchFeatureChannel::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDataOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelDataOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelCardinality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelCardinality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Feature channels interface\n" },
#endif
		{ "IncludePath", "PoseSearch/PoseSearchFeatureChannel.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Feature channels interface" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset = { "ChannelDataOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel, ChannelDataOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality = { "ChannelCardinality", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel, ChannelCardinality), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UPoseSearchFeatureChannel, IBoneReferenceSkeletonProvider), false },  // 307433809
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::ClassParams = {
		&UPoseSearchFeatureChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel>()
	{
		return UPoseSearchFeatureChannel::StaticClass();
	}
	UPoseSearchFeatureChannel::UPoseSearchFeatureChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel);
	UPoseSearchFeatureChannel::~UPoseSearchFeatureChannel() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::EnumInfo[] = {
		{ EComponentStrippingVector_StaticEnum, TEXT("EComponentStrippingVector"), &Z_Registration_Info_UEnum_EComponentStrippingVector, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 223173379U) },
		{ EInputQueryPose_StaticEnum, TEXT("EInputQueryPose"), &Z_Registration_Info_UEnum_EInputQueryPose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1646766714U) },
		{ EPermutationTimeType_StaticEnum, TEXT("EPermutationTimeType"), &Z_Registration_Info_UEnum_EPermutationTimeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3260791701U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel, UPoseSearchFeatureChannel::StaticClass, TEXT("UPoseSearchFeatureChannel"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel), 184565993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_2214350948(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
