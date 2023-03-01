// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THETWINS_EPerkInteractionObjectType_generated_h
#error "EPerkInteractionObjectType.generated.h already included, missing '#pragma once' in EPerkInteractionObjectType.h"
#endif
#define THETWINS_EPerkInteractionObjectType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_EPerkInteractionObjectType_h


#define FOREACH_ENUM_EPERKINTERACTIONOBJECTTYPE(op) \
	op(EPerkInteractionObjectType::Item) \
	op(EPerkInteractionObjectType::ChestClosed) \
	op(EPerkInteractionObjectType::ChestOpen) 

enum class EPerkInteractionObjectType : uint8;
template<> THETWINS_API UEnum* StaticEnum<EPerkInteractionObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
