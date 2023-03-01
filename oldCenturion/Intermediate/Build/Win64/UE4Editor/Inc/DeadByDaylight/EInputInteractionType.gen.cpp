// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EInputInteractionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInputInteractionType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EInputInteractionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EInputInteractionType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInputInteractionType>()
	{
		return EInputInteractionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputInteractionType(EInputInteractionType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EInputInteractionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EInputInteractionType_Hash() { return 2467607225U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputInteractionType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EInputInteractionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputInteractionType::VE_None", (int64)EInputInteractionType::VE_None },
				{ "EInputInteractionType::VE_Interact", (int64)EInputInteractionType::VE_Interact },
				{ "EInputInteractionType::VE_AttackInteract", (int64)EInputInteractionType::VE_AttackInteract },
				{ "EInputInteractionType::VE_ItemInteract", (int64)EInputInteractionType::VE_ItemInteract },
				{ "EInputInteractionType::VE_Rush", (int64)EInputInteractionType::VE_Rush },
				{ "EInputInteractionType::VE_Run", (int64)EInputInteractionType::VE_Run },
				{ "EInputInteractionType::VE_ItemUse", (int64)EInputInteractionType::VE_ItemUse },
				{ "EInputInteractionType::VE_ItemDrop", (int64)EInputInteractionType::VE_ItemDrop },
				{ "EInputInteractionType::VE_InteractMash", (int64)EInputInteractionType::VE_InteractMash },
				{ "EInputInteractionType::VE_LeftRightMash", (int64)EInputInteractionType::VE_LeftRightMash },
				{ "EInputInteractionType::VE_ExternalRequestDrop", (int64)EInputInteractionType::VE_ExternalRequestDrop },
				{ "EInputInteractionType::VE_ExternalRequestFlashlightStunUncloak", (int64)EInputInteractionType::VE_ExternalRequestFlashlightStunUncloak },
				{ "EInputInteractionType::VE_ExternalRequestPalletStun", (int64)EInputInteractionType::VE_ExternalRequestPalletStun },
				{ "EInputInteractionType::VE_ExternalRequestStunUncloak", (int64)EInputInteractionType::VE_ExternalRequestStunUncloak },
				{ "EInputInteractionType::VE_ExternalRequestPalletStunUncloak", (int64)EInputInteractionType::VE_ExternalRequestPalletStunUncloak },
				{ "EInputInteractionType::VE_ExternalRequestStun", (int64)EInputInteractionType::VE_ExternalRequestStun },
				{ "EInputInteractionType::VE_ExternalRequestDropByStunning", (int64)EInputInteractionType::VE_ExternalRequestDropByStunning },
				{ "EInputInteractionType::VE_ExternalRequestDropByStunningByPallet", (int64)EInputInteractionType::VE_ExternalRequestDropByStunningByPallet },
				{ "EInputInteractionType::VE_ExternalRequestDropByWiggleFree", (int64)EInputInteractionType::VE_ExternalRequestDropByWiggleFree },
				{ "EInputInteractionType::VE_ExternalRequestDropBySkillCheck", (int64)EInputInteractionType::VE_ExternalRequestDropBySkillCheck },
				{ "EInputInteractionType::VE_ExternalRequestKillerCaughtInBearTrap", (int64)EInputInteractionType::VE_ExternalRequestKillerCaughtInBearTrap },
				{ "EInputInteractionType::VE_ExternalRequestDestroyWithPowerAttack", (int64)EInputInteractionType::VE_ExternalRequestDestroyWithPowerAttack },
				{ "EInputInteractionType::VE_ExternalRequestHarpoonRifleStun", (int64)EInputInteractionType::VE_ExternalRequestHarpoonRifleStun },
				{ "EInputInteractionType::VE_ExternalRequestGeneratorTrapStun", (int64)EInputInteractionType::VE_ExternalRequestGeneratorTrapStun },
				{ "EInputInteractionType::VE_FastInteract", (int64)EInputInteractionType::VE_FastInteract },
				{ "EInputInteractionType::VE_ExternalRequestSlashedOutOfTrap", (int64)EInputInteractionType::VE_ExternalRequestSlashedOutOfTrap },
				{ "EInputInteractionType::VE_ExternalRequestSacrifice", (int64)EInputInteractionType::VE_ExternalRequestSacrifice },
				{ "EInputInteractionType::VE_Gesture01", (int64)EInputInteractionType::VE_Gesture01 },
				{ "EInputInteractionType::VE_Gesture02", (int64)EInputInteractionType::VE_Gesture02 },
				{ "EInputInteractionType::VE_Gesture03", (int64)EInputInteractionType::VE_Gesture03 },
				{ "EInputInteractionType::VE_Gesture04", (int64)EInputInteractionType::VE_Gesture04 },
				{ "EInputInteractionType::VE_ExternalChainBlink", (int64)EInputInteractionType::VE_ExternalChainBlink },
				{ "EInputInteractionType::VE_ExternalRequestStunEvilWithin", (int64)EInputInteractionType::VE_ExternalRequestStunEvilWithin },
				{ "EInputInteractionType::VE_ExternalRequestKickStun", (int64)EInputInteractionType::VE_ExternalRequestKickStun },
				{ "EInputInteractionType::VE_ExternalRequestEscape", (int64)EInputInteractionType::VE_ExternalRequestEscape },
				{ "EInputInteractionType::VE_Struggle", (int64)EInputInteractionType::VE_Struggle },
				{ "EInputInteractionType::VE_Action", (int64)EInputInteractionType::VE_Action },
				{ "EInputInteractionType::VE_ExternalRequestPutToSleepStun", (int64)EInputInteractionType::VE_ExternalRequestPutToSleepStun },
				{ "EInputInteractionType::VE_Crouch", (int64)EInputInteractionType::VE_Crouch },
				{ "EInputInteractionType::VE_ExternalRequestRBTExecute", (int64)EInputInteractionType::VE_ExternalRequestRBTExecute },
				{ "EInputInteractionType::VE_ActionKiller", (int64)EInputInteractionType::VE_ActionKiller },
				{ "EInputInteractionType::VE_ExternalRequestRBTExecuteAtExit", (int64)EInputInteractionType::VE_ExternalRequestRBTExecuteAtExit },
				{ "EInputInteractionType::VE_ExternalRequestStunBySkillCheck", (int64)EInputInteractionType::VE_ExternalRequestStunBySkillCheck },
				{ "EInputInteractionType::VE_AbilityUse", (int64)EInputInteractionType::VE_AbilityUse },
				{ "EInputInteractionType::VE_ExternalRequestClosetStun", (int64)EInputInteractionType::VE_ExternalRequestClosetStun },
				{ "EInputInteractionType::VE_ExternalRequestClosetExitFast", (int64)EInputInteractionType::VE_ExternalRequestClosetExitFast },
				{ "EInputInteractionType::VE_ActivatablePerk01", (int64)EInputInteractionType::VE_ActivatablePerk01 },
				{ "EInputInteractionType::VE_ActivatablePerk02", (int64)EInputInteractionType::VE_ActivatablePerk02 },
				{ "EInputInteractionType::VE_ActivatablePerk03", (int64)EInputInteractionType::VE_ActivatablePerk03 },
				{ "EInputInteractionType::VE_ActivatablePerk04", (int64)EInputInteractionType::VE_ActivatablePerk04 },
				{ "EInputInteractionType::VE_CancelCharge", (int64)EInputInteractionType::VE_CancelCharge },
				{ "EInputInteractionType::VE_WiggleLeft", (int64)EInputInteractionType::VE_WiggleLeft },
				{ "EInputInteractionType::VE_WiggleRight", (int64)EInputInteractionType::VE_WiggleRight },
				{ "EInputInteractionType::VE_SecondaryAction", (int64)EInputInteractionType::VE_SecondaryAction },
				{ "EInputInteractionType::VE_Count", (int64)EInputInteractionType::VE_Count },
				{ "EInputInteractionType::VE_MAX", (int64)EInputInteractionType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EInputInteractionType.h" },
				{ "VE_AbilityUse.Name", "EInputInteractionType::VE_AbilityUse" },
				{ "VE_Action.Name", "EInputInteractionType::VE_Action" },
				{ "VE_ActionKiller.Name", "EInputInteractionType::VE_ActionKiller" },
				{ "VE_ActivatablePerk01.Name", "EInputInteractionType::VE_ActivatablePerk01" },
				{ "VE_ActivatablePerk02.Name", "EInputInteractionType::VE_ActivatablePerk02" },
				{ "VE_ActivatablePerk03.Name", "EInputInteractionType::VE_ActivatablePerk03" },
				{ "VE_ActivatablePerk04.Name", "EInputInteractionType::VE_ActivatablePerk04" },
				{ "VE_AttackInteract.Name", "EInputInteractionType::VE_AttackInteract" },
				{ "VE_CancelCharge.Name", "EInputInteractionType::VE_CancelCharge" },
				{ "VE_Count.Name", "EInputInteractionType::VE_Count" },
				{ "VE_Crouch.Name", "EInputInteractionType::VE_Crouch" },
				{ "VE_ExternalChainBlink.Name", "EInputInteractionType::VE_ExternalChainBlink" },
				{ "VE_ExternalRequestClosetExitFast.Name", "EInputInteractionType::VE_ExternalRequestClosetExitFast" },
				{ "VE_ExternalRequestClosetStun.Name", "EInputInteractionType::VE_ExternalRequestClosetStun" },
				{ "VE_ExternalRequestDestroyWithPowerAttack.Name", "EInputInteractionType::VE_ExternalRequestDestroyWithPowerAttack" },
				{ "VE_ExternalRequestDrop.Name", "EInputInteractionType::VE_ExternalRequestDrop" },
				{ "VE_ExternalRequestDropBySkillCheck.Name", "EInputInteractionType::VE_ExternalRequestDropBySkillCheck" },
				{ "VE_ExternalRequestDropByStunning.Name", "EInputInteractionType::VE_ExternalRequestDropByStunning" },
				{ "VE_ExternalRequestDropByStunningByPallet.Name", "EInputInteractionType::VE_ExternalRequestDropByStunningByPallet" },
				{ "VE_ExternalRequestDropByWiggleFree.Name", "EInputInteractionType::VE_ExternalRequestDropByWiggleFree" },
				{ "VE_ExternalRequestEscape.Name", "EInputInteractionType::VE_ExternalRequestEscape" },
				{ "VE_ExternalRequestFlashlightStunUncloak.Name", "EInputInteractionType::VE_ExternalRequestFlashlightStunUncloak" },
				{ "VE_ExternalRequestGeneratorTrapStun.Name", "EInputInteractionType::VE_ExternalRequestGeneratorTrapStun" },
				{ "VE_ExternalRequestHarpoonRifleStun.Name", "EInputInteractionType::VE_ExternalRequestHarpoonRifleStun" },
				{ "VE_ExternalRequestKickStun.Name", "EInputInteractionType::VE_ExternalRequestKickStun" },
				{ "VE_ExternalRequestKillerCaughtInBearTrap.Name", "EInputInteractionType::VE_ExternalRequestKillerCaughtInBearTrap" },
				{ "VE_ExternalRequestPalletStun.Name", "EInputInteractionType::VE_ExternalRequestPalletStun" },
				{ "VE_ExternalRequestPalletStunUncloak.Name", "EInputInteractionType::VE_ExternalRequestPalletStunUncloak" },
				{ "VE_ExternalRequestPutToSleepStun.Name", "EInputInteractionType::VE_ExternalRequestPutToSleepStun" },
				{ "VE_ExternalRequestRBTExecute.Name", "EInputInteractionType::VE_ExternalRequestRBTExecute" },
				{ "VE_ExternalRequestRBTExecuteAtExit.Name", "EInputInteractionType::VE_ExternalRequestRBTExecuteAtExit" },
				{ "VE_ExternalRequestSacrifice.Name", "EInputInteractionType::VE_ExternalRequestSacrifice" },
				{ "VE_ExternalRequestSlashedOutOfTrap.Name", "EInputInteractionType::VE_ExternalRequestSlashedOutOfTrap" },
				{ "VE_ExternalRequestStun.Name", "EInputInteractionType::VE_ExternalRequestStun" },
				{ "VE_ExternalRequestStunBySkillCheck.Name", "EInputInteractionType::VE_ExternalRequestStunBySkillCheck" },
				{ "VE_ExternalRequestStunEvilWithin.Name", "EInputInteractionType::VE_ExternalRequestStunEvilWithin" },
				{ "VE_ExternalRequestStunUncloak.Name", "EInputInteractionType::VE_ExternalRequestStunUncloak" },
				{ "VE_FastInteract.Name", "EInputInteractionType::VE_FastInteract" },
				{ "VE_Gesture01.Name", "EInputInteractionType::VE_Gesture01" },
				{ "VE_Gesture02.Name", "EInputInteractionType::VE_Gesture02" },
				{ "VE_Gesture03.Name", "EInputInteractionType::VE_Gesture03" },
				{ "VE_Gesture04.Name", "EInputInteractionType::VE_Gesture04" },
				{ "VE_Interact.Name", "EInputInteractionType::VE_Interact" },
				{ "VE_InteractMash.Name", "EInputInteractionType::VE_InteractMash" },
				{ "VE_ItemDrop.Name", "EInputInteractionType::VE_ItemDrop" },
				{ "VE_ItemInteract.Name", "EInputInteractionType::VE_ItemInteract" },
				{ "VE_ItemUse.Name", "EInputInteractionType::VE_ItemUse" },
				{ "VE_LeftRightMash.Name", "EInputInteractionType::VE_LeftRightMash" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EInputInteractionType::VE_MAX" },
				{ "VE_None.Name", "EInputInteractionType::VE_None" },
				{ "VE_Run.Name", "EInputInteractionType::VE_Run" },
				{ "VE_Rush.Name", "EInputInteractionType::VE_Rush" },
				{ "VE_SecondaryAction.Name", "EInputInteractionType::VE_SecondaryAction" },
				{ "VE_Struggle.Name", "EInputInteractionType::VE_Struggle" },
				{ "VE_WiggleLeft.Name", "EInputInteractionType::VE_WiggleLeft" },
				{ "VE_WiggleRight.Name", "EInputInteractionType::VE_WiggleRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EInputInteractionType",
				"EInputInteractionType",
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
