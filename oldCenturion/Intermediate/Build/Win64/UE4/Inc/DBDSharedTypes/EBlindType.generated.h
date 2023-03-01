// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EBlindType_generated_h
#error "EBlindType.generated.h already included, missing '#pragma once' in EBlindType.h"
#endif
#define DBDSHAREDTYPES_EBlindType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EBlindType_h


#define FOREACH_ENUM_EBLINDTYPE(op) \
	op(EBlindType::VE_None) \
	op(EBlindType::VE_Flashlight) \
	op(EBlindType::VE_SacrificeSuspended) \
	op(EBlindType::VE_Firecracker) 

enum class EBlindType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EBlindType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
