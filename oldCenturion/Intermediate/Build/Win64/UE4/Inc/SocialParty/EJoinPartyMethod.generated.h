// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALPARTY_EJoinPartyMethod_generated_h
#error "EJoinPartyMethod.generated.h already included, missing '#pragma once' in EJoinPartyMethod.h"
#endif
#define SOCIALPARTY_EJoinPartyMethod_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SocialParty_Public_EJoinPartyMethod_h


#define FOREACH_ENUM_EJOINPARTYMETHOD(op) \
	op(EJoinPartyMethod::None) \
	op(EJoinPartyMethod::PlatformInvitation) \
	op(EJoinPartyMethod::InGameInvitation) \
	op(EJoinPartyMethod::JoinRequest) 

enum class EJoinPartyMethod;
template<> SOCIALPARTY_API UEnum* StaticEnum<EJoinPartyMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
