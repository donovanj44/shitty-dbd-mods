// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_EShopLoadProgress_generated_h
#error "EShopLoadProgress.generated.h already included, missing '#pragma once' in EShopLoadProgress.h"
#endif
#define DEADBYDAYLIGHT_EShopLoadProgress_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EShopLoadProgress_h


#define FOREACH_ENUM_ESHOPLOADPROGRESS(op) \
	op(EShopLoadProgress::None) \
	op(EShopLoadProgress::LoadCatalog) \
	op(EShopLoadProgress::LoadCurrencyPacks) \
	op(EShopLoadProgress::PlatformStoreCatalog) \
	op(EShopLoadProgress::Inventory) \
	op(EShopLoadProgress::Wallet) \
	op(EShopLoadProgress::FeaturedPageContent) 

enum class EShopLoadProgress;
template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EShopLoadProgress>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
