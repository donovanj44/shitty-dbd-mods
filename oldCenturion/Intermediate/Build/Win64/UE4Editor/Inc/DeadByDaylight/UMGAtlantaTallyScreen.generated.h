// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeometry;
#ifdef DEADBYDAYLIGHT_UMGAtlantaTallyScreen_generated_h
#error "UMGAtlantaTallyScreen.generated.h already included, missing '#pragma once' in UMGAtlantaTallyScreen.h"
#endif
#define DEADBYDAYLIGHT_UMGAtlantaTallyScreen_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_19_DELEGATE \
struct _Script_DeadByDaylight_eventUMGAtlantaTallyScreenOnTallyReportEvent_Parms \
{ \
	FString playerID; \
}; \
static inline void FUMGAtlantaTallyScreenOnTallyReportEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGAtlantaTallyScreenOnTallyReportEvent, const FString& playerID) \
{ \
	_Script_DeadByDaylight_eventUMGAtlantaTallyScreenOnTallyReportEvent_Parms Parms; \
	Parms.playerID=playerID; \
	UMGAtlantaTallyScreenOnTallyReportEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_18_DELEGATE \
struct _Script_DeadByDaylight_eventUMGAtlantaTallyScreenOnTallyAddFriendEvent_Parms \
{ \
	FString playerID; \
}; \
static inline void FUMGAtlantaTallyScreenOnTallyAddFriendEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGAtlantaTallyScreenOnTallyAddFriendEvent, const FString& playerID) \
{ \
	_Script_DeadByDaylight_eventUMGAtlantaTallyScreenOnTallyAddFriendEvent_Parms Parms; \
	Parms.playerID=playerID; \
	UMGAtlantaTallyScreenOnTallyAddFriendEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_17_DELEGATE \
static inline void FUMGAtlantaTallyScreenOnTallySpectateClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGAtlantaTallyScreenOnTallySpectateClicked) \
{ \
	UMGAtlantaTallyScreenOnTallySpectateClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_16_DELEGATE \
static inline void FUMGAtlantaTallyScreenOnTallyLeft_DelegateWrapper(const FMulticastScriptDelegate& UMGAtlantaTallyScreenOnTallyLeft) \
{ \
	UMGAtlantaTallyScreenOnTallyLeft.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAddFriendEvent); \
	DECLARE_FUNCTION(execHandleReportEvent); \
	DECLARE_FUNCTION(execHandleTallyLeave); \
	DECLARE_FUNCTION(execHandleTallySpectateClicked); \
	DECLARE_FUNCTION(execSetScrollPageSize);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAddFriendEvent); \
	DECLARE_FUNCTION(execHandleReportEvent); \
	DECLARE_FUNCTION(execHandleTallyLeave); \
	DECLARE_FUNCTION(execHandleTallySpectateClicked); \
	DECLARE_FUNCTION(execSetScrollPageSize);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_EVENT_PARMS \
	struct UMGAtlantaTallyScreen_eventShowSpectateButton_Parms \
	{ \
		bool show; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGAtlantaTallyScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaTallyScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaTallyScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaTallyScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUUMGAtlantaTallyScreen(); \
	friend struct Z_Construct_UClass_UUMGAtlantaTallyScreen_Statics; \
public: \
	DECLARE_CLASS(UUMGAtlantaTallyScreen, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGAtlantaTallyScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGAtlantaTallyScreen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGAtlantaTallyScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaTallyScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaTallyScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaTallyScreen(UUMGAtlantaTallyScreen&&); \
	NO_API UUMGAtlantaTallyScreen(const UUMGAtlantaTallyScreen&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGAtlantaTallyScreen(UUMGAtlantaTallyScreen&&); \
	NO_API UUMGAtlantaTallyScreen(const UUMGAtlantaTallyScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGAtlantaTallyScreen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGAtlantaTallyScreen); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGAtlantaTallyScreen)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TallyScrollWidget() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, TallyScrollWidget); } \
	FORCEINLINE static uint32 __PPO__TallyScoreboardClass() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, TallyScoreboardClass); } \
	FORCEINLINE static uint32 __PPO__TallyBloodpointsClass() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, TallyBloodpointsClass); } \
	FORCEINLINE static uint32 __PPO__TallyRankClass() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, TallyRankClass); } \
	FORCEINLINE static uint32 __PPO__TallyPlayerLevelClass() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, TallyPlayerLevelClass); } \
	FORCEINLINE static uint32 __PPO__TallyCharacterProgressionClass() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, TallyCharacterProgressionClass); } \
	FORCEINLINE static uint32 __PPO__TextLeaveLobby() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, TextLeaveLobby); } \
	FORCEINLINE static uint32 __PPO__SpectateButtonText() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, SpectateButtonText); } \
	FORCEINLINE static uint32 __PPO__PlayerRole() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, PlayerRole); } \
	FORCEINLINE static uint32 __PPO__GameType() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, GameType); } \
	FORCEINLINE static uint32 __PPO__PlayerStatus() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, PlayerStatus); } \
	FORCEINLINE static uint32 __PPO__FromSpectateMode() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, FromSpectateMode); } \
	FORCEINLINE static uint32 __PPO___scoreboardWidget() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, _scoreboardWidget); } \
	FORCEINLINE static uint32 __PPO___bloodpointsWidget() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, _bloodpointsWidget); } \
	FORCEINLINE static uint32 __PPO___rankWidget() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, _rankWidget); } \
	FORCEINLINE static uint32 __PPO___playerLevelWidget() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, _playerLevelWidget); } \
	FORCEINLINE static uint32 __PPO___characterLevelWidget() { return STRUCT_OFFSET(UUMGAtlantaTallyScreen, _characterLevelWidget); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_21_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGAtlantaTallyScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGAtlantaTallyScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
