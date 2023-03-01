// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayTagContainerComponent;
#ifdef ACTIVATION_ActivatorComponent_generated_h
#error "ActivatorComponent.generated.h already included, missing '#pragma once' in ActivatorComponent.h"
#endif
#define ACTIVATION_ActivatorComponent_generated_h

#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetObjectState);


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetObjectState);


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivatorComponent(); \
	friend struct Z_Construct_UClass_UActivatorComponent_Statics; \
public: \
	DECLARE_CLASS(UActivatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Activation"), NO_API) \
	DECLARE_SERIALIZER(UActivatorComponent)


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUActivatorComponent(); \
	friend struct Z_Construct_UClass_UActivatorComponent_Statics; \
public: \
	DECLARE_CLASS(UActivatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Activation"), NO_API) \
	DECLARE_SERIALIZER(UActivatorComponent)


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivatorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivatorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatorComponent(UActivatorComponent&&); \
	NO_API UActivatorComponent(const UActivatorComponent&); \
public:


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivatorComponent(UActivatorComponent&&); \
	NO_API UActivatorComponent(const UActivatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivatorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActivatorComponent)


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___searchForActivatableSubAnimInstances() { return STRUCT_OFFSET(UActivatorComponent, _searchForActivatableSubAnimInstances); }


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_8_PROLOG
#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_INCLASS \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Activation_Public_ActivatorComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIVATION_API UClass* StaticClass<class UActivatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Activation_Public_ActivatorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
