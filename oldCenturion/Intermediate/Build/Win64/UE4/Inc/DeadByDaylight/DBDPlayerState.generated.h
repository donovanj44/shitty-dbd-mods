// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameState : uint8;
enum class EDBDScoreTypes : uint8;
class AActor;
struct FGameplayTag;
struct FScoreEventData;
struct FGameEventData;
struct FAwardedScore;
enum class EPlayerRole : uint8;
struct FStatusViewSource;
class UGameplayNotificationManager;
#ifdef DEADBYDAYLIGHT_DBDPlayerState_generated_h
#error "DBDPlayerState.generated.h already included, missing '#pragma once' in DBDPlayerState.h"
#endif
#define DEADBYDAYLIGHT_DBDPlayerState_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_35_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameStateChanged_Parms \
{ \
	EGameState gameState; \
}; \
static inline void FDBDPlayerStateOnPlayerGameStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerStateOnPlayerGameStateChanged, const EGameState gameState) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameStateChanged_Parms Parms; \
	Parms.gameState=gameState; \
	DBDPlayerStateOnPlayerGameStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_34_DELEGATE \
static inline void FDBDPlayerStateOnGameStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerStateOnGameStateChanged) \
{ \
	DBDPlayerStateOnGameStateChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_33_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms \
{ \
	EDBDScoreTypes playerGameplayEventType; \
	float amount; \
	AActor* effector; \
	AActor* target; \
}; \
static inline void FDBDPlayerStateOnPlayerGameplayEvent_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerStateOnPlayerGameplayEvent, EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms Parms; \
	Parms.playerGameplayEventType=playerGameplayEventType; \
	Parms.amount=amount; \
	Parms.effector=effector; \
	Parms.target=target; \
	DBDPlayerStateOnPlayerGameplayEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_32_DELEGATE \
static inline void FDBDPlayerStateOnAIFinishedPlayingEvent_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerStateOnAIFinishedPlayingEvent) \
{ \
	DBDPlayerStateOnAIFinishedPlayingEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_RPC_WRAPPERS \
	virtual void Client_AtlantaUpdateInventoryItem_Implementation(FName const& itemid, int32 newCount); \
	virtual void Client_HandleEscapeScoreEvent_Implementation(); \
	virtual bool Client_RemotelyDispatchGameEvent_Validate(FGameplayTag const& , FGameEventData const& ); \
	virtual void Client_RemotelyDispatchGameEvent_Implementation(FGameplayTag const& gameEventType, FGameEventData const& gameEventData); \
	virtual bool Client_RemotelyDispatchGameEventWithScore_Validate(FGameplayTag const& , FGameEventData const& , FAwardedScore const& ); \
	virtual void Client_RemotelyDispatchGameEventWithScore_Implementation(FGameplayTag const& gameEventType, FGameEventData const& gameEventData, FAwardedScore const& awardedScore); \
	virtual void Client_RemoveItemFromInventory_Implementation(FName toRemove, bool updateLoadout); \
	virtual bool Client_SetGameRole_Validate(EPlayerRole ); \
	virtual void Client_SetGameRole_Implementation(EPlayerRole newRole); \
	virtual void Client_SetInParadise_Implementation(); \
	virtual void Client_UpdateWallet_Implementation(const FString& currencyId, int32 amount); \
	virtual bool Multicast_FireGameplayEvent_Validate(EDBDScoreTypes , float , AActor* , AActor* ); \
	virtual void Multicast_FireGameplayEvent_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target); \
	virtual bool Multicast_FireGameplayEventWithScore_Validate(EDBDScoreTypes , float , AActor* , AActor* , FAwardedScore const& ); \
	virtual void Multicast_FireGameplayEventWithScore_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, FAwardedScore const& awardedScore); \
	virtual void Multicast_SetAsDisconnected_Implementation(); \
	virtual void Multicast_SetAsLeftMatch_Implementation(); \
	virtual bool Multicast_SetInParadise_Validate(); \
	virtual void Multicast_SetInParadise_Implementation(); \
	virtual void Multicast_SetPlayerGameState_Implementation(EGameState newGameState, bool isEscapeHatch); \
	virtual void Multicast_SetSelectedCharacterId_Implementation(EPlayerRole forRole, int32 id, bool updateDisplayData); \
	virtual bool Server_HandleScoreEvent_Validate(FGameplayTag , FScoreEventData ); \
	virtual void Server_HandleScoreEvent_Implementation(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData); \
	virtual bool Server_SelectKiller_Validate(int32 ); \
	virtual void Server_SelectKiller_Implementation(int32 slasherIndex); \
	virtual bool Server_SelectSurvivor_Validate(int32 ); \
	virtual void Server_SelectSurvivor_Implementation(int32 camperIndex); \
	virtual bool Server_SetGameRole_Validate(EPlayerRole ); \
	virtual void Server_SetGameRole_Implementation(EPlayerRole newPlayerRole); \
	virtual bool Server_SetPlayerGameState_Validate(EGameState , bool ); \
	virtual void Server_SetPlayerGameState_Implementation(EGameState newGameState, bool isEscapeHatch); \
	virtual bool Server_SetSelectedCharacterId_Validate(EPlayerRole , int32 , bool ); \
	virtual void Server_SetSelectedCharacterId_Implementation(EPlayerRole forRole, int32 id, bool updateDisplayData); \
 \
	DECLARE_FUNCTION(execAuthority_CancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_EndOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_ForceCancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_ForceEndOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_HandleScoreEvent); \
	DECLARE_FUNCTION(execClient_AtlantaUpdateInventoryItem); \
	DECLARE_FUNCTION(execClient_HandleEscapeScoreEvent); \
	DECLARE_FUNCTION(execClient_RemotelyDispatchGameEvent); \
	DECLARE_FUNCTION(execClient_RemotelyDispatchGameEventWithScore); \
	DECLARE_FUNCTION(execClient_RemoveItemFromInventory); \
	DECLARE_FUNCTION(execClient_SetGameRole); \
	DECLARE_FUNCTION(execClient_SetInParadise); \
	DECLARE_FUNCTION(execClient_UpdateWallet); \
	DECLARE_FUNCTION(execFireActiveStatusEffectEvent); \
	DECLARE_FUNCTION(execFireActiveStatusViewEvent); \
	DECLARE_FUNCTION(execFireScoreEvent); \
	DECLARE_FUNCTION(execGetGameplayNotificationManager); \
	DECLARE_FUNCTION(execGetGameRole); \
	DECLARE_FUNCTION(execGetPlayerGameState); \
	DECLARE_FUNCTION(execHasEscaped); \
	DECLARE_FUNCTION(execHasHappened); \
	DECLARE_FUNCTION(execIsInFinishedPlayingState); \
	DECLARE_FUNCTION(execMulticast_FireGameplayEvent); \
	DECLARE_FUNCTION(execMulticast_FireGameplayEventWithScore); \
	DECLARE_FUNCTION(execMulticast_SetAsDisconnected); \
	DECLARE_FUNCTION(execMulticast_SetAsLeftMatch); \
	DECLARE_FUNCTION(execMulticast_SetInParadise); \
	DECLARE_FUNCTION(execMulticast_SetPlayerGameState); \
	DECLARE_FUNCTION(execMulticast_SetSelectedCharacterId); \
	DECLARE_FUNCTION(execOnRep_BotDifficultyLevel); \
	DECLARE_FUNCTION(execOnRep_CustomizationData); \
	DECLARE_FUNCTION(execOnRep_DisplayData); \
	DECLARE_FUNCTION(execServer_HandleScoreEvent); \
	DECLARE_FUNCTION(execServer_SelectKiller); \
	DECLARE_FUNCTION(execServer_SelectSurvivor); \
	DECLARE_FUNCTION(execServer_SetGameRole); \
	DECLARE_FUNCTION(execServer_SetPlayerGameState); \
	DECLARE_FUNCTION(execServer_SetSelectedCharacterId); \
	DECLARE_FUNCTION(execUpdateOngoingScores);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_AtlantaUpdateInventoryItem_Implementation(FName const& itemid, int32 newCount); \
	virtual void Client_HandleEscapeScoreEvent_Implementation(); \
	virtual bool Client_RemotelyDispatchGameEvent_Validate(FGameplayTag const& , FGameEventData const& ); \
	virtual void Client_RemotelyDispatchGameEvent_Implementation(FGameplayTag const& gameEventType, FGameEventData const& gameEventData); \
	virtual bool Client_RemotelyDispatchGameEventWithScore_Validate(FGameplayTag const& , FGameEventData const& , FAwardedScore const& ); \
	virtual void Client_RemotelyDispatchGameEventWithScore_Implementation(FGameplayTag const& gameEventType, FGameEventData const& gameEventData, FAwardedScore const& awardedScore); \
	virtual void Client_RemoveItemFromInventory_Implementation(FName toRemove, bool updateLoadout); \
	virtual bool Client_SetGameRole_Validate(EPlayerRole ); \
	virtual void Client_SetGameRole_Implementation(EPlayerRole newRole); \
	virtual void Client_SetInParadise_Implementation(); \
	virtual void Client_UpdateWallet_Implementation(const FString& currencyId, int32 amount); \
	virtual bool Multicast_FireGameplayEvent_Validate(EDBDScoreTypes , float , AActor* , AActor* ); \
	virtual void Multicast_FireGameplayEvent_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target); \
	virtual bool Multicast_FireGameplayEventWithScore_Validate(EDBDScoreTypes , float , AActor* , AActor* , FAwardedScore const& ); \
	virtual void Multicast_FireGameplayEventWithScore_Implementation(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, FAwardedScore const& awardedScore); \
	virtual void Multicast_SetAsDisconnected_Implementation(); \
	virtual void Multicast_SetAsLeftMatch_Implementation(); \
	virtual bool Multicast_SetInParadise_Validate(); \
	virtual void Multicast_SetInParadise_Implementation(); \
	virtual void Multicast_SetPlayerGameState_Implementation(EGameState newGameState, bool isEscapeHatch); \
	virtual void Multicast_SetSelectedCharacterId_Implementation(EPlayerRole forRole, int32 id, bool updateDisplayData); \
	virtual bool Server_HandleScoreEvent_Validate(FGameplayTag , FScoreEventData ); \
	virtual void Server_HandleScoreEvent_Implementation(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData); \
	virtual bool Server_SelectKiller_Validate(int32 ); \
	virtual void Server_SelectKiller_Implementation(int32 slasherIndex); \
	virtual bool Server_SelectSurvivor_Validate(int32 ); \
	virtual void Server_SelectSurvivor_Implementation(int32 camperIndex); \
	virtual bool Server_SetGameRole_Validate(EPlayerRole ); \
	virtual void Server_SetGameRole_Implementation(EPlayerRole newPlayerRole); \
	virtual bool Server_SetPlayerGameState_Validate(EGameState , bool ); \
	virtual void Server_SetPlayerGameState_Implementation(EGameState newGameState, bool isEscapeHatch); \
	virtual bool Server_SetSelectedCharacterId_Validate(EPlayerRole , int32 , bool ); \
	virtual void Server_SetSelectedCharacterId_Implementation(EPlayerRole forRole, int32 id, bool updateDisplayData); \
 \
	DECLARE_FUNCTION(execAuthority_CancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_EndOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_ForceCancelOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_ForceEndOngoingScoreEvent); \
	DECLARE_FUNCTION(execAuthority_HandleScoreEvent); \
	DECLARE_FUNCTION(execClient_AtlantaUpdateInventoryItem); \
	DECLARE_FUNCTION(execClient_HandleEscapeScoreEvent); \
	DECLARE_FUNCTION(execClient_RemotelyDispatchGameEvent); \
	DECLARE_FUNCTION(execClient_RemotelyDispatchGameEventWithScore); \
	DECLARE_FUNCTION(execClient_RemoveItemFromInventory); \
	DECLARE_FUNCTION(execClient_SetGameRole); \
	DECLARE_FUNCTION(execClient_SetInParadise); \
	DECLARE_FUNCTION(execClient_UpdateWallet); \
	DECLARE_FUNCTION(execFireActiveStatusEffectEvent); \
	DECLARE_FUNCTION(execFireActiveStatusViewEvent); \
	DECLARE_FUNCTION(execFireScoreEvent); \
	DECLARE_FUNCTION(execGetGameplayNotificationManager); \
	DECLARE_FUNCTION(execGetGameRole); \
	DECLARE_FUNCTION(execGetPlayerGameState); \
	DECLARE_FUNCTION(execHasEscaped); \
	DECLARE_FUNCTION(execHasHappened); \
	DECLARE_FUNCTION(execIsInFinishedPlayingState); \
	DECLARE_FUNCTION(execMulticast_FireGameplayEvent); \
	DECLARE_FUNCTION(execMulticast_FireGameplayEventWithScore); \
	DECLARE_FUNCTION(execMulticast_SetAsDisconnected); \
	DECLARE_FUNCTION(execMulticast_SetAsLeftMatch); \
	DECLARE_FUNCTION(execMulticast_SetInParadise); \
	DECLARE_FUNCTION(execMulticast_SetPlayerGameState); \
	DECLARE_FUNCTION(execMulticast_SetSelectedCharacterId); \
	DECLARE_FUNCTION(execOnRep_BotDifficultyLevel); \
	DECLARE_FUNCTION(execOnRep_CustomizationData); \
	DECLARE_FUNCTION(execOnRep_DisplayData); \
	DECLARE_FUNCTION(execServer_HandleScoreEvent); \
	DECLARE_FUNCTION(execServer_SelectKiller); \
	DECLARE_FUNCTION(execServer_SelectSurvivor); \
	DECLARE_FUNCTION(execServer_SetGameRole); \
	DECLARE_FUNCTION(execServer_SetPlayerGameState); \
	DECLARE_FUNCTION(execServer_SetSelectedCharacterId); \
	DECLARE_FUNCTION(execUpdateOngoingScores);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_EVENT_PARMS \
	struct DBDPlayerState_eventClient_AtlantaUpdateInventoryItem_Parms \
	{ \
		FName itemid; \
		int32 newCount; \
	}; \
	struct DBDPlayerState_eventClient_RemotelyDispatchGameEvent_Parms \
	{ \
		FGameplayTag gameEventType; \
		FGameEventData gameEventData; \
	}; \
	struct DBDPlayerState_eventClient_RemotelyDispatchGameEventWithScore_Parms \
	{ \
		FGameplayTag gameEventType; \
		FGameEventData gameEventData; \
		FAwardedScore awardedScore; \
	}; \
	struct DBDPlayerState_eventClient_RemoveItemFromInventory_Parms \
	{ \
		FName toRemove; \
		bool updateLoadout; \
	}; \
	struct DBDPlayerState_eventClient_SetGameRole_Parms \
	{ \
		EPlayerRole newRole; \
	}; \
	struct DBDPlayerState_eventClient_UpdateWallet_Parms \
	{ \
		FString currencyId; \
		int32 amount; \
	}; \
	struct DBDPlayerState_eventMulticast_FireGameplayEvent_Parms \
	{ \
		EDBDScoreTypes playerGameplayEventType; \
		float amount; \
		AActor* effector; \
		AActor* target; \
	}; \
	struct DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms \
	{ \
		EDBDScoreTypes playerGameplayEventType; \
		float amount; \
		AActor* effector; \
		AActor* target; \
		FAwardedScore awardedScore; \
	}; \
	struct DBDPlayerState_eventMulticast_SetPlayerGameState_Parms \
	{ \
		EGameState newGameState; \
		bool isEscapeHatch; \
	}; \
	struct DBDPlayerState_eventMulticast_SetSelectedCharacterId_Parms \
	{ \
		EPlayerRole forRole; \
		int32 id; \
		bool updateDisplayData; \
	}; \
	struct DBDPlayerState_eventServer_HandleScoreEvent_Parms \
	{ \
		FGameplayTag scoreTypeTag; \
		FScoreEventData scoreEventData; \
	}; \
	struct DBDPlayerState_eventServer_SelectKiller_Parms \
	{ \
		int32 slasherIndex; \
	}; \
	struct DBDPlayerState_eventServer_SelectSurvivor_Parms \
	{ \
		int32 camperIndex; \
	}; \
	struct DBDPlayerState_eventServer_SetGameRole_Parms \
	{ \
		EPlayerRole newPlayerRole; \
	}; \
	struct DBDPlayerState_eventServer_SetPlayerGameState_Parms \
	{ \
		EGameState newGameState; \
		bool isEscapeHatch; \
	}; \
	struct DBDPlayerState_eventServer_SetSelectedCharacterId_Parms \
	{ \
		EPlayerRole forRole; \
		int32 id; \
		bool updateDisplayData; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDPlayerState(); \
	friend struct Z_Construct_UClass_ADBDPlayerState_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MirrorsId=NETFIELD_REP_START, \
		_difficultyLevel, \
		IsPlayerReady, \
		GameRole, \
		CamperData, \
		SlasherData, \
		PlayerData, \
		PlayerCustomization, \
		_inParadise, \
		_platformAccountId, \
		_selectedCamperIndex, \
		_selectedSlasherIndex, \
		_platform, \
		_provider, \
		_crossplayAllowed, \
		_offNetworkFlag, \
		_gameLevelLoaded, \
		_showPortraitBorder, \
		_hasActiveSubscription, \
		NETFIELD_REP_END=_hasActiveSubscription	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_INCLASS \
private: \
	static void StaticRegisterNativesADBDPlayerState(); \
	friend struct Z_Construct_UClass_ADBDPlayerState_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ADBDPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MirrorsId=NETFIELD_REP_START, \
		_difficultyLevel, \
		IsPlayerReady, \
		GameRole, \
		CamperData, \
		SlasherData, \
		PlayerData, \
		PlayerCustomization, \
		_inParadise, \
		_platformAccountId, \
		_selectedCamperIndex, \
		_selectedSlasherIndex, \
		_platform, \
		_provider, \
		_crossplayAllowed, \
		_offNetworkFlag, \
		_gameLevelLoaded, \
		_showPortraitBorder, \
		_hasActiveSubscription, \
		NETFIELD_REP_END=_hasActiveSubscription	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerState(ADBDPlayerState&&); \
	NO_API ADBDPlayerState(const ADBDPlayerState&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerState(ADBDPlayerState&&); \
	NO_API ADBDPlayerState(const ADBDPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDPlayerState)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___awardedScoresByType() { return STRUCT_OFFSET(ADBDPlayerState, _awardedScoresByType); } \
	FORCEINLINE static uint32 __PPO___cachedUserGameStats() { return STRUCT_OFFSET(ADBDPlayerState, _cachedUserGameStats); } \
	FORCEINLINE static uint32 __PPO___ongoingScoreEvents() { return STRUCT_OFFSET(ADBDPlayerState, _ongoingScoreEvents); } \
	FORCEINLINE static uint32 __PPO___recentGameplayEvents() { return STRUCT_OFFSET(ADBDPlayerState, _recentGameplayEvents); } \
	FORCEINLINE static uint32 __PPO___inParadise() { return STRUCT_OFFSET(ADBDPlayerState, _inParadise); } \
	FORCEINLINE static uint32 __PPO___gameplayNotificationManager() { return STRUCT_OFFSET(ADBDPlayerState, _gameplayNotificationManager); } \
	FORCEINLINE static uint32 __PPO___achievementHandler() { return STRUCT_OFFSET(ADBDPlayerState, _achievementHandler); } \
	FORCEINLINE static uint32 __PPO___characterStatsHandler() { return STRUCT_OFFSET(ADBDPlayerState, _characterStatsHandler); } \
	FORCEINLINE static uint32 __PPO___platformAccountId() { return STRUCT_OFFSET(ADBDPlayerState, _platformAccountId); } \
	FORCEINLINE static uint32 __PPO___selectedCamperIndex() { return STRUCT_OFFSET(ADBDPlayerState, _selectedCamperIndex); } \
	FORCEINLINE static uint32 __PPO___selectedSlasherIndex() { return STRUCT_OFFSET(ADBDPlayerState, _selectedSlasherIndex); } \
	FORCEINLINE static uint32 __PPO___platform() { return STRUCT_OFFSET(ADBDPlayerState, _platform); } \
	FORCEINLINE static uint32 __PPO___provider() { return STRUCT_OFFSET(ADBDPlayerState, _provider); } \
	FORCEINLINE static uint32 __PPO___crossplayAllowed() { return STRUCT_OFFSET(ADBDPlayerState, _crossplayAllowed); } \
	FORCEINLINE static uint32 __PPO___offNetworkFlag() { return STRUCT_OFFSET(ADBDPlayerState, _offNetworkFlag); } \
	FORCEINLINE static uint32 __PPO___gameLevelLoaded() { return STRUCT_OFFSET(ADBDPlayerState, _gameLevelLoaded); } \
	FORCEINLINE static uint32 __PPO___showPortraitBorder() { return STRUCT_OFFSET(ADBDPlayerState, _showPortraitBorder); } \
	FORCEINLINE static uint32 __PPO___hasActiveSubscription() { return STRUCT_OFFSET(ADBDPlayerState, _hasActiveSubscription); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_37_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
