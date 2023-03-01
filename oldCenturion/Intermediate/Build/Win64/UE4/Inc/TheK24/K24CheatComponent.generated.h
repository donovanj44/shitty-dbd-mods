// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_K24CheatComponent_generated_h
#error "K24CheatComponent.generated.h already included, missing '#pragma once' in K24CheatComponent.h"
#endif
#define THEK24_K24CheatComponent_generated_h

#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_K24ComeToMeMyZombies); \
	DECLARE_FUNCTION(execDBD_K24SetContaminationOnSurvivor); \
	DECLARE_FUNCTION(execDBD_K24SetPowerLevelPoints); \
	DECLARE_FUNCTION(execDBD_K24SpawnZombieOnKiller); \
	DECLARE_FUNCTION(execDBD_K24StartAllZombies); \
	DECLARE_FUNCTION(execDBD_K24StopAllZombies); \
	DECLARE_FUNCTION(execDBD_K24ZombieFall); \
	DECLARE_FUNCTION(execDBD_TeleportZombiesTo);


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_K24ComeToMeMyZombies); \
	DECLARE_FUNCTION(execDBD_K24SetContaminationOnSurvivor); \
	DECLARE_FUNCTION(execDBD_K24SetPowerLevelPoints); \
	DECLARE_FUNCTION(execDBD_K24SpawnZombieOnKiller); \
	DECLARE_FUNCTION(execDBD_K24StartAllZombies); \
	DECLARE_FUNCTION(execDBD_K24StopAllZombies); \
	DECLARE_FUNCTION(execDBD_K24ZombieFall); \
	DECLARE_FUNCTION(execDBD_TeleportZombiesTo);


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK24CheatComponent(); \
	friend struct Z_Construct_UClass_UK24CheatComponent_Statics; \
public: \
	DECLARE_CLASS(UK24CheatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24CheatComponent)


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUK24CheatComponent(); \
	friend struct Z_Construct_UClass_UK24CheatComponent_Statics; \
public: \
	DECLARE_CLASS(UK24CheatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24CheatComponent)


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK24CheatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK24CheatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24CheatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24CheatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24CheatComponent(UK24CheatComponent&&); \
	NO_API UK24CheatComponent(const UK24CheatComponent&); \
public:


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24CheatComponent(UK24CheatComponent&&); \
	NO_API UK24CheatComponent(const UK24CheatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24CheatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24CheatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK24CheatComponent)


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___zombieManagementClass() { return STRUCT_OFFSET(UK24CheatComponent, _zombieManagementClass); } \
	FORCEINLINE static uint32 __PPO___zombiesManagement() { return STRUCT_OFFSET(UK24CheatComponent, _zombiesManagement); }


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_9_PROLOG
#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_INCLASS \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UK24CheatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_K24CheatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
