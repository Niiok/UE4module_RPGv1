// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RPGv1 : ModuleRules
{   
	public RPGv1(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine"});

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
