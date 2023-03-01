// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_CoreHudRootWidget_generated_h
#error "CoreHudRootWidget.generated.h already included, missing '#pragma once' in CoreHudRootWidget.h"
#endif
#define DEADBYDAYLIGHT_CoreHudRootWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_13_DELEGATE \
static inline void FCoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate) \
{ \
	CoreHudRootWidgetHUDWidgetsFadeOutCompletedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_RPC_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_EVENT_PARMS \
	struct CoreHudRootWidget_eventSetSpectateVisibility_Parms \
	{ \
		bool visible; \
	}; \
	struct CoreHudRootWidget_eventSetWidgetsVisibility_Parms \
	{ \
		bool visible; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreHudRootWidget(); \
	friend struct Z_Construct_UClass_UCoreHudRootWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudRootWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudRootWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreHudRootWidget(); \
	friend struct Z_Construct_UClass_UCoreHudRootWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudRootWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudRootWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreHudRootWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreHudRootWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudRootWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudRootWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudRootWidget(UCoreHudRootWidget&&); \
	NO_API UCoreHudRootWidget(const UCoreHudRootWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudRootWidget(UCoreHudRootWidget&&); \
	NO_API UCoreHudRootWidget(const UCoreHudRootWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudRootWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudRootWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreHudRootWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EndGameCollapseBarWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, EndGameCollapseBarWidgetClass); } \
	FORCEINLINE static uint32 __PPO__EquippedItemWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, EquippedItemWidgetClass); } \
	FORCEINLINE static uint32 __PPO__EquippedPowerWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, EquippedPowerWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ExternalEffectsWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, ExternalEffectsWidgetClass); } \
	FORCEINLINE static uint32 __PPO__HudAlertWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, HudAlertWidgetClass); } \
	FORCEINLINE static uint32 __PPO__InteractionProgressWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, InteractionProgressWidgetClass); } \
	FORCEINLINE static uint32 __PPO__InteractionPromptsContainerWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, InteractionPromptsContainerWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ItemInteractionWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, ItemInteractionWidgetClass); } \
	FORCEINLINE static uint32 __PPO__LeaningArrowsWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, LeaningArrowsWidgetClass); } \
	FORCEINLINE static uint32 __PPO__MatchResultWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, MatchResultWidgetClass); } \
	FORCEINLINE static uint32 __PPO__OfferingInteractionWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, OfferingInteractionWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PerksContainerWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, PerksContainerWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PingStatusWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, PingStatusWidgetClass); } \
	FORCEINLINE static uint32 __PPO__PlayerStatusesWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, PlayerStatusesWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ScreenIndicatorWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, ScreenIndicatorWidgetClass); } \
	FORCEINLINE static uint32 __PPO__SpectateBarWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, SpectateBarWidgetClass); } \
	FORCEINLINE static uint32 __PPO__StartSequenceWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, StartSequenceWidgetClass); } \
	FORCEINLINE static uint32 __PPO__StatusEffectWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, StatusEffectWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TestBuildFlagWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, TestBuildFlagWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TutorialMysteryNoteWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, TutorialMysteryNoteWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TutorialObjectivesWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, TutorialObjectivesWidgetClass); } \
	FORCEINLINE static uint32 __PPO__TutorialPopupWidgetClass() { return STRUCT_OFFSET(UCoreHudRootWidget, TutorialPopupWidgetClass); } \
	FORCEINLINE static uint32 __PPO___coreBaseViewInterfaces() { return STRUCT_OFFSET(UCoreHudRootWidget, _coreBaseViewInterfaces); } \
	FORCEINLINE static uint32 __PPO__HUDWidgetsFadeOutCompletedDelegate() { return STRUCT_OFFSET(UCoreHudRootWidget, HUDWidgetsFadeOutCompletedDelegate); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCoreHudRootWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CoreHudRootWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
