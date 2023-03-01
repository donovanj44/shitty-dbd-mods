// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EFindInteractableGeneratorStatusFilter_generated_h
#error "EFindInteractableGeneratorStatusFilter.generated.h already included, missing '#pragma once' in EFindInteractableGeneratorStatusFilter.h"
#endif
#define DBDBOTS_EFindInteractableGeneratorStatusFilter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EFindInteractableGeneratorStatusFilter_h


#define FOREACH_ENUM_EFINDINTERACTABLEGENERATORSTATUSFILTER(op) \
	op(EFindInteractableGeneratorStatusFilter::NeedRepair) \
	op(EFindInteractableGeneratorStatusFilter::CanBeDamaged) 

enum class EFindInteractableGeneratorStatusFilter : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractableGeneratorStatusFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
