// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ESnapBackType_generated_h
#error "ESnapBackType.generated.h already included, missing '#pragma once' in ESnapBackType.h"
#endif
#define DEADBYDAYLIGHT_ESnapBackType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ESnapBackType_h


#define FOREACH_ENUM_ESNAPBACKTYPE(op) \
	op(ESnapBackType::None) \
	op(ESnapBackType::Always) \
	op(ESnapBackType::OnInteractionCancelledOnly) \
	op(ESnapBackType::OnInteractionEndOnly) \
	op(ESnapBackType::OnSurvivorDownedOnly) 

enum class ESnapBackType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESnapBackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
