// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AZombieCharacter;
#ifdef THEK24_K24CharacterFXComponent_generated_h
#error "K24CharacterFXComponent.generated.h already included, missing '#pragma once' in K24CharacterFXComponent.h"
#endif
#define THEK24_K24CharacterFXComponent_generated_h

#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_10_DELEGATE \
static inline void FK24CharacterFXComponentLocal_OnKillerContaminatedSurvivor_DelegateWrapper(const FMulticastScriptDelegate& K24CharacterFXComponentLocal_OnKillerContaminatedSurvivor) \
{ \
	K24CharacterFXComponentLocal_OnKillerContaminatedSurvivor.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_9_DELEGATE \
struct _Script_TheK24_eventK24CharacterFXComponentLocal_OnKillerHitZombie_Parms \
{ \
	AZombieCharacter* zombieCharater; \
}; \
static inline void FK24CharacterFXComponentLocal_OnKillerHitZombie_DelegateWrapper(const FMulticastScriptDelegate& K24CharacterFXComponentLocal_OnKillerHitZombie, AZombieCharacter* zombieCharater) \
{ \
	_Script_TheK24_eventK24CharacterFXComponentLocal_OnKillerHitZombie_Parms Parms; \
	Parms.zombieCharater=zombieCharater; \
	K24CharacterFXComponentLocal_OnKillerHitZombie.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_8_DELEGATE \
struct _Script_TheK24_eventK24CharacterFXComponentOnPowerLevelChangedFx_Parms \
{ \
	int32 powerlevel; \
}; \
static inline void FK24CharacterFXComponentOnPowerLevelChangedFx_DelegateWrapper(const FMulticastScriptDelegate& K24CharacterFXComponentOnPowerLevelChangedFx, int32 powerlevel) \
{ \
	_Script_TheK24_eventK24CharacterFXComponentOnPowerLevelChangedFx_Parms Parms; \
	Parms.powerlevel=powerlevel; \
	K24CharacterFXComponentOnPowerLevelChangedFx.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLocal_OnKillerPowerLevelChanged);


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLocal_OnKillerPowerLevelChanged);


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK24CharacterFXComponent(); \
	friend struct Z_Construct_UClass_UK24CharacterFXComponent_Statics; \
public: \
	DECLARE_CLASS(UK24CharacterFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24CharacterFXComponent)


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUK24CharacterFXComponent(); \
	friend struct Z_Construct_UClass_UK24CharacterFXComponent_Statics; \
public: \
	DECLARE_CLASS(UK24CharacterFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24CharacterFXComponent)


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK24CharacterFXComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK24CharacterFXComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24CharacterFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24CharacterFXComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24CharacterFXComponent(UK24CharacterFXComponent&&); \
	NO_API UK24CharacterFXComponent(const UK24CharacterFXComponent&); \
public:


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24CharacterFXComponent(UK24CharacterFXComponent&&); \
	NO_API UK24CharacterFXComponent(const UK24CharacterFXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24CharacterFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24CharacterFXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK24CharacterFXComponent)


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_12_PROLOG
#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_INCLASS \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UK24CharacterFXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_K24CharacterFXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
