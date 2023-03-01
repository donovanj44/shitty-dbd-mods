// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCodecId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCodecId() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkCodecId();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* AkCodecId_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkCodecId, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCodecId"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>()
	{
		return AkCodecId_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkCodecId(AkCodecId_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkCodecId"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkCodecId_Hash() { return 1620363240U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkCodecId()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkCodecId"), 0, Get_Z_Construct_UEnum_AkAudio_AkCodecId_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkCodecId::Bank", (int64)AkCodecId::Bank },
				{ "AkCodecId::PCM", (int64)AkCodecId::PCM },
				{ "AkCodecId::ADPCM", (int64)AkCodecId::ADPCM },
				{ "AkCodecId::XMA", (int64)AkCodecId::XMA },
				{ "AkCodecId::Vorbis", (int64)AkCodecId::Vorbis },
				{ "AkCodecId::WiiADPCM", (int64)AkCodecId::WiiADPCM },
				{ "AkCodecId::PCMEX", (int64)AkCodecId::PCMEX },
				{ "AkCodecId::ExternalSource", (int64)AkCodecId::ExternalSource },
				{ "AkCodecId::XWMA", (int64)AkCodecId::XWMA },
				{ "AkCodecId::AAC", (int64)AkCodecId::AAC },
				{ "AkCodecId::FilePackage", (int64)AkCodecId::FilePackage },
				{ "AkCodecId::ATRAC9", (int64)AkCodecId::ATRAC9 },
				{ "AkCodecId::VAG", (int64)AkCodecId::VAG },
				{ "AkCodecId::ProfilerCapture", (int64)AkCodecId::ProfilerCapture },
				{ "AkCodecId::AnalysisFile", (int64)AkCodecId::AnalysisFile },
				{ "AkCodecId::MIDI", (int64)AkCodecId::MIDI },
				{ "AkCodecId::OpusNX", (int64)AkCodecId::OpusNX },
				{ "AkCodecId::CAF", (int64)AkCodecId::CAF },
				{ "AkCodecId::AkOpus", (int64)AkCodecId::AkOpus },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAC.Name", "AkCodecId::AAC" },
				{ "ADPCM.Name", "AkCodecId::ADPCM" },
				{ "AkOpus.Name", "AkCodecId::AkOpus" },
				{ "AnalysisFile.Name", "AkCodecId::AnalysisFile" },
				{ "ATRAC9.Name", "AkCodecId::ATRAC9" },
				{ "Bank.Name", "AkCodecId::Bank" },
				{ "BlueprintType", "true" },
				{ "CAF.Name", "AkCodecId::CAF" },
				{ "ExternalSource.Name", "AkCodecId::ExternalSource" },
				{ "FilePackage.Name", "AkCodecId::FilePackage" },
				{ "MIDI.Name", "AkCodecId::MIDI" },
				{ "ModuleRelativePath", "Public/AkCodecId.h" },
				{ "OpusNX.Name", "AkCodecId::OpusNX" },
				{ "PCM.Name", "AkCodecId::PCM" },
				{ "PCMEX.Name", "AkCodecId::PCMEX" },
				{ "ProfilerCapture.Name", "AkCodecId::ProfilerCapture" },
				{ "VAG.Name", "AkCodecId::VAG" },
				{ "Vorbis.Name", "AkCodecId::Vorbis" },
				{ "WiiADPCM.Name", "AkCodecId::WiiADPCM" },
				{ "XMA.Name", "AkCodecId::XMA" },
				{ "XWMA.Name", "AkCodecId::XWMA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"AkCodecId",
				"AkCodecId",
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
