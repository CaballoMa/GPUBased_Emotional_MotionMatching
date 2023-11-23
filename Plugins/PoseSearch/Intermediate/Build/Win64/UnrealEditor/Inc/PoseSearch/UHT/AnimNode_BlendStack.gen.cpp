// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/AnimNode_BlendStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendStack() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendStack();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchAnimPlayer();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer;
class UScriptStruct* FPoseSearchAnimPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchAnimPlayer, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("PoseSearchAnimPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FPoseSearchAnimPlayer>()
{
	return FPoseSearchAnimPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchAnimPlayer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"PoseSearchAnimPlayer",
		nullptr,
		0,
		sizeof(FPoseSearchAnimPlayer),
		alignof(FPoseSearchAnimPlayer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchAnimPlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_BlendStack_Standalone>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_BlendStack_Standalone cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone;
class UScriptStruct* FAnimNode_BlendStack_Standalone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_BlendStack_Standalone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_BlendStack_Standalone>()
{
	return FAnimNode_BlendStack_Standalone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendStack_Standalone>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_BlendStack_Standalone",
		nullptr,
		0,
		sizeof(FAnimNode_BlendStack_Standalone),
		alignof(FAnimNode_BlendStack_Standalone),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_BlendStack>() == std::is_polymorphic<FAnimNode_BlendStack_Standalone>(), "USTRUCT FAnimNode_BlendStack cannot be polymorphic unless super FAnimNode_BlendStack_Standalone is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendStack;
class UScriptStruct* FAnimNode_BlendStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendStack, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_BlendStack"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_BlendStack>()
{
	return FAnimNode_BlendStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrored_MetaData[];
#endif
		static void NewProp_bMirrored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WantedPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WantedPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBoneBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootBoneBlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAnimationDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimationDeltaTime;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendStack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationAsset_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// requested animation to play\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "requested animation to play" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationAsset_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationAsset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationTime_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// requested animation time. If negative, the animation will play from the beginning uninterrupted\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "requested animation time. If negative, the animation will play from the beginning uninterrupted" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationTime = { "AnimationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, AnimationTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// requested AnimationAsset looping\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "requested AnimationAsset looping" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAnimNode_BlendStack*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_BlendStack), &Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// requested AnimationAsset mirroring\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "requested AnimationAsset mirroring" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored_SetBit(void* Obj)
	{
		((FAnimNode_BlendStack*)Obj)->bMirrored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored = { "bMirrored", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_BlendStack), &Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_WantedPlayRate_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// requested animation play rate\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "requested animation play rate" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_WantedPlayRate = { "WantedPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, WantedPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_WantedPlayRate_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_WantedPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// tunable animation transition blend time \n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tunable animation transition blend time" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_RootBoneBlendTime_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time in seconds to blend out to the new pose root bone. Negative values would imply RootBoneBlendTime is equal to BlendTime\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time in seconds to blend out to the new pose root bone. Negative values would imply RootBoneBlendTime is equal to BlendTime" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_RootBoneBlendTime = { "RootBoneBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, RootBoneBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_RootBoneBlendTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_RootBoneBlendTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxAnimationDeltaTime_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if AnimationTime and MaxAnimationDeltaTime are positive and the currently playing animation total time differs more than MaxAnimationDeltaTime from AnimationTime\n// (animation desynchronized from the requested time) the blend stack will force a blend into the same animation\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if AnimationTime and MaxAnimationDeltaTime are positive and the currently playing animation total time differs more than MaxAnimationDeltaTime from AnimationTime\n(animation desynchronized from the requested time) the blend stack will force a blend into the same animation" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxAnimationDeltaTime = { "MaxAnimationDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, MaxAnimationDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxAnimationDeltaTime_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxAnimationDeltaTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxActiveBlends_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of max active blending animation in the blend stack. If MaxActiveBlends is zero then blend stack is disabled\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of max active blending animation in the blend stack. If MaxActiveBlends is zero then blend stack is disabled" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxActiveBlends = { "MaxActiveBlends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, MaxActiveBlends), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxActiveBlends_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxActiveBlends_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendProfile_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendProfile_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendOption_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendOption_MetaData) }; // 1501931854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendParameters_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// requested blend space blend parameters (if AnimationAsset is a blend space)\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "requested blend space blend parameters (if AnimationAsset is a blend space)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendParameters = { "BlendParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, BlendParameters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendParameters_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MirrorDataTable_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if set and bMirrored MirrorDataTable will be used for mirroring the aniamtion\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_BlendStack.h" },
		{ "PinHiddenByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if set and bMirrored MirrorDataTable will be used for mirroring the aniamtion" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendStack, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MirrorDataTable_MetaData), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MirrorDataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_AnimationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_bMirrored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_WantedPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_RootBoneBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxAnimationDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MaxActiveBlends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_BlendParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewProp_MirrorDataTable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone,
		&NewStructOps,
		"AnimNode_BlendStack",
		Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::PropPointers),
		sizeof(FAnimNode_BlendStack),
		alignof(FAnimNode_BlendStack),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendStack()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendStack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchAnimPlayer::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchAnimPlayer_Statics::NewStructOps, TEXT("PoseSearchAnimPlayer"), &Z_Registration_Info_UScriptStruct_PoseSearchAnimPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchAnimPlayer), 1412126076U) },
		{ FAnimNode_BlendStack_Standalone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendStack_Standalone_Statics::NewStructOps, TEXT("AnimNode_BlendStack_Standalone"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendStack_Standalone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendStack_Standalone), 4052480727U) },
		{ FAnimNode_BlendStack::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendStack_Statics::NewStructOps, TEXT("AnimNode_BlendStack"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendStack), 1003905143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_2065350229(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_BlendStack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
