// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EAIThrowProjectileModes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIThrowProjectileModes() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIThrowProjectileModes();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EAIThrowProjectileModes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EAIThrowProjectileModes, Z_Construct_UPackage__Script_DBDBots(), TEXT("EAIThrowProjectileModes"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EAIThrowProjectileModes>()
	{
		return EAIThrowProjectileModes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIThrowProjectileModes(EAIThrowProjectileModes_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EAIThrowProjectileModes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EAIThrowProjectileModes_Hash() { return 3105980265U; }
	UEnum* Z_Construct_UEnum_DBDBots_EAIThrowProjectileModes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIThrowProjectileModes"), 0, Get_Z_Construct_UEnum_DBDBots_EAIThrowProjectileModes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIThrowProjectileModes::OneShot", (int64)EAIThrowProjectileModes::OneShot },
				{ "EAIThrowProjectileModes::Continuous", (int64)EAIThrowProjectileModes::Continuous },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Continuous.Name", "EAIThrowProjectileModes::Continuous" },
				{ "ModuleRelativePath", "Public/EAIThrowProjectileModes.h" },
				{ "OneShot.Name", "EAIThrowProjectileModes::OneShot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EAIThrowProjectileModes",
				"EAIThrowProjectileModes",
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
