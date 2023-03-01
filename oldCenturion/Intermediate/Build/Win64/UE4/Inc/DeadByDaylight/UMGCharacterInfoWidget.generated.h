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
#ifdef DEADBYDAYLIGHT_UMGCharacterInfoWidget_generated_h
#error "UMGCharacterInfoWidget.generated.h already included, missing '#pragma once' in UMGCharacterInfoWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGCharacterInfoWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_17_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterInfoWidgetOnPowerItemTooltipTriggeredLongPressEvent_Parms \
{ \
	FInventorySlotData itemSlotData; \
	FVector2D position; \
}; \
static inline void FUMGCharacterInfoWidgetOnPowerItemTooltipTriggeredLongPressEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterInfoWidgetOnPowerItemTooltipTriggeredLongPressEvent, FInventorySlotData const& itemSlotData, FVector2D position) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterInfoWidgetOnPowerItemTooltipTriggeredLongPressEvent_Parms Parms; \
	Parms.itemSlotData=itemSlotData; \
	Parms.position=position; \
	UMGCharacterInfoWidgetOnPowerItemTooltipTriggeredLongPressEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_16_DELEGATE \
struct _Script_DeadByDaylight_eventUMGCharacterInfoWidgetOnTeachableTooltipTriggeredLongPressEvent_Parms \
{ \
	FTeachableData teachableData; \
	FVector2D position; \
}; \
static inline void FUMGCharacterInfoWidgetOnTeachableTooltipTriggeredLongPressEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGCharacterInfoWidgetOnTeachableTooltipTriggeredLongPressEvent, FTeachableData const& teachableData, FVector2D const& position) \
{ \
	_Script_DeadByDaylight_eventUMGCharacterInfoWidgetOnTeachableTooltipTriggeredLongPressEvent_Parms Parms; \
	Parms.teachableData=teachableData; \
	Parms.position=position; \
	UMGCharacterInfoWidgetOnTeachableTooltipTriggeredLongPressEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePowerItemTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePowerItemTooltipLongPressedEvent); \
	DECLARE_FUNCTION(execHandleTooltipLongPressedEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGCharacterInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterInfoWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUUMGCharacterInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGCharacterInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGCharacterInfoWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGCharacterInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGCharacterInfoWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGCharacterInfoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterInfoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterInfoWidget(UUMGCharacterInfoWidget&&); \
	NO_API UUMGCharacterInfoWidget(const UUMGCharacterInfoWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGCharacterInfoWidget(UUMGCharacterInfoWidget&&); \
	NO_API UUMGCharacterInfoWidget(const UUMGCharacterInfoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGCharacterInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGCharacterInfoWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGCharacterInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CharacterInfoScrollBox() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, CharacterInfoScrollBox); } \
	FORCEINLINE static uint32 __PPO__CharacterScrollingInfoWidget() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, CharacterScrollingInfoWidget); } \
	FORCEINLINE static uint32 __PPO__CharacterDLCPanel() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, CharacterDLCPanel); } \
	FORCEINLINE static uint32 __PPO__CharacterBackgroundImage() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, CharacterBackgroundImage); } \
	FORCEINLINE static uint32 __PPO__CharacterName() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, CharacterName); } \
	FORCEINLINE static uint32 __PPO___characterDifficultyText() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _characterDifficultyText); } \
	FORCEINLINE static uint32 __PPO___characterDLCText() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _characterDLCText); } \
	FORCEINLINE static uint32 __PPO___isKiller() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _isKiller); } \
	FORCEINLINE static uint32 __PPO___easyColor() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _easyColor); } \
	FORCEINLINE static uint32 __PPO___intermediaryColor() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _intermediaryColor); } \
	FORCEINLINE static uint32 __PPO___hardColor() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _hardColor); } \
	FORCEINLINE static uint32 __PPO___currentColor() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _currentColor); } \
	FORCEINLINE static uint32 __PPO___characterDLCTitle() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _characterDLCTitle); } \
	FORCEINLINE static uint32 __PPO___onTeachableTooltipTriggeredLongPressEvent() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _onTeachableTooltipTriggeredLongPressEvent); } \
	FORCEINLINE static uint32 __PPO___onPowerItemTooltipTriggeredLongPressEvent() { return STRUCT_OFFSET(UUMGCharacterInfoWidget, _onPowerItemTooltipTriggeredLongPressEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_19_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGCharacterInfoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGCharacterInfoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
