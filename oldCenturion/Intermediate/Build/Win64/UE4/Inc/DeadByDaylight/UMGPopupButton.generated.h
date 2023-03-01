// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGPopupButton_generated_h
#error "UMGPopupButton.generated.h already included, missing '#pragma once' in UMGPopupButton.h"
#endif
#define DEADBYDAYLIGHT_UMGPopupButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execOnButtonPressed); \
	DECLARE_FUNCTION(execOnButtonReleased);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execOnButtonPressed); \
	DECLARE_FUNCTION(execOnButtonReleased);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGPopupButton(); \
	friend struct Z_Construct_UClass_UUMGPopupButton_Statics; \
public: \
	DECLARE_CLASS(UUMGPopupButton, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGPopupButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUUMGPopupButton(); \
	friend struct Z_Construct_UClass_UUMGPopupButton_Statics; \
public: \
	DECLARE_CLASS(UUMGPopupButton, UUMGBaseButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGPopupButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGPopupButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGPopupButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGPopupButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGPopupButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGPopupButton(UUMGPopupButton&&); \
	NO_API UUMGPopupButton(const UUMGPopupButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGPopupButton(UUMGPopupButton&&); \
	NO_API UUMGPopupButton(const UUMGPopupButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGPopupButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGPopupButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGPopupButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DisabledOpacity() { return STRUCT_OFFSET(UUMGPopupButton, DisabledOpacity); } \
	FORCEINLINE static uint32 __PPO__EnabledOpacity() { return STRUCT_OFFSET(UUMGPopupButton, EnabledOpacity); } \
	FORCEINLINE static uint32 __PPO__VFXs() { return STRUCT_OFFSET(UUMGPopupButton, VFXs); } \
	FORCEINLINE static uint32 __PPO__Line() { return STRUCT_OFFSET(UUMGPopupButton, Line); } \
	FORCEINLINE static uint32 __PPO__FXSmoke() { return STRUCT_OFFSET(UUMGPopupButton, FXSmoke); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGPopupButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGPopupButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
