// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAimPointProcessor;
#ifdef DBDGAMEPLAY_AimableComponent_generated_h
#error "AimableComponent.generated.h already included, missing '#pragma once' in AimableComponent.h"
#endif
#define DBDGAMEPLAY_AimableComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaxAimDistance); \
	DECLARE_FUNCTION(execSetOcclusionIgnoredActors); \
	DECLARE_FUNCTION(execSetProcessors);


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaxAimDistance); \
	DECLARE_FUNCTION(execSetOcclusionIgnoredActors); \
	DECLARE_FUNCTION(execSetProcessors);


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAimableComponent(); \
	friend struct Z_Construct_UClass_UAimableComponent_Statics; \
public: \
	DECLARE_CLASS(UAimableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAimableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAimableComponent*>(this); }


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAimableComponent(); \
	friend struct Z_Construct_UClass_UAimableComponent_Statics; \
public: \
	DECLARE_CLASS(UAimableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAimableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAimableComponent*>(this); }


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAimableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimableComponent(UAimableComponent&&); \
	NO_API UAimableComponent(const UAimableComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAimableComponent(UAimableComponent&&); \
	NO_API UAimableComponent(const UAimableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAimableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAimableComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___occlusionIgnoredActors() { return STRUCT_OFFSET(UAimableComponent, _occlusionIgnoredActors); } \
	FORCEINLINE static uint32 __PPO___maxAimDistance() { return STRUCT_OFFSET(UAimableComponent, _maxAimDistance); } \
	FORCEINLINE static uint32 __PPO___aimDirectionProvider() { return STRUCT_OFFSET(UAimableComponent, _aimDirectionProvider); } \
	FORCEINLINE static uint32 __PPO___useOcclusion() { return STRUCT_OFFSET(UAimableComponent, _useOcclusion); } \
	FORCEINLINE static uint32 __PPO___aimPointLerpFactor() { return STRUCT_OFFSET(UAimableComponent, _aimPointLerpFactor); } \
	FORCEINLINE static uint32 __PPO___preOcclusionAimPointProcessors() { return STRUCT_OFFSET(UAimableComponent, _preOcclusionAimPointProcessors); }


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_11_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UAimableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_AimableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
