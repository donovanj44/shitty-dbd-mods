// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
class UPrimitiveComponent;
#ifdef DEADBYDAYLIGHT_KillerProjectile_generated_h
#error "KillerProjectile.generated.h already included, missing '#pragma once' in KillerProjectile.h"
#endif
#define DEADBYDAYLIGHT_KillerProjectile_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_RPC_WRAPPERS \
	virtual UPrimitiveComponent* GetPlayerPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetLaunchingKiller); \
	DECLARE_FUNCTION(execGetPlayerPrimitiveComponent); \
	DECLARE_FUNCTION(execSetActiveSlashable);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UPrimitiveComponent* GetPlayerPrimitiveComponent_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetLaunchingKiller); \
	DECLARE_FUNCTION(execGetPlayerPrimitiveComponent); \
	DECLARE_FUNCTION(execSetActiveSlashable);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_EVENT_PARMS \
	struct KillerProjectile_eventGetPlayerPrimitiveComponent_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		KillerProjectile_eventGetPlayerPrimitiveComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKillerProjectile(); \
	friend struct Z_Construct_UClass_AKillerProjectile_Statics; \
public: \
	DECLARE_CLASS(AKillerProjectile, APhysicsBasedProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AKillerProjectile)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAKillerProjectile(); \
	friend struct Z_Construct_UClass_AKillerProjectile_Statics; \
public: \
	DECLARE_CLASS(AKillerProjectile, APhysicsBasedProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AKillerProjectile)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKillerProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKillerProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKillerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKillerProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKillerProjectile(AKillerProjectile&&); \
	NO_API AKillerProjectile(const AKillerProjectile&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKillerProjectile(AKillerProjectile&&); \
	NO_API AKillerProjectile(const AKillerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKillerProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKillerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKillerProjectile)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___killerProjectileAttemptGameEventTag() { return STRUCT_OFFSET(AKillerProjectile, _killerProjectileAttemptGameEventTag); } \
	FORCEINLINE static uint32 __PPO___hitValidatorConfigurator() { return STRUCT_OFFSET(AKillerProjectile, _hitValidatorConfigurator); } \
	FORCEINLINE static uint32 __PPO___hitValidatorComponent() { return STRUCT_OFFSET(AKillerProjectile, _hitValidatorComponent); } \
	FORCEINLINE static uint32 __PPO___hitValidationConfigName() { return STRUCT_OFFSET(AKillerProjectile, _hitValidationConfigName); }


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AKillerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_KillerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
