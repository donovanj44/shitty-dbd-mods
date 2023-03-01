// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInventorySlotData;
struct FVector2D;
enum class EItemRarity : uint8;
enum class EStatusEffectType : uint8;
enum class EInventoryButtonState : uint8;
#ifdef DEADBYDAYLIGHT_UMGLoadoutItemButton_generated_h
#error "UMGLoadoutItemButton.generated.h already included, missing '#pragma once' in UMGLoadoutItemButton.h"
#endif
#define DEADBYDAYLIGHT_UMGLoadoutItemButton_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_21_DELEGATE \
struct _Script_DeadByDaylight_eventUMGLoadoutItemButtonOnLoadoutItemButtonLongPress_Parms \
{ \
	FInventorySlotData itemSlotData; \
	FVector2D position; \
}; \
static inline void FUMGLoadoutItemButtonOnLoadoutItemButtonLongPress_DelegateWrapper(const FMulticastScriptDelegate& UMGLoadoutItemButtonOnLoadoutItemButtonLongPress, FInventorySlotData const& itemSlotData, FVector2D position) \
{ \
	_Script_DeadByDaylight_eventUMGLoadoutItemButtonOnLoadoutItemButtonLongPress_Parms Parms; \
	Parms.itemSlotData=itemSlotData; \
	Parms.position=position; \
	UMGLoadoutItemButtonOnLoadoutItemButtonLongPress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_20_DELEGATE \
struct _Script_DeadByDaylight_eventUMGLoadoutItemButtonOnLoadoutItemButtonClicked_Parms \
{ \
	FName itemID; \
}; \
static inline void FUMGLoadoutItemButtonOnLoadoutItemButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGLoadoutItemButtonOnLoadoutItemButtonClicked, FName itemID) \
{ \
	_Script_DeadByDaylight_eventUMGLoadoutItemButtonOnLoadoutItemButtonClicked_Parms Parms; \
	Parms.itemID=itemID; \
	UMGLoadoutItemButtonOnLoadoutItemButtonClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_19_DELEGATE \
struct _Script_DeadByDaylight_eventUMGLoadoutItemButtonOnDisabledItemButtonClicked_Parms \
{ \
	FName itemID; \
}; \
static inline void FUMGLoadoutItemButtonOnDisabledItemButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGLoadoutItemButtonOnDisabledItemButtonClicked, FName itemID) \
{ \
	_Script_DeadByDaylight_eventUMGLoadoutItemButtonOnDisabledItemButtonClicked_Parms Parms; \
	Parms.itemID=itemID; \
	UMGLoadoutItemButtonOnDisabledItemButtonClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastClickedEvent); \
	DECLARE_FUNCTION(execBroadcastLongPressEvent); \
	DECLARE_FUNCTION(execGetLoadoutItemID); \
	DECLARE_FUNCTION(execOnLockedButtonClicked); \
	DECLARE_FUNCTION(execSetIconImageByPath); \
	DECLARE_FUNCTION(execSetIsSelected); \
	DECLARE_FUNCTION(execShowClickableOutline); \
	DECLARE_FUNCTION(execUpdateImageColor); \
	DECLARE_FUNCTION(execUpdateStackCount); \
	DECLARE_FUNCTION(execUpdateUnlockable); \
	DECLARE_FUNCTION(execUpdateWidgetByData); \
	DECLARE_FUNCTION(execUpdateWidgetByState);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastClickedEvent); \
	DECLARE_FUNCTION(execBroadcastLongPressEvent); \
	DECLARE_FUNCTION(execGetLoadoutItemID); \
	DECLARE_FUNCTION(execOnLockedButtonClicked); \
	DECLARE_FUNCTION(execSetIconImageByPath); \
	DECLARE_FUNCTION(execSetIsSelected); \
	DECLARE_FUNCTION(execShowClickableOutline); \
	DECLARE_FUNCTION(execUpdateImageColor); \
	DECLARE_FUNCTION(execUpdateStackCount); \
	DECLARE_FUNCTION(execUpdateUnlockable); \
	DECLARE_FUNCTION(execUpdateWidgetByData); \
	DECLARE_FUNCTION(execUpdateWidgetByState);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_EVENT_PARMS \
	struct UMGLoadoutItemButton_eventUpdateWidgetByDataBP_Parms \
	{ \
		FInventorySlotData slotData; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGLoadoutItemButton(); \
	friend struct Z_Construct_UClass_UUMGLoadoutItemButton_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutItemButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutItemButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUUMGLoadoutItemButton(); \
	friend struct Z_Construct_UClass_UUMGLoadoutItemButton_Statics; \
public: \
	DECLARE_CLASS(UUMGLoadoutItemButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGLoadoutItemButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGLoadoutItemButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGLoadoutItemButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutItemButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutItemButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutItemButton(UUMGLoadoutItemButton&&); \
	NO_API UUMGLoadoutItemButton(const UUMGLoadoutItemButton&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGLoadoutItemButton(UUMGLoadoutItemButton&&); \
	NO_API UUMGLoadoutItemButton(const UUMGLoadoutItemButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGLoadoutItemButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGLoadoutItemButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGLoadoutItemButton)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextStackCount() { return STRUCT_OFFSET(UUMGLoadoutItemButton, TextStackCount); } \
	FORCEINLINE static uint32 __PPO__EmptyCanvas() { return STRUCT_OFFSET(UUMGLoadoutItemButton, EmptyCanvas); } \
	FORCEINLINE static uint32 __PPO__EmptyButton() { return STRUCT_OFFSET(UUMGLoadoutItemButton, EmptyButton); } \
	FORCEINLINE static uint32 __PPO__LockedButton() { return STRUCT_OFFSET(UUMGLoadoutItemButton, LockedButton); } \
	FORCEINLINE static uint32 __PPO__ActionCanvas() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ActionCanvas); } \
	FORCEINLINE static uint32 __PPO__ImageRarityBG() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImageRarityBG); } \
	FORCEINLINE static uint32 __PPO__ImageGradient() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImageGradient); } \
	FORCEINLINE static uint32 __PPO__ImagePaint() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImagePaint); } \
	FORCEINLINE static uint32 __PPO__ImageEventBorder() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImageEventBorder); } \
	FORCEINLINE static uint32 __PPO__ImagePaintTop() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImagePaintTop); } \
	FORCEINLINE static uint32 __PPO__ImagePaintBottom() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImagePaintBottom); } \
	FORCEINLINE static uint32 __PPO__EmptyCanvasVisibility() { return STRUCT_OFFSET(UUMGLoadoutItemButton, EmptyCanvasVisibility); } \
	FORCEINLINE static uint32 __PPO__ActionCanvasVisibility() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ActionCanvasVisibility); } \
	FORCEINLINE static uint32 __PPO__PrivateCanvasVisibility() { return STRUCT_OFFSET(UUMGLoadoutItemButton, PrivateCanvasVisibility); } \
	FORCEINLINE static uint32 __PPO__LockIconVisibility() { return STRUCT_OFFSET(UUMGLoadoutItemButton, LockIconVisibility); } \
	FORCEINLINE static uint32 __PPO__EmptyIconVisibility() { return STRUCT_OFFSET(UUMGLoadoutItemButton, EmptyIconVisibility); } \
	FORCEINLINE static uint32 __PPO__SpecialEventVisiblity() { return STRUCT_OFFSET(UUMGLoadoutItemButton, SpecialEventVisiblity); } \
	FORCEINLINE static uint32 __PPO__LoadoutSelectedVisibility() { return STRUCT_OFFSET(UUMGLoadoutItemButton, LoadoutSelectedVisibility); } \
	FORCEINLINE static uint32 __PPO__LoadoutLockVisibility() { return STRUCT_OFFSET(UUMGLoadoutItemButton, LoadoutLockVisibility); } \
	FORCEINLINE static uint32 __PPO__ImageIcon() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImageIcon); } \
	FORCEINLINE static uint32 __PPO__ImageShadow() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ImageShadow); } \
	FORCEINLINE static uint32 __PPO__ActionButton() { return STRUCT_OFFSET(UUMGLoadoutItemButton, ActionButton); } \
	FORCEINLINE static uint32 __PPO__EmptyBGAsset() { return STRUCT_OFFSET(UUMGLoadoutItemButton, EmptyBGAsset); } \
	FORCEINLINE static uint32 __PPO__DisableBGAsset() { return STRUCT_OFFSET(UUMGLoadoutItemButton, DisableBGAsset); } \
	FORCEINLINE static uint32 __PPO__LoadoutItemData() { return STRUCT_OFFSET(UUMGLoadoutItemButton, LoadoutItemData); } \
	FORCEINLINE static uint32 __PPO___triggerClickEventForLoadoutWidget() { return STRUCT_OFFSET(UUMGLoadoutItemButton, _triggerClickEventForLoadoutWidget); } \
	FORCEINLINE static uint32 __PPO__CanvasUnlock() { return STRUCT_OFFSET(UUMGLoadoutItemButton, CanvasUnlock); } \
	FORCEINLINE static uint32 __PPO__TextUnlockLevel() { return STRUCT_OFFSET(UUMGLoadoutItemButton, TextUnlockLevel); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_23_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGLoadoutItemButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGLoadoutItemButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
