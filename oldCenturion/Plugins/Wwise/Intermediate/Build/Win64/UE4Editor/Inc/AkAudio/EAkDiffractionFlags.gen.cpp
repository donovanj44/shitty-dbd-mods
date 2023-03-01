// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkDiffractionFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkDiffractionFlags() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkDiffractionFlags();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static UEnum* EAkDiffractionFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkDiffractionFlags, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkDiffractionFlags"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkDiffractionFlags>()
	{
		return EAkDiffractionFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkDiffractionFlags(EAkDiffractionFlags_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkDiffractionFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkDiffractionFlags_Hash() { return 1590656726U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkDiffractionFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkDiffractionFlags"), 0, Get_Z_Construct_UEnum_AkAudio_EAkDiffractionFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkDiffractionFlags::UseBuiltInParam", (int64)EAkDiffractionFlags::UseBuiltInParam },
				{ "EAkDiffractionFlags::UseObstruction", (int64)EAkDiffractionFlags::UseObstruction },
				{ "EAkDiffractionFlags::CalcEmitterVirtualPosition", (int64)EAkDiffractionFlags::CalcEmitterVirtualPosition },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CalcEmitterVirtualPosition.Name", "EAkDiffractionFlags::CalcEmitterVirtualPosition" },
				{ "ModuleRelativePath", "Public/EAkDiffractionFlags.h" },
				{ "UseBuiltInParam.Name", "EAkDiffractionFlags::UseBuiltInParam" },
				{ "UseObstruction.Name", "EAkDiffractionFlags::UseObstruction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkDiffractionFlags",
				"EAkDiffractionFlags",
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
