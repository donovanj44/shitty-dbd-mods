// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDSHAREDTYPES_EFriendshipStatus_generated_h
#error "EFriendshipStatus.generated.h already included, missing '#pragma once' in EFriendshipStatus.h"
#endif
#define DBDSHAREDTYPES_EFriendshipStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDSharedTypes_Public_EFriendshipStatus_h


#define FOREACH_ENUM_EFRIENDSHIPSTATUS(op) \
	op(EFriendshipStatus::None) \
	op(EFriendshipStatus::RequestSent) \
	op(EFriendshipStatus::RequestReceived) \
	op(EFriendshipStatus::Friend) 

enum class EFriendshipStatus;
template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EFriendshipStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
