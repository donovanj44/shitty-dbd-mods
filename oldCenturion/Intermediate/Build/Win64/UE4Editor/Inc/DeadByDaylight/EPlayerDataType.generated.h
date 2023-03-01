// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EPlayerDataType_generated_h
#error "EPlayerDataType.generated.h already included, missing '#pragma once' in EPlayerDataType.h"
#endif
#define DEADBYDAYLIGHT_EPlayerDataType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EPlayerDataType_h


#define FOREACH_ENUM_EPLAYERDATATYPE(op) \
	op(EPlayerDataType::None) \
	op(EPlayerDataType::PlayerState) \
	op(EPlayerDataType::SocialPartyMember) 

enum class EPlayerDataType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPlayerDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
