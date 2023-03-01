// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECamperImmobilizeState_generated_h
#error "ECamperImmobilizeState.generated.h already included, missing '#pragma once' in ECamperImmobilizeState.h"
#endif
#define DEADBYDAYLIGHT_ECamperImmobilizeState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECamperImmobilizeState_h


#define FOREACH_ENUM_ECAMPERIMMOBILIZESTATE(op) \
	op(ECamperImmobilizeState::VE_None) \
	op(ECamperImmobilizeState::VE_Hooked) \
	op(ECamperImmobilizeState::VE_Trapped) \
	op(ECamperImmobilizeState::VE_Hiding) \
	op(ECamperImmobilizeState::VE_Dead) \
	op(ECamperImmobilizeState::VE_InDeathBed) 

enum class ECamperImmobilizeState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECamperImmobilizeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
