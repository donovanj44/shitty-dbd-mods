// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK25_EK25ChainDetachmentReason_generated_h
#error "EK25ChainDetachmentReason.generated.h already included, missing '#pragma once' in EK25ChainDetachmentReason.h"
#endif
#define THEK25_EK25ChainDetachmentReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_EK25ChainDetachmentReason_h


#define FOREACH_ENUM_EK25CHAINDETACHMENTREASON(op) \
	op(EK25ChainDetachmentReason::CollisionOrMaxLengthReached) \
	op(EK25ChainDetachmentReason::KillerAttack) \
	op(EK25ChainDetachmentReason::RemovedByInteraction) \
	op(EK25ChainDetachmentReason::MaxNumberChainsReached) \
	op(EK25ChainDetachmentReason::ForcedRemoved) \
	op(EK25ChainDetachmentReason::SurvivorKO) \
	op(EK25ChainDetachmentReason::EndGameCollapseOver) \
	op(EK25ChainDetachmentReason::SurvivorLeftTheMatch) 

enum class EK25ChainDetachmentReason : uint8;
template<> THEK25_API UEnum* StaticEnum<EK25ChainDetachmentReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
