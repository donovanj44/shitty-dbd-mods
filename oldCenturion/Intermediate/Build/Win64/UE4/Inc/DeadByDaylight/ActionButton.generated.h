// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateBrush;
enum class EActionButtonState : uint8;
#ifdef DEADBYDAYLIGHT_ActionButton_generated_h
#error "ActionButton.generated.h already included, missing '#pragma once' in ActionButton.h"
#endif
#define DEADBYDAYLIGHT_ActionButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIcon); \
	DECLARE_FUNCTION(execSetPreviousState); \
	DECLARE_FUNCTION(execSetSlateBrush); \
	DECLARE_FUNCTION(execSetState);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIcon); \
	DECLARE_FUNCTION(execSetPreviousState); \
	DECLARE_FUNCTION(execSetSlateBrush); \
	DECLARE_FUNCTION(execSetState);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionButton(); \
	friend struct Z_Construct_UClass_UActionButton_Statics; \
public: \
	DECLARE_CLASS(UActionButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActionButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUActionButton(); \
	friend struct Z_Construct_UClass_UActionButton_Statics; \
public: \
	DECLARE_CLASS(UActionButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActionButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActionButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActionButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionButton(UActionButton&&); \
	NO_API UActionButton(const UActionButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionButton(UActionButton&&); \
	NO_API UActionButton(const UActionButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Normal() { return STRUCT_OFFSET(UActionButton, Normal); } \
	FORCEINLINE static uint32 __PPO__Toggled() { return STRUCT_OFFSET(UActionButton, Toggled); } \
	FORCEINLINE static uint32 __PPO__Disabled() { return STRUCT_OFFSET(UActionButton, Disabled); } \
	FORCEINLINE static uint32 __PPO___currentState() { return STRUCT_OFFSET(UActionButton, _currentState); } \
	FORCEINLINE static uint32 __PPO___previousState() { return STRUCT_OFFSET(UActionButton, _previousState); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UActionButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ActionButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
