// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_EK25ProjectileDeactivateReason_generated_h
#error "EK25ProjectileDeactivateReason.generated.h already included, missing '#pragma once' in EK25ProjectileDeactivateReason.h"
#endif
#define THEK25_EK25ProjectileDeactivateReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_EK25ProjectileDeactivateReason_h


#define FOREACH_ENUM_EK25PROJECTILEDEACTIVATEREASON(op) \
	op(EK25ProjectileDeactivateReason::None) \
	op(EK25ProjectileDeactivateReason::WorldCollisionHit) \
	op(EK25ProjectileDeactivateReason::CharacterHit) \
	op(EK25ProjectileDeactivateReason::OutOfBounds) \
	op(EK25ProjectileDeactivateReason::MaximumRangeReached) \
	op(EK25ProjectileDeactivateReason::ChainStrikeInteractionEnded) 

enum class EK25ProjectileDeactivateReason : uint8;
template<> THEK25_API UEnum* StaticEnum<EK25ProjectileDeactivateReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
