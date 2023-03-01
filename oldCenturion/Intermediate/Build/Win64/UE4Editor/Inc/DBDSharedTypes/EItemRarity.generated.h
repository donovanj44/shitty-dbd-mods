// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EItemRarity_generated_h
#error "EItemRarity.generated.h already included, missing '#pragma once' in EItemRarity.h"
#endif
#define DBDSHAREDTYPES_EItemRarity_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EItemRarity_h


#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::Common) \
	op(EItemRarity::Uncommon) \
	op(EItemRarity::Rare) \
	op(EItemRarity::VeryRare) \
	op(EItemRarity::UltraRare) \
	op(EItemRarity::Artifact) \
	op(EItemRarity::Spectral) \
	op(EItemRarity::Teachable) \
	op(EItemRarity::SpecialEvent) \
	op(EItemRarity::Legendary) \
	op(EItemRarity::Epic) \
	op(EItemRarity::SuperEpic) \
	op(EItemRarity::UltraEpic) \
	op(EItemRarity::Count) \
	op(EItemRarity::None) 

enum class EItemRarity : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EItemRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
