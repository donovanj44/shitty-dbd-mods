// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/EWallGrabState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWallGrabState() {}
// Cross Module References
	THEBLIGHT_API UEnum* Z_Construct_UEnum_TheBlight_EWallGrabState();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	static UEnum* EWallGrabState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheBlight_EWallGrabState, Z_Construct_UPackage__Script_TheBlight(), TEXT("EWallGrabState"));
		}
		return Singleton;
	}
	template<> THEBLIGHT_API UEnum* StaticEnum<EWallGrabState>()
	{
		return EWallGrabState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWallGrabState(EWallGrabState_StaticEnum, TEXT("/Script/TheBlight"), TEXT("EWallGrabState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheBlight_EWallGrabState_Hash() { return 316862463U; }
	UEnum* Z_Construct_UEnum_TheBlight_EWallGrabState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheBlight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWallGrabState"), 0, Get_Z_Construct_UEnum_TheBlight_EWallGrabState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWallGrabState::None", (int64)EWallGrabState::None },
				{ "EWallGrabState::Charging", (int64)EWallGrabState::Charging },
				{ "EWallGrabState::Charged", (int64)EWallGrabState::Charged },
				{ "EWallGrabState::NonLethalCharge", (int64)EWallGrabState::NonLethalCharge },
				{ "EWallGrabState::Adjusting", (int64)EWallGrabState::Adjusting },
				{ "EWallGrabState::Holding", (int64)EWallGrabState::Holding },
				{ "EWallGrabState::LethalCharge", (int64)EWallGrabState::LethalCharge },
				{ "EWallGrabState::Cooldown", (int64)EWallGrabState::Cooldown },
				{ "EWallGrabState::Sliding", (int64)EWallGrabState::Sliding },
				{ "EWallGrabState::Attacking", (int64)EWallGrabState::Attacking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Adjusting.Name", "EWallGrabState::Adjusting" },
				{ "Attacking.Name", "EWallGrabState::Attacking" },
				{ "BlueprintType", "true" },
				{ "Charged.Name", "EWallGrabState::Charged" },
				{ "Charging.Name", "EWallGrabState::Charging" },
				{ "Cooldown.Name", "EWallGrabState::Cooldown" },
				{ "Holding.Name", "EWallGrabState::Holding" },
				{ "LethalCharge.Name", "EWallGrabState::LethalCharge" },
				{ "ModuleRelativePath", "Public/EWallGrabState.h" },
				{ "None.Name", "EWallGrabState::None" },
				{ "NonLethalCharge.Name", "EWallGrabState::NonLethalCharge" },
				{ "Sliding.Name", "EWallGrabState::Sliding" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheBlight,
				nullptr,
				"EWallGrabState",
				"EWallGrabState",
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
