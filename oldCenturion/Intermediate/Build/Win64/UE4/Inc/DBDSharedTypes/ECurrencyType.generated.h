// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ECurrencyType_generated_h
#error "ECurrencyType.generated.h already included, missing '#pragma once' in ECurrencyType.h"
#endif
#define DBDSHAREDTYPES_ECurrencyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ECurrencyType_h


#define FOREACH_ENUM_ECURRENCYTYPE(op) \
	op(ECurrencyType::None) \
	op(ECurrencyType::BloodPoints) \
	op(ECurrencyType::FearTokens) \
	op(ECurrencyType::Cells) \
	op(ECurrencyType::HalloweenCoins) \
	op(ECurrencyType::LunarNewYearCoins) \
	op(ECurrencyType::HalloweenEventCurrency) 

enum class ECurrencyType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ECurrencyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
