// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGSplashScreen_generated_h
#error "UMGSplashScreen.generated.h already included, missing '#pragma once' in UMGSplashScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGSplashScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_13_DELEGATE \
static inline void FUMGSplashScreenOnSaveGamePopupCompleteEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGSplashScreenOnSaveGamePopupCompleteEvent) \
{ \
	UMGSplashScreenOnSaveGamePopupCompleteEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_12_DELEGATE \
static inline void FUMGSplashScreenOnScreenTouched_DelegateWrapper(const FMulticastScriptDelegate& UMGSplashScreenOnScreenTouched) \
{ \
	UMGSplashScreenOnScreenTouched.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSaveGamePopupComplete); \
	DECLARE_FUNCTION(execOnTapButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSaveGamePopupComplete); \
	DECLARE_FUNCTION(execOnTapButtonClicked);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGSplashScreen(); \
	friend struct Z_Construct_UClass_UUMGSplashScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGSplashScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSplashScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUMGSplashScreen(); \
	friend struct Z_Construct_UClass_UUMGSplashScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGSplashScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGSplashScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGSplashScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGSplashScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSplashScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSplashScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSplashScreen(UUMGSplashScreen&&); \
	NO_API UUMGSplashScreen(const UUMGSplashScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGSplashScreen(UUMGSplashScreen&&); \
	NO_API UUMGSplashScreen(const UUMGSplashScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGSplashScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGSplashScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGSplashScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SavePopup() { return STRUCT_OFFSET(UUMGSplashScreen, SavePopup); } \
	FORCEINLINE static uint32 __PPO__GameVersion() { return STRUCT_OFFSET(UUMGSplashScreen, GameVersion); } \
	FORCEINLINE static uint32 __PPO__LoadingState() { return STRUCT_OFFSET(UUMGSplashScreen, LoadingState); } \
	FORCEINLINE static uint32 __PPO__PressKey() { return STRUCT_OFFSET(UUMGSplashScreen, PressKey); } \
	FORCEINLINE static uint32 __PPO__TapButton() { return STRUCT_OFFSET(UUMGSplashScreen, TapButton); } \
	FORCEINLINE static uint32 __PPO__SaveGameTitle() { return STRUCT_OFFSET(UUMGSplashScreen, SaveGameTitle); } \
	FORCEINLINE static uint32 __PPO__SaveGameDescription() { return STRUCT_OFFSET(UUMGSplashScreen, SaveGameDescription); } \
	FORCEINLINE static uint32 __PPO__DownloadProgression() { return STRUCT_OFFSET(UUMGSplashScreen, DownloadProgression); } \
	FORCEINLINE static uint32 __PPO__CharacterSlideShow() { return STRUCT_OFFSET(UUMGSplashScreen, CharacterSlideShow); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_15_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGSplashScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGSplashScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
