// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOCIALPARTY_PartySessionSettings_generated_h
#error "PartySessionSettings.generated.h already included, missing '#pragma once' in PartySessionSettings.h"
#endif
#define SOCIALPARTY_PartySessionSettings_generated_h

#define DeadByDaylight_Source_SocialParty_Public_PartySessionSettings_h_7_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartySessionSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO___sessionId() { return STRUCT_OFFSET(FPartySessionSettings, _sessionId); } \
	FORCEINLINE static uint32 __PPO___gameSessionInfos() { return STRUCT_OFFSET(FPartySessionSettings, _gameSessionInfos); } \
	FORCEINLINE static uint32 __PPO___owningUserId() { return STRUCT_OFFSET(FPartySessionSettings, _owningUserId); } \
	FORCEINLINE static uint32 __PPO___owningUserName() { return STRUCT_OFFSET(FPartySessionSettings, _owningUserName); } \
	FORCEINLINE static uint32 __PPO___isDedicated() { return STRUCT_OFFSET(FPartySessionSettings, _isDedicated); } \
	FORCEINLINE static uint32 __PPO___matchmakingTimestamp() { return STRUCT_OFFSET(FPartySessionSettings, _matchmakingTimestamp); }


template<> SOCIALPARTY_API UScriptStruct* StaticStruct<struct FPartySessionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SocialParty_Public_PartySessionSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
