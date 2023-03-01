// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EInteractionAnimation_generated_h
#error "EInteractionAnimation.generated.h already included, missing '#pragma once' in EInteractionAnimation.h"
#endif
#define DBDSHAREDTYPES_EInteractionAnimation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EInteractionAnimation_h


#define FOREACH_ENUM_EINTERACTIONANIMATION(op) \
	op(EInteractionAnimation::VE_None) \
	op(EInteractionAnimation::VE_Generator) \
	op(EInteractionAnimation::VE_PullDownLeft) \
	op(EInteractionAnimation::VE_PullDownRight) \
	op(EInteractionAnimation::VE_Hiding) \
	op(EInteractionAnimation::VE_SearchCloset) \
	op(EInteractionAnimation::VE_HealingOther) \
	op(EInteractionAnimation::VE_OpenEscape) \
	op(EInteractionAnimation::VE_StruggleFree) \
	op(EInteractionAnimation::VE_HealOther) \
	op(EInteractionAnimation::VE_HealSelf) \
	op(EInteractionAnimation::VE_PickedUp) \
	op(EInteractionAnimation::VE_Unused01) \
	op(EInteractionAnimation::VE_Dropped) \
	op(EInteractionAnimation::VE_Unused02) \
	op(EInteractionAnimation::VE_BeingHooked) \
	op(EInteractionAnimation::VE_Sabotage) \
	op(EInteractionAnimation::VE_ChargeBlink) \
	op(EInteractionAnimation::VE_ThrowFirecracker) \
	op(EInteractionAnimation::VE_WakeUpOther) \
	op(EInteractionAnimation::VE_RemoveReverseBearTrap) \
	op(EInteractionAnimation::VE_DeadHard) \
	op(EInteractionAnimation::VE_DestroyPortal) \
	op(EInteractionAnimation::VE_OniDash) \
	op(EInteractionAnimation::VE_PickUpAnniversaryCrown) \
	op(EInteractionAnimation::VE_InteractWithGlyph) \
	op(EInteractionAnimation::VE_OpenChest) 

enum class EInteractionAnimation : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EInteractionAnimation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
