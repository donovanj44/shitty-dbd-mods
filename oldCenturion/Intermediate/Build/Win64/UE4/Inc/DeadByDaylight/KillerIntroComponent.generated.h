// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_KillerIntroComponent_generated_h
#error "KillerIntroComponent.generated.h already included, missing '#pragma once' in KillerIntroComponent.h"
#endif
#define DEADBYDAYLIGHT_KillerIntroComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execKillerCameraPanInUpdateNative); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKillerCameraPanInUpdateNative); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKillerIntroComponent(); \
	friend struct Z_Construct_UClass_UKillerIntroComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerIntroComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillerIntroComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUKillerIntroComponent(); \
	friend struct Z_Construct_UClass_UKillerIntroComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerIntroComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillerIntroComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKillerIntroComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillerIntroComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerIntroComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerIntroComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerIntroComponent(UKillerIntroComponent&&); \
	NO_API UKillerIntroComponent(const UKillerIntroComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerIntroComponent(UKillerIntroComponent&&); \
	NO_API UKillerIntroComponent(const UKillerIntroComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerIntroComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerIntroComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKillerIntroComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___percentOfCameraPanInProgressRequiredToHideKiller() { return STRUCT_OFFSET(UKillerIntroComponent, _percentOfCameraPanInProgressRequiredToHideKiller); } \
	FORCEINLINE static uint32 __PPO___cameraPanInAmountToSquish() { return STRUCT_OFFSET(UKillerIntroComponent, _cameraPanInAmountToSquish); } \
	FORCEINLINE static uint32 __PPO___cameraPanInHidingStrategy() { return STRUCT_OFFSET(UKillerIntroComponent, _cameraPanInHidingStrategy); } \
	FORCEINLINE static uint32 __PPO___startKillerIntroDelay() { return STRUCT_OFFSET(UKillerIntroComponent, _startKillerIntroDelay); }


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_7_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UKillerIntroComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_KillerIntroComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
