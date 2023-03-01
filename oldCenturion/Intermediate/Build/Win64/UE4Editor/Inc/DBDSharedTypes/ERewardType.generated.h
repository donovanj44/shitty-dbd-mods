// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ERewardType_generated_h
#error "ERewardType.generated.h already included, missing '#pragma once' in ERewardType.h"
#endif
#define DBDSHAREDTYPES_ERewardType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ERewardType_h


#define FOREACH_ENUM_EREWARDTYPE(op) \
	op(ERewardType::None) \
	op(ERewardType::Character) \
	op(ERewardType::Currency) \
	op(ERewardType::Customization) \
	op(ERewardType::Progression) 

enum class ERewardType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ERewardType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
