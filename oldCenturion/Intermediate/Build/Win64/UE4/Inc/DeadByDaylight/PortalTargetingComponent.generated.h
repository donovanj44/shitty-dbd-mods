// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADemogorgonPortal;
#ifdef DEADBYDAYLIGHT_PortalTargetingComponent_generated_h
#error "PortalTargetingComponent.generated.h already included, missing '#pragma once' in PortalTargetingComponent.h"
#endif
#define DEADBYDAYLIGHT_PortalTargetingComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_RPC_WRAPPERS \
	virtual bool Multicast_SetTargetedPortal_Validate(ADemogorgonPortal* ); \
	virtual void Multicast_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal); \
	virtual bool Server_SetTargetedPortal_Validate(ADemogorgonPortal* ); \
	virtual void Server_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal); \
 \
	DECLARE_FUNCTION(execGetTargetedPortal); \
	DECLARE_FUNCTION(execMulticast_SetTargetedPortal); \
	DECLARE_FUNCTION(execServer_SetTargetedPortal); \
	DECLARE_FUNCTION(execSetIsPorting);


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_SetTargetedPortal_Validate(ADemogorgonPortal* ); \
	virtual void Multicast_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal); \
	virtual bool Server_SetTargetedPortal_Validate(ADemogorgonPortal* ); \
	virtual void Server_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal); \
 \
	DECLARE_FUNCTION(execGetTargetedPortal); \
	DECLARE_FUNCTION(execMulticast_SetTargetedPortal); \
	DECLARE_FUNCTION(execServer_SetTargetedPortal); \
	DECLARE_FUNCTION(execSetIsPorting);


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_EVENT_PARMS \
	struct PortalTargetingComponent_eventMulticast_SetTargetedPortal_Parms \
	{ \
		ADemogorgonPortal* targetedPortal; \
	}; \
	struct PortalTargetingComponent_eventServer_SetTargetedPortal_Parms \
	{ \
		ADemogorgonPortal* targetedPortal; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPortalTargetingComponent(); \
	friend struct Z_Construct_UClass_UPortalTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalTargetingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPortalTargetingComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPortalTargetingComponent(); \
	friend struct Z_Construct_UClass_UPortalTargetingComponent_Statics; \
public: \
	DECLARE_CLASS(UPortalTargetingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPortalTargetingComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPortalTargetingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPortalTargetingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalTargetingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalTargetingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalTargetingComponent(UPortalTargetingComponent&&); \
	NO_API UPortalTargetingComponent(const UPortalTargetingComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPortalTargetingComponent(UPortalTargetingComponent&&); \
	NO_API UPortalTargetingComponent(const UPortalTargetingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPortalTargetingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPortalTargetingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPortalTargetingComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___targetedPortal() { return STRUCT_OFFSET(UPortalTargetingComponent, _targetedPortal); } \
	FORCEINLINE static uint32 __PPO___portalPlacerState() { return STRUCT_OFFSET(UPortalTargetingComponent, _portalPlacerState); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPortalTargetingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PortalTargetingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
