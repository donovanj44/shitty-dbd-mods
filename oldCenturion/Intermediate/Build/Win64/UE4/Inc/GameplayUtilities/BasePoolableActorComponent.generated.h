// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYUTILITIES_BasePoolableActorComponent_generated_h
#error "BasePoolableActorComponent.generated.h already included, missing '#pragma once' in BasePoolableActorComponent.h"
#endif
#define GAMEPLAYUTILITIES_BasePoolableActorComponent_generated_h

#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_7_DELEGATE \
struct _Script_GameplayUtilities_eventBasePoolableActorComponentOnAcquiredChanged_Parms \
{ \
	bool acquired; \
}; \
static inline void FBasePoolableActorComponentOnAcquiredChanged_DelegateWrapper(const FMulticastScriptDelegate& BasePoolableActorComponentOnAcquiredChanged, bool acquired) \
{ \
	_Script_GameplayUtilities_eventBasePoolableActorComponentOnAcquiredChanged_Parms Parms; \
	Parms.acquired=acquired ? true : false; \
	BasePoolableActorComponentOnAcquiredChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAcquired); \
	DECLARE_FUNCTION(execSetAcquired);


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAcquired); \
	DECLARE_FUNCTION(execSetAcquired);


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasePoolableActorComponent(); \
	friend struct Z_Construct_UClass_UBasePoolableActorComponent_Statics; \
public: \
	DECLARE_CLASS(UBasePoolableActorComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UBasePoolableActorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBasePoolableActorComponent*>(this); }


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBasePoolableActorComponent(); \
	friend struct Z_Construct_UClass_UBasePoolableActorComponent_Statics; \
public: \
	DECLARE_CLASS(UBasePoolableActorComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UBasePoolableActorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBasePoolableActorComponent*>(this); }


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePoolableActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePoolableActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePoolableActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePoolableActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePoolableActorComponent(UBasePoolableActorComponent&&); \
	NO_API UBasePoolableActorComponent(const UBasePoolableActorComponent&); \
public:


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasePoolableActorComponent(UBasePoolableActorComponent&&); \
	NO_API UBasePoolableActorComponent(const UBasePoolableActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePoolableActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePoolableActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBasePoolableActorComponent)


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_9_PROLOG
#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_INCLASS \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYUTILITIES_API UClass* StaticClass<class UBasePoolableActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_BasePoolableActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
