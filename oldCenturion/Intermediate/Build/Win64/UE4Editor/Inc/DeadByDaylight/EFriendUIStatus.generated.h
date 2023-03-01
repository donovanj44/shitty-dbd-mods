// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EFriendUIStatus_generated_h
#error "EFriendUIStatus.generated.h already included, missing '#pragma once' in EFriendUIStatus.h"
#endif
#define DEADBYDAYLIGHT_EFriendUIStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EFriendUIStatus_h


#define FOREACH_ENUM_EFRIENDUISTATUS(op) \
	op(EFriendUIStatus::Offline) \
	op(EFriendUIStatus::Online) \
	op(EFriendUIStatus::PlayingDBD) \
	op(EFriendUIStatus::PendingSentRequest) \
	op(EFriendUIStatus::PendingReceivedRequest) \
	op(EFriendUIStatus::NotFriend) \
	op(EFriendUIStatus::Self) 

enum class EFriendUIStatus;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFriendUIStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
