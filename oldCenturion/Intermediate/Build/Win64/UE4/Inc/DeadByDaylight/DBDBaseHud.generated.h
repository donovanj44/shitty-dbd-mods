// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_DBDBaseHud_generated_h
#error "DBDBaseHud.generated.h already included, missing '#pragma once' in DBDBaseHud.h"
#endif
#define DEADBYDAYLIGHT_DBDBaseHud_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_ShowAnimHud); \
	DECLARE_FUNCTION(execShouldDrawAnimHud);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_ShowAnimHud); \
	DECLARE_FUNCTION(execShouldDrawAnimHud);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDBaseHud(); \
	friend struct Z_Construct_UClass_ADBDBaseHud_Statics; \
public: \
	DECLARE_CLASS(ADBDBaseHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDBaseHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_INCLASS \
private: \
	static void StaticRegisterNativesADBDBaseHud(); \
	friend struct Z_Construct_UClass_ADBDBaseHud_Statics; \
public: \
	DECLARE_CLASS(ADBDBaseHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDBaseHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDBaseHud(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDBaseHud) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDBaseHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDBaseHud); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDBaseHud(ADBDBaseHud&&); \
	NO_API ADBDBaseHud(const ADBDBaseHud&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDBaseHud(ADBDBaseHud&&); \
	NO_API ADBDBaseHud(const ADBDBaseHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDBaseHud); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDBaseHud); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDBaseHud)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___debugFont() { return STRUCT_OFFSET(ADBDBaseHud, _debugFont); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDBaseHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseHud_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
