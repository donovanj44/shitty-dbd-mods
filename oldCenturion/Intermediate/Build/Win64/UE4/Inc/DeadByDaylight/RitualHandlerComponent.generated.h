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
enum class EDBDScoreTypes : uint8;
class AActor;
#ifdef DEADBYDAYLIGHT_RitualHandlerComponent_generated_h
#error "RitualHandlerComponent.generated.h already included, missing '#pragma once' in RitualHandlerComponent.h"
#endif
#define DEADBYDAYLIGHT_RitualHandlerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURitualHandlerComponent(); \
	friend struct Z_Construct_UClass_URitualHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(URitualHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(URitualHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesURitualHandlerComponent(); \
	friend struct Z_Construct_UClass_URitualHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(URitualHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(URitualHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URitualHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URitualHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URitualHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URitualHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URitualHandlerComponent(URitualHandlerComponent&&); \
	NO_API URitualHandlerComponent(const URitualHandlerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URitualHandlerComponent(URitualHandlerComponent&&); \
	NO_API URitualHandlerComponent(const URitualHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URitualHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URitualHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URitualHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___evaluators() { return STRUCT_OFFSET(URitualHandlerComponent, _evaluators); }


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class URitualHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_RitualHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
