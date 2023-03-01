// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
enum class ECamperDamageState : uint8;
#ifdef DEADBYDAYLIGHT_CamperMovementComponent_generated_h
#error "CamperMovementComponent.generated.h already included, missing '#pragma once' in CamperMovementComponent.h"
#endif
#define DEADBYDAYLIGHT_CamperMovementComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDefaultRotationRate); \
	DECLARE_FUNCTION(execGetRotationRateWhileCrawling); \
	DECLARE_FUNCTION(execOnCamperHealthStateChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDefaultRotationRate); \
	DECLARE_FUNCTION(execGetRotationRateWhileCrawling); \
	DECLARE_FUNCTION(execOnCamperHealthStateChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamperMovementComponent(); \
	friend struct Z_Construct_UClass_UCamperMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperMovementComponent, UDBDCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperMovementComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUCamperMovementComponent(); \
	friend struct Z_Construct_UClass_UCamperMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperMovementComponent, UDBDCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperMovementComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamperMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamperMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperMovementComponent(UCamperMovementComponent&&); \
	NO_API UCamperMovementComponent(const UCamperMovementComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperMovementComponent(UCamperMovementComponent&&); \
	NO_API UCamperMovementComponent(const UCamperMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamperMovementComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___defaultRotationRate() { return STRUCT_OFFSET(UCamperMovementComponent, _defaultRotationRate); } \
	FORCEINLINE static uint32 __PPO___rotationRateWhileCrawling() { return STRUCT_OFFSET(UCamperMovementComponent, _rotationRateWhileCrawling); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCamperMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS