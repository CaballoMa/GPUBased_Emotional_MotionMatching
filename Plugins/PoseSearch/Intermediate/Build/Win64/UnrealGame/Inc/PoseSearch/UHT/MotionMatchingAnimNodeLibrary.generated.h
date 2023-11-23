// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/MotionMatchingAnimNodeLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPoseSearchDatabase;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FMotionMatchingAnimNodeReference;
#ifdef POSESEARCH_MotionMatchingAnimNodeLibrary_generated_h
#error "MotionMatchingAnimNodeLibrary.generated.h already included, missing '#pragma once' in MotionMatchingAnimNodeLibrary.h"
#endif
#define POSESEARCH_MotionMatchingAnimNodeLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FMotionMatchingAnimNodeReference>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceInterruptNextUpdate); \
	DECLARE_FUNCTION(execResetDatabasesToSearch); \
	DECLARE_FUNCTION(execSetDatabasesToSearch); \
	DECLARE_FUNCTION(execSetDatabaseToSearch); \
	DECLARE_FUNCTION(execConvertToMotionMatchingNodePure); \
	DECLARE_FUNCTION(execConvertToMotionMatchingNode);


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionMatchingAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionMatchingAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UMotionMatchingAnimNodeLibrary)


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionMatchingAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionMatchingAnimNodeLibrary(UMotionMatchingAnimNodeLibrary&&); \
	NO_API UMotionMatchingAnimNodeLibrary(const UMotionMatchingAnimNodeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionMatchingAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionMatchingAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionMatchingAnimNodeLibrary) \
	NO_API virtual ~UMotionMatchingAnimNodeLibrary();


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UMotionMatchingAnimNodeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
