// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkWinGDKAudioAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkWinGDKAudioAPI() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkWinGDKAudioAPI();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkWinGDKAudioAPI_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkWinGDKAudioAPI, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkWinGDKAudioAPI"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkWinGDKAudioAPI>()
	{
		return EAkWinGDKAudioAPI_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkWinGDKAudioAPI(EAkWinGDKAudioAPI_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkWinGDKAudioAPI"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkWinGDKAudioAPI_Hash() { return 1846984341U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkWinGDKAudioAPI()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkWinGDKAudioAPI"), 0, Get_Z_Construct_UEnum_AkAudio_EAkWinGDKAudioAPI_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkWinGDKAudioAPI::Wasapi", (int64)EAkWinGDKAudioAPI::Wasapi },
				{ "EAkWinGDKAudioAPI::XAudio2", (int64)EAkWinGDKAudioAPI::XAudio2 },
				{ "EAkWinGDKAudioAPI::DirectSound", (int64)EAkWinGDKAudioAPI::DirectSound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DirectSound.Name", "EAkWinGDKAudioAPI::DirectSound" },
				{ "ModuleRelativePath", "Public/EAkWinGDKAudioAPI.h" },
				{ "Wasapi.Name", "EAkWinGDKAudioAPI::Wasapi" },
				{ "XAudio2.Name", "EAkWinGDKAudioAPI::XAudio2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkWinGDKAudioAPI",
				"EAkWinGDKAudioAPI",
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
