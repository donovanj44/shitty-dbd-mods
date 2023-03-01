// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUnhook;
class ACamperPlayer;
#ifdef DBDINTERACTION_UnhookReplicationComponent_generated_h
#error "UnhookReplicationComponent.generated.h already included, missing '#pragma once' in UnhookReplicationComponent.h"
#endif
#define DBDINTERACTION_UnhookReplicationComponent_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_RPC_WRAPPERS \
	virtual void Multicast_SetPlayerBeingUnhooked_Implementation(UUnhook* unhookInteraction, ACamperPlayer* playerBeingUnhooked); \
 \
	DECLARE_FUNCTION(execMulticast_SetPlayerBeingUnhooked);


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetPlayerBeingUnhooked_Implementation(UUnhook* unhookInteraction, ACamperPlayer* playerBeingUnhooked); \
 \
	DECLARE_FUNCTION(execMulticast_SetPlayerBeingUnhooked);


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_EVENT_PARMS \
	struct UnhookReplicationComponent_eventMulticast_SetPlayerBeingUnhooked_Parms \
	{ \
		UUnhook* unhookInteraction; \
		ACamperPlayer* playerBeingUnhooked; \
	};


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnhookReplicationComponent(); \
	friend struct Z_Construct_UClass_UUnhookReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UUnhookReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UUnhookReplicationComponent)


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUUnhookReplicationComponent(); \
	friend struct Z_Construct_UClass_UUnhookReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UUnhookReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UUnhookReplicationComponent)


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnhookReplicationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnhookReplicationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnhookReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnhookReplicationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnhookReplicationComponent(UUnhookReplicationComponent&&); \
	NO_API UUnhookReplicationComponent(const UUnhookReplicationComponent&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnhookReplicationComponent(UUnhookReplicationComponent&&); \
	NO_API UUnhookReplicationComponent(const UUnhookReplicationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnhookReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnhookReplicationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnhookReplicationComponent)


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_9_PROLOG \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UUnhookReplicationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_UnhookReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
