// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PoseSearchFeatureChannel_Group.h"
#include "UObject/ObjectSaveContext.h"
#include "PoseSearchFeatureChannel_Trajectory.generated.h"

UENUM(meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EPoseSearchTrajectoryFlags : uint32
{
	Velocity = 1 << 0,
	Position = 1 << 1,
	VelocityDirection = 1 << 2,
	FacingDirection = 1 << 3,
	VelocityXY = 1 << 4,
	PositionXY = 1 << 5,
	VelocityDirectionXY = 1 << 6,
	FacingDirectionXY = 1 << 7,
};
ENUM_CLASS_FLAGS(EPoseSearchTrajectoryFlags);
constexpr bool EnumHasAnyFlags(int32 Flags, EPoseSearchTrajectoryFlags Contains) { return (Flags & int32(Contains)) != 0; }
inline int32& operator|=(int32& Lhs, EPoseSearchTrajectoryFlags Rhs) { return Lhs |= int32(Rhs); }

USTRUCT()
struct POSESEARCH_API FPoseSearchTrajectorySample
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Config)
	float Offset = 0.f; // offset in time or distance depending on UPoseSearchFeatureChannel_Trajectory.Domain

	// This allows the user to define what information from the channel you want to compare to.
	UPROPERTY(EditAnywhere, meta = (Bitmask, BitmaskEnum = "/Script/PoseSearch.EPoseSearchTrajectoryFlags"), Category = Config)
	int32 Flags = int32(EPoseSearchTrajectoryFlags::Position);

	UPROPERTY(EditAnywhere, Category = Config)
	float Weight = 1.f;

	UPROPERTY(EditAnywhere, Category = Config, meta = (ExcludeFromHash, DisplayPriority = 0))
	FLinearColor DebugColor = FLinearColor::Blue;
};
UCLASS(BlueprintType, EditInlineNew, meta = (DisplayName = "Trajectory Channel"), CollapseCategories)
class POSESEARCH_API UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Settings")
	float Weight = 1.f;

	UPROPERTY(EditAnywhere, Category = "Settings")
	TArray<FPoseSearchTrajectorySample> Samples;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UPoseSearchFeatureChannel>> SubChannels;

	UPoseSearchFeatureChannel_Trajectory();

	// UPoseSearchFeatureChannel_GroupBase interface
	virtual TArrayView<TObjectPtr<UPoseSearchFeatureChannel>> GetSubChannels() override { return SubChannels; }
	virtual TConstArrayView<TObjectPtr<UPoseSearchFeatureChannel>> GetSubChannels() const override { return SubChannels; }

	// UPoseSearchFeatureChannel interface
	virtual void Finalize(UPoseSearchSchema* Schema) override;

#if ENABLE_DRAW_DEBUG
	virtual void DebugDraw(const UE::PoseSearch::FDebugDrawParams& DrawParams, TConstArrayView<float> PoseVector) const override;
#endif // ENABLE_DRAW_DEBUG

#if WITH_EDITOR
	virtual FString GetLabel() const override;
#endif

	float GetEstimatedSpeedRatio(TConstArrayView<float> QueryVector, TConstArrayView<float> PoseVector) const;
};

