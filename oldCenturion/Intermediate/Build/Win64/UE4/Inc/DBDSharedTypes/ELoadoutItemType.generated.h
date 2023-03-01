// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_ELoadoutItemType_generated_h
#error "ELoadoutItemType.generated.h already included, missing '#pragma once' in ELoadoutItemType.h"
#endif
#define DBDSHAREDTYPES_ELoadoutItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_ELoadoutItemType_h


#define FOREACH_ENUM_ELOADOUTITEMTYPE(op) \
	op(ELoadoutItemType::None) \
	op(ELoadoutItemType::Medkit) \
	op(ELoadoutItemType::Toolbox) \
	op(ELoadoutItemType::Flashlight) \
	op(ELoadoutItemType::Key) \
	op(ELoadoutItemType::Map) \
	op(ELoadoutItemType::Firecracker) \
	op(ELoadoutItemType::Flashbang) \
	op(ELoadoutItemType::Count) 

enum class ELoadoutItemType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ELoadoutItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
