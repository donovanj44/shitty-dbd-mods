// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_MoriComponent_generated_h
#error "MoriComponent.generated.h already included, missing '#pragma once' in MoriComponent.h"
#endif
#define DEADBYDAYLIGHT_MoriComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMoriChargeCompleted); \
	DECLARE_FUNCTION(execOnMoriFinished); \
	DECLARE_FUNCTION(execOnMoriUpdateStart);


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMoriChargeCompleted); \
	DECLARE_FUNCTION(execOnMoriFinished); \
	DECLARE_FUNCTION(execOnMoriUpdateStart);


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoriComponent(); \
	friend struct Z_Construct_UClass_UMoriComponent_Statics; \
public: \
	DECLARE_CLASS(UMoriComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMoriComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUMoriComponent(); \
	friend struct Z_Construct_UClass_UMoriComponent_Statics; \
public: \
	DECLARE_CLASS(UMoriComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMoriComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoriComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoriComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoriComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoriComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoriComponent(UMoriComponent&&); \
	NO_API UMoriComponent(const UMoriComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoriComponent(UMoriComponent&&); \
	NO_API UMoriComponent(const UMoriComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoriComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoriComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoriComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___moriInteractionClasses() { return STRUCT_OFFSET(UMoriComponent, _moriInteractionClasses); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UMoriComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MoriComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
