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
struct FTeachableData;
#ifdef DEADBYDAYLIGHT_UMGCharacterInfoScreen_generated_h
#error "UMGCharacterInfoScreen.generated.h already included, missing '#pragma once' in UMGCharacterInfoScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGCharacterInfoScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_15_DELEGATE \
static inline void FUMGCharacterInfoScreenOnProgressionButtonClickEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterInfoScreenOnProgressionButtonClickEvent) \
{ \
	UMGCharacterInfoScreenOnProgressionButtonClickEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterInfoScreenOnPowerItemTooltipTriggeredLongPressEvent_Parms \
{ \
	FInventorySlotData itemSlotData; \
	FVector2D position; \
}; \
static inline void FUMGCharacterInfoScreenOnPowerItemTooltipTriggeredLongPressEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterInfoScreenOnPowerItemTooltipTriggeredLongPressEvent, FInventorySlotData const& itemSlotData, FVector2D position) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterInfoScreenOnPowerItemTooltipTriggeredLongPressEvent_Parms Parms; \
	Parms.itemSlotData=itemSlotData; \
	Parms.position=position; \
	UMGCharacterInfoScreenOnPowerItemTooltipTriggeredLongPressEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterInfoScreenOnTeachableTooltipTriggeredLongPressEvent_Parms \
{ \
	FTeachableData teachableData; \
	FVector2D position; \
}; \
static inline void FUMGCharacterInfoScreenOnTeachableTooltipTriggeredLongPressEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterInfoScreenOnTeachableTooltipTriggeredLongPressEvent, FTeachableData const& teachableData, FVector2D const& position) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterInfoScreenOnTeachableTooltipTriggeredLongPressEvent_Parms Parms; \
	Parms.teachableData=teachableData; \
	Parms.position=position; \
	UMGCharacterInfoScreenOnTeachableTooltipTriggeredLongPressEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePowerItemTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execHandleProgressionButtonClickEvent); \
	DECLARE_FUNCTION(execHandleTeachablePerkTooltipLongPressedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePowerItemTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execHandleProgressionButtonClickEvent); \
	DECLARE_FUNCTION(execHandleTeachablePerkTooltipLongPressedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCharacterInfoScreen(); \
	friend struct Z_Construct_UClass_UUMGCharacterInfoScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterInfoScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterInfoScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCharacterInfoScreen(); \
	friend struct Z_Construct_UClass_UUMGCharacterInfoScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterInfoScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterInfoScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCharacterInfoScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCharacterInfoScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterInfoScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterInfoScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterInfoScreen(UUMGCharacterInfoScreen&&); \
	NO_API UUMGCharacterInfoScreen(const UUMGCharacterInfoScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterInfoScreen(UUMGCharacterInfoScreen&&); \
	NO_API UUMGCharacterInfoScreen(const UUMGCharacterInfoScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterInfoScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterInfoScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCharacterInfoScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ContentPanel() { return STRUCT_OFFSET(UUMGCharacterInfoScreen, ContentPanel); } \
	FORCEINLINE static uint32 __PPO__SurvivorInfoWidgetClass() { return STRUCT_OFFSET(UUMGCharacterInfoScreen, SurvivorInfoWidgetClass); } \
	FORCEINLINE static uint32 __PPO__KillerInfoWidgetClass() { return STRUCT_OFFSET(UUMGCharacterInfoScreen, KillerInfoWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ProgressionButton() { return STRUCT_OFFSET(UUMGCharacterInfoScreen, ProgressionButton); } \
	FORCEINLINE static uint32 __PPO___onTeachableTooltipTriggeredLongPressEvent() { return STRUCT_OFFSET(UUMGCharacterInfoScreen, _onTeachableTooltipTriggeredLongPressEvent); } \
	FORCEINLINE static uint32 __PPO___onPowerItemTooltipTriggeredLongPressEvent() { return STRUCT_OFFSET(UUMGCharacterInfoScreen, _onPowerItemTooltipTriggeredLongPressEvent); } \
	FORCEINLINE static uint32 __PPO___onProgressionButtonClickEvent() { return STRUCT_OFFSET(UUMGCharacterInfoScreen, _onProgressionButtonClickEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_17_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCharacterInfoScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
