// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_ZombieResurrector_generated_h
#error "ZombieResurrector.generated.h already included, missing '#pragma once' in ZombieResurrector.h"
#endif
#define THEK24_ZombieResurrector_generated_h

#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnKillerPowerLevelChanged);


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnKillerPowerLevelChanged);


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZombieResurrector(); \
	friend struct Z_Construct_UClass_UZombieResurrector_Statics; \
public: \
	DECLARE_CLASS(UZombieResurrector, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UZombieResurrector)


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUZombieResurrector(); \
	friend struct Z_Construct_UClass_UZombieResurrector_Statics; \
public: \
	DECLARE_CLASS(UZombieResurrector, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UZombieResurrector)


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZombieResurrector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZombieResurrector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZombieResurrector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZombieResurrector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZombieResurrector(UZombieResurrector&&); \
	NO_API UZombieResurrector(const UZombieResurrector&); \
public:


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZombieResurrector(UZombieResurrector&&); \
	NO_API UZombieResurrector(const UZombieResurrector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZombieResurrector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZombieResurrector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZombieResurrector)


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___powerLevelToSpawnZombie() { return STRUCT_OFFSET(UZombieResurrector, _powerLevelToSpawnZombie); } \
	FORCEINLINE static uint32 __PPO___delayedSpawnZombies() { return STRUCT_OFFSET(UZombieResurrector, _delayedSpawnZombies); }


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_9_PROLOG
#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_INCLASS \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UZombieResurrector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_ZombieResurrector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
