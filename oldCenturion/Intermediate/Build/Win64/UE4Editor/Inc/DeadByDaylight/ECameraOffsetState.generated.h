// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECameraOffsetState_generated_h
#error "ECameraOffsetState.generated.h already included, missing '#pragma once' in ECameraOffsetState.h"
#endif
#define DEADBYDAYLIGHT_ECameraOffsetState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECameraOffsetState_h


#define FOREACH_ENUM_ECAMERAOFFSETSTATE(op) \
	op(ECameraOffsetState::None) \
	op(ECameraOffsetState::Default) \
	op(ECameraOffsetState::Crouching) \
	op(ECameraOffsetState::Crawling) \
	op(ECameraOffsetState::Carried) 

enum class ECameraOffsetState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECameraOffsetState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
