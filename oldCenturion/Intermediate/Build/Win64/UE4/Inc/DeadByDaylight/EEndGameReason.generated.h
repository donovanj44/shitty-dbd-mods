// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EEndGameReason_generated_h
#error "EEndGameReason.generated.h already included, missing '#pragma once' in EEndGameReason.h"
#endif
#define DEADBYDAYLIGHT_EEndGameReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EEndGameReason_h


#define FOREACH_ENUM_EENDGAMEREASON(op) \
	op(EEndGameReason::None) \
	op(EEndGameReason::Normal) \
	op(EEndGameReason::KillerLeft) \
	op(EEndGameReason::PlayerLeftDuringLoading) \
	op(EEndGameReason::KillerLeftEarly) \
	op(EEndGameReason::InvalidPlayerRoles) \
	op(EEndGameReason::LoadingTimeout) 

enum class EEndGameReason : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEndGameReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
