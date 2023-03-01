// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EInteractionAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInteractionAnimation() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EInteractionAnimation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EInteractionAnimation"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EInteractionAnimation>()
	{
		return EInteractionAnimation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionAnimation(EInteractionAnimation_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EInteractionAnimation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation_Hash() { return 1182960204U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionAnimation"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EInteractionAnimation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionAnimation::VE_None", (int64)EInteractionAnimation::VE_None },
				{ "EInteractionAnimation::VE_Generator", (int64)EInteractionAnimation::VE_Generator },
				{ "EInteractionAnimation::VE_PullDownLeft", (int64)EInteractionAnimation::VE_PullDownLeft },
				{ "EInteractionAnimation::VE_PullDownRight", (int64)EInteractionAnimation::VE_PullDownRight },
				{ "EInteractionAnimation::VE_Hiding", (int64)EInteractionAnimation::VE_Hiding },
				{ "EInteractionAnimation::VE_SearchCloset", (int64)EInteractionAnimation::VE_SearchCloset },
				{ "EInteractionAnimation::VE_HealingOther", (int64)EInteractionAnimation::VE_HealingOther },
				{ "EInteractionAnimation::VE_OpenEscape", (int64)EInteractionAnimation::VE_OpenEscape },
				{ "EInteractionAnimation::VE_StruggleFree", (int64)EInteractionAnimation::VE_StruggleFree },
				{ "EInteractionAnimation::VE_HealOther", (int64)EInteractionAnimation::VE_HealOther },
				{ "EInteractionAnimation::VE_HealSelf", (int64)EInteractionAnimation::VE_HealSelf },
				{ "EInteractionAnimation::VE_PickedUp", (int64)EInteractionAnimation::VE_PickedUp },
				{ "EInteractionAnimation::VE_Unused01", (int64)EInteractionAnimation::VE_Unused01 },
				{ "EInteractionAnimation::VE_Dropped", (int64)EInteractionAnimation::VE_Dropped },
				{ "EInteractionAnimation::VE_Unused02", (int64)EInteractionAnimation::VE_Unused02 },
				{ "EInteractionAnimation::VE_BeingHooked", (int64)EInteractionAnimation::VE_BeingHooked },
				{ "EInteractionAnimation::VE_Sabotage", (int64)EInteractionAnimation::VE_Sabotage },
				{ "EInteractionAnimation::VE_ChargeBlink", (int64)EInteractionAnimation::VE_ChargeBlink },
				{ "EInteractionAnimation::VE_ThrowFirecracker", (int64)EInteractionAnimation::VE_ThrowFirecracker },
				{ "EInteractionAnimation::VE_WakeUpOther", (int64)EInteractionAnimation::VE_WakeUpOther },
				{ "EInteractionAnimation::VE_RemoveReverseBearTrap", (int64)EInteractionAnimation::VE_RemoveReverseBearTrap },
				{ "EInteractionAnimation::VE_DeadHard", (int64)EInteractionAnimation::VE_DeadHard },
				{ "EInteractionAnimation::VE_DestroyPortal", (int64)EInteractionAnimation::VE_DestroyPortal },
				{ "EInteractionAnimation::VE_OniDash", (int64)EInteractionAnimation::VE_OniDash },
				{ "EInteractionAnimation::VE_PickUpAnniversaryCrown", (int64)EInteractionAnimation::VE_PickUpAnniversaryCrown },
				{ "EInteractionAnimation::VE_InteractWithGlyph", (int64)EInteractionAnimation::VE_InteractWithGlyph },
				{ "EInteractionAnimation::VE_OpenChest", (int64)EInteractionAnimation::VE_OpenChest },
				{ "EInteractionAnimation::VE_MAX", (int64)EInteractionAnimation::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EInteractionAnimation.h" },
				{ "VE_BeingHooked.Name", "EInteractionAnimation::VE_BeingHooked" },
				{ "VE_ChargeBlink.Name", "EInteractionAnimation::VE_ChargeBlink" },
				{ "VE_DeadHard.Name", "EInteractionAnimation::VE_DeadHard" },
				{ "VE_DestroyPortal.Name", "EInteractionAnimation::VE_DestroyPortal" },
				{ "VE_Dropped.Name", "EInteractionAnimation::VE_Dropped" },
				{ "VE_Generator.Name", "EInteractionAnimation::VE_Generator" },
				{ "VE_HealingOther.Name", "EInteractionAnimation::VE_HealingOther" },
				{ "VE_HealOther.Name", "EInteractionAnimation::VE_HealOther" },
				{ "VE_HealSelf.Name", "EInteractionAnimation::VE_HealSelf" },
				{ "VE_Hiding.Name", "EInteractionAnimation::VE_Hiding" },
				{ "VE_InteractWithGlyph.Name", "EInteractionAnimation::VE_InteractWithGlyph" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EInteractionAnimation::VE_MAX" },
				{ "VE_None.Name", "EInteractionAnimation::VE_None" },
				{ "VE_OniDash.Name", "EInteractionAnimation::VE_OniDash" },
				{ "VE_OpenChest.Name", "EInteractionAnimation::VE_OpenChest" },
				{ "VE_OpenEscape.Name", "EInteractionAnimation::VE_OpenEscape" },
				{ "VE_PickedUp.Name", "EInteractionAnimation::VE_PickedUp" },
				{ "VE_PickUpAnniversaryCrown.Name", "EInteractionAnimation::VE_PickUpAnniversaryCrown" },
				{ "VE_PullDownLeft.Name", "EInteractionAnimation::VE_PullDownLeft" },
				{ "VE_PullDownRight.Name", "EInteractionAnimation::VE_PullDownRight" },
				{ "VE_RemoveReverseBearTrap.Name", "EInteractionAnimation::VE_RemoveReverseBearTrap" },
				{ "VE_Sabotage.Name", "EInteractionAnimation::VE_Sabotage" },
				{ "VE_SearchCloset.Name", "EInteractionAnimation::VE_SearchCloset" },
				{ "VE_StruggleFree.Name", "EInteractionAnimation::VE_StruggleFree" },
				{ "VE_ThrowFirecracker.Name", "EInteractionAnimation::VE_ThrowFirecracker" },
				{ "VE_Unused01.Name", "EInteractionAnimation::VE_Unused01" },
				{ "VE_Unused02.Name", "EInteractionAnimation::VE_Unused02" },
				{ "VE_WakeUpOther.Name", "EInteractionAnimation::VE_WakeUpOther" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EInteractionAnimation",
				"EInteractionAnimation",
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
