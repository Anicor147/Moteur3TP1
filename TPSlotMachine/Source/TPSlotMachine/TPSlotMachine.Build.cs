// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPSlotMachine : ModuleRules
{
	public TPSlotMachine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
