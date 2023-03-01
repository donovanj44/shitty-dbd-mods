// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInstanceDynamic;
#ifdef DEADBYDAYLIGHT_EffectsLocator_generated_h
#error "EffectsLocator.generated.h already included, missing '#pragma once' in EffectsLocator.h"
#endif
#define DEADBYDAYLIGHT_EffectsLocator_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEnterCollisionArea); \
	DECLARE_FUNCTION(execOnLeaveCollisionArea);


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEnterCollisionArea); \
	DECLARE_FUNCTION(execOnLeaveCollisionArea);


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_EVENT_PARMS \
	struct EffectsLocator_eventOnActorTick_Parms \
	{ \
		UMaterialInstanceDynamic* actorMaterialInstanceDynamic; \
	}; \
	struct EffectsLocator_eventOnFoundActor_Parms \
	{ \
		AActor* foundActor; \
	}; \
	struct EffectsLocator_eventOnLostActor_Parms \
	{ \
		AActor* lostActor; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEffectsLocator(); \
	friend struct Z_Construct_UClass_AEffectsLocator_Statics; \
public: \
	DECLARE_CLASS(AEffectsLocator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AEffectsLocator)


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAEffectsLocator(); \
	friend struct Z_Construct_UClass_AEffectsLocator_Statics; \
public: \
	DECLARE_CLASS(AEffectsLocator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AEffectsLocator)


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEffectsLocator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEffectsLocator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEffectsLocator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEffectsLocator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEffectsLocator(AEffectsLocator&&); \
	NO_API AEffectsLocator(const AEffectsLocator&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEffectsLocator(AEffectsLocator&&); \
	NO_API AEffectsLocator(const AEffectsLocator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEffectsLocator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEffectsLocator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEffectsLocator)


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AEffectsLocator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EffectsLocator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
