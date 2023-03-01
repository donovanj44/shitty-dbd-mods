// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedAuthenticationUtilities/Public/ESharedAuthenticationProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESharedAuthenticationProvider() {}
// Cross Module References
	SHAREDAUTHENTICATIONUTILITIES_API UEnum* Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider();
	UPackage* Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
// End Cross Module References
	static UEnum* ESharedAuthenticationProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider, Z_Construct_UPackage__Script_SharedAuthenticationUtilities(), TEXT("ESharedAuthenticationProvider"));
		}
		return Singleton;
	}
	template<> SHAREDAUTHENTICATIONUTILITIES_API UEnum* StaticEnum<ESharedAuthenticationProvider>()
	{
		return ESharedAuthenticationProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESharedAuthenticationProvider(ESharedAuthenticationProvider_StaticEnum, TEXT("/Script/SharedAuthenticationUtilities"), TEXT("ESharedAuthenticationProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider_Hash() { return 1836475705U; }
	UEnum* Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESharedAuthenticationProvider"), 0, Get_Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESharedAuthenticationProvider::None", (int64)ESharedAuthenticationProvider::None },
				{ "ESharedAuthenticationProvider::Facebook", (int64)ESharedAuthenticationProvider::Facebook },
				{ "ESharedAuthenticationProvider::Google", (int64)ESharedAuthenticationProvider::Google },
				{ "ESharedAuthenticationProvider::NetEase", (int64)ESharedAuthenticationProvider::NetEase },
				{ "ESharedAuthenticationProvider::Kraken", (int64)ESharedAuthenticationProvider::Kraken },
				{ "ESharedAuthenticationProvider::SignInWithApple", (int64)ESharedAuthenticationProvider::SignInWithApple },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Facebook.Name", "ESharedAuthenticationProvider::Facebook" },
				{ "Google.Name", "ESharedAuthenticationProvider::Google" },
				{ "Kraken.Name", "ESharedAuthenticationProvider::Kraken" },
				{ "ModuleRelativePath", "Public/ESharedAuthenticationProvider.h" },
				{ "NetEase.Name", "ESharedAuthenticationProvider::NetEase" },
				{ "None.Name", "ESharedAuthenticationProvider::None" },
				{ "SignInWithApple.Name", "ESharedAuthenticationProvider::SignInWithApple" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SharedAuthenticationUtilities,
				nullptr,
				"ESharedAuthenticationProvider",
				"ESharedAuthenticationProvider",
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
