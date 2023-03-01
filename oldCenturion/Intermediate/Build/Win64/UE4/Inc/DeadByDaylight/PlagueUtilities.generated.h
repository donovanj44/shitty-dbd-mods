// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class USurvivorPlagueEffect;
#ifdef DEADBYDAYLIGHT_PlagueUtilities_generated_h
#error "PlagueUtilities.generated.h already included, missing '#pragma once' in PlagueUtilities.h"
#endif
#define DEADBYDAYLIGHT_PlagueUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_AddSicknessToPlayer); \
	DECLARE_FUNCTION(execGetPlagueEffect); \
	DECLARE_FUNCTION(execHasMaxLevelSickness); \
	DECLARE_FUNCTION(execIsInfected); \
	DECLARE_FUNCTION(execIsPlagueDebugModeActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_AddSicknessToPlayer); \
	DECLARE_FUNCTION(execGetPlagueEffect); \
	DECLARE_FUNCTION(execHasMaxLevelSickness); \
	DECLARE_FUNCTION(execIsInfected); \
	DECLARE_FUNCTION(execIsPlagueDebugModeActive);


#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlagueUtilities(); \
	friend struct Z_Construct_UClass_UPlagueUtilities_Statics; \
public: \
	DECLARE_CLASS(UPlagueUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlagueUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPlagueUtilities(); \
	friend struct Z_Construct_UClass_UPlagueUtilities_Statics; \
public: \
	DECLARE_CLASS(UPlagueUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPlagueUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlagueUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlagueUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlagueUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlagueUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlagueUtilities(UPlagueUtilities&&); \
	NO_API UPlagueUtilities(const UPlagueUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlagueUtilities(UPlagueUtilities&&); \
	NO_API UPlagueUtilities(const UPlagueUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlagueUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlagueUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlagueUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPlagueUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PlagueUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
