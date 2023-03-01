// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EDetectionZone_generated_h
#error "EDetectionZone.generated.h already included, missing '#pragma once' in EDetectionZone.h"
#endif
#define DBDSHAREDTYPES_EDetectionZone_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EDetectionZone_h


#define FOREACH_ENUM_EDETECTIONZONE(op) \
	op(EDetectionZone::VE_None) \
	op(EDetectionZone::VE_Slash) \
	op(EDetectionZone::VE_Pounce) \
	op(EDetectionZone::VE_Chainsaw) \
	op(EDetectionZone::VE_Obstructed) \
	op(EDetectionZone::VE_Interruption) \
	op(EDetectionZone::VE_ChainsawLockExtended) \
	op(EDetectionZone::VE_Damage) \
	op(EDetectionZone::VE_ChainsawObstruction) \
	op(EDetectionZone::VE_Blink) \
	op(EDetectionZone::VE_ChainsawDamageExtended) \
	op(EDetectionZone::VE_Stalker) \
	op(EDetectionZone::VE_Lunge) \
	op(EDetectionZone::VE_PowerAttack) \
	op(EDetectionZone::VE_Max) 

enum class EDetectionZone : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EDetectionZone>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
