// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGBloodStoreItemPreviewWidget_generated_h
#error "UMGBloodStoreItemPreviewWidget.generated.h already included, missing '#pragma once' in UMGBloodStoreItemPreviewWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGBloodStoreItemPreviewWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastPurchasePressed); \
	DECLARE_FUNCTION(execBroadcastRefreshPressed); \
	DECLARE_FUNCTION(execBroadcastUnselectPressed);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastPurchasePressed); \
	DECLARE_FUNCTION(execBroadcastRefreshPressed); \
	DECLARE_FUNCTION(execBroadcastUnselectPressed);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_EVENT_PARMS \
	struct UMGBloodStoreItemPreviewWidget_eventDisplayItem_Parms \
	{ \
		bool isItemPurchaseable; \
		bool isItemAffordable; \
	}; \
	struct UMGBloodStoreItemPreviewWidget_eventShowPurchaseButton_Parms \
	{ \
		bool NewShowPurchaseButton; \
	}; \
	struct UMGBloodStoreItemPreviewWidget_eventShowRefreshButton_Parms \
	{ \
		bool NewShowRefreshButton; \
		bool isRefreshFree; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreItemPreviewWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreItemPreviewWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreItemPreviewWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreItemPreviewWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreItemPreviewWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreItemPreviewWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreItemPreviewWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGBloodStoreItemPreviewWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGBloodStoreItemPreviewWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreItemPreviewWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreItemPreviewWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreItemPreviewWidget(UUMGBloodStoreItemPreviewWidget&&); \
	NO_API UUMGBloodStoreItemPreviewWidget(const UUMGBloodStoreItemPreviewWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreItemPreviewWidget(UUMGBloodStoreItemPreviewWidget&&); \
	NO_API UUMGBloodStoreItemPreviewWidget(const UUMGBloodStoreItemPreviewWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreItemPreviewWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreItemPreviewWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGBloodStoreItemPreviewWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___itemName() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemName); } \
	FORCEINLINE static uint32 __PPO___itemDescription() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemDescription); } \
	FORCEINLINE static uint32 __PPO___itemPrice() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemPrice); } \
	FORCEINLINE static uint32 __PPO___refreshPrice() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _refreshPrice); } \
	FORCEINLINE static uint32 __PPO___nodeStatusText() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _nodeStatusText); } \
	FORCEINLINE static uint32 __PPO___refreshTitle() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _refreshTitle); } \
	FORCEINLINE static uint32 __PPO___itemSelectionTitle() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemSelectionTitle); } \
	FORCEINLINE static uint32 __PPO___itemSelectionText() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _itemSelectionText); } \
	FORCEINLINE static uint32 __PPO___purchaseTitle() { return STRUCT_OFFSET(UUMGBloodStoreItemPreviewWidget, _purchaseTitle); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_6_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGBloodStoreItemPreviewWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreItemPreviewWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
