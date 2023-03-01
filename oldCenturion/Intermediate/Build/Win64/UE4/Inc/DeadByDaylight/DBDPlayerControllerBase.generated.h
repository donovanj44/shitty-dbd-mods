// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerSavedProfileDataShared;
struct FPlayerLoadoutData;
#ifdef DEADBYDAYLIGHT_DBDPlayerControllerBase_generated_h
#error "DBDPlayerControllerBase.generated.h already included, missing '#pragma once' in DBDPlayerControllerBase.h"
#endif
#define DEADBYDAYLIGHT_DBDPlayerControllerBase_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_RPC_WRAPPERS \
	virtual bool CallConsoleCmdOnServer_Server_Validate(const FString& ); \
	virtual void CallConsoleCmdOnServer_Server_Implementation(const FString& commandLine); \
	virtual void Client_EACMessageFromServer_Implementation(TArray<uint8> const& message, uint32 messageLength); \
	virtual void Client_FinishedPlaying_Implementation(); \
	virtual void Client_GameEnded_Implementation(); \
	virtual void Client_RequestPlayerProfile_Implementation(); \
	virtual void Client_SendLogs_Implementation(TArray<FString> const& ensures); \
	virtual bool Client_SendServerAuthentication_Validate(const FString& , uint64 , uint32 ); \
	virtual void Client_SendServerAuthentication_Implementation(const FString& authServerTicket, uint64 steamID, uint32 ticketLength); \
	virtual void Client_SendWarning_Implementation(bool penaltyStarts, float seconds); \
	virtual void Client_ValidateServer_Implementation(); \
	virtual bool Server_EACMessageFromClient_Validate(TArray<uint8> const& , uint32 ); \
	virtual void Server_EACMessageFromClient_Implementation(TArray<uint8> const& message, uint32 messageLength); \
	virtual bool Server_ReceivePlayerProfile_Validate(FPlayerSavedProfileDataShared , FPlayerLoadoutData ); \
	virtual void Server_ReceivePlayerProfile_Implementation(FPlayerSavedProfileDataShared savedProfileData, FPlayerLoadoutData playerLoadout); \
	virtual bool Server_SendClientAuthentication_Validate(const FString& , uint64 , uint32 ); \
	virtual void Server_SendClientAuthentication_Implementation(const FString& authClientTicket, uint64 steamID, uint32 ticketLength); \
	virtual bool Server_SendMessage_Validate(const FString& ); \
	virtual void Server_SendMessage_Implementation(const FString& message); \
	virtual bool Server_UpdateReplicatedPips_Validate(int32 ); \
	virtual void Server_UpdateReplicatedPips_Implementation(int32 pipsToAdd); \
 \
	DECLARE_FUNCTION(execCallConsoleCmdOnServer_Server); \
	DECLARE_FUNCTION(execClient_EACMessageFromServer); \
	DECLARE_FUNCTION(execClient_FinishedPlaying); \
	DECLARE_FUNCTION(execClient_GameEnded); \
	DECLARE_FUNCTION(execClient_RequestPlayerProfile); \
	DECLARE_FUNCTION(execClient_SendLogs); \
	DECLARE_FUNCTION(execClient_SendServerAuthentication); \
	DECLARE_FUNCTION(execClient_SendWarning); \
	DECLARE_FUNCTION(execClient_ValidateServer); \
	DECLARE_FUNCTION(execDBD_BuildFromMap); \
	DECLARE_FUNCTION(execDBD_BuildFromPlayerCount); \
	DECLARE_FUNCTION(execDBD_BuildFromPremadeMap); \
	DECLARE_FUNCTION(execDBD_BuildFromSeed); \
	DECLARE_FUNCTION(execDBD_BuildFromTile); \
	DECLARE_FUNCTION(execDBD_DebugSendChatMessage); \
	DECLARE_FUNCTION(execDBD_FillAllScoreCategories); \
	DECLARE_FUNCTION(execDBD_FillScoreCategory); \
	DECLARE_FUNCTION(execDBD_FireTestScore); \
	DECLARE_FUNCTION(execDBD_SetCurrentCharacterPrestigeDatesFuture); \
	DECLARE_FUNCTION(execDBD_SetCurrentCharacterPrestigeDatesNow); \
	DECLARE_FUNCTION(execDBD_SetCurrentCharacterPrestigeDatesPast); \
	DECLARE_FUNCTION(execDBD_UpdateLocalStats); \
	DECLARE_FUNCTION(execServer); \
	DECLARE_FUNCTION(execServer_EACMessageFromClient); \
	DECLARE_FUNCTION(execServer_ReceivePlayerProfile); \
	DECLARE_FUNCTION(execServer_SendClientAuthentication); \
	DECLARE_FUNCTION(execServer_SendMessage); \
	DECLARE_FUNCTION(execServer_UpdateReplicatedPips);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CallConsoleCmdOnServer_Server_Validate(const FString& ); \
	virtual void CallConsoleCmdOnServer_Server_Implementation(const FString& commandLine); \
	virtual void Client_EACMessageFromServer_Implementation(TArray<uint8> const& message, uint32 messageLength); \
	virtual void Client_FinishedPlaying_Implementation(); \
	virtual void Client_GameEnded_Implementation(); \
	virtual void Client_RequestPlayerProfile_Implementation(); \
	virtual void Client_SendLogs_Implementation(TArray<FString> const& ensures); \
	virtual bool Client_SendServerAuthentication_Validate(const FString& , uint64 , uint32 ); \
	virtual void Client_SendServerAuthentication_Implementation(const FString& authServerTicket, uint64 steamID, uint32 ticketLength); \
	virtual void Client_SendWarning_Implementation(bool penaltyStarts, float seconds); \
	virtual void Client_ValidateServer_Implementation(); \
	virtual bool Server_EACMessageFromClient_Validate(TArray<uint8> const& , uint32 ); \
	virtual void Server_EACMessageFromClient_Implementation(TArray<uint8> const& message, uint32 messageLength); \
	virtual bool Server_ReceivePlayerProfile_Validate(FPlayerSavedProfileDataShared , FPlayerLoadoutData ); \
	virtual void Server_ReceivePlayerProfile_Implementation(FPlayerSavedProfileDataShared savedProfileData, FPlayerLoadoutData playerLoadout); \
	virtual bool Server_SendClientAuthentication_Validate(const FString& , uint64 , uint32 ); \
	virtual void Server_SendClientAuthentication_Implementation(const FString& authClientTicket, uint64 steamID, uint32 ticketLength); \
	virtual bool Server_SendMessage_Validate(const FString& ); \
	virtual void Server_SendMessage_Implementation(const FString& message); \
	virtual bool Server_UpdateReplicatedPips_Validate(int32 ); \
	virtual void Server_UpdateReplicatedPips_Implementation(int32 pipsToAdd); \
 \
	DECLARE_FUNCTION(execCallConsoleCmdOnServer_Server); \
	DECLARE_FUNCTION(execClient_EACMessageFromServer); \
	DECLARE_FUNCTION(execClient_FinishedPlaying); \
	DECLARE_FUNCTION(execClient_GameEnded); \
	DECLARE_FUNCTION(execClient_RequestPlayerProfile); \
	DECLARE_FUNCTION(execClient_SendLogs); \
	DECLARE_FUNCTION(execClient_SendServerAuthentication); \
	DECLARE_FUNCTION(execClient_SendWarning); \
	DECLARE_FUNCTION(execClient_ValidateServer); \
	DECLARE_FUNCTION(execDBD_BuildFromMap); \
	DECLARE_FUNCTION(execDBD_BuildFromPlayerCount); \
	DECLARE_FUNCTION(execDBD_BuildFromPremadeMap); \
	DECLARE_FUNCTION(execDBD_BuildFromSeed); \
	DECLARE_FUNCTION(execDBD_BuildFromTile); \
	DECLARE_FUNCTION(execDBD_DebugSendChatMessage); \
	DECLARE_FUNCTION(execDBD_FillAllScoreCategories); \
	DECLARE_FUNCTION(execDBD_FillScoreCategory); \
	DECLARE_FUNCTION(execDBD_FireTestScore); \
	DECLARE_FUNCTION(execDBD_SetCurrentCharacterPrestigeDatesFuture); \
	DECLARE_FUNCTION(execDBD_SetCurrentCharacterPrestigeDatesNow); \
	DECLARE_FUNCTION(execDBD_SetCurrentCharacterPrestigeDatesPast); \
	DECLARE_FUNCTION(execDBD_UpdateLocalStats); \
	DECLARE_FUNCTION(execServer); \
	DECLARE_FUNCTION(execServer_EACMessageFromClient); \
	DECLARE_FUNCTION(execServer_ReceivePlayerProfile); \
	DECLARE_FUNCTION(execServer_SendClientAuthentication); \
	DECLARE_FUNCTION(execServer_SendMessage); \
	DECLARE_FUNCTION(execServer_UpdateReplicatedPips);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_EVENT_PARMS \
	struct DBDPlayerControllerBase_eventCallConsoleCmdOnServer_Server_Parms \
	{ \
		FString commandLine; \
	}; \
	struct DBDPlayerControllerBase_eventClient_EACMessageFromServer_Parms \
	{ \
		TArray<uint8> message; \
		uint32 messageLength; \
	}; \
	struct DBDPlayerControllerBase_eventClient_SendLogs_Parms \
	{ \
		TArray<FString> ensures; \
	}; \
	struct DBDPlayerControllerBase_eventClient_SendServerAuthentication_Parms \
	{ \
		FString authServerTicket; \
		uint64 steamID; \
		uint32 ticketLength; \
	}; \
	struct DBDPlayerControllerBase_eventClient_SendWarning_Parms \
	{ \
		bool penaltyStarts; \
		float seconds; \
	}; \
	struct DBDPlayerControllerBase_eventServer_EACMessageFromClient_Parms \
	{ \
		TArray<uint8> message; \
		uint32 messageLength; \
	}; \
	struct DBDPlayerControllerBase_eventServer_ReceivePlayerProfile_Parms \
	{ \
		FPlayerSavedProfileDataShared savedProfileData; \
		FPlayerLoadoutData playerLoadout; \
	}; \
	struct DBDPlayerControllerBase_eventServer_SendClientAuthentication_Parms \
	{ \
		FString authClientTicket; \
		uint64 steamID; \
		uint32 ticketLength; \
	}; \
	struct DBDPlayerControllerBase_eventServer_SendMessage_Parms \
	{ \
		FString message; \
	}; \
	struct DBDPlayerControllerBase_eventServer_UpdateReplicatedPips_Parms \
	{ \
		int32 pipsToAdd; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ADBDPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerControllerBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_mainCharacter=NETFIELD_REP_START, \
		NETFIELD_REP_END=_mainCharacter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADBDPlayerControllerBase(); \
	friend struct Z_Construct_UClass_ADBDPlayerControllerBase_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerControllerBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_mainCharacter=NETFIELD_REP_START, \
		NETFIELD_REP_END=_mainCharacter	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDPlayerControllerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDPlayerControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerControllerBase(ADBDPlayerControllerBase&&); \
	NO_API ADBDPlayerControllerBase(const ADBDPlayerControllerBase&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerControllerBase(ADBDPlayerControllerBase&&); \
	NO_API ADBDPlayerControllerBase(const ADBDPlayerControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDPlayerControllerBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___mainCharacter() { return STRUCT_OFFSET(ADBDPlayerControllerBase, _mainCharacter); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDPlayerControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
