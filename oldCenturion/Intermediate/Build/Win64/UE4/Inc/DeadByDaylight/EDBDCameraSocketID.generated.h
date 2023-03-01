// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EDBDCameraSocketID_generated_h
#error "EDBDCameraSocketID.generated.h already included, missing '#pragma once' in EDBDCameraSocketID.h"
#endif
#define DEADBYDAYLIGHT_EDBDCameraSocketID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EDBDCameraSocketID_h


#define FOREACH_ENUM_EDBDCAMERASOCKETID(op) \
	op(EDBDCameraSocketID::VE_None) \
	op(EDBDCameraSocketID::VE_Default) \
	op(EDBDCameraSocketID::VE_Killcam) \
	op(EDBDCameraSocketID::VE_Reaction) \
	op(EDBDCameraSocketID::VE_Struggle) \
	op(EDBDCameraSocketID::VE_Sacrifice) 

enum class EDBDCameraSocketID : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDBDCameraSocketID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
