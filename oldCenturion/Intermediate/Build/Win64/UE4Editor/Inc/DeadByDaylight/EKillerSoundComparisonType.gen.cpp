// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EKillerSoundComparisonType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKillerSoundComparisonType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerSoundComparisonType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EKillerSoundComparisonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EKillerSoundComparisonType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EKillerSoundComparisonType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EKillerSoundComparisonType>()
	{
		return EKillerSoundComparisonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKillerSoundComparisonType(EKillerSoundComparisonType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EKillerSoundComparisonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EKillerSoundComparisonType_Hash() { return 1364140245U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EKillerSoundComparisonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKillerSoundComparisonType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EKillerSoundComparisonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKillerSoundComparisonType::Equal", (int64)EKillerSoundComparisonType::Equal },
				{ "EKillerSoundComparisonType::IsGreaterThan", (int64)EKillerSoundComparisonType::IsGreaterThan },
				{ "EKillerSoundComparisonType::IsLesserThan", (int64)EKillerSoundComparisonType::IsLesserThan },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equal.Name", "EKillerSoundComparisonType::Equal" },
				{ "IsGreaterThan.Name", "EKillerSoundComparisonType::IsGreaterThan" },
				{ "IsLesserThan.Name", "EKillerSoundComparisonType::IsLesserThan" },
				{ "ModuleRelativePath", "Public/EKillerSoundComparisonType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EKillerSoundComparisonType",
				"EKillerSoundComparisonType",
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
