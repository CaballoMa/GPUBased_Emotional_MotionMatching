// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UAnimInstance;
class UPoseSearchDatabase;
struct FPoseSearchQueryTrajectory;
#ifdef POSESEARCH_PoseSearchLibrary_generated_h
#error "PoseSearchLibrary.generated.h already included, missing '#pragma once' in PoseSearchLibrary.h"
#endif
#define POSESEARCH_PoseSearchLibrary_generated_h

#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FMotionMatchingState>();

#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_SPARSE_DATA
#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMotionMatch);


#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_ACCESSORS
#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchLibrary_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchLibrary)


#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseSearchLibrary(UPoseSearchLibrary&&); \
	NO_API UPoseSearchLibrary(const UPoseSearchLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchLibrary) \
	NO_API virtual ~UPoseSearchLibrary();


#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_95_PROLOG
#define FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_SPARSE_DATA \
	FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_ACCESSORS \
	FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_INCLASS_NO_PURE_DECLS \
	FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ComputeShader53_Plugins_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
