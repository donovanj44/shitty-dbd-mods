// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_AutoQualityAdjuster_generated_h
#error "AutoQualityAdjuster.generated.h already included, missing '#pragma once' in AutoQualityAdjuster.h"
#endif
#define DEADBYDAYLIGHT_AutoQualityAdjuster_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoQualityAdjuster(); \
	friend struct Z_Construct_UClass_AAutoQualityAdjuster_Statics; \
public: \
	DECLARE_CLASS(AAutoQualityAdjuster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AAutoQualityAdjuster)


#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAAutoQualityAdjuster(); \
	friend struct Z_Construct_UClass_AAutoQualityAdjuster_Statics; \
public: \
	DECLARE_CLASS(AAutoQualityAdjuster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AAutoQualityAdjuster)


#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoQualityAdjuster(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoQualityAdjuster) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoQualityAdjuster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoQualityAdjuster); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoQualityAdjuster(AAutoQualityAdjuster&&); \
	NO_API AAutoQualityAdjuster(const AAutoQualityAdjuster&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoQualityAdjuster(AAutoQualityAdjuster&&); \
	NO_API AAutoQualityAdjuster(const AAutoQualityAdjuster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoQualityAdjuster); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoQualityAdjuster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoQualityAdjuster)


#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetResolutionScale() { return STRUCT_OFFSET(AAutoQualityAdjuster, TargetResolutionScale); } \
	FORCEINLINE static uint32 __PPO__MinimumMS() { return STRUCT_OFFSET(AAutoQualityAdjuster, MinimumMS); } \
	FORCEINLINE static uint32 __PPO__MaximumMS() { return STRUCT_OFFSET(AAutoQualityAdjuster, MaximumMS); } \
	FORCEINLINE static uint32 __PPO__ScaleIncreaseRate() { return STRUCT_OFFSET(AAutoQualityAdjuster, ScaleIncreaseRate); } \
	FORCEINLINE static uint32 __PPO__ScaleDecreaseRate() { return STRUCT_OFFSET(AAutoQualityAdjuster, ScaleDecreaseRate); } \
	FORCEINLINE static uint32 __PPO__MinimumAllowableScale() { return STRUCT_OFFSET(AAutoQualityAdjuster, MinimumAllowableScale); }


#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AAutoQualityAdjuster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_AutoQualityAdjuster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
