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
#ifdef THELEGION_LegionSurvivorAnalyticsComponent_generated_h
#error "LegionSurvivorAnalyticsComponent.generated.h already included, missing '#pragma once' in LegionSurvivorAnalyticsComponent.h"
#endif
#define THELEGION_LegionSurvivorAnalyticsComponent_generated_h

#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGameEventDispatched); \
	DECLARE_FUNCTION(execSetGameEventDispatcher);


#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameEventDispatched); \
	DECLARE_FUNCTION(execSetGameEventDispatcher);


#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegionSurvivorAnalyticsComponent(); \
	friend struct Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics; \
public: \
	DECLARE_CLASS(ULegionSurvivorAnalyticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheLegion"), NO_API) \
	DECLARE_SERIALIZER(ULegionSurvivorAnalyticsComponent)


#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesULegionSurvivorAnalyticsComponent(); \
	friend struct Z_Construct_UClass_ULegionSurvivorAnalyticsComponent_Statics; \
public: \
	DECLARE_CLASS(ULegionSurvivorAnalyticsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheLegion"), NO_API) \
	DECLARE_SERIALIZER(ULegionSurvivorAnalyticsComponent)


#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULegionSurvivorAnalyticsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegionSurvivorAnalyticsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegionSurvivorAnalyticsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegionSurvivorAnalyticsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegionSurvivorAnalyticsComponent(ULegionSurvivorAnalyticsComponent&&); \
	NO_API ULegionSurvivorAnalyticsComponent(const ULegionSurvivorAnalyticsComponent&); \
public:


#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegionSurvivorAnalyticsComponent(ULegionSurvivorAnalyticsComponent&&); \
	NO_API ULegionSurvivorAnalyticsComponent(const ULegionSurvivorAnalyticsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegionSurvivorAnalyticsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegionSurvivorAnalyticsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULegionSurvivorAnalyticsComponent)


#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_10_PROLOG
#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_INCLASS \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THELEGION_API UClass* StaticClass<class ULegionSurvivorAnalyticsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheLegion_Public_LegionSurvivorAnalyticsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
