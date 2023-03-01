// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDANALYTICS_ECharacterStatus_generated_h
#error "ECharacterStatus.generated.h already included, missing '#pragma once' in ECharacterStatus.h"
#endif
#define DBDANALYTICS_ECharacterStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_ECharacterStatus_h


#define FOREACH_ENUM_ECHARACTERSTATUS(op) \
	op(ECharacterStatus::Crawling) \
	op(ECharacterStatus::BeingPickedUp) \
	op(ECharacterStatus::BeingCarried) \
	op(ECharacterStatus::BeingHealed) \
	op(ECharacterStatus::BeingMended) \
	op(ECharacterStatus::BeingPutDown) \
	op(ECharacterStatus::BeingPutOnHook) \
	op(ECharacterStatus::BeingPulledFromCloset) \
	op(ECharacterStatus::BeingKilled) \
	op(ECharacterStatus::OnHook) 

enum class ECharacterStatus : uint8;
template<> DBDANALYTICS_API UEnum* StaticEnum<ECharacterStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
