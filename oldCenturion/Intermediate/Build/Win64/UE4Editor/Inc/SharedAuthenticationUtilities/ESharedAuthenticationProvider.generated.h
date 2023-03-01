// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHAREDAUTHENTICATIONUTILITIES_ESharedAuthenticationProvider_generated_h
#error "ESharedAuthenticationProvider.generated.h already included, missing '#pragma once' in ESharedAuthenticationProvider.h"
#endif
#define SHAREDAUTHENTICATIONUTILITIES_ESharedAuthenticationProvider_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SharedAuthenticationUtilities_Public_ESharedAuthenticationProvider_h


#define FOREACH_ENUM_ESHAREDAUTHENTICATIONPROVIDER(op) \
	op(ESharedAuthenticationProvider::None) \
	op(ESharedAuthenticationProvider::Facebook) \
	op(ESharedAuthenticationProvider::Google) \
	op(ESharedAuthenticationProvider::NetEase) \
	op(ESharedAuthenticationProvider::Kraken) \
	op(ESharedAuthenticationProvider::SignInWithApple) 

enum class ESharedAuthenticationProvider : uint8;
template<> SHAREDAUTHENTICATIONUTILITIES_API UEnum* StaticEnum<ESharedAuthenticationProvider>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
