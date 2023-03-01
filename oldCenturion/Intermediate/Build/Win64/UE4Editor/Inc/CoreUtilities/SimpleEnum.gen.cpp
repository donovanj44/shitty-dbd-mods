// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtilities/Public/SimpleEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleEnum() {}
// Cross Module References
	COREUTILITIES_API UEnum* Z_Construct_UEnum_CoreUtilities_SimpleEnum();
	UPackage* Z_Construct_UPackage__Script_CoreUtilities();
// End Cross Module References
	static UEnum* SimpleEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoreUtilities_SimpleEnum, Z_Construct_UPackage__Script_CoreUtilities(), TEXT("SimpleEnum"));
		}
		return Singleton;
	}
	template<> COREUTILITIES_API UEnum* StaticEnum<SimpleEnum>()
	{
		return SimpleEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SimpleEnum(SimpleEnum_StaticEnum, TEXT("/Script/CoreUtilities"), TEXT("SimpleEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoreUtilities_SimpleEnum_Hash() { return 3528240534U; }
	UEnum* Z_Construct_UEnum_CoreUtilities_SimpleEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SimpleEnum"), 0, Get_Z_Construct_UEnum_CoreUtilities_SimpleEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SimpleEnum::Value1", (int64)SimpleEnum::Value1 },
				{ "SimpleEnum::Value2", (int64)SimpleEnum::Value2 },
				{ "SimpleEnum::Value3", (int64)SimpleEnum::Value3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SimpleEnum.h" },
				{ "Value1.Name", "SimpleEnum::Value1" },
				{ "Value2.Name", "SimpleEnum::Value2" },
				{ "Value3.Name", "SimpleEnum::Value3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoreUtilities,
				nullptr,
				"SimpleEnum",
				"SimpleEnum",
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
