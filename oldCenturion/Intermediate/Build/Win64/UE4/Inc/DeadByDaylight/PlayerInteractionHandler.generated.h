// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESkillCheckCustomType : uint8;
class UInteractionDefinition;
class AActor;
class ADBDPlayer;
enum class EInputInteractionType : uint8;
class USkillCheck;
enum class EInteractionValidationState : uint8;
enum class ERequestState : uint8;
class UInterruptionDefinition;
struct FStoredInteraction;
#ifdef DEADBYDAYLIGHT_PlayerInteractionHandler_generated_h
#error "PlayerInteractionHandler.generated.h already included, missing '#pragma once' in PlayerInteractionHandler.h"
#endif
#define DEADBYDAYLIGHT_PlayerInteractionHandler_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_23_DELEGATE \
static inline void FPlayerInteractionHandlerServerValidatedInteractionEndedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerInteractionHandlerServerValidatedInteractionEndedDelegate) \
{ \
	PlayerInteractionHandlerServerValidatedInteractionEndedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_22_DELEGATE \
static inline void FPlayerInteractionHandlerServerValidatedInteractionStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerInteractionHandlerServerValidatedInteractionStartedDelegate) \
{ \
	PlayerInteractionHandlerServerValidatedInteractionStartedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_21_DELEGATE \
static inline void FPlayerInteractionHandlerNewInteractionRequestedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerInteractionHandlerNewInteractionRequestedDelegate) \
{ \
	PlayerInteractionHandlerNewInteractionRequestedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_20_DELEGATE \
struct _Script_DeadByDaylight_eventPlayerInteractionHandlerOnDeactivateSkillCheckDelegate_Parms \
{ \
	bool HadInput; \
	bool Success; \
	bool Bonus; \
	ESkillCheckCustomType type; \
}; \
static inline void FPlayerInteractionHandlerOnDeactivateSkillCheckDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerInteractionHandlerOnDeactivateSkillCheckDelegate, bool HadInput, bool Success, bool Bonus, ESkillCheckCustomType type) \
{ \
	_Script_DeadByDaylight_eventPlayerInteractionHandlerOnDeactivateSkillCheckDelegate_Parms Parms; \
	Parms.HadInput=HadInput ? true : false; \
	Parms.Success=Success ? true : false; \
	Parms.Bonus=Bonus ? true : false; \
	Parms.type=type; \
	PlayerInteractionHandlerOnDeactivateSkillCheckDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_19_DELEGATE \
static inline void FPlayerInteractionHandlerAuthority_SecondaryActionDoneDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerInteractionHandlerAuthority_SecondaryActionDoneDelegate) \
{ \
	PlayerInteractionHandlerAuthority_SecondaryActionDoneDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_RPC_WRAPPERS \
	virtual bool Broadcast_Multicast_ConfirmChargedCompleted_Validate(bool ); \
	virtual void Broadcast_Multicast_ConfirmChargedCompleted_Implementation(bool chargeComplete); \
	virtual bool Client_NotifyChargeCompleted_Validate(const UInteractionDefinition* ); \
	virtual void Client_NotifyChargeCompleted_Implementation(const UInteractionDefinition* interaction); \
	virtual void Client_StartCustomSkillCheck_Implementation(ESkillCheckCustomType type, float warningSoundDelay); \
	virtual void Multicast_CancelCurrentInteractionByInput_Implementation(); \
	virtual void Multicast_InteractionPredictionValidationResult_Implementation(UInteractionDefinition* interaction, EInteractionValidationState state); \
	virtual bool Multicast_InterruptionRequestResult_Interruptor_Validate(ERequestState , bool ); \
	virtual void Multicast_InterruptionRequestResult_Interruptor_Implementation(ERequestState state, bool grantInterruptScore); \
	virtual bool Multicast_RequestInterruption_Interruptee_Validate(ADBDPlayer* , UInterruptionDefinition* ); \
	virtual void Multicast_RequestInterruption_Interruptee_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition); \
	virtual void Multicast_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction); \
	virtual void Multicast_StoreInteraction_Implementation(FStoredInteraction interactionToStore); \
	virtual bool Multicast_StoreInterruption_Interruptor_Validate(ADBDPlayer* , UInterruptionDefinition* ); \
	virtual void Multicast_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition); \
	virtual bool Server_AnswerInterruption_Interruptee_Validate(ERequestState ); \
	virtual void Server_AnswerInterruption_Interruptee_Implementation(ERequestState state); \
	virtual bool Server_Broadcast_ConfirmChargedCompleted_Validate(bool ); \
	virtual void Server_Broadcast_ConfirmChargedCompleted_Implementation(bool chargeComplete); \
	virtual bool Server_Broadcast_StoreInteraction_Validate(FStoredInteraction ); \
	virtual void Server_Broadcast_StoreInteraction_Implementation(FStoredInteraction interactionToStore); \
	virtual bool Server_CancelCurrentInteractionByInput_Validate(); \
	virtual void Server_CancelCurrentInteractionByInput_Implementation(); \
	virtual bool Server_DebugRequestInteraction_Validate(const FString& , const FString& , const FString& ); \
	virtual void Server_DebugRequestInteraction_Implementation(const FString& interactionName, const FString& interactorName, const FString& interactableName); \
	virtual bool Server_RequestInterruption_Interruptor_Validate(); \
	virtual void Server_RequestInterruption_Interruptor_Implementation(); \
	virtual bool Server_SetInteractionToSwapTo_Validate(UInteractionDefinition* ); \
	virtual void Server_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction); \
	virtual bool Server_StoreInterruption_Interruptor_Validate(ADBDPlayer* , UInterruptionDefinition* ); \
	virtual void Server_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition); \
 \
	DECLARE_FUNCTION(execAddInteraction); \
	DECLARE_FUNCTION(execAddSelfInteractions); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerDependencies); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerDependency); \
	DECLARE_FUNCTION(execBroadcast_Multicast_ConfirmChargedCompleted); \
	DECLARE_FUNCTION(execCanPerformInteraction); \
	DECLARE_FUNCTION(execCleanInteractionArray); \
	DECLARE_FUNCTION(execClient_NotifyChargeCompleted); \
	DECLARE_FUNCTION(execClient_StartCustomSkillCheck); \
	DECLARE_FUNCTION(execGetAdditiveSkillCheckProbabilityModifier); \
	DECLARE_FUNCTION(execGetAvailableInteraction); \
	DECLARE_FUNCTION(execGetAvailableInteractionByID); \
	DECLARE_FUNCTION(execGetAvailableInteractions); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteractionOfType); \
	DECLARE_FUNCTION(execGetMultiplicativeSkillCheckProbabilityModifier); \
	DECLARE_FUNCTION(execGetSkillCheck); \
	DECLARE_FUNCTION(execHasActiveSkillCheck); \
	DECLARE_FUNCTION(execHasAvailableInteraction); \
	DECLARE_FUNCTION(execIncrementSuccessiveSkillCheckCount); \
	DECLARE_FUNCTION(execMulticast_CancelCurrentInteractionByInput); \
	DECLARE_FUNCTION(execMulticast_InteractionPredictionValidationResult); \
	DECLARE_FUNCTION(execMulticast_InterruptionRequestResult_Interruptor); \
	DECLARE_FUNCTION(execMulticast_RequestInterruption_Interruptee); \
	DECLARE_FUNCTION(execMulticast_SetInteractionToSwapTo); \
	DECLARE_FUNCTION(execMulticast_StoreInteraction); \
	DECLARE_FUNCTION(execMulticast_StoreInterruption_Interruptor); \
	DECLARE_FUNCTION(execNumInteractionsInZone); \
	DECLARE_FUNCTION(execPauseSkillCheckTimer); \
	DECLARE_FUNCTION(execRemoveInteraction); \
	DECLARE_FUNCTION(execResetSuccessiveSkillCheckCount); \
	DECLARE_FUNCTION(execServer_AnswerInterruption_Interruptee); \
	DECLARE_FUNCTION(execServer_Broadcast_ConfirmChargedCompleted); \
	DECLARE_FUNCTION(execServer_Broadcast_StoreInteraction); \
	DECLARE_FUNCTION(execServer_CancelCurrentInteractionByInput); \
	DECLARE_FUNCTION(execServer_DebugRequestInteraction); \
	DECLARE_FUNCTION(execServer_RequestInterruption_Interruptor); \
	DECLARE_FUNCTION(execServer_SetInteractionToSwapTo); \
	DECLARE_FUNCTION(execServer_StoreInterruption_Interruptor); \
	DECLARE_FUNCTION(execSetScanForInteractionsEnabled); \
	DECLARE_FUNCTION(execSetSkillCheckTimer); \
	DECLARE_FUNCTION(execStartCustomSkillCheck); \
	DECLARE_FUNCTION(execUnPauseSkillCheckTimer);


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Broadcast_Multicast_ConfirmChargedCompleted_Validate(bool ); \
	virtual void Broadcast_Multicast_ConfirmChargedCompleted_Implementation(bool chargeComplete); \
	virtual bool Client_NotifyChargeCompleted_Validate(const UInteractionDefinition* ); \
	virtual void Client_NotifyChargeCompleted_Implementation(const UInteractionDefinition* interaction); \
	virtual void Client_StartCustomSkillCheck_Implementation(ESkillCheckCustomType type, float warningSoundDelay); \
	virtual void Multicast_CancelCurrentInteractionByInput_Implementation(); \
	virtual void Multicast_InteractionPredictionValidationResult_Implementation(UInteractionDefinition* interaction, EInteractionValidationState state); \
	virtual bool Multicast_InterruptionRequestResult_Interruptor_Validate(ERequestState , bool ); \
	virtual void Multicast_InterruptionRequestResult_Interruptor_Implementation(ERequestState state, bool grantInterruptScore); \
	virtual bool Multicast_RequestInterruption_Interruptee_Validate(ADBDPlayer* , UInterruptionDefinition* ); \
	virtual void Multicast_RequestInterruption_Interruptee_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition); \
	virtual void Multicast_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction); \
	virtual void Multicast_StoreInteraction_Implementation(FStoredInteraction interactionToStore); \
	virtual bool Multicast_StoreInterruption_Interruptor_Validate(ADBDPlayer* , UInterruptionDefinition* ); \
	virtual void Multicast_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition); \
	virtual bool Server_AnswerInterruption_Interruptee_Validate(ERequestState ); \
	virtual void Server_AnswerInterruption_Interruptee_Implementation(ERequestState state); \
	virtual bool Server_Broadcast_ConfirmChargedCompleted_Validate(bool ); \
	virtual void Server_Broadcast_ConfirmChargedCompleted_Implementation(bool chargeComplete); \
	virtual bool Server_Broadcast_StoreInteraction_Validate(FStoredInteraction ); \
	virtual void Server_Broadcast_StoreInteraction_Implementation(FStoredInteraction interactionToStore); \
	virtual bool Server_CancelCurrentInteractionByInput_Validate(); \
	virtual void Server_CancelCurrentInteractionByInput_Implementation(); \
	virtual bool Server_DebugRequestInteraction_Validate(const FString& , const FString& , const FString& ); \
	virtual void Server_DebugRequestInteraction_Implementation(const FString& interactionName, const FString& interactorName, const FString& interactableName); \
	virtual bool Server_RequestInterruption_Interruptor_Validate(); \
	virtual void Server_RequestInterruption_Interruptor_Implementation(); \
	virtual bool Server_SetInteractionToSwapTo_Validate(UInteractionDefinition* ); \
	virtual void Server_SetInteractionToSwapTo_Implementation(UInteractionDefinition* interaction); \
	virtual bool Server_StoreInterruption_Interruptor_Validate(ADBDPlayer* , UInterruptionDefinition* ); \
	virtual void Server_StoreInterruption_Interruptor_Implementation(ADBDPlayer* interruptionOtherParty, UInterruptionDefinition* interruptionDefinition); \
 \
	DECLARE_FUNCTION(execAddInteraction); \
	DECLARE_FUNCTION(execAddSelfInteractions); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerDependencies); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerDependency); \
	DECLARE_FUNCTION(execBroadcast_Multicast_ConfirmChargedCompleted); \
	DECLARE_FUNCTION(execCanPerformInteraction); \
	DECLARE_FUNCTION(execCleanInteractionArray); \
	DECLARE_FUNCTION(execClient_NotifyChargeCompleted); \
	DECLARE_FUNCTION(execClient_StartCustomSkillCheck); \
	DECLARE_FUNCTION(execGetAdditiveSkillCheckProbabilityModifier); \
	DECLARE_FUNCTION(execGetAvailableInteraction); \
	DECLARE_FUNCTION(execGetAvailableInteractionByID); \
	DECLARE_FUNCTION(execGetAvailableInteractions); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteractionOfType); \
	DECLARE_FUNCTION(execGetMultiplicativeSkillCheckProbabilityModifier); \
	DECLARE_FUNCTION(execGetSkillCheck); \
	DECLARE_FUNCTION(execHasActiveSkillCheck); \
	DECLARE_FUNCTION(execHasAvailableInteraction); \
	DECLARE_FUNCTION(execIncrementSuccessiveSkillCheckCount); \
	DECLARE_FUNCTION(execMulticast_CancelCurrentInteractionByInput); \
	DECLARE_FUNCTION(execMulticast_InteractionPredictionValidationResult); \
	DECLARE_FUNCTION(execMulticast_InterruptionRequestResult_Interruptor); \
	DECLARE_FUNCTION(execMulticast_RequestInterruption_Interruptee); \
	DECLARE_FUNCTION(execMulticast_SetInteractionToSwapTo); \
	DECLARE_FUNCTION(execMulticast_StoreInteraction); \
	DECLARE_FUNCTION(execMulticast_StoreInterruption_Interruptor); \
	DECLARE_FUNCTION(execNumInteractionsInZone); \
	DECLARE_FUNCTION(execPauseSkillCheckTimer); \
	DECLARE_FUNCTION(execRemoveInteraction); \
	DECLARE_FUNCTION(execResetSuccessiveSkillCheckCount); \
	DECLARE_FUNCTION(execServer_AnswerInterruption_Interruptee); \
	DECLARE_FUNCTION(execServer_Broadcast_ConfirmChargedCompleted); \
	DECLARE_FUNCTION(execServer_Broadcast_StoreInteraction); \
	DECLARE_FUNCTION(execServer_CancelCurrentInteractionByInput); \
	DECLARE_FUNCTION(execServer_DebugRequestInteraction); \
	DECLARE_FUNCTION(execServer_RequestInterruption_Interruptor); \
	DECLARE_FUNCTION(execServer_SetInteractionToSwapTo); \
	DECLARE_FUNCTION(execServer_StoreInterruption_Interruptor); \
	DECLARE_FUNCTION(execSetScanForInteractionsEnabled); \
	DECLARE_FUNCTION(execSetSkillCheckTimer); \
	DECLARE_FUNCTION(execStartCustomSkillCheck); \
	DECLARE_FUNCTION(execUnPauseSkillCheckTimer);


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_EVENT_PARMS \
	struct PlayerInteractionHandler_eventBroadcast_Multicast_ConfirmChargedCompleted_Parms \
	{ \
		bool chargeComplete; \
	}; \
	struct PlayerInteractionHandler_eventClient_NotifyChargeCompleted_Parms \
	{ \
		const UInteractionDefinition* interaction; \
	}; \
	struct PlayerInteractionHandler_eventClient_StartCustomSkillCheck_Parms \
	{ \
		ESkillCheckCustomType type; \
		float warningSoundDelay; \
	}; \
	struct PlayerInteractionHandler_eventMulticast_InteractionPredictionValidationResult_Parms \
	{ \
		UInteractionDefinition* interaction; \
		EInteractionValidationState state; \
	}; \
	struct PlayerInteractionHandler_eventMulticast_InterruptionRequestResult_Interruptor_Parms \
	{ \
		ERequestState state; \
		bool grantInterruptScore; \
	}; \
	struct PlayerInteractionHandler_eventMulticast_RequestInterruption_Interruptee_Parms \
	{ \
		ADBDPlayer* interruptionOtherParty; \
		UInterruptionDefinition* interruptionDefinition; \
	}; \
	struct PlayerInteractionHandler_eventMulticast_SetInteractionToSwapTo_Parms \
	{ \
		UInteractionDefinition* interaction; \
	}; \
	struct PlayerInteractionHandler_eventMulticast_StoreInteraction_Parms \
	{ \
		FStoredInteraction interactionToStore; \
	}; \
	struct PlayerInteractionHandler_eventMulticast_StoreInterruption_Interruptor_Parms \
	{ \
		ADBDPlayer* interruptionOtherParty; \
		UInterruptionDefinition* interruptionDefinition; \
	}; \
	struct PlayerInteractionHandler_eventServer_AnswerInterruption_Interruptee_Parms \
	{ \
		ERequestState state; \
	}; \
	struct PlayerInteractionHandler_eventServer_Broadcast_ConfirmChargedCompleted_Parms \
	{ \
		bool chargeComplete; \
	}; \
	struct PlayerInteractionHandler_eventServer_Broadcast_StoreInteraction_Parms \
	{ \
		FStoredInteraction interactionToStore; \
	}; \
	struct PlayerInteractionHandler_eventServer_DebugRequestInteraction_Parms \
	{ \
		FString interactionName; \
		FString interactorName; \
		FString interactableName; \
	}; \
	struct PlayerInteractionHandler_eventServer_SetInteractionToSwapTo_Parms \
	{ \
		UInteractionDefinition* interaction; \
	}; \
	struct PlayerInteractionHandler_eventServer_StoreInterruption_Interruptor_Parms \
	{ \
		ADBDPlayer* interruptionOtherParty; \
		UInterruptionDefinition* interruptionDefinition; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInteractionHandler(); \
	friend struct Z_Construct_UClass_UPlayerInteractionHandler_Statics; \
public: \
	DECLARE_CLASS(UPlayerInteractionHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInteractionHandler) \
	virtual UObject* _getUObject() const override { return const_cast<UPlayerInteractionHandler*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInteractionHandler(); \
	friend struct Z_Construct_UClass_UPlayerInteractionHandler_Statics; \
public: \
	DECLARE_CLASS(UPlayerInteractionHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInteractionHandler) \
	virtual UObject* _getUObject() const override { return const_cast<UPlayerInteractionHandler*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInteractionHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInteractionHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInteractionHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInteractionHandler(UPlayerInteractionHandler&&); \
	NO_API UPlayerInteractionHandler(const UPlayerInteractionHandler&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInteractionHandler(UPlayerInteractionHandler&&); \
	NO_API UPlayerInteractionHandler(const UPlayerInteractionHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInteractionHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInteractionHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hasInteractionRequest() { return STRUCT_OFFSET(UPlayerInteractionHandler, _hasInteractionRequest); } \
	FORCEINLINE static uint32 __PPO___hasInteractionRequestInBuffer() { return STRUCT_OFFSET(UPlayerInteractionHandler, _hasInteractionRequestInBuffer); } \
	FORCEINLINE static uint32 __PPO___interactionToSwapTo() { return STRUCT_OFFSET(UPlayerInteractionHandler, _interactionToSwapTo); } \
	FORCEINLINE static uint32 __PPO___currentInteraction() { return STRUCT_OFFSET(UPlayerInteractionHandler, _currentInteraction); } \
	FORCEINLINE static uint32 __PPO___currentPlayerDependencies() { return STRUCT_OFFSET(UPlayerInteractionHandler, _currentPlayerDependencies); } \
	FORCEINLINE static uint32 __PPO___currentInteractionType() { return STRUCT_OFFSET(UPlayerInteractionHandler, _currentInteractionType); } \
	FORCEINLINE static uint32 __PPO___skillCheck() { return STRUCT_OFFSET(UPlayerInteractionHandler, _skillCheck); } \
	FORCEINLINE static uint32 __PPO___progressBasedSkillChecks() { return STRUCT_OFFSET(UPlayerInteractionHandler, _progressBasedSkillChecks); } \
	FORCEINLINE static uint32 __PPO___requestedInterruptionOtherParty() { return STRUCT_OFFSET(UPlayerInteractionHandler, _requestedInterruptionOtherParty); } \
	FORCEINLINE static uint32 __PPO___requestedInterruptionDefinition() { return STRUCT_OFFSET(UPlayerInteractionHandler, _requestedInterruptionDefinition); } \
	FORCEINLINE static uint32 __PPO___requestedInterruptionIsInterruptor() { return STRUCT_OFFSET(UPlayerInteractionHandler, _requestedInterruptionIsInterruptor); } \
	FORCEINLINE static uint32 __PPO___currentInterruptionOtherParty() { return STRUCT_OFFSET(UPlayerInteractionHandler, _currentInterruptionOtherParty); } \
	FORCEINLINE static uint32 __PPO___currentInterruptionDefinition() { return STRUCT_OFFSET(UPlayerInteractionHandler, _currentInterruptionDefinition); } \
	FORCEINLINE static uint32 __PPO___currentInterruptionIsInterruptor() { return STRUCT_OFFSET(UPlayerInteractionHandler, _currentInterruptionIsInterruptor); } \
	FORCEINLINE static uint32 __PPO___interactionInProgress() { return STRUCT_OFFSET(UPlayerInteractionHandler, _interactionInProgress); } \
	FORCEINLINE static uint32 __PPO___interactionsInZone() { return STRUCT_OFFSET(UPlayerInteractionHandler, _interactionsInZone); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_25_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPlayerInteractionHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractionHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
