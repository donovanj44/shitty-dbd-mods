// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EStorefrontState_generated_h
#error "EStorefrontState.generated.h already included, missing '#pragma once' in EStorefrontState.h"
#endif
#define DEADBYDAYLIGHT_EStorefrontState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EStorefrontState_h


#define FOREACH_ENUM_ESTOREFRONTSTATE(op) \
	op(EStorefrontState::None) \
	op(EStorefrontState::Character) \
	op(EStorefrontState::Currency) \
	op(EStorefrontState::Customization) \
	op(EStorefrontState::Featured) \
	op(EStorefrontState::PromoPacks) \
	op(EStorefrontState::ShrineOfSecrets) \
	op(EStorefrontState::Subscriptions) \
	op(EStorefrontState::LandingPage) \
	op(EStorefrontState::Count) 

enum class EStorefrontState : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EStorefrontState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
