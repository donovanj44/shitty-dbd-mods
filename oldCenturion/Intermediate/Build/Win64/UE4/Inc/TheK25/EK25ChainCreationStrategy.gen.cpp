// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/EK25ChainCreationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEK25ChainCreationStrategy() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainCreationStrategy();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* EK25ChainCreationStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_EK25ChainCreationStrategy, Z_Construct_UPackage__Script_TheK25(), TEXT("EK25ChainCreationStrategy"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<EK25ChainCreationStrategy>()
	{
		return EK25ChainCreationStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EK25ChainCreationStrategy(EK25ChainCreationStrategy_StaticEnum, TEXT("/Script/TheK25"), TEXT("EK25ChainCreationStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_EK25ChainCreationStrategy_Hash() { return 2653884477U; }
	UEnum* Z_Construct_UEnum_TheK25_EK25ChainCreationStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EK25ChainCreationStrategy"), 0, Get_Z_Construct_UEnum_TheK25_EK25ChainCreationStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EK25ChainCreationStrategy::Spline", (int64)EK25ChainCreationStrategy::Spline },
				{ "EK25ChainCreationStrategy::PassedPoints", (int64)EK25ChainCreationStrategy::PassedPoints },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EK25ChainCreationStrategy.h" },
				{ "PassedPoints.Name", "EK25ChainCreationStrategy::PassedPoints" },
				{ "Spline.Name", "EK25ChainCreationStrategy::Spline" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"EK25ChainCreationStrategy",
				"EK25ChainCreationStrategy",
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
