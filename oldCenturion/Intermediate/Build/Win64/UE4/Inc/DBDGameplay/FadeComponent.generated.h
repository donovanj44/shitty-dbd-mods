// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_FadeComponent_generated_h
#error "FadeComponent.generated.h already included, missing '#pragma once' in FadeComponent.h"
#endif
#define DBDGAMEPLAY_FadeComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_6_DELEGATE \
struct _Script_DBDGameplay_eventFadeComponentOnFadePercentChanged_Parms \
{ \
	float fadePercent; \
}; \
static inline void FFadeComponentOnFadePercentChanged_DelegateWrapper(const FMulticastScriptDelegate& FadeComponentOnFadePercentChanged, float fadePercent) \
{ \
	_Script_DBDGameplay_eventFadeComponentOnFadePercentChanged_Parms Parms; \
	Parms.fadePercent=fadePercent; \
	FadeComponentOnFadePercentChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFadePercent);


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFadePercent);


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFadeComponent(); \
	friend struct Z_Construct_UClass_UFadeComponent_Statics; \
public: \
	DECLARE_CLASS(UFadeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFadeComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUFadeComponent(); \
	friend struct Z_Construct_UClass_UFadeComponent_Statics; \
public: \
	DECLARE_CLASS(UFadeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFadeComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFadeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFadeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFadeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFadeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFadeComponent(UFadeComponent&&); \
	NO_API UFadeComponent(const UFadeComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFadeComponent(UFadeComponent&&); \
	NO_API UFadeComponent(const UFadeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFadeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFadeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFadeComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___fadeDuration() { return STRUCT_OFFSET(UFadeComponent, _fadeDuration); }


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_8_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UFadeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_FadeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
