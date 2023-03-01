// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_BaseTooltipWidget_generated_h
#error "BaseTooltipWidget.generated.h already included, missing '#pragma once' in BaseTooltipWidget.h"
#endif
#define DEADBYDAYLIGHT_BaseTooltipWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseTooltipWidget(); \
	friend struct Z_Construct_UClass_UBaseTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseTooltipWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBaseTooltipWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBaseTooltipWidget(); \
	friend struct Z_Construct_UClass_UBaseTooltipWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseTooltipWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBaseTooltipWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseTooltipWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseTooltipWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTooltipWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTooltipWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTooltipWidget(UBaseTooltipWidget&&); \
	NO_API UBaseTooltipWidget(const UBaseTooltipWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTooltipWidget(UBaseTooltipWidget&&); \
	NO_API UBaseTooltipWidget(const UBaseTooltipWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTooltipWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTooltipWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseTooltipWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TitleLabel() { return STRUCT_OFFSET(UBaseTooltipWidget, TitleLabel); } \
	FORCEINLINE static uint32 __PPO__TooltipContainer() { return STRUCT_OFFSET(UBaseTooltipWidget, TooltipContainer); } \
	FORCEINLINE static uint32 __PPO__DescriptionLabel() { return STRUCT_OFFSET(UBaseTooltipWidget, DescriptionLabel); } \
	FORCEINLINE static uint32 __PPO__CloseButton() { return STRUCT_OFFSET(UBaseTooltipWidget, CloseButton); } \
	FORCEINLINE static uint32 __PPO__TooltipOpeningSound() { return STRUCT_OFFSET(UBaseTooltipWidget, TooltipOpeningSound); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBaseTooltipWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BaseTooltipWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
