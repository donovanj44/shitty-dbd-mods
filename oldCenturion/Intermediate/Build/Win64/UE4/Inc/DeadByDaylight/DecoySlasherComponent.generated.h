// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class ASlasherPlayer;
class UTerrorRadiusEmitterComponent;
#ifdef DEADBYDAYLIGHT_DecoySlasherComponent_generated_h
#error "DecoySlasherComponent.generated.h already included, missing '#pragma once' in DecoySlasherComponent.h"
#endif
#define DEADBYDAYLIGHT_DecoySlasherComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventDecoySlasherComponentTriggerDecoyVisibilityVFX_Parms \
{ \
	bool visible; \
	FVector location; \
	FRotator rotation; \
}; \
static inline void FDecoySlasherComponentTriggerDecoyVisibilityVFX_DelegateWrapper(const FMulticastScriptDelegate& DecoySlasherComponentTriggerDecoyVisibilityVFX, bool visible, FVector const& location, FRotator const& rotation) \
{ \
	_Script_DeadByDaylight_eventDecoySlasherComponentTriggerDecoyVisibilityVFX_Parms Parms; \
	Parms.visible=visible ? true : false; \
	Parms.location=location; \
	Parms.rotation=rotation; \
	DecoySlasherComponentTriggerDecoyVisibilityVFX.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventDecoySlasherComponentOnPalletStunned_Authority_Parms \
{ \
	AActor* instigator; \
}; \
static inline void FDecoySlasherComponentOnPalletStunned_Authority_DelegateWrapper(const FMulticastScriptDelegate& DecoySlasherComponentOnPalletStunned_Authority, AActor* instigator) \
{ \
	_Script_DeadByDaylight_eventDecoySlasherComponentOnPalletStunned_Authority_Parms Parms; \
	Parms.instigator=instigator; \
	DecoySlasherComponentOnPalletStunned_Authority.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_PalletStun); \
	DECLARE_FUNCTION(execCopyCustomizationFromSlasher); \
	DECLARE_FUNCTION(execDoPostVFXUpdates); \
	DECLARE_FUNCTION(execGetRealSlasher); \
	DECLARE_FUNCTION(execGetTerrorRadiusEmitter); \
	DECLARE_FUNCTION(execIsDecoyActive); \
	DECLARE_FUNCTION(execOnRealSlasherTerrorRadiusChanged); \
	DECLARE_FUNCTION(execSetDecoyIsActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_PalletStun); \
	DECLARE_FUNCTION(execCopyCustomizationFromSlasher); \
	DECLARE_FUNCTION(execDoPostVFXUpdates); \
	DECLARE_FUNCTION(execGetRealSlasher); \
	DECLARE_FUNCTION(execGetTerrorRadiusEmitter); \
	DECLARE_FUNCTION(execIsDecoyActive); \
	DECLARE_FUNCTION(execOnRealSlasherTerrorRadiusChanged); \
	DECLARE_FUNCTION(execSetDecoyIsActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDecoySlasherComponent(); \
	friend struct Z_Construct_UClass_UDecoySlasherComponent_Statics; \
public: \
	DECLARE_CLASS(UDecoySlasherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDecoySlasherComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDecoySlasherComponent(); \
	friend struct Z_Construct_UClass_UDecoySlasherComponent_Statics; \
public: \
	DECLARE_CLASS(UDecoySlasherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDecoySlasherComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDecoySlasherComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDecoySlasherComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecoySlasherComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecoySlasherComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecoySlasherComponent(UDecoySlasherComponent&&); \
	NO_API UDecoySlasherComponent(const UDecoySlasherComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDecoySlasherComponent(UDecoySlasherComponent&&); \
	NO_API UDecoySlasherComponent(const UDecoySlasherComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDecoySlasherComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDecoySlasherComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDecoySlasherComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HasTerrorRadius() { return STRUCT_OFFSET(UDecoySlasherComponent, HasTerrorRadius); } \
	FORCEINLINE static uint32 __PPO__HasRedGlow() { return STRUCT_OFFSET(UDecoySlasherComponent, HasRedGlow); } \
	FORCEINLINE static uint32 __PPO___isActive() { return STRUCT_OFFSET(UDecoySlasherComponent, _isActive); } \
	FORCEINLINE static uint32 __PPO___initialized() { return STRUCT_OFFSET(UDecoySlasherComponent, _initialized); } \
	FORCEINLINE static uint32 __PPO___terrorRadiusEmitter() { return STRUCT_OFFSET(UDecoySlasherComponent, _terrorRadiusEmitter); } \
	FORCEINLINE static uint32 __PPO___redStainComponent() { return STRUCT_OFFSET(UDecoySlasherComponent, _redStainComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_16_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDecoySlasherComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DecoySlasherComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
