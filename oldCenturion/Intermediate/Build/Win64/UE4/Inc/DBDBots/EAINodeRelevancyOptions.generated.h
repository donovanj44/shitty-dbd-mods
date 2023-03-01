// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EAINodeRelevancyOptions_generated_h
#error "EAINodeRelevancyOptions.generated.h already included, missing '#pragma once' in EAINodeRelevancyOptions.h"
#endif
#define DBDBOTS_EAINodeRelevancyOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EAINodeRelevancyOptions_h


#define FOREACH_ENUM_EAINODERELEVANCYOPTIONS(op) \
	op(EAINodeRelevancyOptions::OnEnter) \
	op(EAINodeRelevancyOptions::OnExit) \
	op(EAINodeRelevancyOptions::OnEnterAndExit) \
	op(EAINodeRelevancyOptions::OnTick) 

enum class EAINodeRelevancyOptions : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EAINodeRelevancyOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
