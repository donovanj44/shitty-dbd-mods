// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/EProtagonist.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEProtagonist() {}
// Cross Module References
	THEEXECUTIONER_API UEnum* Z_Construct_UEnum_TheExecutioner_EProtagonist();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	static UEnum* EProtagonist_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheExecutioner_EProtagonist, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("EProtagonist"));
		}
		return Singleton;
	}
	template<> THEEXECUTIONER_API UEnum* StaticEnum<EProtagonist>()
	{
		return EProtagonist_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProtagonist(EProtagonist_StaticEnum, TEXT("/Script/TheExecutioner"), TEXT("EProtagonist"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheExecutioner_EProtagonist_Hash() { return 2470996668U; }
	UEnum* Z_Construct_UEnum_TheExecutioner_EProtagonist()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProtagonist"), 0, Get_Z_Construct_UEnum_TheExecutioner_EProtagonist_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProtagonist::Instigator", (int64)EProtagonist::Instigator },
				{ "EProtagonist::Target", (int64)EProtagonist::Target },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Instigator.Name", "EProtagonist::Instigator" },
				{ "ModuleRelativePath", "Public/EProtagonist.h" },
				{ "Target.Name", "EProtagonist::Target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheExecutioner,
				nullptr,
				"EProtagonist",
				"EProtagonist",
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
