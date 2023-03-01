// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef DBDGAMEPLAY_DebugIndicator_generated_h
#error "DebugIndicator.generated.h already included, missing '#pragma once' in DebugIndicator.h"
#endif
#define DBDGAMEPLAY_DebugIndicator_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_RPC_WRAPPERS \
	virtual void SetColor_Implementation(const FLinearColor color); \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetColor_Implementation(const FLinearColor color); \
 \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_EVENT_PARMS \
	struct DebugIndicator_eventSetColor_Parms \
	{ \
		FLinearColor color; \
	};


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADebugIndicator(); \
	friend struct Z_Construct_UClass_ADebugIndicator_Statics; \
public: \
	DECLARE_CLASS(ADebugIndicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(ADebugIndicator)


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADebugIndicator(); \
	friend struct Z_Construct_UClass_ADebugIndicator_Statics; \
public: \
	DECLARE_CLASS(ADebugIndicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(ADebugIndicator)


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADebugIndicator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADebugIndicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugIndicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugIndicator(ADebugIndicator&&); \
	NO_API ADebugIndicator(const ADebugIndicator&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADebugIndicator(ADebugIndicator&&); \
	NO_API ADebugIndicator(const ADebugIndicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADebugIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADebugIndicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADebugIndicator)


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___staticMeshComponent() { return STRUCT_OFFSET(ADebugIndicator, _staticMeshComponent); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(ADebugIndicator, _outlineComponent); }


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_10_PROLOG \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class ADebugIndicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_DebugIndicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
