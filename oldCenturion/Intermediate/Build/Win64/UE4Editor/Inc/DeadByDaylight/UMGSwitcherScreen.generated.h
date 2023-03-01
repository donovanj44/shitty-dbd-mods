// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGSwitcherScreen_generated_h
#error "UMGSwitcherScreen.generated.h already included, missing '#pragma once' in UMGSwitcherScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGSwitcherScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventUMGSwitcherScreenOnLoadoutWidgetInventoryItemUnselected_Parms \
{ \
	int32 itemIndex; \
}; \
static inline void FUMGSwitcherScreenOnLoadoutWidgetInventoryItemUnselected_DelegateWrapper(const FMulticastScriptDelegate& UMGSwitcherScreenOnLoadoutWidgetInventoryItemUnselected, int32 itemIndex) \
{ \
	_Script_DeadByDaylight_eventUMGSwitcherScreenOnLoadoutWidgetInventoryItemUnselected_Parms Parms; \
	Parms.itemIndex=itemIndex; \
	UMGSwitcherScreenOnLoadoutWidgetInventoryItemUnselected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventUMGSwitcherScreenOnLoadoutWidgetInventoryItemSelected_Parms \
{ \
	int32 itemIndex; \
}; \
static inline void FUMGSwitcherScreenOnLoadoutWidgetInventoryItemSelected_DelegateWrapper(const FMulticastScriptDelegate& UMGSwitcherScreenOnLoadoutWidgetInventoryItemSelected, int32 itemIndex) \
{ \
	_Script_DeadByDaylight_eventUMGSwitcherScreenOnLoadoutWidgetInventoryItemSelected_Parms Parms; \
	Parms.itemIndex=itemIndex; \
	UMGSwitcherScreenOnLoadoutWidgetInventoryItemSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventUMGSwitcherScreenOnLoadoutWidgetSlotClicked_Parms \
{ \
	int32 slotID; \
}; \
static inline void FUMGSwitcherScreenOnLoadoutWidgetSlotClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGSwitcherScreenOnLoadoutWidgetSlotClicked, int32 slotID) \
{ \
	_Script_DeadByDaylight_eventUMGSwitcherScreenOnLoadoutWidgetSlotClicked_Parms Parms; \
	Parms.slotID=slotID; \
	UMGSwitcherScreenOnLoadoutWidgetSlotClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastBloodNodePurchase); \
	DECLARE_FUNCTION(execBroadcastBloodNodeSelected); \
	DECLARE_FUNCTION(execBroadcastBloodStoreRegenerate); \
	DECLARE_FUNCTION(execBroadcastCharacterInfoButtonClickedEvent); \
	DECLARE_FUNCTION(execBroadcastCharacterRoleButtonClickedEvent); \
	DECLARE_FUNCTION(execBroadcastCharacterSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastItemSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastItemUnSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastSlotClickedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastBloodNodePurchase); \
	DECLARE_FUNCTION(execBroadcastBloodNodeSelected); \
	DECLARE_FUNCTION(execBroadcastBloodStoreRegenerate); \
	DECLARE_FUNCTION(execBroadcastCharacterInfoButtonClickedEvent); \
	DECLARE_FUNCTION(execBroadcastCharacterRoleButtonClickedEvent); \
	DECLARE_FUNCTION(execBroadcastCharacterSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastItemSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastItemUnSelectedEvent); \
	DECLARE_FUNCTION(execBroadcastSlotClickedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSwitcherScreen(); \
	friend struct Z_Construct_UClass_UUMGSwitcherScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGSwitcherScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSwitcherScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSwitcherScreen(); \
	friend struct Z_Construct_UClass_UUMGSwitcherScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGSwitcherScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSwitcherScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSwitcherScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSwitcherScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSwitcherScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSwitcherScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSwitcherScreen(UUMGSwitcherScreen&&); \
	NO_API UUMGSwitcherScreen(const UUMGSwitcherScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSwitcherScreen(UUMGSwitcherScreen&&); \
	NO_API UUMGSwitcherScreen(const UUMGSwitcherScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSwitcherScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSwitcherScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGSwitcherScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ContainerWidgetSwitcher() { return STRUCT_OFFSET(UUMGSwitcherScreen, ContainerWidgetSwitcher); } \
	FORCEINLINE static uint32 __PPO__BloodStoreWidget() { return STRUCT_OFFSET(UUMGSwitcherScreen, BloodStoreWidget); } \
	FORCEINLINE static uint32 __PPO__LoadoutWidget() { return STRUCT_OFFSET(UUMGSwitcherScreen, LoadoutWidget); } \
	FORCEINLINE static uint32 __PPO__CharacterSelectionWidget() { return STRUCT_OFFSET(UUMGSwitcherScreen, CharacterSelectionWidget); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_15_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGSwitcherScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGSwitcherScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
