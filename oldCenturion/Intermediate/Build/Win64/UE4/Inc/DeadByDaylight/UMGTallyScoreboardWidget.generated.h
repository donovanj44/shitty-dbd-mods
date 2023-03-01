// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_UMGTallyScoreboardWidget_generated_h
#error "UMGTallyScoreboardWidget.generated.h already included, missing '#pragma once' in UMGTallyScoreboardWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGTallyScoreboardWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventUMGTallyScoreboardWidgetOnTallyScoreboardReportEvent_Parms \
{ \
	FString playerID; \
}; \
static inline void FUMGTallyScoreboardWidgetOnTallyScoreboardReportEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGTallyScoreboardWidgetOnTallyScoreboardReportEvent, const FString& playerID) \
{ \
	_Script_DeadByDaylight_eventUMGTallyScoreboardWidgetOnTallyScoreboardReportEvent_Parms Parms; \
	Parms.playerID=playerID; \
	UMGTallyScoreboardWidgetOnTallyScoreboardReportEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_8_DELEGATE \
struct _Script_DeadByDaylight_eventUMGTallyScoreboardWidgetOnTallyScoreboardAddFriendEvent_Parms \
{ \
	FString playerID; \
}; \
static inline void FUMGTallyScoreboardWidgetOnTallyScoreboardAddFriendEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGTallyScoreboardWidgetOnTallyScoreboardAddFriendEvent, const FString& playerID) \
{ \
	_Script_DeadByDaylight_eventUMGTallyScoreboardWidgetOnTallyScoreboardAddFriendEvent_Parms Parms; \
	Parms.playerID=playerID; \
	UMGTallyScoreboardWidgetOnTallyScoreboardAddFriendEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAddFriendEvent); \
	DECLARE_FUNCTION(execHandleReportEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAddFriendEvent); \
	DECLARE_FUNCTION(execHandleReportEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGTallyScoreboardWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyScoreboardWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyScoreboardWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyScoreboardWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGTallyScoreboardWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyScoreboardWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyScoreboardWidget, UUMGTallyListElementWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyScoreboardWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGTallyScoreboardWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGTallyScoreboardWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyScoreboardWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyScoreboardWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyScoreboardWidget(UUMGTallyScoreboardWidget&&); \
	NO_API UUMGTallyScoreboardWidget(const UUMGTallyScoreboardWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyScoreboardWidget(UUMGTallyScoreboardWidget&&); \
	NO_API UUMGTallyScoreboardWidget(const UUMGTallyScoreboardWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyScoreboardWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyScoreboardWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGTallyScoreboardWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LabelTextRank() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, LabelTextRank); } \
	FORCEINLINE static uint32 __PPO__LabelTextScore() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, LabelTextScore); } \
	FORCEINLINE static uint32 __PPO__LabelTextStatus() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, LabelTextStatus); } \
	FORCEINLINE static uint32 __PPO__KillerWidget() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, KillerWidget); } \
	FORCEINLINE static uint32 __PPO__FirstSurvivorWidget() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, FirstSurvivorWidget); } \
	FORCEINLINE static uint32 __PPO__SecondSurvivorWidget() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, SecondSurvivorWidget); } \
	FORCEINLINE static uint32 __PPO__ThirdSurvivorWidget() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, ThirdSurvivorWidget); } \
	FORCEINLINE static uint32 __PPO__FourthSurvivorWidget() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, FourthSurvivorWidget); } \
	FORCEINLINE static uint32 __PPO__SurvivorWidgets() { return STRUCT_OFFSET(UUMGTallyScoreboardWidget, SurvivorWidgets); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_11_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGTallyScoreboardWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
