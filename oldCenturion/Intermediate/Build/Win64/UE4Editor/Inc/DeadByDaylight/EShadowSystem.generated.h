// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EShadowSystem_generated_h
#error "EShadowSystem.generated.h already included, missing '#pragma once' in EShadowSystem.h"
#endif
#define DEADBYDAYLIGHT_EShadowSystem_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EShadowSystem_h


#define FOREACH_ENUM_ESHADOWSYSTEM(op) \
	op(EShadowSystem::CascadedShadowMap) \
	op(EShadowSystem::CacheWholeSceneStaticShadowMap) \
	op(EShadowSystem::AdaptiveShadowMap) 

enum class EShadowSystem : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EShadowSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
