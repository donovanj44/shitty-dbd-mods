// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGBloodStoreRowWidget_generated_h
#error "UMGBloodStoreRowWidget.generated.h already included, missing '#pragma once' in UMGBloodStoreRowWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGBloodStoreRowWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastBloodNodeSelected); \
	DECLARE_FUNCTION(execBroadcastUnlockAnimationFinished);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastBloodNodeSelected); \
	DECLARE_FUNCTION(execBroadcastUnlockAnimationFinished);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_EVENT_PARMS \
	struct UMGBloodStoreRowWidget_eventLockRow_Parms \
	{ \
		bool playAnim; \
	}; \
	struct UMGBloodStoreRowWidget_eventUnlockRow_Parms \
	{ \
		bool playAnim; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreRowWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreRowWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreRowWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGBloodStoreRowWidget(); \
	friend struct Z_Construct_UClass_UUMGBloodStoreRowWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBloodStoreRowWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGBloodStoreRowWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGBloodStoreRowWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGBloodStoreRowWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreRowWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreRowWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreRowWidget(UUMGBloodStoreRowWidget&&); \
	NO_API UUMGBloodStoreRowWidget(const UUMGBloodStoreRowWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBloodStoreRowWidget(UUMGBloodStoreRowWidget&&); \
	NO_API UUMGBloodStoreRowWidget(const UUMGBloodStoreRowWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBloodStoreRowWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBloodStoreRowWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGBloodStoreRowWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemContainer() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, ItemContainer); } \
	FORCEINLINE static uint32 __PPO__LockStatusPanel() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, LockStatusPanel); } \
	FORCEINLINE static uint32 __PPO__HardLockedStatusPanel() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, HardLockedStatusPanel); } \
	FORCEINLINE static uint32 __PPO___purchasedItemsNbr() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, _purchasedItemsNbr); } \
	FORCEINLINE static uint32 __PPO___requiredItemNbr() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, _requiredItemNbr); } \
	FORCEINLINE static uint32 __PPO___rowStyle() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, _rowStyle); } \
	FORCEINLINE static uint32 __PPO___itemPadding() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, _itemPadding); } \
	FORCEINLINE static uint32 __PPO___itemWidgetClass() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, _itemWidgetClass); } \
	FORCEINLINE static uint32 __PPO___itemClass() { return STRUCT_OFFSET(UUMGBloodStoreRowWidget, _itemClass); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGBloodStoreRowWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGBloodStoreRowWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
