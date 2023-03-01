// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EKillerAbilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKillerAbilities() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EKillerAbilities_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EKillerAbilities"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EKillerAbilities>()
	{
		return EKillerAbilities_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKillerAbilities(EKillerAbilities_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EKillerAbilities"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities_Hash() { return 740590072U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKillerAbilities"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EKillerAbilities_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKillerAbilities::VE_None", (int64)EKillerAbilities::VE_None },
				{ "EKillerAbilities::VE_SpawnTraps", (int64)EKillerAbilities::VE_SpawnTraps },
				{ "EKillerAbilities::VE_Cloak", (int64)EKillerAbilities::VE_Cloak },
				{ "EKillerAbilities::VE_Chainsaw", (int64)EKillerAbilities::VE_Chainsaw },
				{ "EKillerAbilities::VE_Blink", (int64)EKillerAbilities::VE_Blink },
				{ "EKillerAbilities::VE_PhantomTrap", (int64)EKillerAbilities::VE_PhantomTrap },
				{ "EKillerAbilities::VE_Stalker", (int64)EKillerAbilities::VE_Stalker },
				{ "EKillerAbilities::VE_Killer07Ability", (int64)EKillerAbilities::VE_Killer07Ability },
				{ "EKillerAbilities::VE_Killer08Ability", (int64)EKillerAbilities::VE_Killer08Ability },
				{ "EKillerAbilities::VE_LFChainsaw", (int64)EKillerAbilities::VE_LFChainsaw },
				{ "EKillerAbilities::VE_InduceDreams", (int64)EKillerAbilities::VE_InduceDreams },
				{ "EKillerAbilities::VE_ReverseBearTrap", (int64)EKillerAbilities::VE_ReverseBearTrap },
				{ "EKillerAbilities::VE_GasBomb", (int64)EKillerAbilities::VE_GasBomb },
				{ "EKillerAbilities::VE_PhaseWalk", (int64)EKillerAbilities::VE_PhaseWalk },
				{ "EKillerAbilities::VE_Frenzy", (int64)EKillerAbilities::VE_Frenzy },
				{ "EKillerAbilities::VE_Vomit", (int64)EKillerAbilities::VE_Vomit },
				{ "EKillerAbilities::VE_GhostStalker", (int64)EKillerAbilities::VE_GhostStalker },
				{ "EKillerAbilities::VE_GroundPortals", (int64)EKillerAbilities::VE_GroundPortals },
				{ "EKillerAbilities::VE_DemonMode", (int64)EKillerAbilities::VE_DemonMode },
				{ "EKillerAbilities::VE_HarpoonRifle", (int64)EKillerAbilities::VE_HarpoonRifle },
				{ "EKillerAbilities::VE_TormentMode", (int64)EKillerAbilities::VE_TormentMode },
				{ "EKillerAbilities::VE_K21Power", (int64)EKillerAbilities::VE_K21Power },
				{ "EKillerAbilities::VE_K22Power", (int64)EKillerAbilities::VE_K22Power },
				{ "EKillerAbilities::VE_ThrowingKnives", (int64)EKillerAbilities::VE_ThrowingKnives },
				{ "EKillerAbilities::VE_K24Power", (int64)EKillerAbilities::VE_K24Power },
				{ "EKillerAbilities::VE_Zombies", (int64)EKillerAbilities::VE_Zombies },
				{ "EKillerAbilities::VE_K25Power", (int64)EKillerAbilities::VE_K25Power },
				{ "EKillerAbilities::VE_K26Power", (int64)EKillerAbilities::VE_K26Power },
				{ "EKillerAbilities::VE_MAX", (int64)EKillerAbilities::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EKillerAbilities.h" },
				{ "VE_Blink.Name", "EKillerAbilities::VE_Blink" },
				{ "VE_Chainsaw.Name", "EKillerAbilities::VE_Chainsaw" },
				{ "VE_Cloak.Name", "EKillerAbilities::VE_Cloak" },
				{ "VE_DemonMode.Name", "EKillerAbilities::VE_DemonMode" },
				{ "VE_Frenzy.Name", "EKillerAbilities::VE_Frenzy" },
				{ "VE_GasBomb.Name", "EKillerAbilities::VE_GasBomb" },
				{ "VE_GhostStalker.Name", "EKillerAbilities::VE_GhostStalker" },
				{ "VE_GroundPortals.Name", "EKillerAbilities::VE_GroundPortals" },
				{ "VE_HarpoonRifle.Name", "EKillerAbilities::VE_HarpoonRifle" },
				{ "VE_InduceDreams.Name", "EKillerAbilities::VE_InduceDreams" },
				{ "VE_K21Power.Name", "EKillerAbilities::VE_K21Power" },
				{ "VE_K22Power.Name", "EKillerAbilities::VE_K22Power" },
				{ "VE_K24Power.Name", "EKillerAbilities::VE_K24Power" },
				{ "VE_K25Power.Name", "EKillerAbilities::VE_K25Power" },
				{ "VE_K26Power.Name", "EKillerAbilities::VE_K26Power" },
				{ "VE_Killer07Ability.Name", "EKillerAbilities::VE_Killer07Ability" },
				{ "VE_Killer08Ability.Name", "EKillerAbilities::VE_Killer08Ability" },
				{ "VE_LFChainsaw.Name", "EKillerAbilities::VE_LFChainsaw" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EKillerAbilities::VE_MAX" },
				{ "VE_None.Name", "EKillerAbilities::VE_None" },
				{ "VE_PhantomTrap.Name", "EKillerAbilities::VE_PhantomTrap" },
				{ "VE_PhaseWalk.Name", "EKillerAbilities::VE_PhaseWalk" },
				{ "VE_ReverseBearTrap.Name", "EKillerAbilities::VE_ReverseBearTrap" },
				{ "VE_SpawnTraps.Name", "EKillerAbilities::VE_SpawnTraps" },
				{ "VE_Stalker.Name", "EKillerAbilities::VE_Stalker" },
				{ "VE_ThrowingKnives.Name", "EKillerAbilities::VE_ThrowingKnives" },
				{ "VE_TormentMode.Name", "EKillerAbilities::VE_TormentMode" },
				{ "VE_Vomit.Name", "EKillerAbilities::VE_Vomit" },
				{ "VE_Zombies.Name", "EKillerAbilities::VE_Zombies" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EKillerAbilities",
				"EKillerAbilities",
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
