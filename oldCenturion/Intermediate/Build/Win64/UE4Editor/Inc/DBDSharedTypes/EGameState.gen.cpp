// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameState() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EGameState, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EGameState_Hash() { return 3565251964U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::VE_Active", (int64)EGameState::VE_Active },
				{ "EGameState::VE_Dead", (int64)EGameState::VE_Dead },
				{ "EGameState::VE_Escaped", (int64)EGameState::VE_Escaped },
				{ "EGameState::VE_EscapedInjured", (int64)EGameState::VE_EscapedInjured },
				{ "EGameState::VE_Sacrificed", (int64)EGameState::VE_Sacrificed },
				{ "EGameState::VE_None", (int64)EGameState::VE_None },
				{ "EGameState::VE_Disconnected", (int64)EGameState::VE_Disconnected },
				{ "EGameState::VE_ManuallyLeftMatch", (int64)EGameState::VE_ManuallyLeftMatch },
				{ "EGameState::VE_MAX", (int64)EGameState::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EGameState.h" },
				{ "VE_Active.Name", "EGameState::VE_Active" },
				{ "VE_Dead.Name", "EGameState::VE_Dead" },
				{ "VE_Disconnected.Name", "EGameState::VE_Disconnected" },
				{ "VE_Escaped.Name", "EGameState::VE_Escaped" },
				{ "VE_EscapedInjured.Name", "EGameState::VE_EscapedInjured" },
				{ "VE_ManuallyLeftMatch.Name", "EGameState::VE_ManuallyLeftMatch" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EGameState::VE_MAX" },
				{ "VE_None.Name", "EGameState::VE_None" },
				{ "VE_Sacrificed.Name", "EGameState::VE_Sacrificed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EGameState",
				"EGameState",
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
