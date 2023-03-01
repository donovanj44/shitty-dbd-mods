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
#ifdef DEADBYDAYLIGHT_UMGCharacterScrollingInfoWidget_generated_h
#error "UMGCharacterScrollingInfoWidget.generated.h already included, missing '#pragma once' in UMGCharacterScrollingInfoWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGCharacterScrollingInfoWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_16_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterScrollingInfoWidgetOnPowerButtonTooltipLongPressEvent_Parms \
{ \
	FInventorySlotData itemSlotData; \
	FVector2D position; \
}; \
static inline void FUMGCharacterScrollingInfoWidgetOnPowerButtonTooltipLongPressEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterScrollingInfoWidgetOnPowerButtonTooltipLongPressEvent, FInventorySlotData const& itemSlotData, FVector2D position) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterScrollingInfoWidgetOnPowerButtonTooltipLongPressEvent_Parms Parms; \
	Parms.itemSlotData=itemSlotData; \
	Parms.position=position; \
	UMGCharacterScrollingInfoWidgetOnPowerButtonTooltipLongPressEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_15_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterScrollingInfoWidgetOnTeachableTooltipTriggeredEvent_Parms \
{ \
	FTeachableData teachableData; \
	FVector2D position; \
}; \
static inline void FUMGCharacterScrollingInfoWidgetOnTeachableTooltipTriggeredEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterScrollingInfoWidgetOnTeachableTooltipTriggeredEvent, FTeachableData const& teachableData, FVector2D const& position) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterScrollingInfoWidgetOnTeachableTooltipTriggeredEvent_Parms Parms; \
	Parms.teachableData=teachableData; \
	Parms.position=position; \
	UMGCharacterScrollingInfoWidgetOnTeachableTooltipTriggeredEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execHandleTooltipLongPressedKillerPowerEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execHandleTooltipLongPressedKillerPowerEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCharacterScrollingInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterScrollingInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterScrollingInfoWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterScrollingInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCharacterScrollingInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterScrollingInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterScrollingInfoWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterScrollingInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCharacterScrollingInfoWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCharacterScrollingInfoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterScrollingInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterScrollingInfoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterScrollingInfoWidget(UUMGCharacterScrollingInfoWidget&&); \
	NO_API UUMGCharacterScrollingInfoWidget(const UUMGCharacterScrollingInfoWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterScrollingInfoWidget(UUMGCharacterScrollingInfoWidget&&); \
	NO_API UUMGCharacterScrollingInfoWidget(const UUMGCharacterScrollingInfoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterScrollingInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterScrollingInfoWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCharacterScrollingInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FirstTeachablePerk() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, FirstTeachablePerk); } \
	FORCEINLINE static uint32 __PPO__SecondTeachablePerk() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, SecondTeachablePerk); } \
	FORCEINLINE static uint32 __PPO__ThirdTeachablePerk() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, ThirdTeachablePerk); } \
	FORCEINLINE static uint32 __PPO__KillerInfoPanel() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, KillerInfoPanel); } \
	FORCEINLINE static uint32 __PPO__KillerPower() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, KillerPower); } \
	FORCEINLINE static uint32 __PPO__CharacterBackstoryBox() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, CharacterBackstoryBox); } \
	FORCEINLINE static uint32 __PPO___killerPowerName() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _killerPowerName); } \
	FORCEINLINE static uint32 __PPO___killerSpeedText() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _killerSpeedText); } \
	FORCEINLINE static uint32 __PPO___killerTerrorRadiusText() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _killerTerrorRadiusText); } \
	FORCEINLINE static uint32 __PPO___killerHeightText() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _killerHeightText); } \
	FORCEINLINE static uint32 __PPO___perksTitle() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _perksTitle); } \
	FORCEINLINE static uint32 __PPO___teachablesTitle() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _teachablesTitle); } \
	FORCEINLINE static uint32 __PPO___powerTitle() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _powerTitle); } \
	FORCEINLINE static uint32 __PPO___attributesTitle() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _attributesTitle); } \
	FORCEINLINE static uint32 __PPO__FirstTeachablePerkText() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, FirstTeachablePerkText); } \
	FORCEINLINE static uint32 __PPO__SecondTeachablePerkText() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, SecondTeachablePerkText); } \
	FORCEINLINE static uint32 __PPO__ThirdTeachablePerkText() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, ThirdTeachablePerkText); } \
	FORCEINLINE static uint32 __PPO___backStoryTitle() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _backStoryTitle); } \
	FORCEINLINE static uint32 __PPO___onTeachableTooltipTriggeredEvent() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _onTeachableTooltipTriggeredEvent); } \
	FORCEINLINE static uint32 __PPO___onPowerButtonTooltipLongPressEvent() { return STRUCT_OFFSET(UUMGCharacterScrollingInfoWidget, _onPowerButtonTooltipLongPressEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_18_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCharacterScrollingInfoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterScrollingInfoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
