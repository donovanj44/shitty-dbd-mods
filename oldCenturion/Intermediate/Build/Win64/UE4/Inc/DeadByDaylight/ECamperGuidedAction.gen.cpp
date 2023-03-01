// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ECamperGuidedAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECamperGuidedAction() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperGuidedAction();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ECamperGuidedAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ECamperGuidedAction, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ECamperGuidedAction"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECamperGuidedAction>()
	{
		return ECamperGuidedAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECamperGuidedAction(ECamperGuidedAction_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ECamperGuidedAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ECamperGuidedAction_Hash() { return 3842048418U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ECamperGuidedAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECamperGuidedAction"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ECamperGuidedAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECamperGuidedAction::VE_None", (int64)ECamperGuidedAction::VE_None },
				{ "ECamperGuidedAction::VE_PrepBeingKilled", (int64)ECamperGuidedAction::VE_PrepBeingKilled },
				{ "ECamperGuidedAction::VE_BeingKilled", (int64)ECamperGuidedAction::VE_BeingKilled },
				{ "ECamperGuidedAction::VE_PrepGuidedAction", (int64)ECamperGuidedAction::VE_PrepGuidedAction },
				{ "ECamperGuidedAction::VE_BeingHelpedOffHookFront", (int64)ECamperGuidedAction::VE_BeingHelpedOffHookFront },
				{ "ECamperGuidedAction::VE_BeingHelpedOffHookBack", (int64)ECamperGuidedAction::VE_BeingHelpedOffHookBack },
				{ "ECamperGuidedAction::VE_BeingPickedUp", (int64)ECamperGuidedAction::VE_BeingPickedUp },
				{ "ECamperGuidedAction::VE_BeingPutDown", (int64)ECamperGuidedAction::VE_BeingPutDown },
				{ "ECamperGuidedAction::VE_BeingCarried", (int64)ECamperGuidedAction::VE_BeingCarried },
				{ "ECamperGuidedAction::VE_BeingPutOnHook", (int64)ECamperGuidedAction::VE_BeingPutOnHook },
				{ "ECamperGuidedAction::VE_BeingHealed", (int64)ECamperGuidedAction::VE_BeingHealed },
				{ "ECamperGuidedAction::VE_BeingPulledFromCloset", (int64)ECamperGuidedAction::VE_BeingPulledFromCloset },
				{ "ECamperGuidedAction::VE_BeingHelpedFromTrap", (int64)ECamperGuidedAction::VE_BeingHelpedFromTrap },
				{ "ECamperGuidedAction::VE_AttachReverseBearTrap", (int64)ECamperGuidedAction::VE_AttachReverseBearTrap },
				{ "ECamperGuidedAction::VE_BeingMended", (int64)ECamperGuidedAction::VE_BeingMended },
				{ "ECamperGuidedAction::VE_BeingInjectedWithSerum", (int64)ECamperGuidedAction::VE_BeingInjectedWithSerum },
				{ "ECamperGuidedAction::VE_MAX", (int64)ECamperGuidedAction::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECamperGuidedAction.h" },
				{ "VE_AttachReverseBearTrap.Name", "ECamperGuidedAction::VE_AttachReverseBearTrap" },
				{ "VE_BeingCarried.Name", "ECamperGuidedAction::VE_BeingCarried" },
				{ "VE_BeingHealed.Name", "ECamperGuidedAction::VE_BeingHealed" },
				{ "VE_BeingHelpedFromTrap.Name", "ECamperGuidedAction::VE_BeingHelpedFromTrap" },
				{ "VE_BeingHelpedOffHookBack.Name", "ECamperGuidedAction::VE_BeingHelpedOffHookBack" },
				{ "VE_BeingHelpedOffHookFront.Name", "ECamperGuidedAction::VE_BeingHelpedOffHookFront" },
				{ "VE_BeingInjectedWithSerum.Name", "ECamperGuidedAction::VE_BeingInjectedWithSerum" },
				{ "VE_BeingKilled.Name", "ECamperGuidedAction::VE_BeingKilled" },
				{ "VE_BeingMended.Name", "ECamperGuidedAction::VE_BeingMended" },
				{ "VE_BeingPickedUp.Name", "ECamperGuidedAction::VE_BeingPickedUp" },
				{ "VE_BeingPulledFromCloset.Name", "ECamperGuidedAction::VE_BeingPulledFromCloset" },
				{ "VE_BeingPutDown.Name", "ECamperGuidedAction::VE_BeingPutDown" },
				{ "VE_BeingPutOnHook.Name", "ECamperGuidedAction::VE_BeingPutOnHook" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ECamperGuidedAction::VE_MAX" },
				{ "VE_None.Name", "ECamperGuidedAction::VE_None" },
				{ "VE_PrepBeingKilled.Name", "ECamperGuidedAction::VE_PrepBeingKilled" },
				{ "VE_PrepGuidedAction.Name", "ECamperGuidedAction::VE_PrepGuidedAction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ECamperGuidedAction",
				"ECamperGuidedAction",
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
