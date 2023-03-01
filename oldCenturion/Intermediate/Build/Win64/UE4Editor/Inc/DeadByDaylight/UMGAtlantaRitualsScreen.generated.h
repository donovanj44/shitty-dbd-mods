// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGAtlantaRitualsScreen_generated_h
#error "UMGAtlantaRitualsScreen.generated.h already included, missing '#pragma once' in UMGAtlantaRitualsScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGAtlantaRitualsScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBroadcastOnBackButtonPressed); \
	DECLARE_FUNCTION(execBroadcastOnClaimRewardButtonPressed);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBroadcastOnBackButtonPressed); \
	DECLARE_FUNCTION(execBroadcastOnClaimRewardButtonPressed);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_EVENT_PARMS \
	struct UMGAtlantaRitualsScreen_eventSetNewRitualNumbers_Parms \
	{ \
		int32 newDailyRitualNumber; \
		int32 newWeeklyRitualNumber; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGAtlantaRitualsScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaRitualsScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaRitualsScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUUMGAtlantaRitualsScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaRitualsScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaRitualsScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAtlantaRitualsScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAtlantaRitualsScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaRitualsScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaRitualsScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaRitualsScreen(UUMGAtlantaRitualsScreen&&); \
	NO_API UUMGAtlantaRitualsScreen(const UUMGAtlantaRitualsScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaRitualsScreen(UUMGAtlantaRitualsScreen&&); \
	NO_API UUMGAtlantaRitualsScreen(const UUMGAtlantaRitualsScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaRitualsScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaRitualsScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGAtlantaRitualsScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DailyTab() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, DailyTab); } \
	FORCEINLINE static uint32 __PPO__WeeklyTab() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, WeeklyTab); } \
	FORCEINLINE static uint32 __PPO___atlantaRitualTitle() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _atlantaRitualTitle); } \
	FORCEINLINE static uint32 __PPO___endInLabel() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _endInLabel); } \
	FORCEINLINE static uint32 __PPO___dailyButtonLabel() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _dailyButtonLabel); } \
	FORCEINLINE static uint32 __PPO___weeklyButtonLabel() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _weeklyButtonLabel); } \
	FORCEINLINE static uint32 __PPO___dailyRemainingTime() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _dailyRemainingTime); } \
	FORCEINLINE static uint32 __PPO___weeklyRemainingTime() { return STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _weeklyRemainingTime); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGAtlantaRitualsScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaRitualsScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
