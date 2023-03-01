// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInventoryGridFormat : uint8;
struct FInventorySlotData;
#ifdef DEADBYDAYLIGHT_UMGLoadoutWidget_generated_h
#error "UMGLoadoutWidget.generated.h already included, missing '#pragma once' in UMGLoadoutWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGLoadoutWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_EVENT_PARMS \
	struct UMGLoadoutWidget_eventSetInventoryData_Parms \
	{ \
		EInventoryGridFormat gridFormat; \
		TArray<FInventorySlotData> inventoryData; \
		TArray<int32> selectedItemsIndexes; \
		FString trackingItemName; \
		FString subtitle; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLoadoutWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutWidget, UUMGLoadoutBaseWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLoadoutWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutWidget, UUMGLoadoutBaseWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLoadoutWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLoadoutWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutWidget(UUMGLoadoutWidget&&); \
	NO_API UUMGLoadoutWidget(const UUMGLoadoutWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutWidget(UUMGLoadoutWidget&&); \
	NO_API UUMGLoadoutWidget(const UUMGLoadoutWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLoadoutWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PageScrollWidget() { return STRUCT_OFFSET(UUMGLoadoutWidget, PageScrollWidget); } \
	FORCEINLINE static uint32 __PPO__LoadoutTitleText() { return STRUCT_OFFSET(UUMGLoadoutWidget, LoadoutTitleText); } \
	FORCEINLINE static uint32 __PPO__InventoryPanelTitleText() { return STRUCT_OFFSET(UUMGLoadoutWidget, InventoryPanelTitleText); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLoadoutWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
