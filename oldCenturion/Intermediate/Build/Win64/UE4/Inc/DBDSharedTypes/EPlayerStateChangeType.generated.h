// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EPlayerStateChangeType_generated_h
#error "EPlayerStateChangeType.generated.h already included, missing '#pragma once' in EPlayerStateChangeType.h"
#endif
#define DBDSHAREDTYPES_EPlayerStateChangeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EPlayerStateChangeType_h


#define FOREACH_ENUM_EPLAYERSTATECHANGETYPE(op) \
	op(EPlayerStateChangeType::None) \
	op(EPlayerStateChangeType::Negative) \
	op(EPlayerStateChangeType::Neutral) \
	op(EPlayerStateChangeType::Positive) 

enum class EPlayerStateChangeType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPlayerStateChangeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
