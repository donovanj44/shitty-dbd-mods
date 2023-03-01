// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EStoreState_generated_h
#error "EStoreState.generated.h already included, missing '#pragma once' in EStoreState.h"
#endif
#define DEADBYDAYLIGHT_EStoreState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EStoreState_h


#define FOREACH_ENUM_ESTORESTATE(op) \
	op(EStoreState::None) \
	op(EStoreState::Featured) \
	op(EStoreState::CharacterSelection) \
	op(EStoreState::CharacterStory) \
	op(EStoreState::CharacterCatalog) \
	op(EStoreState::BuyCurrency) \
	op(EStoreState::ShrineOfSecrets) 

enum class EStoreState;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EStoreState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
