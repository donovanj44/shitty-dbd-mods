// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UActorKnowledgeCollection;
class UWorld;
class UBonusPointEventsManager;
class UPrimitiveCollection;
class UCinematicManager;
class UConsentManager;
class ADBDPlayerState;
class UDecalSpawnerCollection;
class UGameEventDispatcher;
class ACamperPlayer;
class ASlasherPlayer;
class UInventoryHandler;
class ABaseSky;
class ULightingHelper;
class ULightingInterpolator;
class ULocalEventManager;
class ULocalPlayer;
class APlayerController;
class UMapActorDB;
class UDBDPlayerLevelManager;
class UPlayerNameRegistration;
class URankManager;
class USoftBanManager;
class USpecialEventManager;
class UDBDTimeUtilities;
enum class EOfferingEffectType : uint8;
class AActor;
#ifdef DEADBYDAYLIGHT_DBDGameInstance_generated_h
#error "DBDGameInstance.generated.h already included, missing '#pragma once' in DBDGameInstance.h"
#endif
#define DEADBYDAYLIGHT_DBDGameInstance_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_83_DELEGATE \
struct _Script_DeadByDaylight_eventDBDGameInstanceOnPlayerDisconnect_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FDBDGameInstanceOnPlayerDisconnect_DelegateWrapper(const FMulticastScriptDelegate& DBDGameInstanceOnPlayerDisconnect, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventDBDGameInstanceOnPlayerDisconnect_Parms Parms; \
	Parms.player=player; \
	DBDGameInstanceOnPlayerDisconnect.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddActorKnowledgeCollection); \
	DECLARE_FUNCTION(execAsync_GenerateBloodWebForCurrentCharacter); \
	DECLARE_FUNCTION(execAuthority_SimulatePerks); \
	DECLARE_FUNCTION(execBeginLoadingScreen); \
	DECLARE_FUNCTION(execDBD_AddToAchievementStat); \
	DECLARE_FUNCTION(execDBD_AddToRitual); \
	DECLARE_FUNCTION(execDBD_AnalyticsReset); \
	DECLARE_FUNCTION(execDBD_AnalyticsTest); \
	DECLARE_FUNCTION(execDBD_ApplyMist); \
	DECLARE_FUNCTION(execDBD_ApplyNoMist); \
	DECLARE_FUNCTION(execDBD_AssignNewRitual); \
	DECLARE_FUNCTION(execDBD_ChangeSteamOverlayPosition); \
	DECLARE_FUNCTION(execDBD_CheckForNewContent); \
	DECLARE_FUNCTION(execDBD_ClaimRitualReward); \
	DECLARE_FUNCTION(execDBD_ClaimRitualRewardAtIndex); \
	DECLARE_FUNCTION(execDBD_DestroySteamInventory); \
	DECLARE_FUNCTION(execDBD_DisplayCurrentAchievementStat); \
	DECLARE_FUNCTION(execDBD_DumpSessions); \
	DECLARE_FUNCTION(execDBD_GenerateBloodWeb); \
	DECLARE_FUNCTION(execDBD_GenerateNewRandomRitual); \
	DECLARE_FUNCTION(execDBD_GenerateNewRitual); \
	DECLARE_FUNCTION(execDBD_GetRegion); \
	DECLARE_FUNCTION(execDBD_LogBloodWebDefinition); \
	DECLARE_FUNCTION(execDBD_PIXBeginCapture); \
	DECLARE_FUNCTION(execDBD_PIXEndCapture); \
	DECLARE_FUNCTION(execDBD_PrintAudioConfig); \
	DECLARE_FUNCTION(execDBD_RemoveRitual); \
	DECLARE_FUNCTION(execDBD_ResetAllRituals); \
	DECLARE_FUNCTION(execDBD_ResetCurrentAchievementStat); \
	DECLARE_FUNCTION(execDBD_ResetCurrentAchievementStats); \
	DECLARE_FUNCTION(execDBD_ResetSaveGameInventory); \
	DECLARE_FUNCTION(execDBD_SendFriendInvite); \
	DECLARE_FUNCTION(execDBD_SetFearMarketDate); \
	DECLARE_FUNCTION(execDBD_SetStatsUploadEnabled); \
	DECLARE_FUNCTION(execDBD_TestDiceRoll); \
	DECLARE_FUNCTION(execDBD_TestRegion); \
	DECLARE_FUNCTION(execDBD_TestSaveFile); \
	DECLARE_FUNCTION(execDBD_TestTickedDiceRoll); \
	DECLARE_FUNCTION(execDBD_ToggleOnlineRole); \
	DECLARE_FUNCTION(execDBD_UpdateSteamInventory); \
	DECLARE_FUNCTION(execDBDDeleteLocalSaveFile); \
	DECLARE_FUNCTION(execDBDForceLoad); \
	DECLARE_FUNCTION(execDBDForceSave); \
	DECLARE_FUNCTION(execDBDResetSaveData); \
	DECLARE_FUNCTION(execDBDToggleLightingLoaded); \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execForceCloseGame); \
	DECLARE_FUNCTION(execGetBonusPointEventsManager); \
	DECLARE_FUNCTION(execGetCharacterClippingPrimitiveCollection); \
	DECLARE_FUNCTION(execGetCharacterDefaultItem); \
	DECLARE_FUNCTION(execGetCinematicManager); \
	DECLARE_FUNCTION(execGetConsentManager); \
	DECLARE_FUNCTION(execGetDeadOrDisconnectedCampersCount); \
	DECLARE_FUNCTION(execGetDecalSpawnerCollection); \
	DECLARE_FUNCTION(execGetGameEventDispatcher); \
	DECLARE_FUNCTION(execGetInGameAliveSurvivors); \
	DECLARE_FUNCTION(execGetInGameKiller); \
	DECLARE_FUNCTION(execGetInGameKillers); \
	DECLARE_FUNCTION(execGetInGamePlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivors); \
	DECLARE_FUNCTION(execGetInventoryHandler); \
	DECLARE_FUNCTION(execGetLevelLighting); \
	DECLARE_FUNCTION(execGetLightingHelper); \
	DECLARE_FUNCTION(execGetLightInterpolator); \
	DECLARE_FUNCTION(execGetLocalEventManager); \
	DECLARE_FUNCTION(execGetLocallyControlledCharacter); \
	DECLARE_FUNCTION(execGetLocalPlayer); \
	DECLARE_FUNCTION(execGetLocalPlayerController); \
	DECLARE_FUNCTION(execGetLocalPlayerState); \
	DECLARE_FUNCTION(execGetMapActorDB); \
	DECLARE_FUNCTION(execGetMaxSurvivorCount); \
	DECLARE_FUNCTION(execGetPlayerLevelManager); \
	DECLARE_FUNCTION(execGetPlayerNameRegistration); \
	DECLARE_FUNCTION(execGetRankManager); \
	DECLARE_FUNCTION(execGetSoftBanManager); \
	DECLARE_FUNCTION(execGetSpecialEventManager); \
	DECLARE_FUNCTION(execGetTimeUtils); \
	DECLARE_FUNCTION(execGotoSplashScreen); \
	DECLARE_FUNCTION(execHasOfferingByType); \
	DECLARE_FUNCTION(execHasOfferingOfType); \
	DECLARE_FUNCTION(execIsActorKnown); \
	DECLARE_FUNCTION(execOnTimeTravelComplete); \
	DECLARE_FUNCTION(execRemoveActorKnowledgeCollection); \
	DECLARE_FUNCTION(execSimulateOfferingSequence); \
	DECLARE_FUNCTION(execStartOfferingSequence);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddActorKnowledgeCollection); \
	DECLARE_FUNCTION(execAsync_GenerateBloodWebForCurrentCharacter); \
	DECLARE_FUNCTION(execAuthority_SimulatePerks); \
	DECLARE_FUNCTION(execBeginLoadingScreen); \
	DECLARE_FUNCTION(execDBD_AddToAchievementStat); \
	DECLARE_FUNCTION(execDBD_AddToRitual); \
	DECLARE_FUNCTION(execDBD_AnalyticsReset); \
	DECLARE_FUNCTION(execDBD_AnalyticsTest); \
	DECLARE_FUNCTION(execDBD_ApplyMist); \
	DECLARE_FUNCTION(execDBD_ApplyNoMist); \
	DECLARE_FUNCTION(execDBD_AssignNewRitual); \
	DECLARE_FUNCTION(execDBD_ChangeSteamOverlayPosition); \
	DECLARE_FUNCTION(execDBD_CheckForNewContent); \
	DECLARE_FUNCTION(execDBD_ClaimRitualReward); \
	DECLARE_FUNCTION(execDBD_ClaimRitualRewardAtIndex); \
	DECLARE_FUNCTION(execDBD_DestroySteamInventory); \
	DECLARE_FUNCTION(execDBD_DisplayCurrentAchievementStat); \
	DECLARE_FUNCTION(execDBD_DumpSessions); \
	DECLARE_FUNCTION(execDBD_GenerateBloodWeb); \
	DECLARE_FUNCTION(execDBD_GenerateNewRandomRitual); \
	DECLARE_FUNCTION(execDBD_GenerateNewRitual); \
	DECLARE_FUNCTION(execDBD_GetRegion); \
	DECLARE_FUNCTION(execDBD_LogBloodWebDefinition); \
	DECLARE_FUNCTION(execDBD_PIXBeginCapture); \
	DECLARE_FUNCTION(execDBD_PIXEndCapture); \
	DECLARE_FUNCTION(execDBD_PrintAudioConfig); \
	DECLARE_FUNCTION(execDBD_RemoveRitual); \
	DECLARE_FUNCTION(execDBD_ResetAllRituals); \
	DECLARE_FUNCTION(execDBD_ResetCurrentAchievementStat); \
	DECLARE_FUNCTION(execDBD_ResetCurrentAchievementStats); \
	DECLARE_FUNCTION(execDBD_ResetSaveGameInventory); \
	DECLARE_FUNCTION(execDBD_SendFriendInvite); \
	DECLARE_FUNCTION(execDBD_SetFearMarketDate); \
	DECLARE_FUNCTION(execDBD_SetStatsUploadEnabled); \
	DECLARE_FUNCTION(execDBD_TestDiceRoll); \
	DECLARE_FUNCTION(execDBD_TestRegion); \
	DECLARE_FUNCTION(execDBD_TestSaveFile); \
	DECLARE_FUNCTION(execDBD_TestTickedDiceRoll); \
	DECLARE_FUNCTION(execDBD_ToggleOnlineRole); \
	DECLARE_FUNCTION(execDBD_UpdateSteamInventory); \
	DECLARE_FUNCTION(execDBDDeleteLocalSaveFile); \
	DECLARE_FUNCTION(execDBDForceLoad); \
	DECLARE_FUNCTION(execDBDForceSave); \
	DECLARE_FUNCTION(execDBDResetSaveData); \
	DECLARE_FUNCTION(execDBDToggleLightingLoaded); \
	DECLARE_FUNCTION(execEndLoadingScreen); \
	DECLARE_FUNCTION(execForceCloseGame); \
	DECLARE_FUNCTION(execGetBonusPointEventsManager); \
	DECLARE_FUNCTION(execGetCharacterClippingPrimitiveCollection); \
	DECLARE_FUNCTION(execGetCharacterDefaultItem); \
	DECLARE_FUNCTION(execGetCinematicManager); \
	DECLARE_FUNCTION(execGetConsentManager); \
	DECLARE_FUNCTION(execGetDeadOrDisconnectedCampersCount); \
	DECLARE_FUNCTION(execGetDecalSpawnerCollection); \
	DECLARE_FUNCTION(execGetGameEventDispatcher); \
	DECLARE_FUNCTION(execGetInGameAliveSurvivors); \
	DECLARE_FUNCTION(execGetInGameKiller); \
	DECLARE_FUNCTION(execGetInGameKillers); \
	DECLARE_FUNCTION(execGetInGamePlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivors); \
	DECLARE_FUNCTION(execGetInventoryHandler); \
	DECLARE_FUNCTION(execGetLevelLighting); \
	DECLARE_FUNCTION(execGetLightingHelper); \
	DECLARE_FUNCTION(execGetLightInterpolator); \
	DECLARE_FUNCTION(execGetLocalEventManager); \
	DECLARE_FUNCTION(execGetLocallyControlledCharacter); \
	DECLARE_FUNCTION(execGetLocalPlayer); \
	DECLARE_FUNCTION(execGetLocalPlayerController); \
	DECLARE_FUNCTION(execGetLocalPlayerState); \
	DECLARE_FUNCTION(execGetMapActorDB); \
	DECLARE_FUNCTION(execGetMaxSurvivorCount); \
	DECLARE_FUNCTION(execGetPlayerLevelManager); \
	DECLARE_FUNCTION(execGetPlayerNameRegistration); \
	DECLARE_FUNCTION(execGetRankManager); \
	DECLARE_FUNCTION(execGetSoftBanManager); \
	DECLARE_FUNCTION(execGetSpecialEventManager); \
	DECLARE_FUNCTION(execGetTimeUtils); \
	DECLARE_FUNCTION(execGotoSplashScreen); \
	DECLARE_FUNCTION(execHasOfferingByType); \
	DECLARE_FUNCTION(execHasOfferingOfType); \
	DECLARE_FUNCTION(execIsActorKnown); \
	DECLARE_FUNCTION(execOnTimeTravelComplete); \
	DECLARE_FUNCTION(execRemoveActorKnowledgeCollection); \
	DECLARE_FUNCTION(execSimulateOfferingSequence); \
	DECLARE_FUNCTION(execStartOfferingSequence);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDGameInstance(); \
	friend struct Z_Construct_UClass_UDBDGameInstance_Statics; \
