// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPostProcessComponent;
class UMaterialInstanceDynamic;
#ifdef DEADBYDAYLIGHT_BlindingFXComponent_generated_h
#error "BlindingFXComponent.generated.h already included, missing '#pragma once' in BlindingFXComponent.h"
#endif
#define DEADBYDAYLIGHT_BlindingFXComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPostProcess); \
	DECLARE_FUNCTION(execSetPostProcessMaterial);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPostProcess); \
	DECLARE_FUNCTION(execSetPostProcessMaterial);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlindingFXComponent(); \
	friend struct Z_Construct_UClass_UBlindingFXComponent_Statics; \
public: \
	DECLARE_CLASS(UBlindingFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlindingFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBlindingFXComponent(); \
	friend struct Z_Construct_UClass_UBlindingFXComponent_Statics; \
public: \
	DECLARE_CLASS(UBlindingFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlindingFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlindingFXComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlindingFXComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlindingFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlindingFXComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlindingFXComponent(UBlindingFXComponent&&); \
	NO_API UBlindingFXComponent(const UBlindingFXComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlindingFXComponent(UBlindingFXComponent&&); \
	NO_API UBlindingFXComponent(const UBlindingFXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlindingFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlindingFXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlindingFXComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___blindnessIntensityParameter() { return STRUCT_OFFSET(UBlindingFXComponent, _blindnessIntensityParameter); } \
	FORCEINLINE static uint32 __PPO___blindnessMaterialCurve() { return STRUCT_OFFSET(UBlindingFXComponent, _blindnessMaterialCurve); } \
	FORCEINLINE static uint32 __PPO___blindnessCurve() { return STRUCT_OFFSET(UBlindingFXComponent, _blindnessCurve); } \
	FORCEINLINE static uint32 __PPO___postProcess() { return STRUCT_OFFSET(UBlindingFXComponent, _postProcess); } \
	FORCEINLINE static uint32 __PPO___postProcessMaterial() { return STRUCT_OFFSET(UBlindingFXComponent, _postProcessMaterial); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBlindingFXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BlindingFXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS