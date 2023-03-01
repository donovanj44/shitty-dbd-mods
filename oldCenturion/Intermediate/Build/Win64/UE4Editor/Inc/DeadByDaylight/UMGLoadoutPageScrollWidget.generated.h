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
#ifdef DEADBYDAYLIGHT_UMGLoadoutPageScrollWidget_generated_h
#error "UMGLoadoutPageScrollWidget.generated.h already included, missing '#pragma once' in UMGLoadoutPageScrollWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGLoadoutPageScrollWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleItemClicked); \
	DECLARE_FUNCTION(execSetInventoryData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleItemClicked); \
	DECLARE_FUNCTION(execSetInventoryData);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_EVENT_PARMS \
	struct UMGLoadoutPageScrollWidget_eventSetItemIsSelected_Parms \
	{ \
		int32 index; \
		bool isSelected; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLoadoutPageScrollWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutPageScrollWidget, UUMGPageScrollWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutPageScrollWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLoadoutPageScrollWidget(); \
	friend struct Z_Construct_UClass_UUMGLoadoutPageScrollWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutPageScrollWidget, UUMGPageScrollWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutPageScrollWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLoadoutPageScrollWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLoadoutPageScrollWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutPageScrollWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutPageScrollWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutPageScrollWidget(UUMGLoadoutPageScrollWidget&&); \
	NO_API UUMGLoadoutPageScrollWidget(const UUMGLoadoutPageScrollWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutPageScrollWidget(UUMGLoadoutPageScrollWidget&&); \
	NO_API UUMGLoadoutPageScrollWidget(const UUMGLoadoutPageScrollWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutPageScrollWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutPageScrollWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLoadoutPageScrollWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___itemWidgetClass() { return STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _itemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___gridFormat() { return STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _gridFormat); } \
	FORCEINLINE static uint32 __PPO___inventoryData() { return STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _inventoryData); } \
	FORCEINLINE static uint32 __PPO___inventorySelectedItemIndexes() { return STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _inventorySelectedItemIndexes); } \
	FORCEINLINE static uint32 __PPO___subtitle() { return STRUCT_OFFSET(UUMGLoadoutPageScrollWidget, _subtitle); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLoadoutPageScrollWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutPageScrollWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
