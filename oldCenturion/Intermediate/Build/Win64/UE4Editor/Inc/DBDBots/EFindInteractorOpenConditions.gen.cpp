// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EFindInteractorOpenConditions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFindInteractorOpenConditions() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EFindInteractorOpenConditions();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EFindInteractorOpenConditions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EFindInteractorOpenConditions, Z_Construct_UPackage__Script_DBDBots(), TEXT("EFindInteractorOpenConditions"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EFindInteractorOpenConditions>()
	{
		return EFindInteractorOpenConditions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFindInteractorOpenConditions(EFindInteractorOpenConditions_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EFindInteractorOpenConditions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EFindInteractorOpenConditions_Hash() { return 1008337577U; }
	UEnum* Z_Construct_UEnum_DBDBots_EFindInteractorOpenConditions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFindInteractorOpenConditions"), 0, Get_Z_Construct_UEnum_DBDBots_EFindInteractorOpenConditions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFindInteractorOpenConditions::AllGate_OpenedHatch", (int64)EFindInteractorOpenConditions::AllGate_OpenedHatch },
				{ "EFindInteractorOpenConditions::All", (int64)EFindInteractorOpenConditions::All },
				{ "EFindInteractorOpenConditions::ClosedOnly", (int64)EFindInteractorOpenConditions::ClosedOnly },
				{ "EFindInteractorOpenConditions::OpenedOnly", (int64)EFindInteractorOpenConditions::OpenedOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EFindInteractorOpenConditions::All" },
				{ "AllGate_OpenedHatch.Name", "EFindInteractorOpenConditions::AllGate_OpenedHatch" },
				{ "ClosedOnly.Name", "EFindInteractorOpenConditions::ClosedOnly" },
				{ "ModuleRelativePath", "Public/EFindInteractorOpenConditions.h" },
				{ "OpenedOnly.Name", "EFindInteractorOpenConditions::OpenedOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EFindInteractorOpenConditions",
				"EFindInteractorOpenConditions",
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
