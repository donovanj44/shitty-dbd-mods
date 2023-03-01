// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_WorldRunawayMeshComponent_generated_h
#error "WorldRunawayMeshComponent.generated.h already included, missing '#pragma once' in WorldRunawayMeshComponent.h"
#endif
#define DEADBYDAYLIGHT_WorldRunawayMeshComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetShouldRunAway); \
	DECLARE_FUNCTION(execSetShouldRunAway); \
	DECLARE_FUNCTION(execSetShouldRunAwayWithDelay); \
	DECLARE_FUNCTION(execSetShouldRunAwayWithRandomDelay);


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetShouldRunAway); \
	DECLARE_FUNCTION(execSetShouldRunAway); \
	DECLARE_FUNCTION(execSetShouldRunAwayWithDelay); \
	DECLARE_FUNCTION(execSetShouldRunAwayWithRandomDelay);


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldRunawayMeshComponent(); \
	friend struct Z_Construct_UClass_UWorldRunawayMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldRunawayMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UWorldRunawayMeshComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUWorldRunawayMeshComponent(); \
	friend struct Z_Construct_UClass_UWorldRunawayMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldRunawayMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UWorldRunawayMeshComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldRunawayMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldRunawayMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldRunawayMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldRunawayMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldRunawayMeshComponent(UWorldRunawayMeshComponent&&); \
	NO_API UWorldRunawayMeshComponent(const UWorldRunawayMeshComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldRunawayMeshComponent(UWorldRunawayMeshComponent&&); \
	NO_API UWorldRunawayMeshComponent(const UWorldRunawayMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldRunawayMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldRunawayMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldRunawayMeshComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___runAwayMustTickDuration() { return STRUCT_OFFSET(UWorldRunawayMeshComponent, _runAwayMustTickDuration); } \
	FORCEINLINE static uint32 __PPO___returnMustTickDuration() { return STRUCT_OFFSET(UWorldRunawayMeshComponent, _returnMustTickDuration); }


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UWorldRunawayMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_WorldRunawayMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
