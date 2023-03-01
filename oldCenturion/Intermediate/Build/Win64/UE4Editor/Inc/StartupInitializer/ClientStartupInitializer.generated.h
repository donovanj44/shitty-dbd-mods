// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
#ifdef STARTUPINITIALIZER_ClientStartupInitializer_generated_h
#error "ClientStartupInitializer.generated.h already included, missing '#pragma once' in ClientStartupInitializer.h"
#endif
#define STARTUPINITIALIZER_ClientStartupInitializer_generated_h

#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_SPARSE_DATA
#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthCheckTriggered);


#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthCheckTriggered);


#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientStartupInitializer(); \
	friend struct Z_Construct_UClass_UClientStartupInitializer_Statics; \
public: \
	DECLARE_CLASS(UClientStartupInitializer, UStartupInitializer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StartupInitializer"), NO_API) \
	DECLARE_SERIALIZER(UClientStartupInitializer) \
	virtual UObject* _getUObject() const override { return const_cast<UClientStartupInitializer*>(this); }


#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUClientStartupInitializer(); \
	friend struct Z_Construct_UClass_UClientStartupInitializer_Statics; \
public: \
	DECLARE_CLASS(UClientStartupInitializer, UStartupInitializer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StartupInitializer"), NO_API) \
	DECLARE_SERIALIZER(UClientStartupInitializer) \
	virtual UObject* _getUObject() const override { return const_cast<UClientStartupInitializer*>(this); }


#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientStartupInitializer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientStartupInitializer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientStartupInitializer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientStartupInitializer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientStartupInitializer(UClientStartupInitializer&&); \
	NO_API UClientStartupInitializer(const UClientStartupInitializer&); \
public:


#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientStartupInitializer(UClientStartupInitializer&&); \
	NO_API UClientStartupInitializer(const UClientStartupInitializer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientStartupInitializer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientStartupInitializer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClientStartupInitializer)


#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_8_PROLOG
#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_SPARSE_DATA \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_INCLASS \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_SPARSE_DATA \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARTUPINITIALIZER_API UClass* StaticClass<class UClientStartupInitializer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_StartupInitializer_Public_ClientStartupInitializer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS