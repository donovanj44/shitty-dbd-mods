// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THEEXECUTIONER_ExecutionerTormentAttack_generated_h
#error "ExecutionerTormentAttack.generated.h already included, missing '#pragma once' in ExecutionerTormentAttack.h"
#endif
#define THEEXECUTIONER_ExecutionerTormentAttack_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_RPC_WRAPPERS \
	virtual void Multicast_TormentHitTarget_Implementation(ADBDPlayer* target); \
	virtual bool Server_TormentTryHitTargetNotInCoolDown_Validate(ADBDPlayer* ); \
	virtual void Server_TormentTryHitTargetNotInCoolDown_Implementation(ADBDPlayer* target); \
 \
	DECLARE_FUNCTION(execMulticast_TormentHitTarget); \
	DECLARE_FUNCTION(execServer_TormentTryHitTargetNotInCoolDown);


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TormentHitTarget_Implementation(ADBDPlayer* target); \
	virtual bool Server_TormentTryHitTargetNotInCoolDown_Validate(ADBDPlayer* ); \
	virtual void Server_TormentTryHitTargetNotInCoolDown_Implementation(ADBDPlayer* target); \
 \
	DECLARE_FUNCTION(execMulticast_TormentHitTarget); \
	DECLARE_FUNCTION(execServer_TormentTryHitTargetNotInCoolDown);


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_EVENT_PARMS \
	struct ExecutionerTormentAttack_eventMulticast_TormentHitTarget_Parms \
	{ \
		ADBDPlayer* target; \
	}; \
	struct ExecutionerTormentAttack_eventServer_TormentTryHitTargetNotInCoolDown_Parms \
	{ \
		ADBDPlayer* target; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExecutionerTormentAttack(); \
	friend struct Z_Construct_UClass_UExecutionerTormentAttack_Statics; \
public: \
	DECLARE_CLASS(UExecutionerTormentAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UExecutionerTormentAttack)


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUExecutionerTormentAttack(); \
	friend struct Z_Construct_UClass_UExecutionerTormentAttack_Statics; \
public: \
	DECLARE_CLASS(UExecutionerTormentAttack, UPounceAttack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UExecutionerTormentAttack)


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExecutionerTormentAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExecutionerTormentAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExecutionerTormentAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExecutionerTormentAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExecutionerTormentAttack(UExecutionerTormentAttack&&); \
	NO_API UExecutionerTormentAttack(const UExecutionerTormentAttack&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExecutionerTormentAttack(UExecutionerTormentAttack&&); \
	NO_API UExecutionerTormentAttack(const UExecutionerTormentAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExecutionerTormentAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExecutionerTormentAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExecutionerTormentAttack)


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_8_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UExecutionerTormentAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_ExecutionerTormentAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
