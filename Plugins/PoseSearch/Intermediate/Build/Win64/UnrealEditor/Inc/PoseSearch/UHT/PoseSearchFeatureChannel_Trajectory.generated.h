// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchFeatureChannel_Trajectory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchFeatureChannel_Trajectory_generated_h
#error "PoseSearchFeatureChannel_Trajectory.generated.h already included, missing '#pragma once' in PoseSearchFeatureChannel_Trajectory.h"
#endif
#define POSESEARCH_PoseSearchFeatureChannel_Trajectory_generated_h

#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchTrajectorySample>();

#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_SPARSE_DATA
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_ACCESSORS
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory(); \
	friend struct Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchFeatureChannel_Trajectory, UPoseSearchFeatureChannel_GroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchFeatureChannel_Trajectory)


#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseSearchFeatureChannel_Trajectory(UPoseSearchFeatureChannel_Trajectory&&); \
	NO_API UPoseSearchFeatureChannel_Trajectory(const UPoseSearchFeatureChannel_Trajectory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchFeatureChannel_Trajectory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchFeatureChannel_Trajectory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseSearchFeatureChannel_Trajectory) \
	NO_API virtual ~UPoseSearchFeatureChannel_Trajectory();


#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_43_PROLOG
#define FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_SPARSE_DATA \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_ACCESSORS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_INCLASS_NO_PURE_DECLS \
	FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchFeatureChannel_Trajectory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProj_GPU_MM_Emotion_Plugins_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Trajectory_h


#define FOREACH_ENUM_EPOSESEARCHTRAJECTORYFLAGS(op) \
	op(EPoseSearchTrajectoryFlags::Velocity) \
	op(EPoseSearchTrajectoryFlags::Position) \
	op(EPoseSearchTrajectoryFlags::VelocityDirection) \
	op(EPoseSearchTrajectoryFlags::FacingDirection) \
	op(EPoseSearchTrajectoryFlags::VelocityXY) \
	op(EPoseSearchTrajectoryFlags::PositionXY) \
	op(EPoseSearchTrajectoryFlags::VelocityDirectionXY) \
	op(EPoseSearchTrajectoryFlags::FacingDirectionXY) 

enum class EPoseSearchTrajectoryFlags : uint32;
template<> struct TIsUEnumClass<EPoseSearchTrajectoryFlags> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchTrajectoryFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
