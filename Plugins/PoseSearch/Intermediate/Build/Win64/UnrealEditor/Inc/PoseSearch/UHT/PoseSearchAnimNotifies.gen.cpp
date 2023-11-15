// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Public/PoseSearch/PoseSearchAnimNotifies.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchAnimNotifies() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBase();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias();
	POSESEARCH_API UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UAnimNotifyState_PoseSearchBase::StaticRegisterNativesUAnimNotifyState_PoseSearchBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_PoseSearchBase);
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_NoRegister()
	{
		return UAnimNotifyState_PoseSearchBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base class for pose search anim notify states\n" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "PoseSearch/PoseSearchAnimNotifies.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAnimNotifies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for pose search anim notify states" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_PoseSearchBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::ClassParams = {
		&UAnimNotifyState_PoseSearchBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBase()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_PoseSearchBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UAnimNotifyState_PoseSearchBase>()
	{
		return UAnimNotifyState_PoseSearchBase::StaticClass();
	}
	UAnimNotifyState_PoseSearchBase::UAnimNotifyState_PoseSearchBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_PoseSearchBase);
	UAnimNotifyState_PoseSearchBase::~UAnimNotifyState_PoseSearchBase() {}
	void UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticRegisterNativesUAnimNotifyState_PoseSearchExcludeFromDatabase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_PoseSearchExcludeFromDatabase);
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_NoRegister()
	{
		return UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState_PoseSearchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this notify state to remove animation segments from the database completely, they will never play or return from\n// a search result\n" },
#endif
		{ "DisplayName", "Pose Matching: Exclude From Database" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PoseSearch/PoseSearchAnimNotifies.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAnimNotifies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this notify state to remove animation segments from the database completely, they will never play or return from\na search result" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_PoseSearchExcludeFromDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::ClassParams = {
		&UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UAnimNotifyState_PoseSearchExcludeFromDatabase>()
	{
		return UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticClass();
	}
	UAnimNotifyState_PoseSearchExcludeFromDatabase::UAnimNotifyState_PoseSearchExcludeFromDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_PoseSearchExcludeFromDatabase);
	UAnimNotifyState_PoseSearchExcludeFromDatabase::~UAnimNotifyState_PoseSearchExcludeFromDatabase() {}
	void UAnimNotifyState_PoseSearchBlockTransition::StaticRegisterNativesUAnimNotifyState_PoseSearchBlockTransition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_PoseSearchBlockTransition);
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_NoRegister()
	{
		return UAnimNotifyState_PoseSearchBlockTransition::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState_PoseSearchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A pose matching search will not return results that overlap this notify, but the animation segment can still play\n// if a previous search result advances into it.\n" },
#endif
		{ "DisplayName", "Pose Matching: Block Transition" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PoseSearch/PoseSearchAnimNotifies.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAnimNotifies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A pose matching search will not return results that overlap this notify, but the animation segment can still play\nif a previous search result advances into it." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_PoseSearchBlockTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::ClassParams = {
		&UAnimNotifyState_PoseSearchBlockTransition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UAnimNotifyState_PoseSearchBlockTransition>()
	{
		return UAnimNotifyState_PoseSearchBlockTransition::StaticClass();
	}
	UAnimNotifyState_PoseSearchBlockTransition::UAnimNotifyState_PoseSearchBlockTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_PoseSearchBlockTransition);
	UAnimNotifyState_PoseSearchBlockTransition::~UAnimNotifyState_PoseSearchBlockTransition() {}
	void UAnimNotifyState_PoseSearchModifyCost::StaticRegisterNativesUAnimNotifyState_PoseSearchModifyCost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_PoseSearchModifyCost);
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_NoRegister()
	{
		return UAnimNotifyState_PoseSearchModifyCost::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostAddend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CostAddend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState_PoseSearchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pose matching cost will be affected by this, making the animation segment more or less likely to be selected based\n// on the notify parameters\n" },
#endif
		{ "DisplayName", "Pose Matching: Override Base Cost Bias" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PoseSearch/PoseSearchAnimNotifies.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAnimNotifies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pose matching cost will be affected by this, making the animation segment more or less likely to be selected based\non the notify parameters" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::NewProp_CostAddend_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A negative value reduces the cost and makes the segment more likely to be chosen. A positive value, conversely,\n// makes the segment less likely to be chosen\n" },
#endif
		{ "DisplayName", "Modifier" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAnimNotifies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A negative value reduces the cost and makes the segment more likely to be chosen. A positive value, conversely,\nmakes the segment less likely to be chosen" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::NewProp_CostAddend = { "CostAddend", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PoseSearchModifyCost, CostAddend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::NewProp_CostAddend_MetaData), Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::NewProp_CostAddend_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::NewProp_CostAddend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_PoseSearchModifyCost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::ClassParams = {
		&UAnimNotifyState_PoseSearchModifyCost::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UAnimNotifyState_PoseSearchModifyCost>()
	{
		return UAnimNotifyState_PoseSearchModifyCost::StaticClass();
	}
	UAnimNotifyState_PoseSearchModifyCost::UAnimNotifyState_PoseSearchModifyCost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_PoseSearchModifyCost);
	UAnimNotifyState_PoseSearchModifyCost::~UAnimNotifyState_PoseSearchModifyCost() {}
	void UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticRegisterNativesUAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias);
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_NoRegister()
	{
		return UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostAddend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CostAddend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState_PoseSearchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pose matching cost for the continuing pose will be affected by this, making the animation segment more or less \n// likely to be continuing playing based on the notify parameters\n" },
#endif
		{ "DisplayName", "Pose Matching: Override Continuing Pose Cost Bias" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PoseSearch/PoseSearchAnimNotifies.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAnimNotifies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pose matching cost for the continuing pose will be affected by this, making the animation segment more or less\nlikely to be continuing playing based on the notify parameters" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::NewProp_CostAddend_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A negative value reduces the cost and makes the segment more likely to continuing playing. A positive value, conversely,\n// makes the segment less likely to continuing playing\n" },
#endif
		{ "DisplayName", "Modifier" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchAnimNotifies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A negative value reduces the cost and makes the segment more likely to continuing playing. A positive value, conversely,\nmakes the segment less likely to continuing playing" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::NewProp_CostAddend = { "CostAddend", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias, CostAddend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::NewProp_CostAddend_MetaData), Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::NewProp_CostAddend_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::NewProp_CostAddend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::ClassParams = {
		&UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias>()
	{
		return UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass();
	}
	UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias);
	UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::~UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_PoseSearchBase, UAnimNotifyState_PoseSearchBase::StaticClass, TEXT("UAnimNotifyState_PoseSearchBase"), &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_PoseSearchBase), 3492228890U) },
		{ Z_Construct_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase, UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticClass, TEXT("UAnimNotifyState_PoseSearchExcludeFromDatabase"), &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_PoseSearchExcludeFromDatabase), 868380677U) },
		{ Z_Construct_UClass_UAnimNotifyState_PoseSearchBlockTransition, UAnimNotifyState_PoseSearchBlockTransition::StaticClass, TEXT("UAnimNotifyState_PoseSearchBlockTransition"), &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBlockTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_PoseSearchBlockTransition), 883264876U) },
		{ Z_Construct_UClass_UAnimNotifyState_PoseSearchModifyCost, UAnimNotifyState_PoseSearchModifyCost::StaticClass, TEXT("UAnimNotifyState_PoseSearchModifyCost"), &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchModifyCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_PoseSearchModifyCost), 219653815U) },
		{ Z_Construct_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias, UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias::StaticClass, TEXT("UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias"), &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias), 3831072681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h_1851445089(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAnimNotifies_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
