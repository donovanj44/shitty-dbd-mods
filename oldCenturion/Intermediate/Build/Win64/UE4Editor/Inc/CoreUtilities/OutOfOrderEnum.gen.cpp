// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtilities/Public/OutOfOrderEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutOfOrderEnum() {}
// Cross Module References
	COREUTILITIES_API UEnum* Z_Construct_UEnum_CoreUtilities_OutOfOrderEnum();
	UPackage* Z_Construct_UPackage__Script_CoreUtilities();
// End Cross Module References
	static UEnum* OutOfOrderEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoreUtilities_OutOfOrderEnum, Z_Construct_UPackage__Script_CoreUtilities(), TEXT("OutOfOrderEnum"));
		}
		return Singleton;
	}
	template<> COREUTILITIES_API UEnum* StaticEnum<OutOfOrderEnum>()
	{
		return OutOfOrderEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_OutOfOrderEnum(OutOfOrderEnum_StaticEnum, TEXT("/Script/CoreUtilities"), TEXT("OutOfOrderEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoreUtilities_OutOfOrderEnum_Hash() { return 3334658496U; }
	UEnum* Z_Construct_UEnum_CoreUtilities_OutOfOrderEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("OutOfOrderEnum"), 0, Get_Z_Construct_UEnum_CoreUtilities_OutOfOrderEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OutOfOrderEnum::Value1", (int64)OutOfOrderEnum::Value1 },
				{ "OutOfOrderEnum::Value2", (int64)OutOfOrderEnum::Value2 },
				{ "OutOfOrderEnum::Value3", (int64)OutOfOrderEnum::Value3 },
				{ "OutOfOrderEnum::OutOfOrderEnum_MAX", (int64)OutOfOrderEnum::OutOfOrderEnum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/OutOfOrderEnum.h" },
				{ "OutOfOrderEnum_MAX.Name", "OutOfOrderEnum::OutOfOrderEnum_MAX" },
				{ "Value1.Name", "OutOfOrderEnum::Value1" },
				{ "Value2.Name", "OutOfOrderEnum::Value2" },
				{ "Value3.Name", "OutOfOrderEnum::Value3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoreUtilities,
				nullptr,
				"OutOfOrderEnum",
				"OutOfOrderEnum",
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
