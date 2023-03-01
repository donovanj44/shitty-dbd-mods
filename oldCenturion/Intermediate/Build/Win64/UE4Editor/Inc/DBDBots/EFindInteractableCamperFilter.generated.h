// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EFindInteractableCamperFilter_generated_h
#error "EFindInteractableCamperFilter.generated.h already included, missing '#pragma once' in EFindInteractableCamperFilter.h"
#endif
#define DBDBOTS_EFindInteractableCamperFilter_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EFindInteractableCamperFilter_h


#define FOREACH_ENUM_EFINDINTERACTABLECAMPERFILTER(op) \
	op(EFindInteractableCamperFilter::Crawling) \
	op(EFindInteractableCamperFilter::Standing) \
	op(EFindInteractableCamperFilter::GiveHelp) \
	op(EFindInteractableCamperFilter::RequestHelp) \
	op(EFindInteractableCamperFilter::RescuableBeingCarried) 

enum class EFindInteractableCamperFilter : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractableCamperFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
