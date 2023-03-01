// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef DEADBYDAYLIGHT_ZoneDetectorComponent_generated_h
#error "ZoneDetectorComponent.generated.h already included, missing '#pragma once' in ZoneDetectorComponent.h"
#endif
#define DEADBYDAYLIGHT_ZoneDetectorComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execOnOverlapExit);


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execOnOverlapExit);


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneDetectorComponent(); \
	friend struct Z_Construct_UClass_UZoneDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UZoneDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UZoneDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUZoneDetectorComponent(); \
	friend struct Z_Construct_UClass_UZoneDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UZoneDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UZoneDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoneDetectorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneDetectorComponent(UZoneDetectorComponent&&); \
	NO_API UZoneDetectorComponent(const UZoneDetectorComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneDetectorComponent(UZoneDetectorComponent&&); \
	NO_API UZoneDetectorComponent(const UZoneDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneDetectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UZoneDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___zones() { return STRUCT_OFFSET(UZoneDetectorComponent, _zones); } \
	FORCEINLINE static uint32 __PPO___tags() { return STRUCT_OFFSET(UZoneDetectorComponent, _tags); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UZoneDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ZoneDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
