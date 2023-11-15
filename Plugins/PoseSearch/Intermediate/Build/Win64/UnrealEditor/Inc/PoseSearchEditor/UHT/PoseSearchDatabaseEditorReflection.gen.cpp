// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/PoseSearchDatabaseEditorReflection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDatabaseEditorReflection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_NoRegister();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics_NoRegister();
	POSESEARCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx();
	POSESEARCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx();
	POSESEARCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx();
	POSESEARCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats();
	POSESEARCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	void UPoseSearchDatabaseReflectionBase::StaticRegisterNativesUPoseSearchDatabaseReflectionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseReflectionBase);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_NoRegister()
	{
		return UPoseSearchDatabaseReflectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseReflectionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::ClassParams = {
		&UPoseSearchDatabaseReflectionBase::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPoseSearchDatabaseReflectionBase()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseReflectionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseReflectionBase>()
	{
		return UPoseSearchDatabaseReflectionBase::StaticClass();
	}
	UPoseSearchDatabaseReflectionBase::UPoseSearchDatabaseReflectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseReflectionBase);
	UPoseSearchDatabaseReflectionBase::~UPoseSearchDatabaseReflectionBase() {}

static_assert(std::is_polymorphic<FPoseSearchDatabaseSequenceEx>() == std::is_polymorphic<FPoseSearchDatabaseSequence>(), "USTRUCT FPoseSearchDatabaseSequenceEx cannot be polymorphic unless super FPoseSearchDatabaseSequence is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx;
class UScriptStruct* FPoseSearchDatabaseSequenceEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx, (UObject*)Z_Construct_UPackage__Script_PoseSearchEditor(), TEXT("PoseSearchDatabaseSequenceEx"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx.OuterSingleton;
}
template<> POSESEARCHEDITOR_API UScriptStruct* StaticStruct<FPoseSearchDatabaseSequenceEx>()
{
	return FPoseSearchDatabaseSequenceEx::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[];
#endif
		static void NewProp_bHasRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseSequenceEx>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\n// Changing the sampling range will disable looping\n" },
#endif
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\nChanging the sampling range will disable looping" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseSequenceEx*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseSequenceEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bLooping_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bLooping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bHasRootMotion_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence.\n" },
#endif
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseSequenceEx*)Obj)->bHasRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bHasRootMotion = { "bHasRootMotion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseSequenceEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bHasRootMotion_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bHasRootMotion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewProp_bHasRootMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence,
		&NewStructOps,
		"PoseSearchDatabaseSequenceEx",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseSequenceEx),
		alignof(FPoseSearchDatabaseSequenceEx),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx.InnerSingleton;
	}
	void UPoseSearchDatabaseSequenceReflection::StaticRegisterNativesUPoseSearchDatabaseSequenceReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseSequenceReflection);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_NoRegister()
	{
		return UPoseSearchDatabaseSequenceReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchDatabaseReflectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Selected Sequence" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseSequenceReflection, Sequence), Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence_MetaData), Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence_MetaData) }; // 2065192304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseSequenceReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::ClassParams = {
		&UPoseSearchDatabaseSequenceReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseSequenceReflection>()
	{
		return UPoseSearchDatabaseSequenceReflection::StaticClass();
	}
	UPoseSearchDatabaseSequenceReflection::UPoseSearchDatabaseSequenceReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseSequenceReflection);
	UPoseSearchDatabaseSequenceReflection::~UPoseSearchDatabaseSequenceReflection() {}

