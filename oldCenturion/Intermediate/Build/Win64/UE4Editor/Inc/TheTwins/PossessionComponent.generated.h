// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THETWINS_PossessionComponent_generated_h
#error "PossessionComponent.generated.h already included, missing '#pragma once' in PossessionComponent.h"
#endif
#define THETWINS_PossessionComponent_generated_h

#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_RPC_WRAPPERS \
	virtual void Client_StartStateMachineDriverChangeProcess_Implementation(); \
	virtual void Multicast_NotifyPossessionDone_Implementation(); \
	virtual void Multicast_StartPossessionOf_Implementation(ADBDPlayer* playerToPossess); \
	virtual bool Server_NotifyPossessionDone_Validate(); \
	virtual void Server_NotifyPossessionDone_Implementation(); \
	virtual bool Server_StartPossessionOf_Validate(ADBDPlayer* , bool ); \
	virtual void Server_StartPossessionOf_Implementation(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction); \
 \
	DECLARE_FUNCTION(execClient_StartStateMachineDriverChangeProcess); \
	DECLARE_FUNCTION(execIsDormant); \
	DECLARE_FUNCTION(execIsPossessed); \
	DECLARE_FUNCTION(execMulticast_NotifyPossessionDone); \
	DECLARE_FUNCTION(execMulticast_StartPossessionOf); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execServer_NotifyPossessionDone); \
	DECLARE_FUNCTION(execServer_StartPossessionOf);


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_StartStateMachineDriverChangeProcess_Implementation(); \
	virtual void Multicast_NotifyPossessionDone_Implementation(); \
	virtual void Multicast_StartPossessionOf_Implementation(ADBDPlayer* playerToPossess); \
	virtual bool Server_NotifyPossessionDone_Validate(); \
	virtual void Server_NotifyPossessionDone_Implementation(); \
	virtual bool Server_StartPossessionOf_Validate(ADBDPlayer* , bool ); \
	virtual void Server_StartPossessionOf_Implementation(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction); \
 \
	DECLARE_FUNCTION(execClient_StartStateMachineDriverChangeProcess); \
	DECLARE_FUNCTION(execIsDormant); \
	DECLARE_FUNCTION(execIsPossessed); \
	DECLARE_FUNCTION(execMulticast_NotifyPossessionDone); \
	DECLARE_FUNCTION(execMulticast_StartPossessionOf); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execServer_NotifyPossessionDone); \
	DECLARE_FUNCTION(execServer_StartPossessionOf);


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_EVENT_PARMS \
	struct PossessionComponent_eventCosmetic_OnControlledChanged_Parms \
	{ \
		ADBDPlayer* player; \
		bool isControlled; \
	}; \
	struct PossessionComponent_eventCosmeticLocal_OnControlled_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct PossessionComponent_eventCosmeticLocal_OnUncontrolled_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct PossessionComponent_eventMulticast_StartPossessionOf_Parms \
	{ \
		ADBDPlayer* playerToPossess; \
	}; \
	struct PossessionComponent_eventServer_StartPossessionOf_Parms \
	{ \
		ADBDPlayer* playerToPossess; \
		bool shouldStartBeingPossessedInteraction; \
	};


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPossessionComponent(); \
	friend struct Z_Construct_UClass_UPossessionComponent_Statics; \
public: \
	DECLARE_CLASS(UPossessionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UPossessionComponent)


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPossessionComponent(); \
	friend struct Z_Construct_UClass_UPossessionComponent_Statics; \
public: \
	DECLARE_CLASS(UPossessionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UPossessionComponent)


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPossessionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPossessionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPossessionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPossessionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPossessionComponent(UPossessionComponent&&); \
	NO_API UPossessionComponent(const UPossessionComponent&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPossessionComponent(UPossessionComponent&&); \
	NO_API UPossessionComponent(const UPossessionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPossessionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPossessionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPossessionComponent)


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___startPossessed() { return STRUCT_OFFSET(UPossessionComponent, _startPossessed); } \
	FORCEINLINE static uint32 __PPO___emptyController() { return STRUCT_OFFSET(UPossessionComponent, _emptyController); }


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_9_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UPossessionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_PossessionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
