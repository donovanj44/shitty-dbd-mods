// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkWindowsAudioAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkWindowsAudioAPI() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkWindowsAudioAPI();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkWindowsAudioAPI_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkWindowsAudioAPI, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkWindowsAudioAPI"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkWindowsAudioAPI>()
	{
		return EAkWindowsAudioAPI_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkWindowsAudioAPI(EAkWindowsAudioAPI_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkWindowsAudioAPI"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkWindowsAudioAPI_Hash() { return 2656876083U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkWindowsAudioAPI()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkWindowsAudioAPI"), 0, Get_Z_Construct_UEnum_AkAudio_EAkWindowsAudioAPI_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkWindowsAudioAPI::Wasapi", (int64)EAkWindowsAudioAPI::Wasapi },
				{ "EAkWindowsAudioAPI::XAudio2", (int64)EAkWindowsAudioAPI::XAudio2 },
				{ "EAkWindowsAudioAPI::DirectSound", (int64)EAkWindowsAudioAPI::DirectSound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DirectSound.Name", "EAkWindowsAudioAPI::DirectSound" },
				{ "ModuleRelativePath", "Public/EAkWindowsAudioAPI.h" },
				{ "Wasapi.Name", "EAkWindowsAudioAPI::Wasapi" },
				{ "XAudio2.Name", "EAkWindowsAudioAPI::XAudio2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkWindowsAudioAPI",
				"EAkWindowsAudioAPI",
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
