// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANIMATION_EArmIkMode_generated_h
#error "EArmIkMode.generated.h already included, missing '#pragma once' in EArmIkMode.h"
#endif
#define DBDANIMATION_EArmIkMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnimation_Public_EArmIkMode_h


#define FOREACH_ENUM_EARMIKMODE(op) \
	op(EArmIkMode::None) \
	op(EArmIkMode::BothHand) \
	op(EArmIkMode::OnlyRight) \
	op(EArmIkMode::OnlyLeft) \
	op(EArmIkMode::OneHandAtTime) \
	op(EArmIkMode::BothAtSameTime) 

enum class EArmIkMode : uint8;
template<> DBDANIMATION_API UEnum* StaticEnum<EArmIkMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
