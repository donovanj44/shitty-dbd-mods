// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/FK26AttachedCrowRemovalReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFK26AttachedCrowRemovalReason() {}
// Cross Module References
	THEK26_API UEnum* Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason();
	UPackage* Z_Construct_UPackage__Script_TheK26();
// End Cross Module References
	static UEnum* FK26AttachedCrowRemovalReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason, Z_Construct_UPackage__Script_TheK26(), TEXT("FK26AttachedCrowRemovalReason"));
		}
		return Singleton;
	}
	template<> THEK26_API UEnum* StaticEnum<FK26AttachedCrowRemovalReason>()
	{
		return FK26AttachedCrowRemovalReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FK26AttachedCrowRemovalReason(FK26AttachedCrowRemovalReason_StaticEnum, TEXT("/Script/TheK26"), TEXT("FK26AttachedCrowRemovalReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason_Hash() { return 1878355048U; }
	UEnum* Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK26();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FK26AttachedCrowRemovalReason"), 0, Get_Z_Construct_UEnum_TheK26_FK26AttachedCrowRemovalReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FK26AttachedCrowRemovalReason::Invalid", (int64)FK26AttachedCrowRemovalReason::Invalid },
				{ "FK26AttachedCrowRemovalReason::LockerEnter", (int64)FK26AttachedCrowRemovalReason::LockerEnter },
				{ "FK26AttachedCrowRemovalReason::SurvivorDamagedByCrow", (int64)FK26AttachedCrowRemovalReason::SurvivorDamagedByCrow },
				{ "FK26AttachedCrowRemovalReason::SurvivorDowned", (int64)FK26AttachedCrowRemovalReason::SurvivorDowned },
				{ "FK26AttachedCrowRemovalReason::SurvivorPickedUp", (int64)FK26AttachedCrowRemovalReason::SurvivorPickedUp },
				{ "FK26AttachedCrowRemovalReason::CrowFlashlighted", (int64)FK26AttachedCrowRemovalReason::CrowFlashlighted },
				{ "FK26AttachedCrowRemovalReason::RemoveInteraction", (int64)FK26AttachedCrowRemovalReason::RemoveInteraction },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CrowFlashlighted.Name", "FK26AttachedCrowRemovalReason::CrowFlashlighted" },
				{ "Invalid.Name", "FK26AttachedCrowRemovalReason::Invalid" },
				{ "LockerEnter.Name", "FK26AttachedCrowRemovalReason::LockerEnter" },
				{ "ModuleRelativePath", "Public/FK26AttachedCrowRemovalReason.h" },
				{ "RemoveInteraction.Name", "FK26AttachedCrowRemovalReason::RemoveInteraction" },
				{ "SurvivorDamagedByCrow.Name", "FK26AttachedCrowRemovalReason::SurvivorDamagedByCrow" },
				{ "SurvivorDowned.Name", "FK26AttachedCrowRemovalReason::SurvivorDowned" },
				{ "SurvivorPickedUp.Name", "FK26AttachedCrowRemovalReason::SurvivorPickedUp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK26,
				nullptr,
				"FK26AttachedCrowRemovalReason",
				"FK26AttachedCrowRemovalReason",
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
