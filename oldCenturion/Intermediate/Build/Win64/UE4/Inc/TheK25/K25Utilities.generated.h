// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AK25ControlledProjectile;
class AK25Gateway;
class AK25Husk;
class AK25Power;
class ALamentConfiguration;
#ifdef THEK25_K25Utilities_generated_h
#error "K25Utilities.generated.h already included, missing '#pragma once' in K25Utilities.h"
#endif
#define THEK25_K25Utilities_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetK25ControlledProjectile); \
	DECLARE_FUNCTION(execGetK25Gateway); \
	DECLARE_FUNCTION(execGetK25Husk); \
	DECLARE_FUNCTION(execGetK25Power); \
	DECLARE_FUNCTION(execGetLamentConfiguration);


#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetK25ControlledProjectile); \
	DECLARE_FUNCTION(execGetK25Gateway); \
	DECLARE_FUNCTION(execGetK25Husk); \
	DECLARE_FUNCTION(execGetK25Power); \
	DECLARE_FUNCTION(execGetLamentConfiguration);


#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25Utilities(); \
	friend struct Z_Construct_UClass_UK25Utilities_Statics; \
public: \
	DECLARE_CLASS(UK25Utilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25Utilities)


#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUK25Utilities(); \
	friend struct Z_Construct_UClass_UK25Utilities_Statics; \
public: \
	DECLARE_CLASS(UK25Utilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25Utilities)


#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25Utilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25Utilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25Utilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25Utilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25Utilities(UK25Utilities&&); \
	NO_API UK25Utilities(const UK25Utilities&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25Utilities(UK25Utilities&&); \
	NO_API UK25Utilities(const UK25Utilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25Utilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25Utilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25Utilities)


#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_13_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Utilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25Utilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25Utilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
