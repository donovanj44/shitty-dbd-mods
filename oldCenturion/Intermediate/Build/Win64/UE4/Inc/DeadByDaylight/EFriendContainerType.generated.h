// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EFriendContainerType_generated_h
#error "EFriendContainerType.generated.h already included, missing '#pragma once' in EFriendContainerType.h"
#endif
#define DEADBYDAYLIGHT_EFriendContainerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EFriendContainerType_h


#define FOREACH_ENUM_EFRIENDCONTAINERTYPE(op) \
	op(EFriendContainerType::Connected) \
	op(EFriendContainerType::Disconnected) \
	op(EFriendContainerType::PendingSentRequest) \
	op(EFriendContainerType::RecentlyPlayed) \
	op(EFriendContainerType::SocialSuggestions) \
	op(EFriendContainerType::PendingReceivedRequest) \
	op(EFriendContainerType::QueriedPlayer) \
	op(EFriendContainerType::Unknown) 

enum class EFriendContainerType;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFriendContainerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
