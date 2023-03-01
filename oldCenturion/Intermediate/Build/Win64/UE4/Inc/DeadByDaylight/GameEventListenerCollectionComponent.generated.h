// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
class UGameEventDispatcher;
#ifdef DEADBYDAYLIGHT_GameEventListenerCollectionComponent_generated_h
#error "GameEventListenerCollectionComponent.generated.h already included, missing '#pragma once' in GameEventListenerCollectionComponent.h"
#endif
#define DEADBYDAYLIGHT_GameEventListenerCollectionComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventGameEventListenerCollectionComponentDelegateToBind_Parms \
{ \
	FGameplayTag gameEventType; \
	FGameEventData gameEventData; \
}; \
static inline void FGameEventListenerCollectionComponentDelegateToBind_DelegateWrapper(const FScriptDelegate& GameEventListenerCollectionComponentDelegateToBind, const FGameplayTag gameEventType, FGameEventData const& gameEventData) \
{ \
	_Script_DeadByDaylight_eventGameEventListenerCollectionComponentDelegateToBind_Parms Parms; \
	Parms.gameEventType=gameEventType; \
	Parms.gameEventData=gameEventData; \
	GameEventListenerCollectionComponentDelegateToBind.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAttachGameEventDispatcher); \
	DECLARE_FUNCTION(execListenToGameEvent); \
	DECLARE_FUNCTION(execUnlistenToAllGameEvents); \
	DECLARE_FUNCTION(execUnlistenToGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachGameEventDispatcher); \
	DECLARE_FUNCTION(execListenToGameEvent); \
	DECLARE_FUNCTION(execUnlistenToAllGameEvents); \
	DECLARE_FUNCTION(execUnlistenToGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEventListenerCollectionComponent(); \
	friend struct Z_Construct_UClass_UGameEventListenerCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UGameEventListenerCollectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameEventListenerCollectionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGameEventListenerCollectionComponent(); \
	friend struct Z_Construct_UClass_UGameEventListenerCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UGameEventListenerCollectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameEventListenerCollectionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEventListenerCollectionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEventListenerCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEventListenerCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEventListenerCollectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEventListenerCollectionComponent(UGameEventListenerCollectionComponent&&); \
	NO_API UGameEventListenerCollectionComponent(const UGameEventListenerCollectionComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEventListenerCollectionComponent(UGameEventListenerCollectionComponent&&); \
	NO_API UGameEventListenerCollectionComponent(const UGameEventListenerCollectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEventListenerCollectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEventListenerCollectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameEventListenerCollectionComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGameEventListenerCollectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameEventListenerCollectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
