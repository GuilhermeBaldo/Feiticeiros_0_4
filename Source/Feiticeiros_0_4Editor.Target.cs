// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Feiticeiros_0_4EditorTarget : TargetRules
{
	public Feiticeiros_0_4EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Feiticeiros_0_4");
	}
}
