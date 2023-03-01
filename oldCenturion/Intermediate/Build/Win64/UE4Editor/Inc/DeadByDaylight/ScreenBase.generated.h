// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ScreenBase_generated_h
#error "ScreenBase.generated.h already included, missing '#pragma once' in ScreenBase.h"
#endif
#define DEADBYDAYLIGHT_ScreenBase_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastOnHighlightedElementClickedEvent); \
	DECLARE_FUNCTION(execOnAnimationUpdate); \
	DECLARE_FUNCTION(execOnAnyKey); \
	DECLARE_FUNCTION(execOnBack); \
	DECLARE_FUNCTION(execOnEscape); \
	DECLARE_FUNCTION(execOnHideVirtualKeyboardRequested); \
	DECLARE_FUNCTION(execOnNavKey); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execOnTextInputMouseClicked); \
	DECLARE_FUNCTION(execSetFadesOut);


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastOnHighlightedElementClickedEvent); \
	DECLARE_FUNCTION(execOnAnimationUpdate); \
	DECLARE_FUNCTION(execOnAnyKey); \
	DECLARE_FUNCTION(execOnBack); \
	DECLARE_FUNCTION(execOnEscape); \
	DECLARE_FUNCTION(execOnHideVirtualKeyboardRequested); \
	DECLARE_FUNCTION(execOnNavKey); \
	DECLARE_FUNCTION(execOnStart); \
	DECLARE_FUNCTION(execOnTextInputMouseClicked); \
	DECLARE_FUNCTION(execSetFadesOut);


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreenBase(); \
	friend struct Z_Construct_UClass_UScreenBase_Statics; \
public: \
	DECLARE_CLASS(UScreenBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UScreenBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUScreenBase(); \
	friend struct Z_Construct_UClass_UScreenBase_Statics; \
public: \
	DECLARE_CLASS(UScreenBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UScreenBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreenBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreenBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenBase(UScreenBase&&); \
	NO_API UScreenBase(const UScreenBase&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreenBase(UScreenBase&&); \
	NO_API UScreenBase(const UScreenBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreenBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreenBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreenBase)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScreenObject() { return STRUCT_OFFSET(UScreenBase, ScreenObject); } \
	FORCEINLINE static uint32 __PPO___screenController() { return STRUCT_OFFSET(UScreenBase, _screenController); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UScreenBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ScreenBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
