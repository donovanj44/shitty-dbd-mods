// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGUNSLINGER_GunslingerEffectsComponent_generated_h
#error "GunslingerEffectsComponent.generated.h already included, missing '#pragma once' in GunslingerEffectsComponent.h"
#endif
#define THEGUNSLINGER_GunslingerEffectsComponent_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_9_DELEGATE \
static inline void FGunslingerEffectsComponentPlayOutOfAmmoSound_DelegateWrapper(const FMulticastScriptDelegate& GunslingerEffectsComponentPlayOutOfAmmoSound) \
{ \
	GunslingerEffectsComponentPlayOutOfAmmoSound.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_8_DELEGATE \
struct _Script_TheGunslinger_eventGunslingerEffectsComponentOnIsAimingChanged_Parms \
{ \
	bool isAiming; \
}; \
static inline void FGunslingerEffectsComponentOnIsAimingChanged_DelegateWrapper(const FMulticastScriptDelegate& GunslingerEffectsComponentOnIsAimingChanged, bool isAiming) \
{ \
	_Script_TheGunslinger_eventGunslingerEffectsComponentOnIsAimingChanged_Parms Parms; \
	Parms.isAiming=isAiming ? true : false; \
	GunslingerEffectsComponentOnIsAimingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_RPC_WRAPPERS \
	virtual void Multicast_PlayOutOfAmmoSound_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_PlayOutOfAmmoSound); \
	DECLARE_FUNCTION(execOnItemUsedStateChanged);


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlayOutOfAmmoSound_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_PlayOutOfAmmoSound); \
	DECLARE_FUNCTION(execOnItemUsedStateChanged);


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_EVENT_PARMS
#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGunslingerEffectsComponent(); \
	friend struct Z_Construct_UClass_UGunslingerEffectsComponent_Statics; \
public: \
	DECLARE_CLASS(UGunslingerEffectsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UGunslingerEffectsComponent)


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGunslingerEffectsComponent(); \
	friend struct Z_Construct_UClass_UGunslingerEffectsComponent_Statics; \
public: \
	DECLARE_CLASS(UGunslingerEffectsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UGunslingerEffectsComponent)


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGunslingerEffectsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGunslingerEffectsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGunslingerEffectsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunslingerEffectsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGunslingerEffectsComponent(UGunslingerEffectsComponent&&); \
	NO_API UGunslingerEffectsComponent(const UGunslingerEffectsComponent&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGunslingerEffectsComponent(UGunslingerEffectsComponent&&); \
	NO_API UGunslingerEffectsComponent(const UGunslingerEffectsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGunslingerEffectsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGunslingerEffectsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGunslingerEffectsComponent)


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___minimumTimeBetweenBroadcast() { return STRUCT_OFFSET(UGunslingerEffectsComponent, _minimumTimeBetweenBroadcast); } \
	FORCEINLINE static uint32 __PPO___rifle() { return STRUCT_OFFSET(UGunslingerEffectsComponent, _rifle); }


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_11_PROLOG \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UGunslingerEffectsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_GunslingerEffectsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
