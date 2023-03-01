// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INPUTUTILITIES_AxisFlickMasher_generated_h
#error "AxisFlickMasher.generated.h already included, missing '#pragma once' in AxisFlickMasher.h"
#endif
#define INPUTUTILITIES_AxisFlickMasher_generated_h

#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_SPARSE_DATA
#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAxisFlicked1); \
	DECLARE_FUNCTION(execOnAxisFlicked2);


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAxisFlicked1); \
	DECLARE_FUNCTION(execOnAxisFlicked2);


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAxisFlickMasher(); \
	friend struct Z_Construct_UClass_UAxisFlickMasher_Statics; \
public: \
	DECLARE_CLASS(UAxisFlickMasher, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAxisFlickMasher)


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAxisFlickMasher(); \
	friend struct Z_Construct_UClass_UAxisFlickMasher_Statics; \
public: \
	DECLARE_CLASS(UAxisFlickMasher, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputUtilities"), NO_API) \
	DECLARE_SERIALIZER(UAxisFlickMasher)


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAxisFlickMasher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAxisFlickMasher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxisFlickMasher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxisFlickMasher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxisFlickMasher(UAxisFlickMasher&&); \
	NO_API UAxisFlickMasher(const UAxisFlickMasher&); \
public:


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAxisFlickMasher(UAxisFlickMasher&&); \
	NO_API UAxisFlickMasher(const UAxisFlickMasher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAxisFlickMasher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAxisFlickMasher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAxisFlickMasher)


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___inputComponent() { return STRUCT_OFFSET(UAxisFlickMasher, _inputComponent); } \
	FORCEINLINE static uint32 __PPO___axisFlick1() { return STRUCT_OFFSET(UAxisFlickMasher, _axisFlick1); } \
	FORCEINLINE static uint32 __PPO___axisFlick2() { return STRUCT_OFFSET(UAxisFlickMasher, _axisFlick2); }


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_9_PROLOG
#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_SPARSE_DATA \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_INCLASS \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_SPARSE_DATA \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTUTILITIES_API UClass* StaticClass<class UAxisFlickMasher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_InputUtilities_Public_AxisFlickMasher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
