// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreItemSlotData;
enum class ECustomizationCategory : uint8;
#ifdef DEADBYDAYLIGHT_UMGCustomizationScreenWidget_generated_h
#error "UMGCustomizationScreenWidget.generated.h already included, missing '#pragma once' in UMGCustomizationScreenWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGCustomizationScreenWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastAvailableItemSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastCustomizationCategoryButtonPressed); \
	DECLARE_FUNCTION(execBroadcastUnlockWithCurrencyEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastAvailableItemSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastCustomizationCategoryButtonPressed); \
	DECLARE_FUNCTION(execBroadcastUnlockWithCurrencyEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_EVENT_PARMS \
	struct UMGCustomizationScreenWidget_eventSetCategoryLabel_Parms \
	{ \
		ECustomizationCategory category; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCustomizationScreenWidget(); \
	friend struct Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCustomizationScreenWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCustomizationScreenWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCustomizationScreenWidget(); \
	friend struct Z_Construct_UClass_UUMGCustomizationScreenWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCustomizationScreenWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCustomizationScreenWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCustomizationScreenWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCustomizationScreenWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCustomizationScreenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCustomizationScreenWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCustomizationScreenWidget(UUMGCustomizationScreenWidget&&); \
	NO_API UUMGCustomizationScreenWidget(const UUMGCustomizationScreenWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCustomizationScreenWidget(UUMGCustomizationScreenWidget&&); \
	NO_API UUMGCustomizationScreenWidget(const UUMGCustomizationScreenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCustomizationScreenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCustomizationScreenWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCustomizationScreenWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PageScrollWidget() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, PageScrollWidget); } \
	FORCEINLINE static uint32 __PPO__CustomizationCategoriesBar() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, CustomizationCategoriesBar); } \
	FORCEINLINE static uint32 __PPO__CategoryLabel() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, CategoryLabel); } \
	FORCEINLINE static uint32 __PPO__CurrentlyEquippedLabel() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, CurrentlyEquippedLabel); } \
	FORCEINLINE static uint32 __PPO__AvailableInOutfitsContainer() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, AvailableInOutfitsContainer); } \
	FORCEINLINE static uint32 __PPO__UnlockItemContainer() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, UnlockItemContainer); } \
	FORCEINLINE static uint32 __PPO__OutfitItem() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, OutfitItem); } \
	FORCEINLINE static uint32 __PPO__PriceContainer() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, PriceContainer); } \
	FORCEINLINE static uint32 __PPO__PriceButtonWidgetClass() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, PriceButtonWidgetClass); } \
	FORCEINLINE static uint32 __PPO___currentSelectedItem() { return STRUCT_OFFSET(UUMGCustomizationScreenWidget, _currentSelectedItem); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_16_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCustomizationScreenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCustomizationScreenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
