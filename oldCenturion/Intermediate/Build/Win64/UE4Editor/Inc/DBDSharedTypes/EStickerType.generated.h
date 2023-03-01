// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EStickerType_generated_h
#error "EStickerType.generated.h already included, missing '#pragma once' in EStickerType.h"
#endif
#define DBDSHAREDTYPES_EStickerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EStickerType_h


#define FOREACH_ENUM_ESTICKERTYPE(op) \
	op(EStickerType::None) \
	op(EStickerType::Emoji) \
	op(EStickerType::Text) 

enum class EStickerType;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EStickerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
