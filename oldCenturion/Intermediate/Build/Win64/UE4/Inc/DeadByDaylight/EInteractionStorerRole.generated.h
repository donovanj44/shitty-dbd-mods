// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EInteractionStorerRole_generated_h
#error "EInteractionStorerRole.generated.h already included, missing '#pragma once' in EInteractionStorerRole.h"
#endif
#define DEADBYDAYLIGHT_EInteractionStorerRole_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EInteractionStorerRole_h


#define FOREACH_ENUM_EINTERACTIONSTORERROLE(op) \
	op(EInteractionStorerRole::None) \
	op(EInteractionStorerRole::AuthorityAndAutonomousProxy) \
	op(EInteractionStorerRole::ClientAndAutonomousProxy) \
	op(EInteractionStorerRole::AuthorityAndSimulatedProxy) \
	op(EInteractionStorerRole::ClientAndSimulatedProxy) 

enum class EInteractionStorerRole;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInteractionStorerRole>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
