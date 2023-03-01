// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTallyPlayerResultData;
#ifdef DEADBYDAYLIGHT_UMGTallyScoreboardPlayerInfoWidget_generated_h
#error "UMGTallyScoreboardPlayerInfoWidget.generated.h already included, missing '#pragma once' in UMGTallyScoreboardPlayerInfoWidget.h"
#endif
#define DEADBYDAYLIGHT_UMGTallyScoreboardPlayerInfoWidget_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardReportEvent_Parms \
{ \
	FString playerID; \
}; \
static inline void FUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardReportEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardReportEvent, const FString& playerID) \
{ \
	_Script_DeadByDaylight_eventUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardReportEvent_Parms Parms; \
	Parms.playerID=playerID; \
	UMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardReportEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardAddFriendEvent_Parms \
{ \
	FString playerID; \
}; \
static inline void FUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardAddFriendEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardAddFriendEvent, const FString& playerID) \
{ \
	_Script_DeadByDaylight_eventUMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardAddFriendEvent_Parms Parms; \
	Parms.playerID=playerID; \
	UMGTallyScoreboardPlayerInfoWidgetOnTallyScoreboardAddFriendEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleAddFriendEvent); \
	DECLARE_FUNCTION(execHandleReportEvent); \
	DECLARE_FUNCTION(execSetPlayerLoadoutBlocked); \
	DECLARE_FUNCTION(execSetPlayerReported); \
	DECLARE_FUNCTION(execSetPlayerScoreData); \
	DECLARE_FUNCTION(execUpdateLoadout);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleAddFriendEvent); \
	DECLARE_FUNCTION(execHandleReportEvent); \
	DECLARE_FUNCTION(execSetPlayerLoadoutBlocked); \
	DECLARE_FUNCTION(execSetPlayerReported); \
	DECLARE_FUNCTION(execSetPlayerScoreData); \
	DECLARE_FUNCTION(execUpdateLoadout);


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGTallyScoreboardPlayerInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyScoreboardPlayerInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyScoreboardPlayerInfoWidget, UUMGLoadoutBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyScoreboardPlayerInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUUMGTallyScoreboardPlayerInfoWidget(); \
	friend struct Z_Construct_UClass_UUMGTallyScoreboardPlayerInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGTallyScoreboardPlayerInfoWidget, UUMGLoadoutBaseWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UUMGTallyScoreboardPlayerInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGTallyScoreboardPlayerInfoWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGTallyScoreboardPlayerInfoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyScoreboardPlayerInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyScoreboardPlayerInfoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyScoreboardPlayerInfoWidget(UUMGTallyScoreboardPlayerInfoWidget&&); \
	NO_API UUMGTallyScoreboardPlayerInfoWidget(const UUMGTallyScoreboardPlayerInfoWidget&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGTallyScoreboardPlayerInfoWidget(UUMGTallyScoreboardPlayerInfoWidget&&); \
	NO_API UUMGTallyScoreboardPlayerInfoWidget(const UUMGTallyScoreboardPlayerInfoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGTallyScoreboardPlayerInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGTallyScoreboardPlayerInfoWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGTallyScoreboardPlayerInfoWidget)


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerResultData() { return STRUCT_OFFSET(UUMGTallyScoreboardPlayerInfoWidget, PlayerResultData); } \
	FORCEINLINE static uint32 __PPO__LoadoutIsBlocked() { return STRUCT_OFFSET(UUMGTallyScoreboardPlayerInfoWidget, LoadoutIsBlocked); }


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UUMGTallyScoreboardPlayerInfoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_UMGTallyScoreboardPlayerInfoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
