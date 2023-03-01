// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECamperGuidedAction_generated_h
#error "ECamperGuidedAction.generated.h already included, missing '#pragma once' in ECamperGuidedAction.h"
#endif
#define DEADBYDAYLIGHT_ECamperGuidedAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECamperGuidedAction_h


#define FOREACH_ENUM_ECAMPERGUIDEDACTION(op) \
	op(ECamperGuidedAction::VE_None) \
	op(ECamperGuidedAction::VE_PrepBeingKilled) \
	op(ECamperGuidedAction::VE_BeingKilled) \
	op(ECamperGuidedAction::VE_PrepGuidedAction) \
	op(ECamperGuidedAction::VE_BeingHelpedOffHookFront) \
	op(ECamperGuidedAction::VE_BeingHelpedOffHookBack) \
	op(ECamperGuidedAction::VE_BeingPickedUp) \
	op(ECamperGuidedAction::VE_BeingPutDown) \
	op(ECamperGuidedAction::VE_BeingCarried) \
	op(ECamperGuidedAction::VE_BeingPutOnHook) \
	op(ECamperGuidedAction::VE_BeingHealed) \
	op(ECamperGuidedAction::VE_BeingPulledFromCloset) \
	op(ECamperGuidedAction::VE_BeingHelpedFromTrap) \
	op(ECamperGuidedAction::VE_AttachReverseBearTrap) \
	op(ECamperGuidedAction::VE_BeingMended) \
	op(ECamperGuidedAction::VE_BeingInjectedWithSerum) 

enum class ECamperGuidedAction : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECamperGuidedAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
