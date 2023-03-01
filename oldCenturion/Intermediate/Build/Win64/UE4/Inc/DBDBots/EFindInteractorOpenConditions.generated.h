// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_EFindInteractorOpenConditions_generated_h
#error "EFindInteractorOpenConditions.generated.h already included, missing '#pragma once' in EFindInteractorOpenConditions.h"
#endif
#define DBDBOTS_EFindInteractorOpenConditions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_EFindInteractorOpenConditions_h


#define FOREACH_ENUM_EFINDINTERACTOROPENCONDITIONS(op) \
	op(EFindInteractorOpenConditions::AllGate_OpenedHatch) \
	op(EFindInteractorOpenConditions::All) \
	op(EFindInteractorOpenConditions::ClosedOnly) \
	op(EFindInteractorOpenConditions::OpenedOnly) 

enum class EFindInteractorOpenConditions : uint8;
template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractorOpenConditions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