public: \
	DECLARE_CLASS(UDBDGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDGameInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUDBDGameInstance(); \
	friend struct Z_Construct_UClass_UDBDGameInstance_Statics; \
public: \
	DECLARE_CLASS(UDBDGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDGameInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDGameInstance(UDBDGameInstance&&); \
	NO_API UDBDGameInstance(const UDBDGameInstance&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDGameInstance(UDBDGameInstance&&); \
	NO_API UDBDGameInstance(const UDBDGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDGameInstance)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___assetLibraryManager() { return STRUCT_OFFSET(UDBDGameInstance, _assetLibraryManager); } \
	FORCEINLINE static uint32 __PPO___bloodwebManagerClass() { return STRUCT_OFFSET(UDBDGameInstance, _bloodwebManagerClass); } \
	FORCEINLINE static uint32 __PPO___onlineTransactionService() { return STRUCT_OFFSET(UDBDGameInstance, _onlineTransactionService); } \
	FORCEINLINE static uint32 __PPO___sharedAuthenticationManagerClass() { return STRUCT_OFFSET(UDBDGameInstance, _sharedAuthenticationManagerClass); } \
	FORCEINLINE static uint32 __PPO___persistentData() { return STRUCT_OFFSET(UDBDGameInstance, _persistentData); } \
	FORCEINLINE static uint32 __PPO___playerDataFacade() { return STRUCT_OFFSET(UDBDGameInstance, _playerDataFacade); } \
	FORCEINLINE static uint32 __PPO___rankManager() { return STRUCT_OFFSET(UDBDGameInstance, _rankManager); } \
	FORCEINLINE static uint32 __PPO___playerLevelManager() { return STRUCT_OFFSET(UDBDGameInstance, _playerLevelManager); } \
	FORCEINLINE static uint32 __PPO___playerNameRegistration() { return STRUCT_OFFSET(UDBDGameInstance, _playerNameRegistration); } \
	FORCEINLINE static uint32 __PPO___specialEventManager() { return STRUCT_OFFSET(UDBDGameInstance, _specialEventManager); } \
	FORCEINLINE static uint32 __PPO___bonusPointEventsManager() { return STRUCT_OFFSET(UDBDGameInstance, _bonusPointEventsManager); } \
	FORCEINLINE static uint32 __PPO___timeTravelManager() { return STRUCT_OFFSET(UDBDGameInstance, _timeTravelManager); } \
	FORCEINLINE static uint32 __PPO___toastManager() { return STRUCT_OFFSET(UDBDGameInstance, _toastManager); } \
	FORCEINLINE static uint32 __PPO___socialNotificationFactory() { return STRUCT_OFFSET(UDBDGameInstance, _socialNotificationFactory); } \
	FORCEINLINE static uint32 __PPO___partyFacade() { return STRUCT_OFFSET(UDBDGameInstance, _partyFacade); } \
	FORCEINLINE static uint32 __PPO___penaltyTracker() { return STRUCT_OFFSET(UDBDGameInstance, _penaltyTracker); } \
	FORCEINLINE static uint32 __PPO___ligthingHelper() { return STRUCT_OFFSET(UDBDGameInstance, _ligthingHelper); } \
	FORCEINLINE static uint32 __PPO___offeringHandler() { return STRUCT_OFFSET(UDBDGameInstance, _offeringHandler); } \
	FORCEINLINE static uint32 __PPO___actorKnowledgeCollections() { return STRUCT_OFFSET(UDBDGameInstance, _actorKnowledgeCollections); } \
	FORCEINLINE static uint32 __PPO___mapActorDB() { return STRUCT_OFFSET(UDBDGameInstance, _mapActorDB); } \
	FORCEINLINE static uint32 __PPO___interactionProficiencies() { return STRUCT_OFFSET(UDBDGameInstance, _interactionProficiencies); } \
	FORCEINLINE static uint32 __PPO___theHud() { return STRUCT_OFFSET(UDBDGameInstance, _theHud); } \
	FORCEINLINE static uint32 __PPO__BloodwebManager() { return STRUCT_OFFSET(UDBDGameInstance, BloodwebManager); } \
	FORCEINLINE static uint32 __PPO___sharedAuthenticationManager() { return STRUCT_OFFSET(UDBDGameInstance, _sharedAuthenticationManager); } \
	FORCEINLINE static uint32 __PPO___popupSequencer() { return STRUCT_OFFSET(UDBDGameInstance, _popupSequencer); } \
	FORCEINLINE static uint32 __PPO___popupFactory() { return STRUCT_OFFSET(UDBDGameInstance, _popupFactory); } \
	FORCEINLINE static uint32 __PPO___auth() { return STRUCT_OFFSET(UDBDGameInstance, _auth); } \
	FORCEINLINE static uint32 __PPO___eac() { return STRUCT_OFFSET(UDBDGameInstance, _eac); } \
	FORCEINLINE static uint32 __PPO___execObjects() { return STRUCT_OFFSET(UDBDGameInstance, _execObjects); } \
	FORCEINLINE static uint32 __PPO___networkFailureDetected() { return STRUCT_OFFSET(UDBDGameInstance, _networkFailureDetected); } \
	FORCEINLINE static uint32 __PPO___networkConnectionMonitoringOnly() { return STRUCT_OFFSET(UDBDGameInstance, _networkConnectionMonitoringOnly); } \
	FORCEINLINE static uint32 __PPO___achievementStatsUploadEnabled() { return STRUCT_OFFSET(UDBDGameInstance, _achievementStatsUploadEnabled); } \
	FORCEINLINE static uint32 __PPO___isDisconnected() { return STRUCT_OFFSET(UDBDGameInstance, _isDisconnected); } \
	FORCEINLINE static uint32 __PPO___isGamepadReconnected() { return STRUCT_OFFSET(UDBDGameInstance, _isGamepadReconnected); } \
	FORCEINLINE static uint32 __PPO___isProfileOffline() { return STRUCT_OFFSET(UDBDGameInstance, _isProfileOffline); } \
	FORCEINLINE static uint32 __PPO___isAppSuspended() { return STRUCT_OFFSET(UDBDGameInstance, _isAppSuspended); } \
	FORCEINLINE static uint32 __PPO___isAppResumed() { return STRUCT_OFFSET(UDBDGameInstance, _isAppResumed); } \
	FORCEINLINE static uint32 __PPO___isInvitationRejected() { return STRUCT_OFFSET(UDBDGameInstance, _isInvitationRejected); } \
	FORCEINLINE static uint32 __PPO___isAdditionalContentInstalled() { return STRUCT_OFFSET(UDBDGameInstance, _isAdditionalContentInstalled); } \
	FORCEINLINE static uint32 __PPO___isCloudInventoryInitialized() { return STRUCT_OFFSET(UDBDGameInstance, _isCloudInventoryInitialized); } \
	FORCEINLINE static uint32 __PPO___resultOfferingAndPerkEffects() { return STRUCT_OFFSET(UDBDGameInstance, _resultOfferingAndPerkEffects); } \
	FORCEINLINE static uint32 __PPO___inventoryHandler() { return STRUCT_OFFSET(UDBDGameInstance, _inventoryHandler); } \
	FORCEINLINE static uint32 __PPO___localEventManager() { return STRUCT_OFFSET(UDBDGameInstance, _localEventManager); } \
	FORCEINLINE static uint32 __PPO___playerReportManager() { return STRUCT_OFFSET(UDBDGameInstance, _playerReportManager); } \
	FORCEINLINE static uint32 __PPO___cinematicManager() { return STRUCT_OFFSET(UDBDGameInstance, _cinematicManager); } \
	FORCEINLINE static uint32 __PPO___softBanManager() { return STRUCT_OFFSET(UDBDGameInstance, _softBanManager); } \
	FORCEINLINE static uint32 __PPO___consentManager() { return STRUCT_OFFSET(UDBDGameInstance, _consentManager); } \
	FORCEINLINE static uint32 __PPO___onlineSystemHandler() { return STRUCT_OFFSET(UDBDGameInstance, _onlineSystemHandler); } \
	FORCEINLINE static uint32 __PPO___dedicatedServerManager() { return STRUCT_OFFSET(UDBDGameInstance, _dedicatedServerManager); } \
	FORCEINLINE static uint32 __PPO___regionFinder() { return STRUCT_OFFSET(UDBDGameInstance, _regionFinder); } \
	FORCEINLINE static uint32 __PPO___decalSpawnerCollection() { return STRUCT_OFFSET(UDBDGameInstance, _decalSpawnerCollection); } \
	FORCEINLINE static uint32 __PPO___characterClippingPrimitiveCollection() { return STRUCT_OFFSET(UDBDGameInstance, _characterClippingPrimitiveCollection); } \
	FORCEINLINE static uint32 __PPO___atlantaTooltipManager() { return STRUCT_OFFSET(UDBDGameInstance, _atlantaTooltipManager); } \
	FORCEINLINE static uint32 __PPO__LastProviderErrorCode() { return STRUCT_OFFSET(UDBDGameInstance, LastProviderErrorCode); } \
	FORCEINLINE static uint32 __PPO___disconnectError() { return STRUCT_OFFSET(UDBDGameInstance, _disconnectError); } \
	FORCEINLINE static uint32 __PPO___dateTimerUpdater() { return STRUCT_OFFSET(UDBDGameInstance, _dateTimerUpdater); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_85_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
