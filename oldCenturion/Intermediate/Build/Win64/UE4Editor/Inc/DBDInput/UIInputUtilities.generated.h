// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUIActionType : uint8;
struct FKey;
enum class EControlMode : uint8;
class UObject;
#ifdef DBDINPUT_UIInputUtilities_generated_h
#error "UIInputUtilities.generated.h already included, missing '#pragma once' in UIInputUtilities.h"
#endif
#define DBDINPUT_UIInputUtilities_generated_h

#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetKeyFromUIAction); \
	DECLARE_FUNCTION(execIsInputKeyControlModePairValid); \
	DECLARE_FUNCTION(execShouldUseAtlantaControls);


#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetKeyFromUIAction); \
	DECLARE_FUNCTION(execIsInputKeyControlModePairValid); \
	DECLARE_FUNCTION(execShouldUseAtlantaControls);


#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIInputUtilities(); \
	friend struct Z_Construct_UClass_UUIInputUtilities_Statics; \
public: \
	DECLARE_CLASS(UUIInputUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDInput"), NO_API) \
	DECLARE_SERIALIZER(UUIInputUtilities)


#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUIInputUtilities(); \
	friend struct Z_Construct_UClass_UUIInputUtilities_Statics; \
public: \
	DECLARE_CLASS(UUIInputUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDInput"), NO_API) \
	DECLARE_SERIALIZER(UUIInputUtilities)


#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIInputUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIInputUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIInputUtilities(UUIInputUtilities&&); \
	NO_API UUIInputUtilities(const UUIInputUtilities&); \
public:


#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIInputUtilities(UUIInputUtilities&&); \
	NO_API UUIInputUtilities(const UUIInputUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIInputUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIInputUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIInputUtilities)


#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_11_PROLOG
#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_INCLASS \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINPUT_API UClass* StaticClass<class UUIInputUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInput_Public_UIInputUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
