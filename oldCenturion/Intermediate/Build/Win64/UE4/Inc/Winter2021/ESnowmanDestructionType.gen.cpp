// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Winter2021/Public/ESnowmanDestructionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESnowmanDestructionType() {}
// Cross Module References
	WINTER2021_API UEnum* Z_Construct_UEnum_Winter2021_ESnowmanDestructionType();
	UPackage* Z_Construct_UPackage__Script_Winter2021();
// End Cross Module References
	static UEnum* ESnowmanDestructionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Winter2021_ESnowmanDestructionType, Z_Construct_UPackage__Script_Winter2021(), TEXT("ESnowmanDestructionType"));
		}
		return Singleton;
	}
	template<> WINTER2021_API UEnum* StaticEnum<ESnowmanDestructionType>()
	{
		return ESnowmanDestructionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESnowmanDestructionType(ESnowmanDestructionType_StaticEnum, TEXT("/Script/Winter2021"), TEXT("ESnowmanDestructionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Winter2021_ESnowmanDestructionType_Hash() { return 2366644738U; }
	UEnum* Z_Construct_UEnum_Winter2021_ESnowmanDestructionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Winter2021();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESnowmanDestructionType"), 0, Get_Z_Construct_UEnum_Winter2021_ESnowmanDestructionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESnowmanDestructionType::None", (int64)ESnowmanDestructionType::None },
				{ "ESnowmanDestructionType::SurvivorRunExit", (int64)ESnowmanDestructionType::SurvivorRunExit },
				{ "ESnowmanDestructionType::KillerAttackWhileControlled", (int64)ESnowmanDestructionType::KillerAttackWhileControlled },
				{ "ESnowmanDestructionType::KillerAttackWhileEmpty", (int64)ESnowmanDestructionType::KillerAttackWhileEmpty },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "KillerAttackWhileControlled.Name", "ESnowmanDestructionType::KillerAttackWhileControlled" },
				{ "KillerAttackWhileEmpty.Name", "ESnowmanDestructionType::KillerAttackWhileEmpty" },
				{ "ModuleRelativePath", "Public/ESnowmanDestructionType.h" },
				{ "None.Name", "ESnowmanDestructionType::None" },
				{ "SurvivorRunExit.Name", "ESnowmanDestructionType::SurvivorRunExit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Winter2021,
				nullptr,
				"ESnowmanDestructionType",
				"ESnowmanDestructionType",
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
