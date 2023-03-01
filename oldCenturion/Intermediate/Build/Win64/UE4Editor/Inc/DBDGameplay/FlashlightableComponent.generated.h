// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFlashlightComponent;
#ifdef DBDGAMEPLAY_FlashlightableComponent_generated_h
#error "FlashlightableComponent.generated.h already included, missing '#pragma once' in FlashlightableComponent.h"
#endif
#define DBDGAMEPLAY_FlashlightableComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_11_DELEGATE \
struct _Script_DBDGameplay_eventFlashlightableComponentOnFlashlightLitChangedEvent_Parms \
{ \
	bool isLit; \
}; \
static inline void FFlashlightableComponentOnFlashlightLitChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& FlashlightableComponentOnFlashlightLitChangedEvent, bool isLit) \
{ \
	_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightLitChangedEvent_Parms Parms; \
	Parms.isLit=isLit ? true : false; \
	FlashlightableComponentOnFlashlightLitChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_10_DELEGATE \
struct _Script_DBDGameplay_eventFlashlightableComponentOnFlashlightRemovedEvent_Parms \
{ \
	const UFlashlightComponent* flashlight; \
}; \
static inline void FFlashlightableComponentOnFlashlightRemovedEvent_DelegateWrapper(const FMulticastScriptDelegate& FlashlightableComponentOnFlashlightRemovedEvent, const UFlashlightComponent* flashlight) \
{ \
	_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightRemovedEvent_Parms Parms; \
	Parms.flashlight=flashlight; \
	FlashlightableComponentOnFlashlightRemovedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_9_DELEGATE \
struct _Script_DBDGameplay_eventFlashlightableComponentOnFlashlightAddedEvent_Parms \
{ \
	const UFlashlightComponent* flashlight; \
}; \
static inline void FFlashlightableComponentOnFlashlightAddedEvent_DelegateWrapper(const FMulticastScriptDelegate& FlashlightableComponentOnFlashlightAddedEvent, const UFlashlightComponent* flashlight) \
{ \
	_Script_DBDGameplay_eventFlashlightableComponentOnFlashlightAddedEvent_Parms Parms; \
	Parms.flashlight=flashlight; \
	FlashlightableComponentOnFlashlightAddedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLit);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLit);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlashlightableComponent(); \
	friend struct Z_Construct_UClass_UFlashlightableComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightableComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFlashlightableComponent(); \
	friend struct Z_Construct_UClass_UFlashlightableComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightableComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlashlightableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlashlightableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightableComponent(UFlashlightableComponent&&); \
	NO_API UFlashlightableComponent(const UFlashlightableComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightableComponent(UFlashlightableComponent&&); \
	NO_API UFlashlightableComponent(const UFlashlightableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlashlightableComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___lightingStrategy() { return STRUCT_OFFSET(UFlashlightableComponent, _lightingStrategy); } \
	FORCEINLINE static uint32 __PPO___flashlights() { return STRUCT_OFFSET(UFlashlightableComponent, _flashlights); }


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_13_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UFlashlightableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_FlashlightableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
