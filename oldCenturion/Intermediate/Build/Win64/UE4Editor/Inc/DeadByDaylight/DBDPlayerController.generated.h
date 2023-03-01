// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ADBDPlayerState;
class APawn;
#ifdef DEADBYDAYLIGHT_DBDPlayerController_generated_h
#error "DBDPlayerController.generated.h already included, missing '#pragma once' in DBDPlayerController.h"
#endif
#define DEADBYDAYLIGHT_DBDPlayerController_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_14_DELEGATE \
static inline void FDBDPlayerControllerOnLocallyObservedChanged_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerControllerOnLocallyObservedChanged) \
{ \
	DBDPlayerControllerOnLocallyObservedChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventDBDPlayerControllerOnPawnLeavingGame_Parms \
{ \
	ADBDPlayer* leavingPlayer; \
}; \
static inline void FDBDPlayerControllerOnPawnLeavingGame_DelegateWrapper(const FMulticastScriptDelegate& DBDPlayerControllerOnPawnLeavingGame, ADBDPlayer* leavingPlayer) \
{ \
	_Script_DeadByDaylight_eventDBDPlayerControllerOnPawnLeavingGame_Parms Parms; \
	Parms.leavingPlayer=leavingPlayer; \
	DBDPlayerControllerOnPawnLeavingGame.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_RPC_WRAPPERS \
	virtual void Client_SetSpectatorMode_Implementation(bool on); \
	virtual void Client_SetSpectatorModeInEditor_Implementation(bool on, ADBDPlayerState* spectatingPlayerState); \
	virtual void Client_SpectateAI_Implementation(APawn* aiPawn); \
	virtual bool Server_ActivateAI_Validate(bool , int32 ); \
	virtual void Server_ActivateAI_Implementation(bool activate, int32 playerRank); \
	virtual bool Server_ActivateAIAll_Validate(bool , int32 , int8 ); \
	virtual void Server_ActivateAIAll_Implementation(bool activate, int32 playerRank, int8 playerRole); \
	virtual bool Server_DebugSend_Validate(const FString& ); \
	virtual void Server_DebugSend_Implementation(const FString& data); \
	virtual bool Server_LeaveGame_Validate(bool ); \
	virtual void Server_LeaveGame_Implementation(bool joiningLobby); \
	virtual bool Server_RequestEndGame_Validate(); \
	virtual void Server_RequestEndGame_Implementation(); \
	virtual bool Server_SetHasMoveInputThisFrame_Validate(bool ); \
	virtual void Server_SetHasMoveInputThisFrame_Implementation(bool hasMoveInputThisFrame); \
	virtual bool Server_SetReadyToTravel_Validate(); \
	virtual void Server_SetReadyToTravel_Implementation(); \
	virtual bool Server_SetSpectatorMode_Validate(bool ); \
	virtual void Server_SetSpectatorMode_Implementation(bool on); \
	virtual bool Server_SetSpectatorModeInEditor_Validate(bool , ADBDPlayerState* ); \
	virtual void Server_SetSpectatorModeInEditor_Implementation(bool on, ADBDPlayerState* spectatingPlayerState); \
	virtual bool ServerViewPlayer_Validate(const FString& ); \
	virtual void ServerViewPlayer_Implementation(const FString& playerName); \
 \
	DECLARE_FUNCTION(execActivateAI); \
	DECLARE_FUNCTION(execClient_SetSpectatorMode); \
	DECLARE_FUNCTION(execClient_SetSpectatorModeInEditor); \
	DECLARE_FUNCTION(execClient_SpectateAI); \
	DECLARE_FUNCTION(execGetAIPawn); \
	DECLARE_FUNCTION(execGetControlledPlayer); \
	DECLARE_FUNCTION(execGetSpectatedPlayer); \
	DECLARE_FUNCTION(execGetSpectatedPlayerState); \
	DECLARE_FUNCTION(execImplementRunLockMechanic); \
	DECLARE_FUNCTION(execIsSpectating); \
	DECLARE_FUNCTION(execMobileJoystickInput_Pressed); \
	DECLARE_FUNCTION(execOnRep_Fence); \
	DECLARE_FUNCTION(execServer_ActivateAI); \
	DECLARE_FUNCTION(execServer_ActivateAIAll); \
	DECLARE_FUNCTION(execServer_DebugSend); \
	DECLARE_FUNCTION(execServer_LeaveGame); \
	DECLARE_FUNCTION(execServer_RequestEndGame); \
	DECLARE_FUNCTION(execServer_SetHasMoveInputThisFrame); \
	DECLARE_FUNCTION(execServer_SetReadyToTravel); \
	DECLARE_FUNCTION(execServer_SetSpectatorMode); \
	DECLARE_FUNCTION(execServer_SetSpectatorModeInEditor); \
	DECLARE_FUNCTION(execServerViewPlayer); \
	DECLARE_FUNCTION(execSetShouldMoveInputReplicateToServer);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_SetSpectatorMode_Implementation(bool on); \
	virtual void Client_SetSpectatorModeInEditor_Implementation(bool on, ADBDPlayerState* spectatingPlayerState); \
	virtual void Client_SpectateAI_Implementation(APawn* aiPawn); \
	virtual bool Server_ActivateAI_Validate(bool , int32 ); \
	virtual void Server_ActivateAI_Implementation(bool activate, int32 playerRank); \
	virtual bool Server_ActivateAIAll_Validate(bool , int32 , int8 ); \
	virtual void Server_ActivateAIAll_Implementation(bool activate, int32 playerRank, int8 playerRole); \
	virtual bool Server_DebugSend_Validate(const FString& ); \
	virtual void Server_DebugSend_Implementation(const FString& data); \
	virtual bool Server_LeaveGame_Validate(bool ); \
	virtual void Server_LeaveGame_Implementation(bool joiningLobby); \
	virtual bool Server_RequestEndGame_Validate(); \
	virtual void Server_RequestEndGame_Implementation(); \
	virtual bool Server_SetHasMoveInputThisFrame_Validate(bool ); \
	virtual void Server_SetHasMoveInputThisFrame_Implementation(bool hasMoveInputThisFrame); \
	virtual bool Server_SetReadyToTravel_Validate(); \
	virtual void Server_SetReadyToTravel_Implementation(); \
	virtual bool Server_SetSpectatorMode_Validate(bool ); \
	virtual void Server_SetSpectatorMode_Implementation(bool on); \
	virtual bool Server_SetSpectatorModeInEditor_Validate(bool , ADBDPlayerState* ); \
	virtual void Server_SetSpectatorModeInEditor_Implementation(bool on, ADBDPlayerState* spectatingPlayerState); \
	virtual bool ServerViewPlayer_Validate(const FString& ); \
	virtual void ServerViewPlayer_Implementation(const FString& playerName); \
 \
	DECLARE_FUNCTION(execActivateAI); \
	DECLARE_FUNCTION(execClient_SetSpectatorMode); \
	DECLARE_FUNCTION(execClient_SetSpectatorModeInEditor); \
	DECLARE_FUNCTION(execClient_SpectateAI); \
	DECLARE_FUNCTION(execGetAIPawn); \
	DECLARE_FUNCTION(execGetControlledPlayer); \
	DECLARE_FUNCTION(execGetSpectatedPlayer); \
	DECLARE_FUNCTION(execGetSpectatedPlayerState); \
	DECLARE_FUNCTION(execImplementRunLockMechanic); \
	DECLARE_FUNCTION(execIsSpectating); \
	DECLARE_FUNCTION(execMobileJoystickInput_Pressed); \
	DECLARE_FUNCTION(execOnRep_Fence); \
	DECLARE_FUNCTION(execServer_ActivateAI); \
	DECLARE_FUNCTION(execServer_ActivateAIAll); \
	DECLARE_FUNCTION(execServer_DebugSend); \
	DECLARE_FUNCTION(execServer_LeaveGame); \
	DECLARE_FUNCTION(execServer_RequestEndGame); \
	DECLARE_FUNCTION(execServer_SetHasMoveInputThisFrame); \
	DECLARE_FUNCTION(execServer_SetReadyToTravel); \
	DECLARE_FUNCTION(execServer_SetSpectatorMode); \
	DECLARE_FUNCTION(execServer_SetSpectatorModeInEditor); \
	DECLARE_FUNCTION(execServerViewPlayer); \
	DECLARE_FUNCTION(execSetShouldMoveInputReplicateToServer);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_EVENT_PARMS \
	struct DBDPlayerController_eventClient_SetSpectatorMode_Parms \
	{ \
		bool on; \
	}; \
	struct DBDPlayerController_eventClient_SetSpectatorModeInEditor_Parms \
	{ \
		bool on; \
		ADBDPlayerState* spectatingPlayerState; \
	}; \
	struct DBDPlayerController_eventClient_SpectateAI_Parms \
	{ \
		APawn* aiPawn; \
	}; \
	struct DBDPlayerController_eventServer_ActivateAI_Parms \
	{ \
		bool activate; \
		int32 playerRank; \
	}; \
	struct DBDPlayerController_eventServer_ActivateAIAll_Parms \
	{ \
		bool activate; \
		int32 playerRank; \
		int8 playerRole; \
	}; \
	struct DBDPlayerController_eventServer_DebugSend_Parms \
	{ \
		FString data; \
	}; \
	struct DBDPlayerController_eventServer_LeaveGame_Parms \
	{ \
		bool joiningLobby; \
	}; \
	struct DBDPlayerController_eventServer_SetHasMoveInputThisFrame_Parms \
	{ \
		bool hasMoveInputThisFrame; \
	}; \
	struct DBDPlayerController_eventServer_SetSpectatorMode_Parms \
	{ \
		bool on; \
	}; \
	struct DBDPlayerController_eventServer_SetSpectatorModeInEditor_Parms \
	{ \
		bool on; \
		ADBDPlayerState* spectatingPlayerState; \
	}; \
	struct DBDPlayerController_eventServerViewPlayer_Parms \
	{ \
		FString playerName; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDPlayerController(); \
	friend struct Z_Construct_UClass_ADBDPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerController, ADBDPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_theFence=NETFIELD_REP_START, \
		NETFIELD_REP_END=_theFence	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesADBDPlayerController(); \
	friend struct Z_Construct_UClass_ADBDPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADBDPlayerController, ADBDPlayerControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_theFence=NETFIELD_REP_START, \
		NETFIELD_REP_END=_theFence	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerController(ADBDPlayerController&&); \
	NO_API ADBDPlayerController(const ADBDPlayerController&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDPlayerController(ADBDPlayerController&&); \
	NO_API ADBDPlayerController(const ADBDPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDPlayerController)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___theFence() { return STRUCT_OFFSET(ADBDPlayerController, _theFence); } \
	FORCEINLINE static uint32 __PPO___inputHandler() { return STRUCT_OFFSET(ADBDPlayerController, _inputHandler); } \
	FORCEINLINE static uint32 __PPO___aiPawn() { return STRUCT_OFFSET(ADBDPlayerController, _aiPawn); } \
	FORCEINLINE static uint32 __PPO___controllerGameRole() { return STRUCT_OFFSET(ADBDPlayerController, _controllerGameRole); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_16_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
