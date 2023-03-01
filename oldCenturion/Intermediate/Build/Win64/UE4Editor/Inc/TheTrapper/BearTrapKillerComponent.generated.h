// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABearTrap;
#ifdef THETRAPPER_BearTrapKillerComponent_generated_h
#error "BearTrapKillerComponent.generated.h already included, missing '#pragma once' in BearTrapKillerComponent.h"
#endif
#define THETRAPPER_BearTrapKillerComponent_generated_h

#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_RPC_WRAPPERS \
	virtual void Multicast_DisarmTrap_Implementation(ABearTrap* trapToDisarm); \
	virtual void Server_TryDisarmTrap_Implementation(ABearTrap* trapToDisarm); \
 \
	DECLARE_FUNCTION(execMulticast_DisarmTrap); \
	DECLARE_FUNCTION(execServer_TryDisarmTrap);


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DisarmTrap_Implementation(ABearTrap* trapToDisarm); \
	virtual void Server_TryDisarmTrap_Implementation(ABearTrap* trapToDisarm); \
 \
	DECLARE_FUNCTION(execMulticast_DisarmTrap); \
	DECLARE_FUNCTION(execServer_TryDisarmTrap);


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_EVENT_PARMS \
	struct BearTrapKillerComponent_eventMulticast_DisarmTrap_Parms \
	{ \
		ABearTrap* trapToDisarm; \
	}; \
	struct BearTrapKillerComponent_eventServer_TryDisarmTrap_Parms \
	{ \
		ABearTrap* trapToDisarm; \
	};


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBearTrapKillerComponent(); \
	friend struct Z_Construct_UClass_UBearTrapKillerComponent_Statics; \
public: \
	DECLARE_CLASS(UBearTrapKillerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(UBearTrapKillerComponent)


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUBearTrapKillerComponent(); \
	friend struct Z_Construct_UClass_UBearTrapKillerComponent_Statics; \
public: \
	DECLARE_CLASS(UBearTrapKillerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(UBearTrapKillerComponent)


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBearTrapKillerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBearTrapKillerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBearTrapKillerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBearTrapKillerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBearTrapKillerComponent(UBearTrapKillerComponent&&); \
	NO_API UBearTrapKillerComponent(const UBearTrapKillerComponent&); \
public:


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBearTrapKillerComponent(UBearTrapKillerComponent&&); \
	NO_API UBearTrapKillerComponent(const UBearTrapKillerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBearTrapKillerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBearTrapKillerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBearTrapKillerComponent)


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_8_PROLOG \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_INCLASS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAPPER_API UClass* StaticClass<class UBearTrapKillerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTrapper_Public_BearTrapKillerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