static_assert(std::is_polymorphic<FPoseSearchDatabaseBlendSpaceEx>() == std::is_polymorphic<FPoseSearchDatabaseBlendSpace>(), "USTRUCT FPoseSearchDatabaseBlendSpaceEx cannot be polymorphic unless super FPoseSearchDatabaseBlendSpace is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx;
class UScriptStruct* FPoseSearchDatabaseBlendSpaceEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx, (UObject*)Z_Construct_UPackage__Script_PoseSearchEditor(), TEXT("PoseSearchDatabaseBlendSpaceEx"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx.OuterSingleton;
}
template<> POSESEARCHEDITOR_API UScriptStruct* StaticStruct<FPoseSearchDatabaseBlendSpaceEx>()
{
	return FPoseSearchDatabaseBlendSpaceEx::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[];
#endif
		static void NewProp_bHasRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseBlendSpaceEx>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\n// Changing the sampling range will disable looping\n" },
#endif
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\nChanging the sampling range will disable looping" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseBlendSpaceEx*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseBlendSpaceEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bLooping_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bLooping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bHasRootMotion_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence.\n" },
#endif
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseBlendSpaceEx*)Obj)->bHasRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bHasRootMotion = { "bHasRootMotion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseBlendSpaceEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bHasRootMotion_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bHasRootMotion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewProp_bHasRootMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace,
		&NewStructOps,
		"PoseSearchDatabaseBlendSpaceEx",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseBlendSpaceEx),
		alignof(FPoseSearchDatabaseBlendSpaceEx),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx.InnerSingleton;
	}
	void UPoseSearchDatabaseBlendSpaceReflection::StaticRegisterNativesUPoseSearchDatabaseBlendSpaceReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseBlendSpaceReflection);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_NoRegister()
	{
		return UPoseSearchDatabaseBlendSpaceReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchDatabaseReflectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "Selected Blend Space" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseBlendSpaceReflection, BlendSpace), Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace_MetaData), Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace_MetaData) }; // 2879779742
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::NewProp_BlendSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseBlendSpaceReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::ClassParams = {
		&UPoseSearchDatabaseBlendSpaceReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseBlendSpaceReflection>()
	{
		return UPoseSearchDatabaseBlendSpaceReflection::StaticClass();
	}
	UPoseSearchDatabaseBlendSpaceReflection::UPoseSearchDatabaseBlendSpaceReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseBlendSpaceReflection);
	UPoseSearchDatabaseBlendSpaceReflection::~UPoseSearchDatabaseBlendSpaceReflection() {}

