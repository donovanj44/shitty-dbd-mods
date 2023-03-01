// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EControlMode_generated_h
#error "EControlMode.generated.h already included, missing '#pragma once' in EControlMode.h"
#endif
#define DBDSHAREDTYPES_EControlMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EControlMode_h


#define FOREACH_ENUM_ECONTROLMODE(op) \
	op(EControlMode::MOUSE_KB) \
	op(EControlMode::XBOX) \
	op(EControlMode::PS) \
	op(EControlMode::VITA) \
	op(EControlMode::SWITCH) \
	op(EControlMode::STADIA) \
	op(EControlMode::SWITCH_PRO) \
	op(EControlMode::ATLANTA) \
	op(EControlMode::UNDEFINED) 

enum class EControlMode : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EControlMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
