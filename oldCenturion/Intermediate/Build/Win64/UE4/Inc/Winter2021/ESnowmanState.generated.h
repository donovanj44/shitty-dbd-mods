// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINTER2021_ESnowmanState_generated_h
#error "ESnowmanState.generated.h already included, missing '#pragma once' in ESnowmanState.h"
#endif
#define WINTER2021_ESnowmanState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Winter2021_Public_ESnowmanState_h


#define FOREACH_ENUM_ESNOWMANSTATE(op) \
	op(ESnowmanState::Idle) \
	op(ESnowmanState::BeingEntered) \
	op(ESnowmanState::Controlled) \
	op(ESnowmanState::Destroyed) 

enum class ESnowmanState : uint8;
template<> WINTER2021_API UEnum* StaticEnum<ESnowmanState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
