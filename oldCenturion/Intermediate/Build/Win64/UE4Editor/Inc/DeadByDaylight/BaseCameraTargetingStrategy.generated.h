// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_BaseCameraTargetingStrategy_generated_h
#error "BaseCameraTargetingStrategy.generated.h already included, missing '#pragma once' in BaseCameraTargetingStrategy.h"
#endif
#define DEADBYDAYLIGHT_BaseCameraTargetingStrategy_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCameraTargetingStrategy(); \
	friend struct Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics; \
public: \
	DECLARE_CLASS(UBaseCameraTargetingStrategy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBaseCameraTargetingStrategy) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseCameraTargetingStrategy*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBaseCameraTargetingStrategy(); \
	friend struct Z_Construct_UClass_UBaseCameraTargetingStrategy_Statics; \
public: \
	DECLARE_CLASS(UBaseCameraTargetingStrategy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBaseCameraTargetingStrategy) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseCameraTargetingStrategy*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCameraTargetingStrategy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCameraTargetingStrategy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCameraTargetingStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCameraTargetingStrategy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseCameraTargetingStrategy(UBaseCameraTargetingStrategy&&); \
	NO_API UBaseCameraTargetingStrategy(const UBaseCameraTargetingStrategy&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseCameraTargetingStrategy(UBaseCameraTargetingStrategy&&); \
	NO_API UBaseCameraTargetingStrategy(const UBaseCameraTargetingStrategy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCameraTargetingStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCameraTargetingStrategy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseCameraTargetingStrategy)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___maxFreeAngle() { return STRUCT_OFFSET(UBaseCameraTargetingStrategy, _maxFreeAngle); } \
	FORCEINLINE static uint32 __PPO___maxInputRotation() { return STRUCT_OFFSET(UBaseCameraTargetingStrategy, _maxInputRotation); } \
	FORCEINLINE static uint32 __PPO___interpolationSpeed() { return STRUCT_OFFSET(UBaseCameraTargetingStrategy, _interpolationSpeed); } \
	FORCEINLINE static uint32 __PPO___interpolationSpeedOutsideFreeMoveZone() { return STRUCT_OFFSET(UBaseCameraTargetingStrategy, _interpolationSpeedOutsideFreeMoveZone); } \
	FORCEINLINE static uint32 __PPO___target() { return STRUCT_OFFSET(UBaseCameraTargetingStrategy, _target); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBaseCameraTargetingStrategy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BaseCameraTargetingStrategy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
