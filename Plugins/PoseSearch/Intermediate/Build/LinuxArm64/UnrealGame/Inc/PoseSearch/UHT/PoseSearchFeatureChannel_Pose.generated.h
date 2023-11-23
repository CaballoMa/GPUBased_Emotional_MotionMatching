// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchFeatureChannel_Pose.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchFeatureChannel_Pose_generated_h
#error "PoseSearchFeatureChannel_Pose.generated.h already included, missing '#pragma once' in PoseSearchFeatureChannel_Pose.h"
#endif
#define POSESEARCH_PoseSearchFeatureChannel_Pose_generated_h

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchBone>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchFeatureChannel_Pose(); \
	friend struct Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchFeatureChannel_Pose, UPoseSearchFeatureChannel_GroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchFeatureChannel_Pose)


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseSearchFeatureChannel_Pose(UPoseSearchFeatureChannel_Pose&&); \
	NO_API UPoseSearchFeatureChannel_Pose(const UPoseSearchFeatureChannel_Pose&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchFeatureChannel_Pose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchFeatureChannel_Pose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseSearchFeatureChannel_Pose) \
	NO_API virtual ~UPoseSearchFeatureChannel_Pose();


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchFeatureChannel_Pose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Pose_h


#define FOREACH_ENUM_EPOSESEARCHBONEFLAGS(op) \
	op(EPoseSearchBoneFlags::Velocity) \
	op(EPoseSearchBoneFlags::Position) \
	op(EPoseSearchBoneFlags::Rotation) \
	op(EPoseSearchBoneFlags::Phase) 

enum class EPoseSearchBoneFlags : uint32;
template<> struct TIsUEnumClass<EPoseSearchBoneFlags> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchBoneFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
