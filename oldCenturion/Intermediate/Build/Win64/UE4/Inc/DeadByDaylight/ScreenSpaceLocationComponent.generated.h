// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef DEADBYDAYLIGHT_ScreenSpaceLocationComponent_generated_h
#error "ScreenSpaceLocationComponent.generated.h already included, missing '#pragma once' in ScreenSpaceLocationComponent.h"
#endif
#define DEADBYDAYLIGHT_ScreenSpaceLocationComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentResolution); \
	DECLARE_FUNCTION(execHasValidPosition);


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentResolution); \
	DECLARE_FUNCTION(execHasValidPosition);


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenSpaceLocationComponent(); \
	friend struct Z_Construct_UClass_UScreenSpaceLocationComponent_Statics; \
public: \
	DECLARE_CLASS(UScreenSpaceLocationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UScreenSpaceLocationComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUScreenSpaceLocationComponent(); \
	friend struct Z_Construct_UClass_UScreenSpaceLocationComponent_Statics; \
public: \
	DECLARE_CLASS(UScreenSpaceLocationComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UScreenSpaceLocationComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenSpaceLocationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenSpaceLocationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenSpaceLocationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenSpaceLocationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenSpaceLocationComponent(UScreenSpaceLocationComponent&&); \
	NO_API UScreenSpaceLocationComponent(const UScreenSpaceLocationComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenSpaceLocationComponent(UScreenSpaceLocationComponent&&); \
	NO_API UScreenSpaceLocationComponent(const UScreenSpaceLocationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenSpaceLocationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenSpaceLocationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenSpaceLocationComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScreenSpaceX() { return STRUCT_OFFSET(UScreenSpaceLocationComponent, ScreenSpaceX); } \
	FORCEINLINE static uint32 __PPO__ScreenSpaceY() { return STRUCT_OFFSET(UScreenSpaceLocationComponent, ScreenSpaceY); } \
	FORCEINLINE static uint32 __PPO__FrameDelay() { return STRUCT_OFFSET(UScreenSpaceLocationComponent, FrameDelay); } \
	FORCEINLINE static uint32 __PPO___currentResolution() { return STRUCT_OFFSET(UScreenSpaceLocationComponent, _currentResolution); } \
	FORCEINLINE static uint32 __PPO___previousTransforms() { return STRUCT_OFFSET(UScreenSpaceLocationComponent, _previousTransforms); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UScreenSpaceLocationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ScreenSpaceLocationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
