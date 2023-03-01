// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDINPUT_EDBDInputMode_generated_h
#error "EDBDInputMode.generated.h already included, missing '#pragma once' in EDBDInputMode.h"
#endif
#define DBDINPUT_EDBDInputMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInput_Public_EDBDInputMode_h


#define FOREACH_ENUM_EDBDINPUTMODE(op) \
	op(EDBDInputMode::None) \
	op(EDBDInputMode::Scaleform) \
	op(EDBDInputMode::UMG) \
	op(EDBDInputMode::Game) 

enum class EDBDInputMode;
template<> DBDINPUT_API UEnum* StaticEnum<EDBDInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
