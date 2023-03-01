// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPalletSide_generated_h
#error "EPalletSide.generated.h already included, missing '#pragma once' in EPalletSide.h"
#endif
#define DEADBYDAYLIGHT_EPalletSide_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPalletSide_h


#define FOREACH_ENUM_EPALLETSIDE(op) \
	op(EPalletSide::None) \
	op(EPalletSide::Left) \
	op(EPalletSide::Right) 

enum class EPalletSide : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPalletSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
