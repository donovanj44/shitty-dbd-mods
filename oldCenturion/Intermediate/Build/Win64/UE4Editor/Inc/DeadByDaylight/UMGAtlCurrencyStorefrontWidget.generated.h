// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGAtlCurrencyStorefrontWidget_generated_h
#error "UMGAtlCurrencyStorefrontWidget.generated.h already included, missing '#pragma once' in UMGAtlCurrencyStorefrontWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGAtlCurrencyStorefrontWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_EVENT_PARMS \
	struct UMGAtlCurrencyStorefrontWidget_eventUpdateFirstPurchaseForAllAuricCellsEndInUI_Parms \
	{ \
		FString endInText; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGAtlCurrencyStorefrontWidget(); \
	friend struct Z_Construct_UClass_UUMGAtlCurrencyStorefrontWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlCurrencyStorefrontWidget, UUMGBaseCurrencyStorefrontWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlCurrencyStorefrontWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUMGAtlCurrencyStorefrontWidget(); \
	friend struct Z_Construct_UClass_UUMGAtlCurrencyStorefrontWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlCurrencyStorefrontWidget, UUMGBaseCurrencyStorefrontWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlCurrencyStorefrontWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAtlCurrencyStorefrontWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAtlCurrencyStorefrontWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlCurrencyStorefrontWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlCurrencyStorefrontWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlCurrencyStorefrontWidget(UUMGAtlCurrencyStorefrontWidget&&); \
	NO_API UUMGAtlCurrencyStorefrontWidget(const UUMGAtlCurrencyStorefrontWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlCurrencyStorefrontWidget(UUMGAtlCurrencyStorefrontWidget&&); \
	NO_API UUMGAtlCurrencyStorefrontWidget(const UUMGAtlCurrencyStorefrontWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlCurrencyStorefrontWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlCurrencyStorefrontWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGAtlCurrencyStorefrontWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AuricCellsCanvasPanel() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, AuricCellsCanvasPanel); } \
	FORCEINLINE static uint32 __PPO__AuricCellsGridPanel() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, AuricCellsGridPanel); } \
	FORCEINLINE static uint32 __PPO__BottomPurchaseBox() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, BottomPurchaseBox); } \
	FORCEINLINE static uint32 __PPO__BottomRightPurchaseRichText() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, BottomRightPurchaseRichText); } \
	FORCEINLINE static uint32 __PPO__BottomTimer() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, BottomTimer); } \
	FORCEINLINE static uint32 __PPO__AuricsBgR() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, AuricsBgR); } \
	FORCEINLINE static uint32 __PPO__AuricsBgL() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, AuricsBgL); } \
	FORCEINLINE static uint32 __PPO__EventItemsPackContainerBox() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, EventItemsPackContainerBox); } \
	FORCEINLINE static uint32 __PPO__PaddingEventItemsPackButton() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, PaddingEventItemsPackButton); } \
	FORCEINLINE static uint32 __PPO__EventItemsPackWidgetClass() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, EventItemsPackWidgetClass); } \
	FORCEINLINE static uint32 __PPO___auricCellButtons() { return STRUCT_OFFSET(UUMGAtlCurrencyStorefrontWidget, _auricCellButtons); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_16_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGAtlCurrencyStorefrontWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlCurrencyStorefrontWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
