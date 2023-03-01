// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EKnowledgeSharingType_generated_h
#error "EKnowledgeSharingType.generated.h already included, missing '#pragma once' in EKnowledgeSharingType.h"
#endif
#define DEADBYDAYLIGHT_EKnowledgeSharingType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EKnowledgeSharingType_h


#define FOREACH_ENUM_EKNOWLEDGESHARINGTYPE(op) \
	op(EKnowledgeSharingType::Possessor) \
	op(EKnowledgeSharingType::Survivors) \
	op(EKnowledgeSharingType::Killers) \
	op(EKnowledgeSharingType::All) 

enum class EKnowledgeSharingType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EKnowledgeSharingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
