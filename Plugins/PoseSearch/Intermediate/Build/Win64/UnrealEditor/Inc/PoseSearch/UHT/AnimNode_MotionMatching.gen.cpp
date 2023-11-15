// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/AnimNode_MotionMatching.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Public/PoseSearch/PoseSearchTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MotionMatching() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionMatching();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MotionMatching>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_MotionMatching cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching;
class UScriptStruct* FAnimNode_MotionMatching::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionMatching, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_MotionMatching"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_MotionMatching>()
{
	return FAnimNode_MotionMatching::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Database_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Database;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrajectorySpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrajectorySpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxActiveBlends_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActiveBlends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseJumpThresholdTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseJumpThresholdTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseReselectHistory_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseReselectHistory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchThrottleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchThrottleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnBecomingRelevant_MetaData[];
#endif
		static void NewProp_bResetOnBecomingRelevant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnBecomingRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSearch_MetaData[];
#endif
		static void NewProp_bShouldSearch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSearch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawFromAnimationTrajectoryBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawFromAnimationTrajectoryBlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawFromAnimationBlendRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawFromAnimationBlendRate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DatabasesToSearch_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatabasesToSearch_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatabasesToSearch;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreForRelevancyTest_MetaData[];
#endif
		static void NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreForRelevancyTest;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MotionMatching>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End of FAnimNode_AssetPlayerBase interface\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End of FAnimNode_AssetPlayerBase interface" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source_MetaData) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Database_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The database to search. This can be overridden by Anim Node Functions such as \"On Become Relevant\" and \"On Update\" via SetDatabaseToSearch/SetDatabasesToSearch.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "NativeConstTemplateArg", "" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The database to search. This can be overridden by Anim Node Functions such as \"On Become Relevant\" and \"On Update\" via SetDatabaseToSearch/SetDatabasesToSearch." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Database = { "Database", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, Database), Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Database_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Database_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Motion Trajectory samples for pose search queries in Motion Matching.These are expected to be in the space of the SkeletalMeshComponent.This is provided with the CharacterMovementTrajectory Component output.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion Trajectory samples for pose search queries in Motion Matching.These are expected to be in the space of the SkeletalMeshComponent.This is provided with the CharacterMovementTrajectory Component output." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, Trajectory), Z_Construct_UScriptStruct_FPoseSearchQueryTrajectory, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory_MetaData) }; // 2760805250
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_TrajectorySpeedMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Trajectory velocity will be multiplied by TrajectorySpeedMultiplier: values below 1 will result in selecting animation slower than requested from the original Trajectory\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Trajectory velocity will be multiplied by TrajectorySpeedMultiplier: values below 1 will result in selecting animation slower than requested from the original Trajectory" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_TrajectorySpeedMultiplier = { "TrajectorySpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, TrajectorySpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_TrajectorySpeedMultiplier_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_TrajectorySpeedMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time in seconds to blend out to the new pose. Uses either inertial blending, requiring an Inertialization node after this node, or the internal blend stack, if MaxActiveBlends is greater than zero.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in seconds to blend out to the new pose. Uses either inertial blending, requiring an Inertialization node after this node, or the internal blend stack, if MaxActiveBlends is greater than zero." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_MaxActiveBlends_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of max active animation segments being blended together in the blend stack. If MaxActiveBlends is zero then the blend stack is disabled.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of max active animation segments being blended together in the blend stack. If MaxActiveBlends is zero then the blend stack is disabled." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_MaxActiveBlends = { "MaxActiveBlends", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, MaxActiveBlends), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_MaxActiveBlends_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_MaxActiveBlends_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set Blend Profiles (editable in the skeleton) to determine how the blending is distributed among your character's bones. It could be used to differentiate between upper body and lower body to blend timing.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set Blend Profiles (editable in the skeleton) to determine how the blending is distributed among your character's bones. It could be used to differentiate between upper body and lower body to blend timing." },
#endif
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendProfile_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendProfile_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How the blend is applied over time to the bones. Common selections are linear, ease in, ease out, and ease in and out.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the blend is applied over time to the bones. Common selections are linear, ease in, ease out, and ease in and out." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendOption_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendOption_MetaData) }; // 1501931854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseJumpThresholdTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Don't jump to poses of the same segment that are less than this many seconds away.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Don't jump to poses of the same segment that are less than this many seconds away." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseJumpThresholdTime = { "PoseJumpThresholdTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, PoseJumpThresholdTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseJumpThresholdTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseJumpThresholdTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseReselectHistory_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Prevent re-selection of poses that have been selected previously within this much time (in seconds) in the past. This is across all animation segments that have been selected within this time range.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prevent re-selection of poses that have been selected previously within this much time (in seconds) in the past. This is across all animation segments that have been selected within this time range." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseReselectHistory = { "PoseReselectHistory", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, PoseReselectHistory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseReselectHistory_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseReselectHistory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_SearchThrottleTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum amount of time to wait between searching for a new pose segment. It allows users to define how often the system searches, default for locomotion is searching every update, but you may only want to search once for other situations, like jump.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum amount of time to wait between searching for a new pose segment. It allows users to define how often the system searches, default for locomotion is searching every update, but you may only want to search once for other situations, like jump." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_SearchThrottleTime = { "SearchThrottleTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, SearchThrottleTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_SearchThrottleTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_SearchThrottleTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.2" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effective range of play rate that can be applied to the animations to account for discrepancies in estimated velocity between the movement model and the animation.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effective range of play rate that can be applied to the animations to account for discrepancies in estimated velocity between the movement model and the animation." },
#endif
		{ "UIMax", "3.0" },
		{ "UIMin", "0.2" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, PlayRate), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PlayRate_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reset the motion matching selection state if it has become relevant to the graph after not being updated on previous frames.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset the motion matching selection state if it has become relevant to the graph after not being updated on previous frames." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bResetOnBecomingRelevant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant = { "bResetOnBecomingRelevant", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set to false, the motion matching node will perform a search only if the continuing pose is invalid. This is useful if you want to stagger searches of different nodes for performance reasons\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to false, the motion matching node will perform a search only if the continuing pose is invalid. This is useful if you want to stagger searches of different nodes for performance reasons" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bShouldSearch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch = { "bShouldSearch", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationTrajectoryBlendTime_MetaData[] = {
		{ "Category", "RootMotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// blend time over which the yaw from the animation is distributed across the trajectory samples (negative values implies yaw from the animation is constant over the entire trajectory, so the trajectory will not try to recover towards the capsule orientation)\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "blend time over which the yaw from the animation is distributed across the trajectory samples (negative values implies yaw from the animation is constant over the entire trajectory, so the trajectory will not try to recover towards the capsule orientation)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationTrajectoryBlendTime = { "YawFromAnimationTrajectoryBlendTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, YawFromAnimationTrajectoryBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationTrajectoryBlendTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationTrajectoryBlendTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationBlendRate_MetaData[] = {
		{ "Category", "RootMotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// rate at which the root bone orientation catches up to the capsule orientation after being controlled by animation\n// (negative values mean the capsule is authoritative over the root bone orientation and the root bone is always synchronized with the capsule,\n// 0 means the orientation will be fully controlled by animation, and potentially never converge over the capsule orientation,\n// positive values represent the rate at which the orientation drifts towards the capsule orientation after being controlled by animation)\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "rate at which the root bone orientation catches up to the capsule orientation after being controlled by animation\n(negative values mean the capsule is authoritative over the root bone orientation and the root bone is always synchronized with the capsule,\n0 means the orientation will be fully controlled by animation, and potentially never converge over the capsule orientation,\npositive values represent the rate at which the orientation drifts towards the capsule orientation after being controlled by animation)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationBlendRate = { "YawFromAnimationBlendRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, YawFromAnimationBlendRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationBlendRate_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationBlendRate_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_DatabasesToSearch_Inner = { "DatabasesToSearch", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPoseSearchDatabase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_DatabasesToSearch_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of databases this node is searching.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of databases this node is searching." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_DatabasesToSearch = { "DatabasesToSearch", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_MotionMatching, DatabasesToSearch), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_DatabasesToSearch_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_DatabasesToSearch_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_MetaData[] = {
		{ "Category", "Relevancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node\n" },
#endif
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_MotionMatching.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, \"Relevant anim\" nodes that look for the highest weighted animation in a state will ignore this node" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_SetBit(void* Obj)
	{
		((FAnimNode_MotionMatching*)Obj)->bIgnoreForRelevancyTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest = { "bIgnoreForRelevancyTest", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_MotionMatching), &Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_MetaData), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Database,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_TrajectorySpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_MaxActiveBlends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_BlendOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseJumpThresholdTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PoseReselectHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_SearchThrottleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bResetOnBecomingRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bShouldSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationTrajectoryBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_YawFromAnimationBlendRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_DatabasesToSearch_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_DatabasesToSearch,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewProp_bIgnoreForRelevancyTest,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_MotionMatching",
		Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::PropPointers),
		sizeof(FAnimNode_MotionMatching),
		alignof(FAnimNode_MotionMatching),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionMatching()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_MotionMatching::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MotionMatching_Statics::NewStructOps, TEXT("AnimNode_MotionMatching"), &Z_Registration_Info_UScriptStruct_AnimNode_MotionMatching, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MotionMatching), 2832791215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_3685442376(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_MotionMatching_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
