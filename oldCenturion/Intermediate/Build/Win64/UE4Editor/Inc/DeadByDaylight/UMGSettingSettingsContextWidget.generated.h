// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGSettingSettingsContextWidget_generated_h
#error "UMGSettingSettingsContextWidget.generated.h already included, missing '#pragma once' in UMGSettingSettingsContextWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGSettingSettingsContextWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAutoDeclineFriendRequestToggleClick); \
	DECLARE_FUNCTION(execHandleLeaveTutorialButtonClick); \
	DECLARE_FUNCTION(execHandleLogInButtonClick); \
	DECLARE_FUNCTION(execHandleLogOutButtonClick); \
	DECLARE_FUNCTION(execHandleMainVolumeChanged); \
	DECLARE_FUNCTION(execHandleMainVolumeToggleClick); \
	DECLARE_FUNCTION(execHandleMenuVolumeChanged); \
	DECLARE_FUNCTION(execHandleMenuVolumeToggleClick); \
	DECLARE_FUNCTION(execHandleUserCenterButtonClick);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAutoDeclineFriendRequestToggleClick); \
	DECLARE_FUNCTION(execHandleLeaveTutorialButtonClick); \
	DECLARE_FUNCTION(execHandleLogInButtonClick); \
	DECLARE_FUNCTION(execHandleLogOutButtonClick); \
	DECLARE_FUNCTION(execHandleMainVolumeChanged); \
	DECLARE_FUNCTION(execHandleMainVolumeToggleClick); \
	DECLARE_FUNCTION(execHandleMenuVolumeChanged); \
	DECLARE_FUNCTION(execHandleMenuVolumeToggleClick); \
	DECLARE_FUNCTION(execHandleUserCenterButtonClick);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_EVENT_PARMS \
	struct UMGSettingSettingsContextWidget_eventShowLinkAccountRow_Parms \
	{ \
		bool isShow; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSettingSettingsContextWidget(); \
	friend struct Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGSettingSettingsContextWidget, UUMGSettingContextWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSettingSettingsContextWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSettingSettingsContextWidget(); \
	friend struct Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGSettingSettingsContextWidget, UUMGSettingContextWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSettingSettingsContextWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSettingSettingsContextWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSettingSettingsContextWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSettingSettingsContextWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSettingSettingsContextWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSettingSettingsContextWidget(UUMGSettingSettingsContextWidget&&); \
	NO_API UUMGSettingSettingsContextWidget(const UUMGSettingSettingsContextWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSettingSettingsContextWidget(UUMGSettingSettingsContextWidget&&); \
	NO_API UUMGSettingSettingsContextWidget(const UUMGSettingSettingsContextWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSettingSettingsContextWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSettingSettingsContextWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGSettingSettingsContextWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MainVolumeOn() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, MainVolumeOn); } \
	FORCEINLINE static uint32 __PPO__MainVolume() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, MainVolume); } \
	FORCEINLINE static uint32 __PPO__MenuVolumeOn() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, MenuVolumeOn); } \
	FORCEINLINE static uint32 __PPO__MenuVolume() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, MenuVolume); } \
	FORCEINLINE static uint32 __PPO__IsLoggedIn() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, IsLoggedIn); } \
	FORCEINLINE static uint32 __PPO__IsEnableUserCenterWithLoggedOut() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, IsEnableUserCenterWithLoggedOut); } \
	FORCEINLINE static uint32 __PPO__IsLeaveTutorialButtonVisible() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, IsLeaveTutorialButtonVisible); } \
	FORCEINLINE static uint32 __PPO__IsAutoDeclineFriendRequestOn() { return STRUCT_OFFSET(UUMGSettingSettingsContextWidget, IsAutoDeclineFriendRequestOn); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_6_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGSettingSettingsContextWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGSettingSettingsContextWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
