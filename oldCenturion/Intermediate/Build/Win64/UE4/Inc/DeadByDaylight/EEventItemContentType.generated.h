// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EEventItemContentType_generated_h
#error "EEventItemContentType.generated.h already included, missing '#pragma once' in EEventItemContentType.h"
#endif
#define DEADBYDAYLIGHT_EEventItemContentType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EEventItemContentType_h


#define FOREACH_ENUM_EEVENTITEMCONTENTTYPE(op) \
	op(EEventItemContentType::None) \
	op(EEventItemContentType::Cells) \
	op(EEventItemContentType::Character) \
	op(EEventItemContentType::Customization) \
	op(EEventItemContentType::NameChangeCard) \
	op(EEventItemContentType::FreeTicket) \
	op(EEventItemContentType::OtherCurrency) \
	op(EEventItemContentType::Item) \
	op(EEventItemContentType::Addon) \
	op(EEventItemContentType::Offering) \
	op(EEventItemContentType::Count) 

enum class EEventItemContentType : uint8;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEventItemContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
