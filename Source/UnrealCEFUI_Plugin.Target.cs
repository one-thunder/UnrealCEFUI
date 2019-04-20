// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UnrealCEFUI_PluginTarget : TargetRules
{
	public UnrealCEFUI_PluginTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("UnrealCEFUI_Plugin");
	}
}
