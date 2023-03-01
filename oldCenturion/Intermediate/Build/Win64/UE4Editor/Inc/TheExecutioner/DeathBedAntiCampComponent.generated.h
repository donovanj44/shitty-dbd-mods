// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEEXECUTIONER_DeathBedAntiCampComponent_generated_h
#error "DeathBedAntiCampComponent.generated.h already included, missing '#pragma once' in DeathBedAntiCampComponent.h"
#endif
#define THEEXECUTIONER_DeathBedAntiCampComponent_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_RPC_WRAPPERS \
	virtual void Multicast_TriggerDeathBedRelocate_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnInRangeChanged); \
	DECLARE_FUNCTION(execMulticast_TriggerDeathBedRelocate);


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TriggerDeathBedRelocate_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnInRangeChanged); \
	DECLARE_FUNCTION(execMulticast_TriggerDeathBedRelocate);


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_EVENT_PARMS
#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeathBedAntiCampComponent(); \
	friend struct Z_Construct_UClass_UDeathBedAntiCampComponent_Statics; \
public: \
	DECLARE_CLASS(UDeathBedAntiCampComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UDeathBedAntiCampComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUDeathBedAntiCampComponent(); \
	friend struct Z_Construct_UClass_UDeathBedAntiCampComponent_Statics; \
public: \
	DECLARE_CLASS(UDeathBedAntiCampComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UDeathBedAntiCampComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeathBedAntiCampComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeathBedAntiCampComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeathBedAntiCampComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathBedAntiCampComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeathBedAntiCampComponent(UDeathBedAntiCampComponent&&); \
	NO_API UDeathBedAntiCampComponent(const UDeathBedAntiCampComponent&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeathBedAntiCampComponent(UDeathBedAntiCampComponent&&); \
	NO_API UDeathBedAntiCampComponent(const UDeathBedAntiCampComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeathBedAntiCampComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathBedAntiCampComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeathBedAntiCampComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___anticampZoneDistance() { return STRUCT_OFFSET(UDeathBedAntiCampComponent, _anticampZoneDistance); } \
	FORCEINLINE static uint32 __PPO___anticampZoneTimeToTrigger() { return STRUCT_OFFSET(UDeathBedAntiCampComponent, _anticampZoneTimeToTrigger); }


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_7_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UDeathBedAntiCampComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_DeathBedAntiCampComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
