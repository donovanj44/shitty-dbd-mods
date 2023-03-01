// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EInboxMessageUIType_generated_h
#error "EInboxMessageUIType.generated.h already included, missing '#pragma once' in EInboxMessageUIType.h"
#endif
#define DEADBYDAYLIGHT_EInboxMessageUIType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EInboxMessageUIType_h


#define FOREACH_ENUM_EINBOXMESSAGEUITYPE(op) \
	op(EInboxMessageUIType::None) \
	op(EInboxMessageUIType::Social) \
	op(EInboxMessageUIType::Rewards) \
	op(EInboxMessageUIType::News) 

enum class EInboxMessageUIType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInboxMessageUIType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
