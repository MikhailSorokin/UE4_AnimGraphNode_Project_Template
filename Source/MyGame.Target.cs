// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyGameTarget : TargetRules
{
	public MyGameTarget(TargetInfo Target) : base(Target)
	{
		if (Type == TargetType.Editor)//4.16+
        {
            ExtraModuleNames.AddRange( 
                new string[]
                {
                    "ProjectCoreEditor"
                });
        } else {
			Type = TargetType.Game;

			ExtraModuleNames.Add("MyGame");
		}
	}
}
