// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ELoginType_generated_h
#error "ELoginType.generated.h already included, missing '#pragma once' in ELoginType.h"
#endif
#define DEADBYDAYLIGHT_ELoginType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ELoginType_h


#define FOREACH_ENUM_ELOGINTYPE(op) \
	op(ELoginType::Reservation) \
	op(ELoginType::Join) \
	op(ELoginType::None) 

enum class ELoginType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELoginType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
