// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESlateVisibility : uint8;
#ifdef DEADBYDAYLIGHT_UMGAtlantaSettingScreen_generated_h
#error "UMGAtlantaSettingScreen.generated.h already included, missing '#pragma once' in UMGAtlantaSettingScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGAtlantaSettingScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAimAssistToggleClick); \
	DECLARE_FUNCTION(execHandleAlwaysDisplayButtonClick); \
	DECLARE_FUNCTION(execHandleContextButtonClickEvent); \
	DECLARE_FUNCTION(execHandleHandSideToggleClick); \
	DECLARE_FUNCTION(execHandleInteractionButtonToggleClick); \
	DECLARE_FUNCTION(execHandleInvertYToggleClick); \
	DECLARE_FUNCTION(execHandleKillerCameraSensitivityChanged); \
	DECLARE_FUNCTION(execHandleLanguageButtonClick); \
	DECLARE_FUNCTION(execHandleLeaveButtonClick); \
	DECLARE_FUNCTION(execHandleSettingTabClick); \
	DECLARE_FUNCTION(execHandleSurvivorCameraSensitivityChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAimAssistToggleClick); \
	DECLARE_FUNCTION(execHandleAlwaysDisplayButtonClick); \
	DECLARE_FUNCTION(execHandleContextButtonClickEvent); \
	DECLARE_FUNCTION(execHandleHandSideToggleClick); \
	DECLARE_FUNCTION(execHandleInteractionButtonToggleClick); \
	DECLARE_FUNCTION(execHandleInvertYToggleClick); \
	DECLARE_FUNCTION(execHandleKillerCameraSensitivityChanged); \
	DECLARE_FUNCTION(execHandleLanguageButtonClick); \
	DECLARE_FUNCTION(execHandleLeaveButtonClick); \
	DECLARE_FUNCTION(execHandleSettingTabClick); \
	DECLARE_FUNCTION(execHandleSurvivorCameraSensitivityChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_EVENT_PARMS \
	struct UMGAtlantaSettingScreen_eventSetRightTopTextInfo_Parms \
	{ \
		FText title; \
		FString content; \
		ESlateVisibility textVisibility; \
	}; \
	struct UMGAtlantaSettingScreen_eventShowCreditsOrConsentsPopup_Parms \
	{ \
		FString title; \
		FString content; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGAtlantaSettingScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaSettingScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaSettingScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUMGAtlantaSettingScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaSettingScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaSettingScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAtlantaSettingScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAtlantaSettingScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaSettingScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaSettingScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaSettingScreen(UUMGAtlantaSettingScreen&&); \
	NO_API UUMGAtlantaSettingScreen(const UUMGAtlantaSettingScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaSettingScreen(UUMGAtlantaSettingScreen&&); \
	NO_API UUMGAtlantaSettingScreen(const UUMGAtlantaSettingScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaSettingScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaSettingScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGAtlantaSettingScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SettingContextSwitcher() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, SettingContextSwitcher); } \
	FORCEINLINE static uint32 __PPO__SettingTabBox() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, SettingTabBox); } \
	FORCEINLINE static uint32 __PPO__AlwaysDisplayButtonBox() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, AlwaysDisplayButtonBox); } \
	FORCEINLINE static uint32 __PPO___settingTabButtonClass() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, _settingTabButtonClass); } \
	FORCEINLINE static uint32 __PPO___settingAlwaysDisplayButtonClass() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, _settingAlwaysDisplayButtonClass); } \
	FORCEINLINE static uint32 __PPO___buttonBoxDividerAsset() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, _buttonBoxDividerAsset); } \
	FORCEINLINE static uint32 __PPO___overlayContextWidgetMap() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, _overlayContextWidgetMap); } \
	FORCEINLINE static uint32 __PPO___contextWidgetMap() { return STRUCT_OFFSET(UUMGAtlantaSettingScreen, _contextWidgetMap); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_14_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGAtlantaSettingScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaSettingScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
