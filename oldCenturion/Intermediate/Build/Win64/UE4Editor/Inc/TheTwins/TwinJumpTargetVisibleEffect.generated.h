// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef THETWINS_TwinJumpTargetVisibleEffect_generated_h
#error "TwinJumpTargetVisibleEffect.generated.h already included, missing '#pragma once' in TwinJumpTargetVisibleEffect.h"
#endif
#define THETWINS_TwinJumpTargetVisibleEffect_generated_h

#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHideTargetPosition); \
	DECLARE_FUNCTION(execOnJumpTargetTick);


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHideTargetPosition); \
	DECLARE_FUNCTION(execOnJumpTargetTick);


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwinJumpTargetVisibleEffect(); \
	friend struct Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics; \
public: \
	DECLARE_CLASS(UTwinJumpTargetVisibleEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinJumpTargetVisibleEffect)


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTwinJumpTargetVisibleEffect(); \
	friend struct Z_Construct_UClass_UTwinJumpTargetVisibleEffect_Statics; \
public: \
	DECLARE_CLASS(UTwinJumpTargetVisibleEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UTwinJumpTargetVisibleEffect)


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinJumpTargetVisibleEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinJumpTargetVisibleEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinJumpTargetVisibleEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinJumpTargetVisibleEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinJumpTargetVisibleEffect(UTwinJumpTargetVisibleEffect&&); \
	NO_API UTwinJumpTargetVisibleEffect(const UTwinJumpTargetVisibleEffect&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwinJumpTargetVisibleEffect(UTwinJumpTargetVisibleEffect&&); \
	NO_API UTwinJumpTargetVisibleEffect(const UTwinJumpTargetVisibleEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinJumpTargetVisibleEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinJumpTargetVisibleEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinJumpTargetVisibleEffect)


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___twinJumpTargetObject() { return STRUCT_OFFSET(UTwinJumpTargetVisibleEffect, _twinJumpTargetObject); } \
	FORCEINLINE static uint32 __PPO___twinJumpTarget() { return STRUCT_OFFSET(UTwinJumpTargetVisibleEffect, _twinJumpTarget); } \
	FORCEINLINE static uint32 __PPO___jumpTargetVisibility() { return STRUCT_OFFSET(UTwinJumpTargetVisibleEffect, _jumpTargetVisibility); }


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_11_PROLOG
#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UTwinJumpTargetVisibleEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_TwinJumpTargetVisibleEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
