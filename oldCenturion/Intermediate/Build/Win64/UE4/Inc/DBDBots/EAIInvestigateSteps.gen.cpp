// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EAIInvestigateSteps.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIInvestigateSteps() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIInvestigateSteps();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EAIInvestigateSteps_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EAIInvestigateSteps, Z_Construct_UPackage__Script_DBDBots(), TEXT("EAIInvestigateSteps"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EAIInvestigateSteps>()
	{
		return EAIInvestigateSteps_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIInvestigateSteps(EAIInvestigateSteps_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EAIInvestigateSteps"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EAIInvestigateSteps_Hash() { return 4015037731U; }
	UEnum* Z_Construct_UEnum_DBDBots_EAIInvestigateSteps()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIInvestigateSteps"), 0, Get_Z_Construct_UEnum_DBDBots_EAIInvestigateSteps_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIInvestigateSteps::None", (int64)EAIInvestigateSteps::None },
				{ "EAIInvestigateSteps::ToInvestigation", (int64)EAIInvestigateSteps::ToInvestigation },
				{ "EAIInvestigateSteps::Investigating", (int64)EAIInvestigateSteps::Investigating },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Investigating.Name", "EAIInvestigateSteps::Investigating" },
				{ "ModuleRelativePath", "Public/EAIInvestigateSteps.h" },
				{ "None.Name", "EAIInvestigateSteps::None" },
				{ "ToInvestigation.Name", "EAIInvestigateSteps::ToInvestigation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EAIInvestigateSteps",
				"EAIInvestigateSteps",
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
