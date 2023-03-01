// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
#ifdef DEADBYDAYLIGHT_GameEventDispatcherHandleBP_generated_h
#error "GameEventDispatcherHandleBP.generated.h already included, missing '#pragma once' in GameEventDispatcherHandleBP.h"
#endif
#define DEADBYDAYLIGHT_GameEventDispatcherHandleBP_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcherHandleBP_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameEventDispatcherHandleBP_Statics; \
	DEADBYDAYLIGHT_API static class UScriptStruct* StaticStruct();


template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<struct FGameEventDispatcherHandleBP>();

#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcherHandleBP_h_7_DELEGATE \
struct _Script_DeadByDaylight_eventGameEventDispatcherHandleBPGameEventDelegate_Parms \
{ \
	FGameplayTag gameEventType; \
	FGameEventData gameEventData; \
}; \
static inline void FGameEventDispatcherHandleBPGameEventDelegate_DelegateWrapper(const FScriptDelegate& GameEventDispatcherHandleBPGameEventDelegate, const FGameplayTag gameEventType, FGameEventData const& gameEventData) \
{ \
	_Script_DeadByDaylight_eventGameEventDispatcherHandleBPGameEventDelegate_Parms Parms; \
	Parms.gameEventType=gameEventType; \
	Parms.gameEventData=gameEventData; \
	GameEventDispatcherHandleBPGameEventDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcherHandleBP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
