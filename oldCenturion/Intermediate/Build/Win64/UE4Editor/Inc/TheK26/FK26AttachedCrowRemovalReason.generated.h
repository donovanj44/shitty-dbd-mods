// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK26_FK26AttachedCrowRemovalReason_generated_h
#error "FK26AttachedCrowRemovalReason.generated.h already included, missing '#pragma once' in FK26AttachedCrowRemovalReason.h"
#endif
#define THEK26_FK26AttachedCrowRemovalReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_FK26AttachedCrowRemovalReason_h


#define FOREACH_ENUM_FK26ATTACHEDCROWREMOVALREASON(op) \
	op(FK26AttachedCrowRemovalReason::Invalid) \
	op(FK26AttachedCrowRemovalReason::LockerEnter) \
	op(FK26AttachedCrowRemovalReason::SurvivorDamagedByCrow) \
	op(FK26AttachedCrowRemovalReason::SurvivorDowned) \
	op(FK26AttachedCrowRemovalReason::SurvivorPickedUp) \
	op(FK26AttachedCrowRemovalReason::CrowFlashlighted) \
	op(FK26AttachedCrowRemovalReason::RemoveInteraction) 

enum class FK26AttachedCrowRemovalReason : uint8;
template<> THEK26_API UEnum* StaticEnum<FK26AttachedCrowRemovalReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
