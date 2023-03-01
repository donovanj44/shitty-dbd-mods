// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef DEADBYDAYLIGHT_FXWidget_generated_h
#error "FXWidget.generated.h already included, missing '#pragma once' in FXWidget.h"
#endif
#define DEADBYDAYLIGHT_FXWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNiagaraFX); \
	DECLARE_FUNCTION(execPlayParticle); \
	DECLARE_FUNCTION(execStopParticle);


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNiagaraFX); \
	DECLARE_FUNCTION(execPlayParticle); \
	DECLARE_FUNCTION(execStopParticle);


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFXWidget(); \
	friend struct Z_Construct_UClass_UFXWidget_Statics; \
public: \
	DECLARE_CLASS(UFXWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFXWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFXWidget(); \
	friend struct Z_Construct_UClass_UFXWidget_Statics; \
public: \
	DECLARE_CLASS(UFXWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFXWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFXWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFXWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFXWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFXWidget(UFXWidget&&); \
	NO_API UFXWidget(const UFXWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFXWidget(UFXWidget&&); \
	NO_API UFXWidget(const UFXWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFXWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFXWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFXWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___particlePlayer() { return STRUCT_OFFSET(UFXWidget, _particlePlayer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UFXWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_FXWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
