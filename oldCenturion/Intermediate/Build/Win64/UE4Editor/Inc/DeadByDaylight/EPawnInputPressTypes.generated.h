// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPawnInputPressTypes_generated_h
#error "EPawnInputPressTypes.generated.h already included, missing '#pragma once' in EPawnInputPressTypes.h"
#endif
#define DEADBYDAYLIGHT_EPawnInputPressTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPawnInputPressTypes_h


#define FOREACH_ENUM_EPAWNINPUTPRESSTYPES(op) \
	op(EPawnInputPressTypes::None) \
	op(EPawnInputPressTypes::FastInteract) \
	op(EPawnInputPressTypes::Interact) \
	op(EPawnInputPressTypes::Wiggle) \
	op(EPawnInputPressTypes::Struggle) \
	op(EPawnInputPressTypes::Slash) \
	op(EPawnInputPressTypes::Attack) \
	op(EPawnInputPressTypes::Action) \
	op(EPawnInputPressTypes::SecondaryAction) \
	op(EPawnInputPressTypes::UseItem) \
	op(EPawnInputPressTypes::DropItem) \
	op(EPawnInputPressTypes::Gesture01) \
	op(EPawnInputPressTypes::Gesture02) \
	op(EPawnInputPressTypes::Gesture03) \
	op(EPawnInputPressTypes::Gesture04) 

enum class EPawnInputPressTypes : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPawnInputPressTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
