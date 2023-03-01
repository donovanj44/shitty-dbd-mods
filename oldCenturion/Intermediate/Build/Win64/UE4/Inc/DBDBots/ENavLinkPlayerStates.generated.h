// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDBOTS_ENavLinkPlayerStates_generated_h
#error "ENavLinkPlayerStates.generated.h already included, missing '#pragma once' in ENavLinkPlayerStates.h"
#endif
#define DBDBOTS_ENavLinkPlayerStates_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDBots_Public_ENavLinkPlayerStates_h


#define FOREACH_ENUM_ENAVLINKPLAYERSTATES(op) \
	op(ENavLinkPlayerStates::RequestStart) \
	op(ENavLinkPlayerStates::MoveStart) \
	op(ENavLinkPlayerStates::Using) \
	op(ENavLinkPlayerStates::MoveEnd) \
	op(ENavLinkPlayerStates::Release) 

enum class ENavLinkPlayerStates;
template<> DBDBOTS_API UEnum* StaticEnum<ENavLinkPlayerStates>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
