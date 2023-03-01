// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EReverseBearTrapUIState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEReverseBearTrapUIState() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EReverseBearTrapUIState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EReverseBearTrapUIState"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EReverseBearTrapUIState>()
	{
		return EReverseBearTrapUIState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReverseBearTrapUIState(EReverseBearTrapUIState_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EReverseBearTrapUIState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState_Hash() { return 2534065701U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReverseBearTrapUIState"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReverseBearTrapUIState::Off", (int64)EReverseBearTrapUIState::Off },
				{ "EReverseBearTrapUIState::Stage1", (int64)EReverseBearTrapUIState::Stage1 },
				{ "EReverseBearTrapUIState::Stage2", (int64)EReverseBearTrapUIState::Stage2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EReverseBearTrapUIState.h" },
				{ "Off.Name", "EReverseBearTrapUIState::Off" },
				{ "Stage1.Name", "EReverseBearTrapUIState::Stage1" },
				{ "Stage2.Name", "EReverseBearTrapUIState::Stage2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EReverseBearTrapUIState",
				"EReverseBearTrapUIState",
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
