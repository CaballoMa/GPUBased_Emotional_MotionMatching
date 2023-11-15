// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/PoseSearchFeatureChannel_Pose.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Pose() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Pose();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchBone();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchBoneFlags;
	static UEnum* EPoseSearchBoneFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchBoneFlags"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchBoneFlags.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchBoneFlags>()
	{
		return EPoseSearchBoneFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::Enumerators[] = {
		{ "EPoseSearchBoneFlags::Velocity", (int64)EPoseSearchBoneFlags::Velocity },
		{ "EPoseSearchBoneFlags::Position", (int64)EPoseSearchBoneFlags::Position },
		{ "EPoseSearchBoneFlags::Rotation", (int64)EPoseSearchBoneFlags::Rotation },
		{ "EPoseSearchBoneFlags::Phase", (int64)EPoseSearchBoneFlags::Phase },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
		{ "Phase.Name", "EPoseSearchBoneFlags::Phase" },
		{ "Position.Name", "EPoseSearchBoneFlags::Position" },
		{ "Rotation.Name", "EPoseSearchBoneFlags::Rotation" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Velocity.Name", "EPoseSearchBoneFlags::Velocity" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchBoneFlags",
		"EPoseSearchBoneFlags",
		Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchBoneFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchBoneFlags.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchBoneFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchBoneFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchBone;
class UScriptStruct* FPoseSearchBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchBone, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchBone"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchBone.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchBone>()
{
	return FPoseSearchBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchBone_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Reference_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchBone, Reference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Reference_MetaData), Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Reference_MetaData) }; // 1286936164
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Flags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PoseSearch.EPoseSearchBoneFlags" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows the user to define what information from the channel you want to compare to.\n" },
#endif
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows the user to define what information from the channel you want to compare to." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchBone, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Flags_MetaData), Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Flags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchBone, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Config" },
		{ "DisplayPriority", "0" },
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchBone, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_DebugColor_MetaData), Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_DebugColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Reference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewProp_DebugColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchBone",
		Z_Construct_UScriptStruct_FPoseSearchBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchBone_Statics::PropPointers),
		sizeof(FPoseSearchBone),
		alignof(FPoseSearchBone),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchBone_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchBone_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchBone()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchBone.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchBone.InnerSingleton;
	}
	void UPoseSearchFeatureChannel_Pose::StaticRegisterNativesUPoseSearchFeatureChannel_Pose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel_Pose);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister()
	{
		return UPoseSearchFeatureChannel_Pose::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampledBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampledBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampledBones;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SchemaBoneIdx_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaBoneIdx_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SchemaBoneIdx;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputQueryPose_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputQueryPose_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputQueryPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterSpaceVelocities_MetaData[];
#endif
		static void NewProp_bUseCharacterSpaceVelocities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterSpaceVelocities;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPoseSearchFeatureChannel_Pose\n" },
#endif
		{ "DisplayName", "Pose Channel" },
		{ "IncludePath", "PoseSearchFeatureChannel_Pose.h" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPoseSearchFeatureChannel_Pose" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Pose, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SampledBones_Inner = { "SampledBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseSearchBone, METADATA_PARAMS(0, nullptr) }; // 1407294188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SampledBones_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of skeletal joints and associated Flags (Velocity, Position, etc) to sample.\n" },
#endif
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of skeletal joints and associated Flags (Velocity, Position, etc) to sample." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SampledBones = { "SampledBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Pose, SampledBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SampledBones_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SampledBones_MetaData) }; // 1407294188
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SchemaBoneIdx_Inner = { "SchemaBoneIdx", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SchemaBoneIdx_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SchemaBoneIdx = { "SchemaBoneIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Pose, SchemaBoneIdx), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SchemaBoneIdx_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SchemaBoneIdx_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_InputQueryPose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_InputQueryPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_InputQueryPose = { "InputQueryPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Pose, InputQueryPose), Z_Construct_UEnum_PoseSearch_EInputQueryPose, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_InputQueryPose_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_InputQueryPose_MetaData) }; // 1646766714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_bUseCharacterSpaceVelocities_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if bUseCharacterSpaceVelocities is true, velocities will be calculated from the positions in character space, otherwise they will be calculated using global space positions\n" },
#endif
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if bUseCharacterSpaceVelocities is true, velocities will be calculated from the positions in character space, otherwise they will be calculated using global space positions" },
#endif
	};
#endif
	void Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_bUseCharacterSpaceVelocities_SetBit(void* Obj)
	{
		((UPoseSearchFeatureChannel_Pose*)Obj)->bUseCharacterSpaceVelocities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_bUseCharacterSpaceVelocities = { "bUseCharacterSpaceVelocities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoseSearchFeatureChannel_Pose), &Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_bUseCharacterSpaceVelocities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_bUseCharacterSpaceVelocities_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_bUseCharacterSpaceVelocities_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SubChannels_Inner = { "SubChannels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SubChannels_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Pose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SubChannels = { "SubChannels", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Pose, SubChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SubChannels_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SubChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SampledBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SampledBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SchemaBoneIdx_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SchemaBoneIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_InputQueryPose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_InputQueryPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_bUseCharacterSpaceVelocities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SubChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::NewProp_SubChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel_Pose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::ClassParams = {
		&UPoseSearchFeatureChannel_Pose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Pose()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel_Pose>()
	{
		return UPoseSearchFeatureChannel_Pose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel_Pose);
	UPoseSearchFeatureChannel_Pose::~UPoseSearchFeatureChannel_Pose() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::EnumInfo[] = {
		{ EPoseSearchBoneFlags_StaticEnum, TEXT("EPoseSearchBoneFlags"), &Z_Registration_Info_UEnum_EPoseSearchBoneFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4002944886U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchBone::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchBone_Statics::NewStructOps, TEXT("PoseSearchBone"), &Z_Registration_Info_UScriptStruct_PoseSearchBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchBone), 1407294188U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel_Pose, UPoseSearchFeatureChannel_Pose::StaticClass, TEXT("UPoseSearchFeatureChannel_Pose"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Pose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel_Pose), 1627304862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_1556800692(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
