// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/ENavLinkPlayerStates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENavLinkPlayerStates() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_ENavLinkPlayerStates();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* ENavLinkPlayerStates_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_ENavLinkPlayerStates, Z_Construct_UPackage__Script_DBDBots(), TEXT("ENavLinkPlayerStates"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<ENavLinkPlayerStates>()
	{
		return ENavLinkPlayerStates_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENavLinkPlayerStates(ENavLinkPlayerStates_StaticEnum, TEXT("/Script/DBDBots"), TEXT("ENavLinkPlayerStates"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_ENavLinkPlayerStates_Hash() { return 3470663638U; }
	UEnum* Z_Construct_UEnum_DBDBots_ENavLinkPlayerStates()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENavLinkPlayerStates"), 0, Get_Z_Construct_UEnum_DBDBots_ENavLinkPlayerStates_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENavLinkPlayerStates::RequestStart", (int64)ENavLinkPlayerStates::RequestStart },
				{ "ENavLinkPlayerStates::MoveStart", (int64)ENavLinkPlayerStates::MoveStart },
				{ "ENavLinkPlayerStates::Using", (int64)ENavLinkPlayerStates::Using },
				{ "ENavLinkPlayerStates::MoveEnd", (int64)ENavLinkPlayerStates::MoveEnd },
				{ "ENavLinkPlayerStates::Release", (int64)ENavLinkPlayerStates::Release },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ENavLinkPlayerStates.h" },
				{ "MoveEnd.Name", "ENavLinkPlayerStates::MoveEnd" },
				{ "MoveStart.Name", "ENavLinkPlayerStates::MoveStart" },
				{ "Release.Name", "ENavLinkPlayerStates::Release" },
				{ "RequestStart.Name", "ENavLinkPlayerStates::RequestStart" },
				{ "Using.Name", "ENavLinkPlayerStates::Using" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"ENavLinkPlayerStates",
				"ENavLinkPlayerStates",
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
