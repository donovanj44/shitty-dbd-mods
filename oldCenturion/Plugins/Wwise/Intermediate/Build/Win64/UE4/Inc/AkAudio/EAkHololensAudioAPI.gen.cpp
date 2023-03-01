// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkHololensAudioAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkHololensAudioAPI() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkHololensAudioAPI_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkHololensAudioAPI"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkHololensAudioAPI>()
	{
		return EAkHololensAudioAPI_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkHololensAudioAPI(EAkHololensAudioAPI_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkHololensAudioAPI"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI_Hash() { return 2975364078U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkHololensAudioAPI"), 0, Get_Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkHololensAudioAPI::Wasapi", (int64)EAkHololensAudioAPI::Wasapi },
				{ "EAkHololensAudioAPI::XAudio2", (int64)EAkHololensAudioAPI::XAudio2 },
				{ "EAkHololensAudioAPI::DirectSound", (int64)EAkHololensAudioAPI::DirectSound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DirectSound.Name", "EAkHololensAudioAPI::DirectSound" },
				{ "ModuleRelativePath", "Public/EAkHololensAudioAPI.h" },
				{ "Wasapi.Name", "EAkHololensAudioAPI::Wasapi" },
				{ "XAudio2.Name", "EAkHololensAudioAPI::XAudio2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkHololensAudioAPI",
				"EAkHololensAudioAPI",
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
