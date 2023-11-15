// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchSchema_generated_h
#error "PoseSearchSchema.generated.h already included, missing '#pragma once' in PoseSearchSchema.h"
#endif
#define POSESEARCH_PoseSearchSchema_generated_h

#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_SPARSE_DATA
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_ACCESSORS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchSchema(); \
	friend struct Z_Construct_UClass_UPoseSearchSchema_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchSchema, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchSchema) \
	virtual UObject* _getUObject() const override { return const_cast<UPoseSearchSchema*>(this); }


#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseSearchSchema(UPoseSearchSchema&&); \
	NO_API UPoseSearchSchema(const UPoseSearchSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchSchema) \
	NO_API virtual ~UPoseSearchSchema();


#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_33_PROLOG
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_SPARSE_DATA \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_ACCESSORS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_INCLASS_NO_PURE_DECLS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchSchema>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h


#define FOREACH_ENUM_EPOSESEARCHDATAPREPROCESSOR(op) \
	op(EPoseSearchDataPreprocessor::None) \
	op(EPoseSearchDataPreprocessor::Normalize) \
	op(EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation) \
	op(EPoseSearchDataPreprocessor::Num) \
	op(EPoseSearchDataPreprocessor::Invalid) 

enum class EPoseSearchDataPreprocessor : int32;
template<> struct TIsUEnumClass<EPoseSearchDataPreprocessor> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchDataPreprocessor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
