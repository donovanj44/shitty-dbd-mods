// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EPingQuality_generated_h
#error "EPingQuality.generated.h already included, missing '#pragma once' in EPingQuality.h"
#endif
#define DBDSHAREDTYPES_EPingQuality_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EPingQuality_h


#define FOREACH_ENUM_EPINGQUALITY(op) \
	op(EPingQuality::Good) \
	op(EPingQuality::Bad) \
	op(EPingQuality::Awful) 

enum class EPingQuality : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EPingQuality>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
