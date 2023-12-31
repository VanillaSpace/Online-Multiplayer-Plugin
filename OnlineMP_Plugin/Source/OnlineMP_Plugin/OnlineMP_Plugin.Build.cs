// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OnlineMP_Plugin : ModuleRules
{
	public OnlineMP_Plugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
