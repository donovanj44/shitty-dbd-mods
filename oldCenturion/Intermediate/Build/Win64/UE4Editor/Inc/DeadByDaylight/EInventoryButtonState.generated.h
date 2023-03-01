// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EInventoryButtonState_generated_h
#error "EInventoryButtonState.generated.h already included, missing '#pragma once' in EInventoryButtonState.h"
#endif
#define DEADBYDAYLIGHT_EInventoryButtonState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EInventoryButtonState_h


#define FOREACH_ENUM_EINVENTORYBUTTONSTATE(op) \
	op(EInventoryButtonState::StateDisabled) \
	op(EInventoryButtonState::StateEmpty) \
	op(EInventoryButtonState::StateLocked) \
	op(EInventoryButtonState::StateWithItem) \
	op(EInventoryButtonState::StateWithItemDisabled) \
	op(EInventoryButtonState::StateWithItemLocked) \
	op(EInventoryButtonState::StatePrivate) 

enum class EInventoryButtonState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInventoryButtonState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
