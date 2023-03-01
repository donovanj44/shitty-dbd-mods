using UnrealBuildTool;

public class TheDoctor : ModuleRules {
    public TheDoctor(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Activation",
            "AkAudio",
            "AnimationUtilities",
            "AtlantaFreeTickets",
            "AudioExtensions",
            "AudioMixer",
            "Competence",
            "Core",
            "CoreUObject",
            "CoreUtilities",
            "Customization",
            "DBDAnimation",
            "DBDAudio",
            "DBDGameplay",
            "DBDInput",
            "DBDInteraction",
            "DBDSharedTypes",
            "DBDUIViewInterfaces",
            "DBDUIViewsMobile",
            "DataTableUtilities",
            "DeadByDaylight",
            "Engine",
            "Foliage",
            "GFXUtilities",
            "GameSessionDS",
            "GameflowNotifications",
            "GameplayTagUtilities",
            "GameplayTags",
            "GameplayTasks",
            "GameplayUtilities",
            "InputCore",
            "InputUtilities",
            "Interaction",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NetworkUtilities",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineMessagesUtilities",
            "OnlinePresence",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "OnlineTransactions",
            "Paper2D",
            "Penalty",
            "PhysicsUtilities",
            "PlatformsProviders",
            "Projectile",
            "PropertyPath",
            "QueryService",
            "RewardUtilities",
            "ScaleformUI",
            "SharedAuthenticationUtilities",
            "Slate",
            "SlateCore",
            "SocialParty",
            "StatSystem",
            "SystemUtilities",
            "TimeUtilities",
            "Toasts",
            "UMG",
            "VFXUtilities",
        });
    }
}
