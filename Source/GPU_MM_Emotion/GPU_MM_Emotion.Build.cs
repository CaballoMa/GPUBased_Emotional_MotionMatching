// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GPU_MM_Emotion : ModuleRules
{
	public GPU_MM_Emotion(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
