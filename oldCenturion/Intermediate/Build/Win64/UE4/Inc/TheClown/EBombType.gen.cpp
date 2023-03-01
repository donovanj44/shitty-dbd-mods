// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheClown/Public/EBombType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBombType() {}
// Cross Module References
	THECLOWN_API UEnum* Z_Construct_UEnum_TheClown_EBombType();
	UPackage* Z_Construct_UPackage__Script_TheClown();
// End Cross Module References
	static UEnum* EBombType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheClown_EBombType, Z_Construct_UPackage__Script_TheClown(), TEXT("EBombType"));
		}
		return Singleton;
	}
	template<> THECLOWN_API UEnum* StaticEnum<EBombType>()
	{
		return EBombType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBombType(EBombType_StaticEnum, TEXT("/Script/TheClown"), TEXT("EBombType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheClown_EBombType_Hash() { return 576775899U; }
	UEnum* Z_Construct_UEnum_TheClown_EBombType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheClown();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBombType"), 0, Get_Z_Construct_UEnum_TheClown_EBombType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBombType::Toxin", (int64)EBombType::Toxin },
				{ "EBombType::Antidote", (int64)EBombType::Antidote },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Antidote.Name", "EBombType::Antidote" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EBombType.h" },
				{ "Toxin.Name", "EBombType::Toxin" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheClown,
				nullptr,
				"EBombType",
				"EBombType",
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
