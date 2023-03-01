// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EStatusEffectType_generated_h
#error "EStatusEffectType.generated.h already included, missing '#pragma once' in EStatusEffectType.h"
#endif
#define DBDSHAREDTYPES_EStatusEffectType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EStatusEffectType_h


#define FOREACH_ENUM_ESTATUSEFFECTTYPE(op) \
	op(EStatusEffectType::None) \
	op(EStatusEffectType::Buff) \
	op(EStatusEffectType::Debuff) 

enum class EStatusEffectType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EStatusEffectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