static_assert(std::is_polymorphic<FPoseSearchDatabaseAnimCompositeEx>() == std::is_polymorphic<FPoseSearchDatabaseAnimComposite>(), "USTRUCT FPoseSearchDatabaseAnimCompositeEx cannot be polymorphic unless super FPoseSearchDatabaseAnimComposite is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx;
class UScriptStruct* FPoseSearchDatabaseAnimCompositeEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx, (UObject*)Z_Construct_UPackage__Script_PoseSearchEditor(), TEXT("PoseSearchDatabaseAnimCompositeEx"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx.OuterSingleton;
}
template<> POSESEARCHEDITOR_API UScriptStruct* StaticStruct<FPoseSearchDatabaseAnimCompositeEx>()
{
	return FPoseSearchDatabaseAnimCompositeEx::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[];
#endif
		static void NewProp_bHasRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseAnimCompositeEx>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\n// Changing the sampling range will disable looping\n" },
#endif
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\nChanging the sampling range will disable looping" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseAnimCompositeEx*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseAnimCompositeEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bLooping_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bLooping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bHasRootMotion_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence.\n" },
#endif
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseAnimCompositeEx*)Obj)->bHasRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bHasRootMotion = { "bHasRootMotion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseAnimCompositeEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bHasRootMotion_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bHasRootMotion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewProp_bHasRootMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite,
		&NewStructOps,
		"PoseSearchDatabaseAnimCompositeEx",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseAnimCompositeEx),
		alignof(FPoseSearchDatabaseAnimCompositeEx),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx.InnerSingleton;
	}
	void UPoseSearchDatabaseAnimCompositeReflection::StaticRegisterNativesUPoseSearchDatabaseAnimCompositeReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseAnimCompositeReflection);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_NoRegister()
	{
		return UPoseSearchDatabaseAnimCompositeReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimComposite_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimComposite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchDatabaseReflectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite_MetaData[] = {
		{ "Category", "Selected Anim Composite" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite = { "AnimComposite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseAnimCompositeReflection, AnimComposite), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite_MetaData), Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite_MetaData) }; // 3340213143
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::NewProp_AnimComposite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseAnimCompositeReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::ClassParams = {
		&UPoseSearchDatabaseAnimCompositeReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseAnimCompositeReflection>()
	{
		return UPoseSearchDatabaseAnimCompositeReflection::StaticClass();
	}
	UPoseSearchDatabaseAnimCompositeReflection::UPoseSearchDatabaseAnimCompositeReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseAnimCompositeReflection);
	UPoseSearchDatabaseAnimCompositeReflection::~UPoseSearchDatabaseAnimCompositeReflection() {}

static_assert(std::is_polymorphic<FPoseSearchDatabaseAnimMontageEx>() == std::is_polymorphic<FPoseSearchDatabaseAnimMontage>(), "USTRUCT FPoseSearchDatabaseAnimMontageEx cannot be polymorphic unless super FPoseSearchDatabaseAnimMontage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx;
class UScriptStruct* FPoseSearchDatabaseAnimMontageEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx, (UObject*)Z_Construct_UPackage__Script_PoseSearchEditor(), TEXT("PoseSearchDatabaseAnimMontageEx"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx.OuterSingleton;
}
template<> POSESEARCHEDITOR_API UScriptStruct* StaticStruct<FPoseSearchDatabaseAnimMontageEx>()
{
	return FPoseSearchDatabaseAnimMontageEx::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[];
#endif
		static void NewProp_bHasRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseAnimMontageEx>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\n// Changing the sampling range will disable looping\n" },
#endif
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this animation set as looping? If you want to change this you need to change it in the base Anim Sequence.\nChanging the sampling range will disable looping" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseAnimMontageEx*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseAnimMontageEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bLooping_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bLooping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bHasRootMotion_MetaData[] = {
		{ "Category", "Sequence" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence.\n" },
#endif
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does this animation have root motion enabled ? If you want to change this you need to change it in the base Anim Sequence." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
	{
		((FPoseSearchDatabaseAnimMontageEx*)Obj)->bHasRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bHasRootMotion = { "bHasRootMotion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoseSearchDatabaseAnimMontageEx), &Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bHasRootMotion_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bHasRootMotion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewProp_bHasRootMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage,
		&NewStructOps,
		"PoseSearchDatabaseAnimMontageEx",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseAnimMontageEx),
		alignof(FPoseSearchDatabaseAnimMontageEx),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx.InnerSingleton;
	}
	void UPoseSearchDatabaseAnimMontageReflection::StaticRegisterNativesUPoseSearchDatabaseAnimMontageReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseAnimMontageReflection);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_NoRegister()
	{
		return UPoseSearchDatabaseAnimMontageReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchDatabaseReflectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Selected Anim Montage" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseAnimMontageReflection, AnimMontage), Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::NewProp_AnimMontage_MetaData), Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::NewProp_AnimMontage_MetaData) }; // 1465316795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::NewProp_AnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseAnimMontageReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::ClassParams = {
		&UPoseSearchDatabaseAnimMontageReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseAnimMontageReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseAnimMontageReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseAnimMontageReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseAnimMontageReflection>()
	{
		return UPoseSearchDatabaseAnimMontageReflection::StaticClass();
	}
	UPoseSearchDatabaseAnimMontageReflection::UPoseSearchDatabaseAnimMontageReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseAnimMontageReflection);
	UPoseSearchDatabaseAnimMontageReflection::~UPoseSearchDatabaseAnimMontageReflection() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats;
class UScriptStruct* FPoseSearchDatabaseMemoryStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats, (UObject*)Z_Construct_UPackage__Script_PoseSearchEditor(), TEXT("PoseSearchDatabaseMemoryStats"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.OuterSingleton;
}
template<> POSESEARCHEDITOR_API UScriptStruct* StaticStruct<FPoseSearchDatabaseMemoryStats>()
{
	return FPoseSearchDatabaseMemoryStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDatabaseSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EstimatedDatabaseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCAValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PCAValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_KDTreeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseMetadataSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PoseMetadataSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AssetsSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDatabaseMemoryStats>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize = { "EstimatedDatabaseSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, EstimatedDatabaseSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize = { "ValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, ValuesSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize = { "PCAValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, PCAValuesSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize = { "KDTreeSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, KDTreeSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize = { "PoseMetadataSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, PoseMetadataSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize = { "AssetsSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoseSearchDatabaseMemoryStats, AssetsSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize_MetaData), Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_EstimatedDatabaseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_ValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PCAValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_KDTreeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_PoseMetadataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewProp_AssetsSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
		nullptr,
		&NewStructOps,
		"PoseSearchDatabaseMemoryStats",
		Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::PropPointers),
		sizeof(FPoseSearchDatabaseMemoryStats),
		alignof(FPoseSearchDatabaseMemoryStats),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats.InnerSingleton;
	}
	void UPoseSearchDatabaseStatistics::StaticRegisterNativesUPoseSearchDatabaseStatistics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDatabaseStatistics);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics_NoRegister()
	{
		return UPoseSearchDatabaseStatistics::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequences_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AnimationSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalAnimationPosesInFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalAnimationPosesInFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalAnimationPosesInTime_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TotalAnimationPosesInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchableFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SearchableFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchableTime_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SearchableTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigCardinality_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConfigCardinality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AverageSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AverageAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplainedVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplainedVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedDatabaseSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EstimatedDatabaseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PCAValuesSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PCAValuesSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KDTreeSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_KDTreeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseMetadataSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PoseMetadataSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsSize_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AssetsSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoseSearchDatabaseEditorReflection.h" },
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences_MetaData[] = {
		{ "Category", "General Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of Animation Sequences in the database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of Animation Sequences in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences = { "AnimationSequences", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AnimationSequences), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames_MetaData[] = {
		{ "Category", "General Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of total animation poses in frames in the database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of total animation poses in frames in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames = { "TotalAnimationPosesInFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, TotalAnimationPosesInFrames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime_MetaData[] = {
		{ "Category", "General Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of total animation poses in time in the database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of total animation poses in time in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime = { "TotalAnimationPosesInTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, TotalAnimationPosesInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames_MetaData[] = {
		{ "Category", "General Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amount of animation frames that are searchable in the database (this will exclude frames that have been removed using Sampling Range).\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of animation frames that are searchable in the database (this will exclude frames that have been removed using Sampling Range)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames = { "SearchableFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, SearchableFrames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime_MetaData[] = {
		{ "Category", "General Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amount of animation in time that are searchable in the database (this will exclude time that have been removed using Sampling Range).\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of animation in time that are searchable in the database (this will exclude time that have been removed using Sampling Range)." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime = { "SearchableTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, SearchableTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ConfigCardinality_MetaData[] = {
		{ "Category", "General Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cardinality for the database config (how many floats per pose to store the pose features data)\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cardinality for the database config (how many floats per pose to store the pose features data)" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ConfigCardinality = { "ConfigCardinality", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, ConfigCardinality), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ConfigCardinality_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ConfigCardinality_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageSpeed_MetaData[] = {
		{ "Category", "Kinematic Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Average speed of the characters trajectory across all animations in the database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Average speed of the characters trajectory across all animations in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageSpeed = { "AverageSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AverageSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageSpeed_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Kinematic Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Highest speed of the characters trajectory across all animations in the database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Highest speed of the characters trajectory across all animations in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxSpeed_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration_MetaData[] = {
		{ "Category", "Kinematic Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The average acceleration of the characters trajectory across all the animations in the database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The average acceleration of the characters trajectory across all the animations in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration = { "AverageAcceleration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AverageAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Kinematic Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The max acceleration of the characters trajectory across all the animations in the database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max acceleration of the characters trajectory across all the animations in the database." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, MaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance_MetaData[] = {
		{ "Category", "Principal Component Analysis Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When Pose Search Mode is set to PCAKDTree this value represents how well the variance of the dataset is explained within the chosen Number Of Principal Components:\n// the higher, the better the quality (statistically more significant result) out of the kdtree search.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When Pose Search Mode is set to PCAKDTree this value represents how well the variance of the dataset is explained within the chosen Number Of Principal Components:\nthe higher, the better the quality (statistically more significant result) out of the kdtree search." },
#endif
		{ "Units", "Percent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance = { "ExplainedVariance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, ExplainedVariance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize_MetaData[] = {
		{ "Category", "Memory Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// aggregated total memory used by this database.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "aggregated total memory used by this database." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize = { "EstimatedDatabaseSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, EstimatedDatabaseSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize_MetaData[] = {
		{ "Category", "Memory Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// partial memory size used to store the pose feature vectors.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "partial memory size used to store the pose feature vectors." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize = { "ValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, ValuesSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize_MetaData[] = {
		{ "Category", "Memory Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// partial memory size used to store the pose feature vectors in PCA space.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "partial memory size used to store the pose feature vectors in PCA space." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize = { "PCAValuesSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, PCAValuesSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize_MetaData[] = {
		{ "Category", "Memory Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// partial memory size used by the kdtree.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "partial memory size used by the kdtree." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize = { "KDTreeSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, KDTreeSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize_MetaData[] = {
		{ "Category", "Memory Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// partial memory size used to store database metadata.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "partial memory size used to store database metadata." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize = { "PoseMetadataSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, PoseMetadataSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize_MetaData[] = {
		{ "Category", "Memory Information" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// partial memory size used to animation data sub ranges, mirror state, blend parameters.\n" },
#endif
		{ "ModuleRelativePath", "Public/PoseSearchDatabaseEditorReflection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "partial memory size used to animation data sub ranges, mirror state, blend parameters." },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize = { "AssetsSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoseSearchDatabaseStatistics, AssetsSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize_MetaData), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AnimationSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_TotalAnimationPosesInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_SearchableTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ConfigCardinality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AverageAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_MaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ExplainedVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_EstimatedDatabaseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_ValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PCAValuesSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_KDTreeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_PoseMetadataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::NewProp_AssetsSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDatabaseStatistics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::ClassParams = {
		&UPoseSearchDatabaseStatistics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoseSearchDatabaseStatistics()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics.OuterSingleton, Z_Construct_UClass_UPoseSearchDatabaseStatistics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDatabaseStatistics>()
	{
		return UPoseSearchDatabaseStatistics::StaticClass();
	}
	UPoseSearchDatabaseStatistics::UPoseSearchDatabaseStatistics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDatabaseStatistics);
	UPoseSearchDatabaseStatistics::~UPoseSearchDatabaseStatistics() {}
	struct Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchDatabaseSequenceEx::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseSequenceEx_Statics::NewStructOps, TEXT("PoseSearchDatabaseSequenceEx"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseSequenceEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseSequenceEx), 2065192304U) },
		{ FPoseSearchDatabaseBlendSpaceEx::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpaceEx_Statics::NewStructOps, TEXT("PoseSearchDatabaseBlendSpaceEx"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseBlendSpaceEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseBlendSpaceEx), 2879779742U) },
		{ FPoseSearchDatabaseAnimCompositeEx::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimCompositeEx_Statics::NewStructOps, TEXT("PoseSearchDatabaseAnimCompositeEx"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimCompositeEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseAnimCompositeEx), 3340213143U) },
		{ FPoseSearchDatabaseAnimMontageEx::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontageEx_Statics::NewStructOps, TEXT("PoseSearchDatabaseAnimMontageEx"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseAnimMontageEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseAnimMontageEx), 1465316795U) },
		{ FPoseSearchDatabaseMemoryStats::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDatabaseMemoryStats_Statics::NewStructOps, TEXT("PoseSearchDatabaseMemoryStats"), &Z_Registration_Info_UScriptStruct_PoseSearchDatabaseMemoryStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDatabaseMemoryStats), 4243250604U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchDatabaseReflectionBase, UPoseSearchDatabaseReflectionBase::StaticClass, TEXT("UPoseSearchDatabaseReflectionBase"), &Z_Registration_Info_UClass_UPoseSearchDatabaseReflectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseReflectionBase), 420904423U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseSequenceReflection, UPoseSearchDatabaseSequenceReflection::StaticClass, TEXT("UPoseSearchDatabaseSequenceReflection"), &Z_Registration_Info_UClass_UPoseSearchDatabaseSequenceReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseSequenceReflection), 593363688U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseBlendSpaceReflection, UPoseSearchDatabaseBlendSpaceReflection::StaticClass, TEXT("UPoseSearchDatabaseBlendSpaceReflection"), &Z_Registration_Info_UClass_UPoseSearchDatabaseBlendSpaceReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseBlendSpaceReflection), 1604065260U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseAnimCompositeReflection, UPoseSearchDatabaseAnimCompositeReflection::StaticClass, TEXT("UPoseSearchDatabaseAnimCompositeReflection"), &Z_Registration_Info_UClass_UPoseSearchDatabaseAnimCompositeReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseAnimCompositeReflection), 381329178U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseAnimMontageReflection, UPoseSearchDatabaseAnimMontageReflection::StaticClass, TEXT("UPoseSearchDatabaseAnimMontageReflection"), &Z_Registration_Info_UClass_UPoseSearchDatabaseAnimMontageReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseAnimMontageReflection), 2223525750U) },
		{ Z_Construct_UClass_UPoseSearchDatabaseStatistics, UPoseSearchDatabaseStatistics::StaticClass, TEXT("UPoseSearchDatabaseStatistics"), &Z_Registration_Info_UClass_UPoseSearchDatabaseStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDatabaseStatistics), 1051085753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_860333007(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Editor_Public_PoseSearchDatabaseEditorReflection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
