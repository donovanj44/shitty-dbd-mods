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
#ifdef DEADBYDAYLIGHT_DedicatedServerHandlerComponent_generated_h
#error "DedicatedServerHandlerComponent.generated.h already included, missing '#pragma once' in DedicatedServerHandlerComponent.h"
#endif
#define DEADBYDAYLIGHT_DedicatedServerHandlerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDedicatedServerHandlerComponent(); \
	friend struct Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UDedicatedServerHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDedicatedServerHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDedicatedServerHandlerComponent(); \
	friend struct Z_Construct_UClass_UDedicatedServerHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UDedicatedServerHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDedicatedServerHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDedicatedServerHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDedicatedServerHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDedicatedServerHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDedicatedServerHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDedicatedServerHandlerComponent(UDedicatedServerHandlerComponent&&); \
	NO_API UDedicatedServerHandlerComponent(const UDedicatedServerHandlerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDedicatedServerHandlerComponent(UDedicatedServerHandlerComponent&&); \
	NO_API UDedicatedServerHandlerComponent(const UDedicatedServerHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDedicatedServerHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDedicatedServerHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDedicatedServerHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___atlantaRituals() { return STRUCT_OFFSET(UDedicatedServerHandlerComponent, _atlantaRituals); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDedicatedServerHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DedicatedServerHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
