// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Photoboot : ModuleRules
{
    public Photoboot(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "UMG"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Slate",
                "SlateCore",

                // Webcam e Media Framework
                "MediaAssets",

                // Comunicazione HTTP con il backend Python
                "HTTP",

                // Lettura, conversione e compressione delle immagini
                "ImageCore",
                "RenderCore",
                "RHI",

                // Configurazioni del progetto
                "Projects",

                // Lettura e scrittura JSON
                "Json",
                "JsonUtilities"
            }
        );
    }
}