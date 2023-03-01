// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EGender_generated_h
#error "EGender.generated.h already included, missing '#pragma once' in EGender.h"
#endif
#define DBDSHAREDTYPES_EGender_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EGender_h


#define FOREACH_ENUM_EGENDER(op) \
	op(EGender::VE_Male) \
	op(EGender::VE_Female) \
	op(EGender::VE_Multiple) \
	op(EGender::VE_NotHuman) \
	op(EGender::VE_Undefined) 

enum class EGender : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EGender>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
