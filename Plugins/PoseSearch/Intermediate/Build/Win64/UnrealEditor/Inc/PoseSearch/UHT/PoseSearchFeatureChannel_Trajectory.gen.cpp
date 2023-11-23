// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Private/PoseSearchFeatureChannel_Trajectory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Trajectory() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchTrajectorySample();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags;
	static UEnum* EPoseSearchTrajectoryFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EPoseSearchTrajectoryFlags"));
		}
		return Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchTrajectoryFlags>()
	{
		return EPoseSearchTrajectoryFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::Enumerators[] = {
		{ "EPoseSearchTrajectoryFlags::Velocity", (int64)EPoseSearchTrajectoryFlags::Velocity },
		{ "EPoseSearchTrajectoryFlags::Position", (int64)EPoseSearchTrajectoryFlags::Position },
		{ "EPoseSearchTrajectoryFlags::VelocityDirection", (int64)EPoseSearchTrajectoryFlags::VelocityDirection },
		{ "EPoseSearchTrajectoryFlags::FacingDirection", (int64)EPoseSearchTrajectoryFlags::FacingDirection },
		{ "EPoseSearchTrajectoryFlags::VelocityXY", (int64)EPoseSearchTrajectoryFlags::VelocityXY },
		{ "EPoseSearchTrajectoryFlags::PositionXY", (int64)EPoseSearchTrajectoryFlags::PositionXY },
		{ "EPoseSearchTrajectoryFlags::VelocityDirectionXY", (int64)EPoseSearchTrajectoryFlags::VelocityDirectionXY },
		{ "EPoseSearchTrajectoryFlags::FacingDirectionXY", (int64)EPoseSearchTrajectoryFlags::FacingDirectionXY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "FacingDirection.Name", "EPoseSearchTrajectoryFlags::FacingDirection" },
		{ "FacingDirectionXY.Name", "EPoseSearchTrajectoryFlags::FacingDirectionXY" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
		{ "Position.Name", "EPoseSearchTrajectoryFlags::Position" },
		{ "PositionXY.Name", "EPoseSearchTrajectoryFlags::PositionXY" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Velocity.Name", "EPoseSearchTrajectoryFlags::Velocity" },
		{ "VelocityDirection.Name", "EPoseSearchTrajectoryFlags::VelocityDirection" },
		{ "VelocityDirectionXY.Name", "EPoseSearchTrajectoryFlags::VelocityDirectionXY" },
		{ "VelocityXY.Name", "EPoseSearchTrajectoryFlags::VelocityXY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EPoseSearchTrajectoryFlags",
		"EPoseSearchTrajectoryFlags",
		Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags()
	{
		if (!Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.InnerSingleton, Z_Construct_UEnum_PoseSearch_EPoseSearchTrajectoryFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample;
class UScriptStruct* FPoseSearchTrajectorySample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchTrajectorySample"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchTrajectorySample>()
{
	return FPoseSearchTrajectorySample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchTrajectorySample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchTrajectorySample, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Flags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/PoseSearch.EPoseSearchTrajectoryFlags" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This allows the user to define what information from the channel you want to compare to.\n" },
#endif
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This allows the user to define what information from the channel you want to compare to." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchTrajectorySample, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Flags_MetaData), Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Flags_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchTrajectorySample, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Config" },
		{ "DisplayPriority", "0" },
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchTrajectorySample, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_DebugColor_MetaData), Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_DebugColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewProp_DebugColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchTrajectorySample",
		Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::PropPointers),
		sizeof(FPoseSearchTrajectorySample),
		alignof(FPoseSearchTrajectorySample),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchTrajectorySample()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample.InnerSingleton;
	}
	void UPoseSearchFeatureChannel_Trajectory::StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel_Trajectory);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister()
	{
		return UPoseSearchFeatureChannel_Trajectory::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchFeatureChannel_GroupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Trajectory Channel" },
		{ "IncludePath", "PoseSearchFeatureChannel_Trajectory.h" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Trajectory, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseSearchTrajectorySample, METADATA_PARAMS(0, nullptr) }; // 107284592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Samples_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Trajectory, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Samples_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Samples_MetaData) }; // 107284592
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_SubChannels_Inner = { "SubChannels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_SubChannels_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Trajectory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_SubChannels = { "SubChannels", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchFeatureChannel_Trajectory, SubChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_SubChannels_MetaData), Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_SubChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Samples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_SubChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::NewProp_SubChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel_Trajectory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::ClassParams = {
		&UPoseSearchFeatureChannel_Trajectory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel_Trajectory>()
	{
		return UPoseSearchFeatureChannel_Trajectory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel_Trajectory);
	UPoseSearchFeatureChannel_Trajectory::~UPoseSearchFeatureChannel_Trajectory() {}
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::EnumInfo[] = {
		{ EPoseSearchTrajectoryFlags_StaticEnum, TEXT("EPoseSearchTrajectoryFlags"), &Z_Registration_Info_UEnum_EPoseSearchTrajectoryFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 781595257U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchTrajectorySample::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics::NewStructOps, TEXT("PoseSearchTrajectorySample"), &Z_Registration_Info_UScriptStruct_PoseSearchTrajectorySample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchTrajectorySample), 107284592U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory, UPoseSearchFeatureChannel_Trajectory::StaticClass, TEXT("UPoseSearchFeatureChannel_Trajectory"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Trajectory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel_Trajectory), 299866436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_4085713829(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
