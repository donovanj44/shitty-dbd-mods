// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EQuadrantSpawnType_generated_h
#error "EQuadrantSpawnType.generated.h already included, missing '#pragma once' in EQuadrantSpawnType.h"
#endif
#define DEADBYDAYLIGHT_EQuadrantSpawnType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EQuadrantSpawnType_h


#define FOREACH_ENUM_EQUADRANTSPAWNTYPE(op) \
	op(EQuadrantSpawnType::L_Shape) \
	op(EQuadrantSpawnType::Square) \
	op(EQuadrantSpawnType::Rect_X) \
	op(EQuadrantSpawnType::Rect_Y) \
	op(EQuadrantSpawnType::Rect) \
	op(EQuadrantSpawnType::None) 

enum class EQuadrantSpawnType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EQuadrantSpawnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
