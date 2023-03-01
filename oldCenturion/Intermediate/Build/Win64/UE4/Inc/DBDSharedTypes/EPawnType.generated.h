// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EPawnType_generated_h
#error "EPawnType.generated.h already included, missing '#pragma once' in EPawnType.h"
#endif
#define DBDSHAREDTYPES_EPawnType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EPawnType_h


#define FOREACH_ENUM_EPAWNTYPE(op) \
	op(EPawnType::VE_None) \
	op(EPawnType::VE_Killer) \
	op(EPawnType::VE_Survivor) \
	op(EPawnType::VE_Sidekick) 

enum class EPawnType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPawnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
