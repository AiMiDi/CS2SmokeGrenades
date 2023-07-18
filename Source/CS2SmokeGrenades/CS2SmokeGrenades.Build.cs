// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CS2SmokeGrenades : ModuleRules
{
	public CS2SmokeGrenades(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
