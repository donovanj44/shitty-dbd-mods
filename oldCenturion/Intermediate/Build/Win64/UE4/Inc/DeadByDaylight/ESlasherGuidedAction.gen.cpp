// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ESlasherGuidedAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESlasherGuidedAction() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESlasherGuidedAction();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ESlasherGuidedAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ESlasherGuidedAction, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ESlasherGuidedAction"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESlasherGuidedAction>()
	{
		return ESlasherGuidedAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlasherGuidedAction(ESlasherGuidedAction_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ESlasherGuidedAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ESlasherGuidedAction_Hash() { return 4271473932U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ESlasherGuidedAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlasherGuidedAction"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ESlasherGuidedAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlasherGuidedAction::VE_None", (int64)ESlasherGuidedAction::VE_None },
				{ "ESlasherGuidedAction::VE_Hooking", (int64)ESlasherGuidedAction::VE_Hooking },
				{ "ESlasherGuidedAction::VE_PickingUp", (int64)ESlasherGuidedAction::VE_PickingUp },
				{ "ESlasherGuidedAction::VE_PuttingDown", (int64)ESlasherGuidedAction::VE_PuttingDown },
				{ "ESlasherGuidedAction::VE_MAX", (int64)ESlasherGuidedAction::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ESlasherGuidedAction.h" },
				{ "VE_Hooking.Name", "ESlasherGuidedAction::VE_Hooking" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "ESlasherGuidedAction::VE_MAX" },
				{ "VE_None.Name", "ESlasherGuidedAction::VE_None" },
				{ "VE_PickingUp.Name", "ESlasherGuidedAction::VE_PickingUp" },
				{ "VE_PuttingDown.Name", "ESlasherGuidedAction::VE_PuttingDown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ESlasherGuidedAction",
				"ESlasherGuidedAction",
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
