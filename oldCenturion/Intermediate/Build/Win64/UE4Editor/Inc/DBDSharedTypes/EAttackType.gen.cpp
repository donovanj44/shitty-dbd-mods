// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EAttackType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttackType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EAttackType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EAttackType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EAttackType>()
	{
		return EAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttackType(EAttackType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EAttackType_Hash() { return 3980785965U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttackType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttackType::VE_None", (int64)EAttackType::VE_None },
				{ "EAttackType::VE_Slash", (int64)EAttackType::VE_Slash },
				{ "EAttackType::VE_Pounce", (int64)EAttackType::VE_Pounce },
				{ "EAttackType::VE_Chainsaw", (int64)EAttackType::VE_Chainsaw },
				{ "EAttackType::VE_Blink", (int64)EAttackType::VE_Blink },
				{ "EAttackType::VE_LFChainsaw", (int64)EAttackType::VE_LFChainsaw },
				{ "EAttackType::VE_Ambush", (int64)EAttackType::VE_Ambush },
				{ "EAttackType::VE_Frenzy", (int64)EAttackType::VE_Frenzy },
				{ "EAttackType::VE_GhostCrouch", (int64)EAttackType::VE_GhostCrouch },
				{ "EAttackType::VE_QatarDash", (int64)EAttackType::VE_QatarDash },
				{ "EAttackType::VE_OniBasicAttack", (int64)EAttackType::VE_OniBasicAttack },
				{ "EAttackType::VE_OniDemonBasicAttack", (int64)EAttackType::VE_OniDemonBasicAttack },
				{ "EAttackType::VE_OniDemonPowerAttack", (int64)EAttackType::VE_OniDemonPowerAttack },
				{ "EAttackType::VE_OniDemonDashAttack", (int64)EAttackType::VE_OniDemonDashAttack },
				{ "EAttackType::VE_ExecutionerTormentAttack", (int64)EAttackType::VE_ExecutionerTormentAttack },
				{ "EAttackType::VE_BlightDash", (int64)EAttackType::VE_BlightDash },
				{ "EAttackType::VE_TwinJump", (int64)EAttackType::VE_TwinJump },
				{ "EAttackType::VE_K24WhipAttack", (int64)EAttackType::VE_K24WhipAttack },
				{ "EAttackType::VE_MAX", (int64)EAttackType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EAttackType.h" },
				{ "VE_Ambush.Name", "EAttackType::VE_Ambush" },
				{ "VE_BlightDash.Name", "EAttackType::VE_BlightDash" },
				{ "VE_Blink.Name", "EAttackType::VE_Blink" },
				{ "VE_Chainsaw.Name", "EAttackType::VE_Chainsaw" },
				{ "VE_ExecutionerTormentAttack.Name", "EAttackType::VE_ExecutionerTormentAttack" },
				{ "VE_Frenzy.Name", "EAttackType::VE_Frenzy" },
				{ "VE_GhostCrouch.Name", "EAttackType::VE_GhostCrouch" },
				{ "VE_K24WhipAttack.Name", "EAttackType::VE_K24WhipAttack" },
				{ "VE_LFChainsaw.Name", "EAttackType::VE_LFChainsaw" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EAttackType::VE_MAX" },
				{ "VE_None.Name", "EAttackType::VE_None" },
				{ "VE_OniBasicAttack.Name", "EAttackType::VE_OniBasicAttack" },
				{ "VE_OniDemonBasicAttack.Name", "EAttackType::VE_OniDemonBasicAttack" },
				{ "VE_OniDemonDashAttack.Name", "EAttackType::VE_OniDemonDashAttack" },
				{ "VE_OniDemonPowerAttack.Name", "EAttackType::VE_OniDemonPowerAttack" },
				{ "VE_Pounce.Name", "EAttackType::VE_Pounce" },
				{ "VE_QatarDash.Name", "EAttackType::VE_QatarDash" },
				{ "VE_Slash.Name", "EAttackType::VE_Slash" },
				{ "VE_TwinJump.Name", "EAttackType::VE_TwinJump" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EAttackType",
				"EAttackType",
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
