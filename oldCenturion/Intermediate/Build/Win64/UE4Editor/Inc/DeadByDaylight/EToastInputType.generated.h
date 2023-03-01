// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EToastInputType_generated_h
#error "EToastInputType.generated.h already included, missing '#pragma once' in EToastInputType.h"
#endif
#define DEADBYDAYLIGHT_EToastInputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EToastInputType_h


#define FOREACH_ENUM_ETOASTINPUTTYPE(op) \
	op(EToastInputType::Toast_Accept) \
	op(EToastInputType::Toast_Reject) \
	op(EToastInputType::Toast_Close) 

enum class EToastInputType : int32;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EToastInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
