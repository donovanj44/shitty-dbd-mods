// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedAuthenticationUtilities/Public/ESharedAuthenticationTokenType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESharedAuthenticationTokenType() {}
// Cross Module References
	SHAREDAUTHENTICATIONUTILITIES_API UEnum* Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationTokenType();
	UPackage* Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
// End Cross Module References
	static UEnum* ESharedAuthenticationTokenType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationTokenType, Z_Construct_UPackage__Script_SharedAuthenticationUtilities(), TEXT("ESharedAuthenticationTokenType"));
		}
		return Singleton;
	}
	template<> SHAREDAUTHENTICATIONUTILITIES_API UEnum* StaticEnum<ESharedAuthenticationTokenType>()
	{
		return ESharedAuthenticationTokenType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESharedAuthenticationTokenType(ESharedAuthenticationTokenType_StaticEnum, TEXT("/Script/SharedAuthenticationUtilities"), TEXT("ESharedAuthenticationTokenType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationTokenType_Hash() { return 3552750354U; }
	UEnum* Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationTokenType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESharedAuthenticationTokenType"), 0, Get_Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationTokenType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESharedAuthenticationTokenType::None", (int64)ESharedAuthenticationTokenType::None },
				{ "ESharedAuthenticationTokenType::AccessToken", (int64)ESharedAuthenticationTokenType::AccessToken },
				{ "ESharedAuthenticationTokenType::AuthorizationCode", (int64)ESharedAuthenticationTokenType::AuthorizationCode },
				{ "ESharedAuthenticationTokenType::IdentityToken", (int64)ESharedAuthenticationTokenType::IdentityToken },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccessToken.Name", "ESharedAuthenticationTokenType::AccessToken" },
				{ "AuthorizationCode.Name", "ESharedAuthenticationTokenType::AuthorizationCode" },
				{ "IdentityToken.Name", "ESharedAuthenticationTokenType::IdentityToken" },
				{ "ModuleRelativePath", "Public/ESharedAuthenticationTokenType.h" },
				{ "None.Name", "ESharedAuthenticationTokenType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SharedAuthenticationUtilities,
				nullptr,
				"ESharedAuthenticationTokenType",
				"ESharedAuthenticationTokenType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
