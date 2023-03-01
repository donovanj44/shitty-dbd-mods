// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EAnimNotifyType_generated_h
#error "EAnimNotifyType.generated.h already included, missing '#pragma once' in EAnimNotifyType.h"
#endif
#define DBDSHAREDTYPES_EAnimNotifyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EAnimNotifyType_h


#define FOREACH_ENUM_EANIMNOTIFYTYPE(op) \
	op(EAnimNotifyType::VE_None) \
	op(EAnimNotifyType::VE_Pickup) \
	op(EAnimNotifyType::VE_Release) 

enum class EAnimNotifyType : uint8;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAnimNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
