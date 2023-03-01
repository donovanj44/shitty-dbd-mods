// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ERequestState_generated_h
#error "ERequestState.generated.h already included, missing '#pragma once' in ERequestState.h"
#endif
#define DEADBYDAYLIGHT_ERequestState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ERequestState_h


#define FOREACH_ENUM_EREQUESTSTATE(op) \
	op(ERequestState::VE_None) \
	op(ERequestState::VE_Pending) \
	op(ERequestState::VE_Success) \
	op(ERequestState::VE_Fail) 

enum class ERequestState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ERequestState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
