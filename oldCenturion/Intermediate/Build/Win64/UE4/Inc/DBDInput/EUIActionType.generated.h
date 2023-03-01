// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDINPUT_EUIActionType_generated_h
#error "EUIActionType.generated.h already included, missing '#pragma once' in EUIActionType.h"
#endif
#define DBDINPUT_EUIActionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInput_Public_EUIActionType_h


#define FOREACH_ENUM_EUIACTIONTYPE(op) \
	op(EUIActionType::Accept) \
	op(EUIActionType::Cancel) \
	op(EUIActionType::Previous) \
	op(EUIActionType::Next) 

enum class EUIActionType : uint8;
template<> DBDINPUT_API UEnum* StaticEnum<EUIActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
