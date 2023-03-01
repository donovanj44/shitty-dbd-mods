// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINEMESSAGESUTILITIES_EClaimableInboxMessageType_generated_h
#error "EClaimableInboxMessageType.generated.h already included, missing '#pragma once' in EClaimableInboxMessageType.h"
#endif
#define ONLINEMESSAGESUTILITIES_EClaimableInboxMessageType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_OnlineMessagesUtilities_Public_EClaimableInboxMessageType_h


#define FOREACH_ENUM_ECLAIMABLEINBOXMESSAGETYPE(op) \
	op(EClaimableInboxMessageType::None) \
	op(EClaimableInboxMessageType::Currency) \
	op(EClaimableInboxMessageType::Inventory) 

enum class EClaimableInboxMessageType : uint8;
template<> ONLINEMESSAGESUTILITIES_API UEnum* StaticEnum<EClaimableInboxMessageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
