// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBSCRIPTIONSUBSYSTEM_ESubscriptionClaimType_generated_h
#error "ESubscriptionClaimType.generated.h already included, missing '#pragma once' in ESubscriptionClaimType.h"
#endif
#define SUBSCRIPTIONSUBSYSTEM_ESubscriptionClaimType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SubscriptionSubsystem_Public_ESubscriptionClaimType_h


#define FOREACH_ENUM_ESUBSCRIPTIONCLAIMTYPE(op) \
	op(ESubscriptionClaimType::None) \
	op(ESubscriptionClaimType::Daily) \
	op(ESubscriptionClaimType::Renewal) 

enum class ESubscriptionClaimType : uint8;
template<> SUBSCRIPTIONSUBSYSTEM_API UEnum* StaticEnum<ESubscriptionClaimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
