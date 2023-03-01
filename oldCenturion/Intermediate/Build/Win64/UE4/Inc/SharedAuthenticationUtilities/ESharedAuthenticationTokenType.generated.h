// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHAREDAUTHENTICATIONUTILITIES_ESharedAuthenticationTokenType_generated_h
#error "ESharedAuthenticationTokenType.generated.h already included, missing '#pragma once' in ESharedAuthenticationTokenType.h"
#endif
#define SHAREDAUTHENTICATIONUTILITIES_ESharedAuthenticationTokenType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SharedAuthenticationUtilities_Public_ESharedAuthenticationTokenType_h


#define FOREACH_ENUM_ESHAREDAUTHENTICATIONTOKENTYPE(op) \
	op(ESharedAuthenticationTokenType::None) \
	op(ESharedAuthenticationTokenType::AccessToken) \
	op(ESharedAuthenticationTokenType::AuthorizationCode) \
	op(ESharedAuthenticationTokenType::IdentityToken) 

enum class ESharedAuthenticationTokenType;
template<> SHAREDAUTHENTICATIONUTILITIES_API UEnum* StaticEnum<ESharedAuthenticationTokenType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
