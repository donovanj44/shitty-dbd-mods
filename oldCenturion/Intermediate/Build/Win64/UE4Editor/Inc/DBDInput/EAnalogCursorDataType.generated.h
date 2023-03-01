// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDINPUT_EAnalogCursorDataType_generated_h
#error "EAnalogCursorDataType.generated.h already included, missing '#pragma once' in EAnalogCursorDataType.h"
#endif
#define DBDINPUT_EAnalogCursorDataType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInput_Public_EAnalogCursorDataType_h


#define FOREACH_ENUM_EANALOGCURSORDATATYPE(op) \
	op(EAnalogCursorDataType::MaxSpeedDefault) \
	op(EAnalogCursorDataType::MaxSpeedDefaultSlow) \
	op(EAnalogCursorDataType::MaxSpeedStickyDefault) \
	op(EAnalogCursorDataType::MaxSpeedStickySlow) \
	op(EAnalogCursorDataType::MaxSpeedStickyButtonMedium) \
	op(EAnalogCursorDataType::MaxSpeedStickyButtonLarge) \
	op(EAnalogCursorDataType::MaxSpeedDefaultBloodweb) \
	op(EAnalogCursorDataType::MaxSpeedStickyBloodweb) \
	op(EAnalogCursorDataType::CustomAcceleration) \
	op(EAnalogCursorDataType::DeadZone) \
	op(EAnalogCursorDataType::HandheldSpeedBoostFactor) 

enum class EAnalogCursorDataType : uint8;
template<> DBDINPUT_API UEnum* StaticEnum<EAnalogCursorDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
