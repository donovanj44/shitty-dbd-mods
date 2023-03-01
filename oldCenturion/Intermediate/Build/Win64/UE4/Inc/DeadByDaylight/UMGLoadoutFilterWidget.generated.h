// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UTexture2D;
#ifdef DEADBYDAYLIGHT_UMGLoadoutFilterWidget_generated_h
#error "UMGLoadoutFilterWidget.generated.h already included, missing '#pragma once' in UMGLoadoutFilterWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGLoadoutFilterWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventUMGLoadoutFilterWidgetOnLoadoutFilterClicked_Parms \
{ \
	FName filterName; \
}; \
static inline void FUMGLoadoutFilterWidgetOnLoadoutFilterClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGLoadoutFilterWidgetOnLoadoutFilterClicked, FName filterName) \
{ \
	_Script_DeadByDaylight_eventUMGLoadoutFilterWidgetOnLoadoutFilterClicked_Parms Parms; \
	Parms.filterName=filterName; \
	UMGLoadoutFilterWidgetOnLoadoutFilterClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearSelectedFilter); \
	DECLARE_FUNCTION(execInitFilterWidget); \
	DECLARE_FUNCTION(execOnFilterButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearSelectedFilter); \
	DECLARE_FUNCTION(execInitFilterWidget); \
	DECLARE_FUNCTION(execOnFilterButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLoadoutFilterWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutFilterWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutFilterWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLoadoutFilterWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutFilterWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutFilterWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutFilterWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLoadoutFilterWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLoadoutFilterWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutFilterWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutFilterWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutFilterWidget(UUMGLoadoutFilterWidget&&); \
	NO_API UUMGLoadoutFilterWidget(const UUMGLoadoutFilterWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutFilterWidget(UUMGLoadoutFilterWidget&&); \
	NO_API UUMGLoadoutFilterWidget(const UUMGLoadoutFilterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutFilterWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutFilterWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLoadoutFilterWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AtlantaLoadoutFilterButtonClass() { return STRUCT_OFFSET(UUMGLoadoutFilterWidget, AtlantaLoadoutFilterButtonClass); } \
	FORCEINLINE static uint32 __PPO__FilterContainerBox() { return STRUCT_OFFSET(UUMGLoadoutFilterWidget, FilterContainerBox); } \
	FORCEINLINE static uint32 __PPO__Filters() { return STRUCT_OFFSET(UUMGLoadoutFilterWidget, Filters); } \
	FORCEINLINE static uint32 __PPO__FilterButtons() { return STRUCT_OFFSET(UUMGLoadoutFilterWidget, FilterButtons); } \
	FORCEINLINE static uint32 __PPO__SelectedFilterButton() { return STRUCT_OFFSET(UUMGLoadoutFilterWidget, SelectedFilterButton); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLoadoutFilterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutFilterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
