// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EButtonType_generated_h
#error "EButtonType.generated.h already included, missing '#pragma once' in EButtonType.h"
#endif
#define DEADBYDAYLIGHT_EButtonType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EButtonType_h


#define FOREACH_ENUM_EBUTTONTYPE(op) \
	op(EButtonType::None) \
	op(EButtonType::AttackButton) \
	op(EButtonType::PowerButton) \
	op(EButtonType::CancelButton) \
	op(EButtonType::SettingsButton) \
	op(EButtonType::SecondaryActionButton) \
	op(EButtonType::PowerAttackJoystick) 

enum class EButtonType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EButtonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
