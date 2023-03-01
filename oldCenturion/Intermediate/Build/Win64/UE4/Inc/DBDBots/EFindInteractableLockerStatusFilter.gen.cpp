// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EFindInteractableLockerStatusFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFindInteractableLockerStatusFilter() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EFindInteractableLockerStatusFilter();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EFindInteractableLockerStatusFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EFindInteractableLockerStatusFilter, Z_Construct_UPackage__Script_DBDBots(), TEXT("EFindInteractableLockerStatusFilter"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractableLockerStatusFilter>()
	{
		return EFindInteractableLockerStatusFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFindInteractableLockerStatusFilter(EFindInteractableLockerStatusFilter_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EFindInteractableLockerStatusFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EFindInteractableLockerStatusFilter_Hash() { return 151993798U; }
	UEnum* Z_Construct_UEnum_DBDBots_EFindInteractableLockerStatusFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFindInteractableLockerStatusFilter"), 0, Get_Z_Construct_UEnum_DBDBots_EFindInteractableLockerStatusFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFindInteractableLockerStatusFilter::Empty", (int64)EFindInteractableLockerStatusFilter::Empty },
				{ "EFindInteractableLockerStatusFilter::Occupied", (int64)EFindInteractableLockerStatusFilter::Occupied },
				{ "EFindInteractableLockerStatusFilter::Both", (int64)EFindInteractableLockerStatusFilter::Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Both.Name", "EFindInteractableLockerStatusFilter::Both" },
				{ "Empty.Name", "EFindInteractableLockerStatusFilter::Empty" },
				{ "ModuleRelativePath", "Public/EFindInteractableLockerStatusFilter.h" },
				{ "Occupied.Name", "EFindInteractableLockerStatusFilter::Occupied" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EFindInteractableLockerStatusFilter",
				"EFindInteractableLockerStatusFilter",
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
