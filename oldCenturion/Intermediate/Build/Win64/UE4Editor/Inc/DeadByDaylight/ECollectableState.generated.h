// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECollectableState_generated_h
#error "ECollectableState.generated.h already included, missing '#pragma once' in ECollectableState.h"
#endif
#define DEADBYDAYLIGHT_ECollectableState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECollectableState_h


#define FOREACH_ENUM_ECOLLECTABLESTATE(op) \
	op(ECollectableState::OnGround) \
	op(ECollectableState::Stored) \
	op(ECollectableState::Equipped) \
	op(ECollectableState::ToBeDropped) \
	op(ECollectableState::InSearchable) 

enum class ECollectableState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECollectableState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
