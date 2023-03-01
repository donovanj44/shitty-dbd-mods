// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/EAIObjectiveState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIObjectiveState() {}
// Cross Module References
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAIObjectiveState();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	static UEnum* EAIObjectiveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDBots_EAIObjectiveState, Z_Construct_UPackage__Script_DBDBots(), TEXT("EAIObjectiveState"));
		}
		return Singleton;
	}
	template<> DBDBOTS_API UEnum* StaticEnum<EAIObjectiveState>()
	{
		return EAIObjectiveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIObjectiveState(EAIObjectiveState_StaticEnum, TEXT("/Script/DBDBots"), TEXT("EAIObjectiveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDBots_EAIObjectiveState_Hash() { return 1932779563U; }
	UEnum* Z_Construct_UEnum_DBDBots_EAIObjectiveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIObjectiveState"), 0, Get_Z_Construct_UEnum_DBDBots_EAIObjectiveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIObjectiveState::Early", (int64)EAIObjectiveState::Early },
				{ "EAIObjectiveState::Mid", (int64)EAIObjectiveState::Mid },
				{ "EAIObjectiveState::Last", (int64)EAIObjectiveState::Last },
				{ "EAIObjectiveState::Completed", (int64)EAIObjectiveState::Completed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Completed.Name", "EAIObjectiveState::Completed" },
				{ "Early.Name", "EAIObjectiveState::Early" },
				{ "Last.Name", "EAIObjectiveState::Last" },
				{ "Mid.Name", "EAIObjectiveState::Mid" },
				{ "ModuleRelativePath", "Public/EAIObjectiveState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDBots,
				nullptr,
				"EAIObjectiveState",
				"EAIObjectiveState",
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
