// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/EComparisonOperation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEComparisonOperation() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UEnum* Z_Construct_UEnum_GameplayUtilities_EComparisonOperation();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	static UEnum* EComparisonOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayUtilities_EComparisonOperation, Z_Construct_UPackage__Script_GameplayUtilities(), TEXT("EComparisonOperation"));
		}
		return Singleton;
	}
	template<> GAMEPLAYUTILITIES_API UEnum* StaticEnum<EComparisonOperation>()
	{
		return EComparisonOperation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComparisonOperation(EComparisonOperation_StaticEnum, TEXT("/Script/GameplayUtilities"), TEXT("EComparisonOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayUtilities_EComparisonOperation_Hash() { return 3058898358U; }
	UEnum* Z_Construct_UEnum_GameplayUtilities_EComparisonOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComparisonOperation"), 0, Get_Z_Construct_UEnum_GameplayUtilities_EComparisonOperation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComparisonOperation::EqualTo", (int64)EComparisonOperation::EqualTo },
				{ "EComparisonOperation::NotEqualTo", (int64)EComparisonOperation::NotEqualTo },
				{ "EComparisonOperation::GreaterThan", (int64)EComparisonOperation::GreaterThan },
				{ "EComparisonOperation::GreaterThanOrEqualTo", (int64)EComparisonOperation::GreaterThanOrEqualTo },
				{ "EComparisonOperation::LesserThan", (int64)EComparisonOperation::LesserThan },
				{ "EComparisonOperation::LesserThanOrEqualTo", (int64)EComparisonOperation::LesserThanOrEqualTo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EqualTo.Name", "EComparisonOperation::EqualTo" },
				{ "GreaterThan.Name", "EComparisonOperation::GreaterThan" },
				{ "GreaterThanOrEqualTo.Name", "EComparisonOperation::GreaterThanOrEqualTo" },
				{ "LesserThan.Name", "EComparisonOperation::LesserThan" },
				{ "LesserThanOrEqualTo.Name", "EComparisonOperation::LesserThanOrEqualTo" },
				{ "ModuleRelativePath", "Public/EComparisonOperation.h" },
				{ "NotEqualTo.Name", "EComparisonOperation::NotEqualTo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayUtilities,
				nullptr,
				"EComparisonOperation",
				"EComparisonOperation",
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
