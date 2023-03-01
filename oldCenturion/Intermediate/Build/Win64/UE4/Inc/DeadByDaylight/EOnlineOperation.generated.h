// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EOnlineOperation_generated_h
#error "EOnlineOperation.generated.h already included, missing '#pragma once' in EOnlineOperation.h"
#endif
#define DEADBYDAYLIGHT_EOnlineOperation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EOnlineOperation_h


#define FOREACH_ENUM_EONLINEOPERATION(op) \
	op(EOnlineOperation::None) \
	op(EOnlineOperation::HostGame) \
	op(EOnlineOperation::EndingSession) \
	op(EOnlineOperation::DestroyingSession) \
	op(EOnlineOperation::PreparingJoinGame) \
	op(EOnlineOperation::JoinGame) \
	op(EOnlineOperation::JoinCancelled) \
	op(EOnlineOperation::OnlineCheck) \
	op(EOnlineOperation::CancellingMatchmaking) 

enum class EOnlineOperation;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOnlineOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
