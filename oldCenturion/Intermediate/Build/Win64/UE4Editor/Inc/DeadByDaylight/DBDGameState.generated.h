// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
class ACamperPlayer;
class AInteractable;
class ADBDPlayer;
enum class EEndGameReason : uint8;
struct FSelectedOffering;
class UCharacterCollection;
class UCollectableCollection;
class UEndGameStateComponent;
class ABaseTrap;
class AEscapeDoor;
class AGenerator;
class AHatch;
class AMeatHook;
class APallet;
class AReverseBearTrapRemover;
class ASearchable;
class AWindow;
struct FBuiltLevelData;
class UAkAudioBank;
class APawn;
class ADBDPlayerState;
class USpecialEventGameplaySpawnerComponent;
class ATotem;
struct FDependency;
class ADBDPlayerState_Menu;
struct FGamePresetData;
#ifdef DEADBYDAYLIGHT_DBDGameState_generated_h
#error "DBDGameState.generated.h already included, missing '#pragma once' in DBDGameState.h"
#endif
#define DEADBYDAYLIGHT_DBDGameState_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_56_DELEGATE \
struct _Script_DeadByDaylight_eventDBDGameStateCallback_Parms \
{ \
	ASlasherPlayer* slasher; \
}; \
static inline void FDBDGameStateCallback_DelegateWrapper(const FScriptDelegate& DBDGameStateCallback, ASlasherPlayer* slasher) \
{ \
	_Script_DeadByDaylight_eventDBDGameStateCallback_Parms Parms; \
	Parms.slasher=slasher; \
	DBDGameStateCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_55_DELEGATE \
struct _Script_DeadByDaylight_eventDBDGameStateOnObsessionChanged_Parms \
{ \
	ACamperPlayer* newObsession; \
	ACamperPlayer* previousObsession; \
}; \
static inline void FDBDGameStateOnObsessionChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnObsessionChanged, ACamperPlayer* newObsession, ACamperPlayer* previousObsession) \
{ \
	_Script_DeadByDaylight_eventDBDGameStateOnObsessionChanged_Parms Parms; \
	Parms.newObsession=newObsession; \
	Parms.previousObsession=previousObsession; \
	DBDGameStateOnObsessionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_54_DELEGATE \
static inline void FDBDGameStateOnSlasherSet_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnSlasherSet) \
{ \
	DBDGameStateOnSlasherSet.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_53_DELEGATE \
static inline void FDBDGameStateAuthorityOnAllPlayerLoaded_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateAuthorityOnAllPlayerLoaded) \
{ \
	DBDGameStateAuthorityOnAllPlayerLoaded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_52_DELEGATE \
static inline void FDBDGameStateOnLightingGenerated_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnLightingGenerated) \
{ \
	DBDGameStateOnLightingGenerated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_51_DELEGATE \
static inline void FDBDGameStateOnIntroCompleted_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnIntroCompleted) \
{ \
	DBDGameStateOnIntroCompleted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_50_DELEGATE \
struct _Script_DeadByDaylight_eventDBDGameStateOnKillerIntroCompletePercentChanged_Parms \
{ \
	float killerIntroCompletePercentChanged; \
}; \
static inline void FDBDGameStateOnKillerIntroCompletePercentChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnKillerIntroCompletePercentChanged, float killerIntroCompletePercentChanged) \
{ \
	_Script_DeadByDaylight_eventDBDGameStateOnKillerIntroCompletePercentChanged_Parms Parms; \
	Parms.killerIntroCompletePercentChanged=killerIntroCompletePercentChanged; \
	DBDGameStateOnKillerIntroCompletePercentChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_49_DELEGATE \
static inline void FDBDGameStateOnLevelReadyToPlay_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnLevelReadyToPlay) \
{ \
	DBDGameStateOnLevelReadyToPlay.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_48_DELEGATE \
struct _Script_DeadByDaylight_eventDBDGameStateOnActivatedGeneratorCountChangedDynamic_Parms \
{ \
	int32 _activatedGeneratorCount; \
}; \
static inline void FDBDGameStateOnActivatedGeneratorCountChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnActivatedGeneratorCountChangedDynamic, int32 _activatedGeneratorCount) \
{ \
	_Script_DeadByDaylight_eventDBDGameStateOnActivatedGeneratorCountChangedDynamic_Parms Parms; \
	Parms._activatedGeneratorCount=_activatedGeneratorCount; \
	DBDGameStateOnActivatedGeneratorCountChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_47_DELEGATE \
static inline void FDBDGameStateOnEscapeDoorActivated_DelegateWrapper(const FMulticastScriptDelegate& DBDGameStateOnEscapeDoorActivated) \
{ \
	DBDGameStateOnEscapeDoorActivated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_RPC_WRAPPERS \
	virtual void Multicast_OnGameStarted_Implementation(); \
	virtual void Multicast_SendEnsureToClients_Implementation(const FString& ensure); \
	virtual void Multicast_SendHVSPlusState_Implementation(bool enabled); \
	virtual void Multicast_SetBuiltLevelData_Implementation(FName const& themeName, FName const& themeWeather, FName const& audioStateThemes, FName const& audioStateWeather, FName const& audioThemeEvent, TSoftObjectPtr<UAkAudioBank> const& audioThemeSoundBank, const FString& mapName, int32 tileCount, TArray<FDependency> const& levelDependencies, FName const& specialEventId); \
	virtual void Multicast_SetGameEnded_Implementation(bool hasServerLeftGame); \
	virtual void Multicast_SetGameLevelEnded_Implementation(EEndGameReason endGameReason); \
	virtual void Multicast_SetGameLevelLoaded_Implementation(bool gameLevelLoaded); \
	virtual void Multicast_SetLostServerConnection_Implementation(bool hasLostServerConnection); \
	virtual void Multicast_SetServerLeftGame_Implementation(bool hasServerLeftGame); \
	virtual void Multicast_UpdateCharacterFromGamePreset_Implementation(ADBDPlayerState_Menu* playerState_Menu, FGamePresetData const& gamePresetData); \
 \
	DECLARE_FUNCTION(execAddTrap); \
	DECLARE_FUNCTION(execAuthority_DeactivateAI); \
	DECLARE_FUNCTION(execAuthority_EnableObsession); \
	DECLARE_FUNCTION(execAuthority_EscapeThroughHatch); \
	DECLARE_FUNCTION(execAuthority_EvaluateObsessionTarget); \
	DECLARE_FUNCTION(execAuthority_SetAllPlayerLoaded); \
	DECLARE_FUNCTION(execAuthority_SetEscapeDoorOpened); \
	DECLARE_FUNCTION(execAuthority_SetGameLevelCreated); \
	DECLARE_FUNCTION(execAuthority_SetGameLevelEnded); \
	DECLARE_FUNCTION(execAuthority_SetGameLevelLoaded); \
	DECLARE_FUNCTION(execAuthority_SetGameSelectedOffering); \
	DECLARE_FUNCTION(execAuthority_SetHatchOpen); \
	DECLARE_FUNCTION(execAuthority_SetLevelReadyToPlay); \
	DECLARE_FUNCTION(execAuthority_SetSurvivorLeft); \
	DECLARE_FUNCTION(execBroadcastOnSetBuildLevelData); \
	DECLARE_FUNCTION(execCallOnIntroComplete); \
	DECLARE_FUNCTION(execCallOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execCallOnSlasherSet); \
	DECLARE_FUNCTION(execGetCharacterCollection); \
	DECLARE_FUNCTION(execGetCollectableCollection); \
	DECLARE_FUNCTION(execGetEndGameStateComponent); \
	DECLARE_FUNCTION(execGetGameLevelLoaded); \
	DECLARE_FUNCTION(execGetInGameBaseTraps); \
	DECLARE_FUNCTION(execGetInGameEscapeDoors); \
	DECLARE_FUNCTION(execGetInGameGenerators); \
	DECLARE_FUNCTION(execGetInGameHatches); \
	DECLARE_FUNCTION(execGetInGameMeatHooks); \
	DECLARE_FUNCTION(execGetInGamePallets); \
	DECLARE_FUNCTION(execGetInGameReverseBearTrapRemovers); \
	DECLARE_FUNCTION(execGetInGameSearchables); \
	DECLARE_FUNCTION(execGetInGameWindows); \
	DECLARE_FUNCTION(execGetIsGameEnded); \
	DECLARE_FUNCTION(execGetKiller); \
	DECLARE_FUNCTION(execGetKillerIntroCompletedNormalized); \
	DECLARE_FUNCTION(execGetLevelData); \
	DECLARE_FUNCTION(execGetLevelThemeAudioSoundBankAssetPtr); \
	DECLARE_FUNCTION(execGetLocalPlayerBasePawn); \
	DECLARE_FUNCTION(execGetLocalPlayerPawn); \
	DECLARE_FUNCTION(execGetLocalPlayerState); \
	DECLARE_FUNCTION(execGetMapThemeName); \
	DECLARE_FUNCTION(execGetNumberOfActiveSurvivors); \
	DECLARE_FUNCTION(execGetNumberOfOtherActiveSurvivors); \
	DECLARE_FUNCTION(execGetObsessionTarget); \
	DECLARE_FUNCTION(execGetPlayerRoleCounts); \
	DECLARE_FUNCTION(execGetPlayersReadyToStart); \
	DECLARE_FUNCTION(execGetPlayerStateByIDString); \
	DECLARE_FUNCTION(execGetPlayerStateByMirrorsID); \
	DECLARE_FUNCTION(execGetRemainingGeneratorsNeeded); \
	DECLARE_FUNCTION(execGetRequiredActivatedGeneratorCount); \
	DECLARE_FUNCTION(execGetSelectedOffering); \
	DECLARE_FUNCTION(execGetSelectedOfferings); \
	DECLARE_FUNCTION(execGetSpecialEventGameplaySpawnerComponent); \
	DECLARE_FUNCTION(execGetSurvivorLeft); \
	DECLARE_FUNCTION(execGetTotems); \
	DECLARE_FUNCTION(execGetTraps); \
	DECLARE_FUNCTION(execIntroCompleted); \
	DECLARE_FUNCTION(execIsEscapeDoorActivated); \
	DECLARE_FUNCTION(execIsEscapeDoorOpen); \
	DECLARE_FUNCTION(execIsEscapeRequirementCompleted); \
	DECLARE_FUNCTION(execIsHatchVisible); \
	DECLARE_FUNCTION(execIsIntroCompleted); \
	DECLARE_FUNCTION(execIsLevelReadyToPlay); \
	DECLARE_FUNCTION(execIsLevelSetupDone); \
	DECLARE_FUNCTION(execIsLightingGenerated); \
	DECLARE_FUNCTION(execIsObsessionTargetAlive); \
	DECLARE_FUNCTION(execIsObsessionTargetAliveInLevel); \
	DECLARE_FUNCTION(execIsOfferingReceived); \
	DECLARE_FUNCTION(execIsOnePlayerLeft); \
	DECLARE_FUNCTION(execIsPlayerDistributionReady); \
	DECLARE_FUNCTION(execMulticast_OnGameStarted); \
	DECLARE_FUNCTION(execMulticast_SendEnsureToClients); \
	DECLARE_FUNCTION(execMulticast_SendHVSPlusState); \
	DECLARE_FUNCTION(execMulticast_SetBuiltLevelData); \
	DECLARE_FUNCTION(execMulticast_SetGameEnded); \
	DECLARE_FUNCTION(execMulticast_SetGameLevelEnded); \
	DECLARE_FUNCTION(execMulticast_SetGameLevelLoaded); \
	DECLARE_FUNCTION(execMulticast_SetLostServerConnection); \
	DECLARE_FUNCTION(execMulticast_SetServerLeftGame); \
	DECLARE_FUNCTION(execMulticast_UpdateCharacterFromGamePreset); \
	DECLARE_FUNCTION(execOnRep_ActivatedGeneratorCount); \
	DECLARE_FUNCTION(execOnRep_BuildLevelData); \
	DECLARE_FUNCTION(execOnRep_EscapeDoorActivated); \
	DECLARE_FUNCTION(execOnRep_GamePresetData); \
	DECLARE_FUNCTION(execOnRep_HatchOpened); \
	DECLARE_FUNCTION(execOnRep_LobbyId); \
	DECLARE_FUNCTION(execOnRep_ObsessionTarget); \
	DECLARE_FUNCTION(execOnRep_OnGameLevelCreated); \
	DECLARE_FUNCTION(execOnRep_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_PlayersReadyToStart); \
	DECLARE_FUNCTION(execOnRep_RequiredActivatedGeneratorCount); \
	DECLARE_FUNCTION(execOnRep_SecondsLeftInLobby); \
	DECLARE_FUNCTION(execOnRep_SessionId); \
	DECLARE_FUNCTION(execOnRep_SurvivorLeft); \
	DECLARE_FUNCTION(execRemoveTrap); \
	DECLARE_FUNCTION(execResetGameLevelStatus); \
	DECLARE_FUNCTION(execServer_UpdateGameRole); \
	DECLARE_FUNCTION(execSetBuiltLevelData); \
	DECLARE_FUNCTION(execSetDisplayMapName); \
	DECLARE_FUNCTION(execSetGameLevelEnded); \
	DECLARE_FUNCTION(execSetKillerIntroCompletedNormalized); \
	DECLARE_FUNCTION(execSetPlayersReadyToStart); \
	DECLARE_FUNCTION(execSortOfferings);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnGameStarted_Implementation(); \
	virtual void Multicast_SendEnsureToClients_Implementation(const FString& ensure); \
	virtual void Multicast_SendHVSPlusState_Implementation(bool enabled); \
	virtual void Multicast_SetBuiltLevelData_Implementation(FName const& themeName, FName const& themeWeather, FName const& audioStateThemes, FName const& audioStateWeather, FName const& audioThemeEvent, TSoftObjectPtr<UAkAudioBank> const& audioThemeSoundBank, const FString& mapName, int32 tileCount, TArray<FDependency> const& levelDependencies, FName const& specialEventId); \
	virtual void Multicast_SetGameEnded_Implementation(bool hasServerLeftGame); \
	virtual void Multicast_SetGameLevelEnded_Implementation(EEndGameReason endGameReason); \
	virtual void Multicast_SetGameLevelLoaded_Implementation(bool gameLevelLoaded); \
	virtual void Multicast_SetLostServerConnection_Implementation(bool hasLostServerConnection); \
	virtual void Multicast_SetServerLeftGame_Implementation(bool hasServerLeftGame); \
	virtual void Multicast_UpdateCharacterFromGamePreset_Implementation(ADBDPlayerState_Menu* playerState_Menu, FGamePresetData const& gamePresetData); \
 \
	DECLARE_FUNCTION(execAddTrap); \
	DECLARE_FUNCTION(execAuthority_DeactivateAI); \
	DECLARE_FUNCTION(execAuthority_EnableObsession); \
	DECLARE_FUNCTION(execAuthority_EscapeThroughHatch); \
	DECLARE_FUNCTION(execAuthority_EvaluateObsessionTarget); \
	DECLARE_FUNCTION(execAuthority_SetAllPlayerLoaded); \
	DECLARE_FUNCTION(execAuthority_SetEscapeDoorOpened); \
	DECLARE_FUNCTION(execAuthority_SetGameLevelCreated); \
	DECLARE_FUNCTION(execAuthority_SetGameLevelEnded); \
	DECLARE_FUNCTION(execAuthority_SetGameLevelLoaded); \
	DECLARE_FUNCTION(execAuthority_SetGameSelectedOffering); \
	DECLARE_FUNCTION(execAuthority_SetHatchOpen); \
	DECLARE_FUNCTION(execAuthority_SetLevelReadyToPlay); \
	DECLARE_FUNCTION(execAuthority_SetSurvivorLeft); \
	DECLARE_FUNCTION(execBroadcastOnSetBuildLevelData); \
	DECLARE_FUNCTION(execCallOnIntroComplete); \
	DECLARE_FUNCTION(execCallOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execCallOnSlasherSet); \
	DECLARE_FUNCTION(execGetCharacterCollection); \
	DECLARE_FUNCTION(execGetCollectableCollection); \
	DECLARE_FUNCTION(execGetEndGameStateComponent); \
	DECLARE_FUNCTION(execGetGameLevelLoaded); \
	DECLARE_FUNCTION(execGetInGameBaseTraps); \
	DECLARE_FUNCTION(execGetInGameEscapeDoors); \
	DECLARE_FUNCTION(execGetInGameGenerators); \
	DECLARE_FUNCTION(execGetInGameHatches); \
	DECLARE_FUNCTION(execGetInGameMeatHooks); \
	DECLARE_FUNCTION(execGetInGamePallets); \
	DECLARE_FUNCTION(execGetInGameReverseBearTrapRemovers); \
	DECLARE_FUNCTION(execGetInGameSearchables); \
	DECLARE_FUNCTION(execGetInGameWindows); \
	DECLARE_FUNCTION(execGetIsGameEnded); \
	DECLARE_FUNCTION(execGetKiller); \
	DECLARE_FUNCTION(execGetKillerIntroCompletedNormalized); \
	DECLARE_FUNCTION(execGetLevelData); \
	DECLARE_FUNCTION(execGetLevelThemeAudioSoundBankAssetPtr); \
	DECLARE_FUNCTION(execGetLocalPlayerBasePawn); \
	DECLARE_FUNCTION(execGetLocalPlayerPawn); \
	DECLARE_FUNCTION(execGetLocalPlayerState); \
	DECLARE_FUNCTION(execGetMapThemeName); \
	DECLARE_FUNCTION(execGetNumberOfActiveSurvivors); \
	DECLARE_FUNCTION(execGetNumberOfOtherActiveSurvivors); \
	DECLARE_FUNCTION(execGetObsessionTarget); \
	DECLARE_FUNCTION(execGetPlayerRoleCounts); \
	DECLARE_FUNCTION(execGetPlayersReadyToStart); \
	DECLARE_FUNCTION(execGetPlayerStateByIDString); \
	DECLARE_FUNCTION(execGetPlayerStateByMirrorsID); \
	DECLARE_FUNCTION(execGetRemainingGeneratorsNeeded); \
	DECLARE_FUNCTION(execGetRequiredActivatedGeneratorCount); \
	DECLARE_FUNCTION(execGetSelectedOffering); \
	DECLARE_FUNCTION(execGetSelectedOfferings); \
	DECLARE_FUNCTION(execGetSpecialEventGameplaySpawnerComponent); \
	DECLARE_FUNCTION(execGetSurvivorLeft); \
	DECLARE_FUNCTION(execGetTotems); \
	DECLARE_FUNCTION(execGetTraps); \
	DECLARE_FUNCTION(execIntroCompleted); \
	DECLARE_FUNCTION(execIsEscapeDoorActivated); \
	DECLARE_FUNCTION(execIsEscapeDoorOpen); \
	DECLARE_FUNCTION(execIsEscapeRequirementCompleted); \
	DECLARE_FUNCTION(execIsHatchVisible); \
	DECLARE_FUNCTION(execIsIntroCompleted); \
	DECLARE_FUNCTION(execIsLevelReadyToPlay); \
	DECLARE_FUNCTION(execIsLevelSetupDone); \
	DECLARE_FUNCTION(execIsLightingGenerated); \
	DECLARE_FUNCTION(execIsObsessionTargetAlive); \
	DECLARE_FUNCTION(execIsObsessionTargetAliveInLevel); \
	DECLARE_FUNCTION(execIsOfferingReceived); \
	DECLARE_FUNCTION(execIsOnePlayerLeft); \
	DECLARE_FUNCTION(execIsPlayerDistributionReady); \
	DECLARE_FUNCTION(execMulticast_OnGameStarted); \
	DECLARE_FUNCTION(execMulticast_SendEnsureToClients); \
	DECLARE_FUNCTION(execMulticast_SendHVSPlusState); \
	DECLARE_FUNCTION(execMulticast_SetBuiltLevelData); \
	DECLARE_FUNCTION(execMulticast_SetGameEnded); \
	DECLARE_FUNCTION(execMulticast_SetGameLevelEnded); \
	DECLARE_FUNCTION(execMulticast_SetGameLevelLoaded); \
	DECLARE_FUNCTION(execMulticast_SetLostServerConnection); \
	DECLARE_FUNCTION(execMulticast_SetServerLeftGame); \
	DECLARE_FUNCTION(execMulticast_UpdateCharacterFromGamePreset); \
	DECLARE_FUNCTION(execOnRep_ActivatedGeneratorCount); \
	DECLARE_FUNCTION(execOnRep_BuildLevelData); \
	DECLARE_FUNCTION(execOnRep_EscapeDoorActivated); \
	DECLARE_FUNCTION(execOnRep_GamePresetData); \
	DECLARE_FUNCTION(execOnRep_HatchOpened); \
	DECLARE_FUNCTION(execOnRep_LobbyId); \
	DECLARE_FUNCTION(execOnRep_ObsessionTarget); \
	DECLARE_FUNCTION(execOnRep_OnGameLevelCreated); \
	DECLARE_FUNCTION(execOnRep_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_PlayersReadyToStart); \
	DECLARE_FUNCTION(execOnRep_RequiredActivatedGeneratorCount); \
	DECLARE_FUNCTION(execOnRep_SecondsLeftInLobby); \
	DECLARE_FUNCTION(execOnRep_SessionId); \
	DECLARE_FUNCTION(execOnRep_SurvivorLeft); \
	DECLARE_FUNCTION(execRemoveTrap); \
	DECLARE_FUNCTION(execResetGameLevelStatus); \
	DECLARE_FUNCTION(execServer_UpdateGameRole); \
	DECLARE_FUNCTION(execSetBuiltLevelData); \
	DECLARE_FUNCTION(execSetDisplayMapName); \
	DECLARE_FUNCTION(execSetGameLevelEnded); \
	DECLARE_FUNCTION(execSetKillerIntroCompletedNormalized); \
	DECLARE_FUNCTION(execSetPlayersReadyToStart); \
	DECLARE_FUNCTION(execSortOfferings);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_EVENT_PARMS \
	struct DBDGameState_eventMulticast_SendEnsureToClients_Parms \
	{ \
		FString ensure; \
	}; \
	struct DBDGameState_eventMulticast_SendHVSPlusState_Parms \
	{ \
		bool enabled; \
	}; \
	struct DBDGameState_eventMulticast_SetBuiltLevelData_Parms \
	{ \
		FName themeName; \
		FName themeWeather; \
		FName audioStateThemes; \
		FName audioStateWeather; \
		FName audioThemeEvent; \
		TSoftObjectPtr<UAkAudioBank> audioThemeSoundBank; \
		FString mapName; \
		int32 tileCount; \
		TArray<FDependency> levelDependencies; \
		FName specialEventId; \
	}; \
	struct DBDGameState_eventMulticast_SetGameEnded_Parms \
	{ \
		bool hasServerLeftGame; \
	}; \
	struct DBDGameState_eventMulticast_SetGameLevelEnded_Parms \
	{ \
		EEndGameReason endGameReason; \
	}; \
	struct DBDGameState_eventMulticast_SetGameLevelLoaded_Parms \
	{ \
		bool gameLevelLoaded; \
	}; \
	struct DBDGameState_eventMulticast_SetLostServerConnection_Parms \
	{ \
		bool hasLostServerConnection; \
	}; \
	struct DBDGameState_eventMulticast_SetServerLeftGame_Parms \
	{ \
		bool hasServerLeftGame; \
	}; \
	struct DBDGameState_eventMulticast_UpdateCharacterFromGamePreset_Parms \
	{ \
		ADBDPlayerState_Menu* playerState_Menu; \
		FGamePresetData gamePresetData; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDGameState(); \
	friend struct Z_Construct_UClass_ADBDGameState_Statics; \
public: \
	DECLARE_CLASS(ADBDGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDGameState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CamperDeadCount=NETFIELD_REP_START, \
		CamperInMeatLockerCount, \
		CamperEscaped, \
		WaitingForEscape, \
		CamperCount, \
		LeaveSpectateRequested, \
		SecondsLeftInLobby, \
		_playersReadyToStart, \
		_builtLevelData, \
		_levelOfferings, \
		_sessionId, \
		_lobbyId, \
		_activatedGeneratorCount, \
		_requiredActivatedGeneratorCount, \
		_escapeDoorActivated, \
		_escapeDoorOpened, \
		_isHatchOpen, \
		_levelReadyToPlay, \
		_playerDistributionReady, \
		_usingWeakenedMechanic, \
		_survivorLeft, \
		_obsessionTarget, \
		_gamePresetData, \
		_gameLevelCreated, \
		_matchStartTime, \
		_isServerDedicated, \
		_maxSurvivorCount, \
		_serverBuildVersion, \
		NETFIELD_REP_END=_serverBuildVersion	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_INCLASS \
private: \
	static void StaticRegisterNativesADBDGameState(); \
	friend struct Z_Construct_UClass_ADBDGameState_Statics; \
public: \
	DECLARE_CLASS(ADBDGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDGameState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CamperDeadCount=NETFIELD_REP_START, \
		CamperInMeatLockerCount, \
		CamperEscaped, \
		WaitingForEscape, \
		CamperCount, \
		LeaveSpectateRequested, \
		SecondsLeftInLobby, \
		_playersReadyToStart, \
		_builtLevelData, \
		_levelOfferings, \
		_sessionId, \
		_lobbyId, \
		_activatedGeneratorCount, \
		_requiredActivatedGeneratorCount, \
		_escapeDoorActivated, \
		_escapeDoorOpened, \
		_isHatchOpen, \
		_levelReadyToPlay, \
		_playerDistributionReady, \
		_usingWeakenedMechanic, \
		_survivorLeft, \
		_obsessionTarget, \
		_gamePresetData, \
		_gameLevelCreated, \
		_matchStartTime, \
		_isServerDedicated, \
		_maxSurvivorCount, \
		_serverBuildVersion, \
		NETFIELD_REP_END=_serverBuildVersion	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDGameState(ADBDGameState&&); \
	NO_API ADBDGameState(const ADBDGameState&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDGameState(ADBDGameState&&); \
	NO_API ADBDGameState(const ADBDGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDGameState)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Slasher() { return STRUCT_OFFSET(ADBDGameState, Slasher); } \
	FORCEINLINE static uint32 __PPO___renderingSequencer() { return STRUCT_OFFSET(ADBDGameState, _renderingSequencer); } \
	FORCEINLINE static uint32 __PPO___camperHookedInBasementCount() { return STRUCT_OFFSET(ADBDGameState, _camperHookedInBasementCount); } \
	FORCEINLINE static uint32 __PPO___playersReadyToStart() { return STRUCT_OFFSET(ADBDGameState, _playersReadyToStart); } \
	FORCEINLINE static uint32 __PPO___builtLevelData() { return STRUCT_OFFSET(ADBDGameState, _builtLevelData); } \
	FORCEINLINE static uint32 __PPO___levelOfferings() { return STRUCT_OFFSET(ADBDGameState, _levelOfferings); } \
	FORCEINLINE static uint32 __PPO___clipManager() { return STRUCT_OFFSET(ADBDGameState, _clipManager); } \
	FORCEINLINE static uint32 __PPO___sessionId() { return STRUCT_OFFSET(ADBDGameState, _sessionId); } \
	FORCEINLINE static uint32 __PPO___lobbyId() { return STRUCT_OFFSET(ADBDGameState, _lobbyId); } \
	FORCEINLINE static uint32 __PPO___activatedGeneratorCount() { return STRUCT_OFFSET(ADBDGameState, _activatedGeneratorCount); } \
	FORCEINLINE static uint32 __PPO___requiredActivatedGeneratorCount() { return STRUCT_OFFSET(ADBDGameState, _requiredActivatedGeneratorCount); } \
	FORCEINLINE static uint32 __PPO___escapeDoorActivated() { return STRUCT_OFFSET(ADBDGameState, _escapeDoorActivated); } \
	FORCEINLINE static uint32 __PPO___escapeDoorOpened() { return STRUCT_OFFSET(ADBDGameState, _escapeDoorOpened); } \
	FORCEINLINE static uint32 __PPO___isHatchOpen() { return STRUCT_OFFSET(ADBDGameState, _isHatchOpen); } \
	FORCEINLINE static uint32 __PPO___levelReadyToPlay() { return STRUCT_OFFSET(ADBDGameState, _levelReadyToPlay); } \
	FORCEINLINE static uint32 __PPO___playerDistributionReady() { return STRUCT_OFFSET(ADBDGameState, _playerDistributionReady); } \
	FORCEINLINE static uint32 __PPO___usingWeakenedMechanic() { return STRUCT_OFFSET(ADBDGameState, _usingWeakenedMechanic); } \
	FORCEINLINE static uint32 __PPO___survivorLeft() { return STRUCT_OFFSET(ADBDGameState, _survivorLeft); } \
	FORCEINLINE static uint32 __PPO___meatHooks() { return STRUCT_OFFSET(ADBDGameState, _meatHooks); } \
	FORCEINLINE static uint32 __PPO___searchables() { return STRUCT_OFFSET(ADBDGameState, _searchables); } \
	FORCEINLINE static uint32 __PPO___generators() { return STRUCT_OFFSET(ADBDGameState, _generators); } \
	FORCEINLINE static uint32 __PPO___escapeDoors() { return STRUCT_OFFSET(ADBDGameState, _escapeDoors); } \
	FORCEINLINE static uint32 __PPO___hatches() { return STRUCT_OFFSET(ADBDGameState, _hatches); } \
	FORCEINLINE static uint32 __PPO___reverseBearTrapRemovers() { return STRUCT_OFFSET(ADBDGameState, _reverseBearTrapRemovers); } \
	FORCEINLINE static uint32 __PPO___baseTraps() { return STRUCT_OFFSET(ADBDGameState, _baseTraps); } \
	FORCEINLINE static uint32 __PPO___pallets() { return STRUCT_OFFSET(ADBDGameState, _pallets); } \
	FORCEINLINE static uint32 __PPO___windows() { return STRUCT_OFFSET(ADBDGameState, _windows); } \
	FORCEINLINE static uint32 __PPO___lockers() { return STRUCT_OFFSET(ADBDGameState, _lockers); } \
	FORCEINLINE static uint32 __PPO___breakableWalls() { return STRUCT_OFFSET(ADBDGameState, _breakableWalls); } \
	FORCEINLINE static uint32 __PPO___totems() { return STRUCT_OFFSET(ADBDGameState, _totems); } \
	FORCEINLINE static uint32 __PPO___mapBoxSphereBounds() { return STRUCT_OFFSET(ADBDGameState, _mapBoxSphereBounds); } \
	FORCEINLINE static uint32 __PPO___camperEscapedThroughHatch() { return STRUCT_OFFSET(ADBDGameState, _camperEscapedThroughHatch); } \
	FORCEINLINE static uint32 __PPO___obsessionTarget() { return STRUCT_OFFSET(ADBDGameState, _obsessionTarget); } \
	FORCEINLINE static uint32 __PPO___cachedObsessionEscaped() { return STRUCT_OFFSET(ADBDGameState, _cachedObsessionEscaped); } \
	FORCEINLINE static uint32 __PPO___traps() { return STRUCT_OFFSET(ADBDGameState, _traps); } \
	FORCEINLINE static uint32 __PPO___gamePresetData() { return STRUCT_OFFSET(ADBDGameState, _gamePresetData); } \
	FORCEINLINE static uint32 __PPO___gameLevelLoaded() { return STRUCT_OFFSET(ADBDGameState, _gameLevelLoaded); } \
	FORCEINLINE static uint32 __PPO___gameLevelCreated() { return STRUCT_OFFSET(ADBDGameState, _gameLevelCreated); } \
	FORCEINLINE static uint32 __PPO___gameLevelEnded() { return STRUCT_OFFSET(ADBDGameState, _gameLevelEnded); } \
	FORCEINLINE static uint32 __PPO___gameEndedReason() { return STRUCT_OFFSET(ADBDGameState, _gameEndedReason); } \
	FORCEINLINE static uint32 __PPO___endGameState() { return STRUCT_OFFSET(ADBDGameState, _endGameState); } \
	FORCEINLINE static uint32 __PPO___scourgeHookManager() { return STRUCT_OFFSET(ADBDGameState, _scourgeHookManager); } \
	FORCEINLINE static uint32 __PPO___actorPairQueryEvaluatorComponent() { return STRUCT_OFFSET(ADBDGameState, _actorPairQueryEvaluatorComponent); } \
	FORCEINLINE static uint32 __PPO___characterCollection() { return STRUCT_OFFSET(ADBDGameState, _characterCollection); } \
	FORCEINLINE static uint32 __PPO___collectableCollection() { return STRUCT_OFFSET(ADBDGameState, _collectableCollection); } \
	FORCEINLINE static uint32 __PPO___serverTimeProvider() { return STRUCT_OFFSET(ADBDGameState, _serverTimeProvider); } \
	FORCEINLINE static uint32 __PPO___inGameAssetPreloaderComponent() { return STRUCT_OFFSET(ADBDGameState, _inGameAssetPreloaderComponent); } \
	FORCEINLINE static uint32 __PPO___matchStartTime() { return STRUCT_OFFSET(ADBDGameState, _matchStartTime); } \
	FORCEINLINE static uint32 __PPO___isServerDedicated() { return STRUCT_OFFSET(ADBDGameState, _isServerDedicated); } \
	FORCEINLINE static uint32 __PPO___maxSurvivorCount() { return STRUCT_OFFSET(ADBDGameState, _maxSurvivorCount); } \
	FORCEINLINE static uint32 __PPO___serverBuildVersion() { return STRUCT_OFFSET(ADBDGameState, _serverBuildVersion); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_58_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
