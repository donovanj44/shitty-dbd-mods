// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EEscapeType_generated_h
#error "EEscapeType.generated.h already included, missing '#pragma once' in EEscapeType.h"
#endif
#define DEADBYDAYLIGHT_EEscapeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EEscapeType_h


#define FOREACH_ENUM_EESCAPETYPE(op) \
	op(EEscapeType::Escape_ExitGate) \
	op(EEscapeType::Escape_Hatch) \
	op(EEscapeType::Escape_KillerDisconnect) 

enum class EEscapeType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEscapeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
