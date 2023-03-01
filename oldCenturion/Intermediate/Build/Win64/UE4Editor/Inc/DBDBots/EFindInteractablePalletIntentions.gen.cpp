// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EFindInteractablePalletIntentions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFindInteractablePalletIntentions() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EFindInteractablePalletIntentions();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EFindInteractablePalletIntentions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EFindInteractablePalletIntentions, Z_Construct_UPackage__Script_DBDBots(), TEXT("EFindInteractablePalletIntentions"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractablePalletIntentions>()
	{
		return EFindInteractablePalletIntentions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFindInteractablePalletIntentions(EFindInteractablePalletIntentions_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EFindInteractablePalletIntentions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EFindInteractablePalletIntentions_Hash() { return 283996508U; }
	UEnum* Z_Construct_UEnum_DBDBots_EFindInteractablePalletIntentions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFindInteractablePalletIntentions"), 0, Get_Z_Construct_UEnum_DBDBots_EFindInteractablePalletIntentions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFindInteractablePalletIntentions::Fall", (int64)EFindInteractablePalletIntentions::Fall },
				{ "EFindInteractablePalletIntentions::Raise", (int64)EFindInteractablePalletIntentions::Raise },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Fall.Name", "EFindInteractablePalletIntentions::Fall" },
				{ "ModuleRelativePath", "Public/EFindInteractablePalletIntentions.h" },
				{ "Raise.Name", "EFindInteractablePalletIntentions::Raise" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EFindInteractablePalletIntentions",
				"EFindInteractablePalletIntentions",
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
