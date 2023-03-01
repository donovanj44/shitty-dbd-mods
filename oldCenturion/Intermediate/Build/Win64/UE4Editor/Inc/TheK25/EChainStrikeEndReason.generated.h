// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_EChainStrikeEndReason_generated_h
#error "EChainStrikeEndReason.generated.h already included, missing '#pragma once' in EChainStrikeEndReason.h"
#endif
#define THEK25_EChainStrikeEndReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_EChainStrikeEndReason_h


#define FOREACH_ENUM_ECHAINSTRIKEENDREASON(op) \
	op(EChainStrikeEndReason::None) \
	op(EChainStrikeEndReason::AbortedGatewayPlacementState) \
	op(EChainStrikeEndReason::AbortedGatewayPlacementBecauseOfInvalidPlacementState) \
	op(EChainStrikeEndReason::AbortedGatewayPossession) \
	op(EChainStrikeEndReason::ControlledProjectileStopped) 

enum class EChainStrikeEndReason : uint8;
template<> THEK25_API UEnum* StaticEnum<EChainStrikeEndReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
