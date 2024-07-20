// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StateTreeCourse : ModuleRules
{
	public StateTreeCourse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
			{ 
				"Core", 
				"CoreUObject", 
				"Engine",
				"InputCore", 
				"EnhancedInput", 
				"GameplayStateTreeModule",
				"AIModule",
				"StateTreeModule"
			});
	}
}
