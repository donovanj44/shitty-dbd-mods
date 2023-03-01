// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ECharacterStance_generated_h
#error "ECharacterStance.generated.h already included, missing '#pragma once' in ECharacterStance.h"
#endif
#define DEADBYDAYLIGHT_ECharacterStance_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ECharacterStance_h


#define FOREACH_ENUM_ECHARACTERSTANCE(op) \
	op(ECharacterStance::VE_Stand) \
	op(ECharacterStance::VE_Crouch) \
	op(ECharacterStance::VE_Crawl) 

enum class ECharacterStance : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECharacterStance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
