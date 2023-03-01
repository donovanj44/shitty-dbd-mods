// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EJoinSessionFailureType_generated_h
#error "EJoinSessionFailureType.generated.h already included, missing '#pragma once' in EJoinSessionFailureType.h"
#endif
#define DEADBYDAYLIGHT_EJoinSessionFailureType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EJoinSessionFailureType_h


#define FOREACH_ENUM_EJOINSESSIONFAILURETYPE(op) \
	op(EJoinSessionFailureType::None) \
	op(EJoinSessionFailureType::JoiningAlreadyStartedGame) \
	op(EJoinSessionFailureType::JoiningPrivateGame) \
	op(EJoinSessionFailureType::JoiningAlreadyFullGame) \
	op(EJoinSessionFailureType::JoiningInvitation) \
	op(EJoinSessionFailureType::JoiningFailedOnDisconnect) \
	op(EJoinSessionFailureType::JoiningHostUnreachable) \
	op(EJoinSessionFailureType::JoiningIncompatibleServer) 

enum class EJoinSessionFailureType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EJoinSessionFailureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
