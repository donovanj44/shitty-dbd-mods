// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPalletState_generated_h
#error "EPalletState.generated.h already included, missing '#pragma once' in EPalletState.h"
#endif
#define DEADBYDAYLIGHT_EPalletState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPalletState_h


#define FOREACH_ENUM_EPALLETSTATE(op) \
	op(EPalletState::Up) \
	op(EPalletState::Falling) \
	op(EPalletState::Fallen) \
	op(EPalletState::Destroyed) \
	op(EPalletState::Illusionary) 

enum class EPalletState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPalletState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
