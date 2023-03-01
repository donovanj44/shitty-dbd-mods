// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ETutorialObjectivePlayerActionMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeETutorialObjectivePlayerActionMapping() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* ETutorialObjectivePlayerActionMapping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ETutorialObjectivePlayerActionMapping"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<ETutorialObjectivePlayerActionMapping>()
	{
		return ETutorialObjectivePlayerActionMapping_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETutorialObjectivePlayerActionMapping(ETutorialObjectivePlayerActionMapping_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("ETutorialObjectivePlayerActionMapping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping_Hash() { return 1237726761U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETutorialObjectivePlayerActionMapping"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_ETutorialObjectivePlayerActionMapping_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETutorialObjectivePlayerActionMapping::None", (int64)ETutorialObjectivePlayerActionMapping::None },
				{ "ETutorialObjectivePlayerActionMapping::Action_Camper", (int64)ETutorialObjectivePlayerActionMapping::Action_Camper },
				{ "ETutorialObjectivePlayerActionMapping::Interact_Camper", (int64)ETutorialObjectivePlayerActionMapping::Interact_Camper },
				{ "ETutorialObjectivePlayerActionMapping::Interact_Slasher", (int64)ETutorialObjectivePlayerActionMapping::Interact_Slasher },
				{ "ETutorialObjectivePlayerActionMapping::Run_Camper", (int64)ETutorialObjectivePlayerActionMapping::Run_Camper },
				{ "ETutorialObjectivePlayerActionMapping::Attack_Slasher", (int64)ETutorialObjectivePlayerActionMapping::Attack_Slasher },
				{ "ETutorialObjectivePlayerActionMapping::SecondaryAction_Camper", (int64)ETutorialObjectivePlayerActionMapping::SecondaryAction_Camper },
				{ "ETutorialObjectivePlayerActionMapping::ItemUse_Camper", (int64)ETutorialObjectivePlayerActionMapping::ItemUse_Camper },
				{ "ETutorialObjectivePlayerActionMapping::Crouch", (int64)ETutorialObjectivePlayerActionMapping::Crouch },
				{ "ETutorialObjectivePlayerActionMapping::ItemDrop_Camper", (int64)ETutorialObjectivePlayerActionMapping::ItemDrop_Camper },
				{ "ETutorialObjectivePlayerActionMapping::ItemUse_Slasher", (int64)ETutorialObjectivePlayerActionMapping::ItemUse_Slasher },
				{ "ETutorialObjectivePlayerActionMapping::ItemDrop_Slasher", (int64)ETutorialObjectivePlayerActionMapping::ItemDrop_Slasher },
				{ "ETutorialObjectivePlayerActionMapping::Mash_Camper", (int64)ETutorialObjectivePlayerActionMapping::Mash_Camper },
				{ "ETutorialObjectivePlayerActionMapping::FastInteract_Camper", (int64)ETutorialObjectivePlayerActionMapping::FastInteract_Camper },
				{ "ETutorialObjectivePlayerActionMapping::SecondaryAction_Slasher", (int64)ETutorialObjectivePlayerActionMapping::SecondaryAction_Slasher },
				{ "ETutorialObjectivePlayerActionMapping::Action_Slasher", (int64)ETutorialObjectivePlayerActionMapping::Action_Slasher },
				{ "ETutorialObjectivePlayerActionMapping::Struggle", (int64)ETutorialObjectivePlayerActionMapping::Struggle },
				{ "ETutorialObjectivePlayerActionMapping::MoveAxes", (int64)ETutorialObjectivePlayerActionMapping::MoveAxes },
				{ "ETutorialObjectivePlayerActionMapping::LookAxes", (int64)ETutorialObjectivePlayerActionMapping::LookAxes },
				{ "ETutorialObjectivePlayerActionMapping::Count", (int64)ETutorialObjectivePlayerActionMapping::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Action_Camper.Name", "ETutorialObjectivePlayerActionMapping::Action_Camper" },
				{ "Action_Slasher.Name", "ETutorialObjectivePlayerActionMapping::Action_Slasher" },
				{ "Attack_Slasher.Name", "ETutorialObjectivePlayerActionMapping::Attack_Slasher" },
				{ "BlueprintType", "true" },
				{ "Count.Name", "ETutorialObjectivePlayerActionMapping::Count" },
				{ "Crouch.Name", "ETutorialObjectivePlayerActionMapping::Crouch" },
				{ "FastInteract_Camper.Name", "ETutorialObjectivePlayerActionMapping::FastInteract_Camper" },
				{ "Interact_Camper.Name", "ETutorialObjectivePlayerActionMapping::Interact_Camper" },
				{ "Interact_Slasher.Name", "ETutorialObjectivePlayerActionMapping::Interact_Slasher" },
				{ "ItemDrop_Camper.Name", "ETutorialObjectivePlayerActionMapping::ItemDrop_Camper" },
				{ "ItemDrop_Slasher.Name", "ETutorialObjectivePlayerActionMapping::ItemDrop_Slasher" },
				{ "ItemUse_Camper.Name", "ETutorialObjectivePlayerActionMapping::ItemUse_Camper" },
				{ "ItemUse_Slasher.Name", "ETutorialObjectivePlayerActionMapping::ItemUse_Slasher" },
				{ "LookAxes.Name", "ETutorialObjectivePlayerActionMapping::LookAxes" },
				{ "Mash_Camper.Name", "ETutorialObjectivePlayerActionMapping::Mash_Camper" },
				{ "ModuleRelativePath", "Public/ETutorialObjectivePlayerActionMapping.h" },
				{ "MoveAxes.Name", "ETutorialObjectivePlayerActionMapping::MoveAxes" },
				{ "None.Name", "ETutorialObjectivePlayerActionMapping::None" },
				{ "Run_Camper.Name", "ETutorialObjectivePlayerActionMapping::Run_Camper" },
				{ "SecondaryAction_Camper.Name", "ETutorialObjectivePlayerActionMapping::SecondaryAction_Camper" },
				{ "SecondaryAction_Slasher.Name", "ETutorialObjectivePlayerActionMapping::SecondaryAction_Slasher" },
				{ "Struggle.Name", "ETutorialObjectivePlayerActionMapping::Struggle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"ETutorialObjectivePlayerActionMapping",
				"ETutorialObjectivePlayerActionMapping",
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
