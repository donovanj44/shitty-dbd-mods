// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EPawnInputPressTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPawnInputPressTypes() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EPawnInputPressTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EPawnInputPressTypes"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EPawnInputPressTypes>()
	{
		return EPawnInputPressTypes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnInputPressTypes(EPawnInputPressTypes_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EPawnInputPressTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes_Hash() { return 1729020415U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnInputPressTypes"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnInputPressTypes::None", (int64)EPawnInputPressTypes::None },
				{ "EPawnInputPressTypes::FastInteract", (int64)EPawnInputPressTypes::FastInteract },
				{ "EPawnInputPressTypes::Interact", (int64)EPawnInputPressTypes::Interact },
				{ "EPawnInputPressTypes::Wiggle", (int64)EPawnInputPressTypes::Wiggle },
				{ "EPawnInputPressTypes::Struggle", (int64)EPawnInputPressTypes::Struggle },
				{ "EPawnInputPressTypes::Slash", (int64)EPawnInputPressTypes::Slash },
				{ "EPawnInputPressTypes::Attack", (int64)EPawnInputPressTypes::Attack },
				{ "EPawnInputPressTypes::Action", (int64)EPawnInputPressTypes::Action },
				{ "EPawnInputPressTypes::SecondaryAction", (int64)EPawnInputPressTypes::SecondaryAction },
				{ "EPawnInputPressTypes::UseItem", (int64)EPawnInputPressTypes::UseItem },
				{ "EPawnInputPressTypes::DropItem", (int64)EPawnInputPressTypes::DropItem },
				{ "EPawnInputPressTypes::Gesture01", (int64)EPawnInputPressTypes::Gesture01 },
				{ "EPawnInputPressTypes::Gesture02", (int64)EPawnInputPressTypes::Gesture02 },
				{ "EPawnInputPressTypes::Gesture03", (int64)EPawnInputPressTypes::Gesture03 },
				{ "EPawnInputPressTypes::Gesture04", (int64)EPawnInputPressTypes::Gesture04 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Action.Name", "EPawnInputPressTypes::Action" },
				{ "Attack.Name", "EPawnInputPressTypes::Attack" },
				{ "DropItem.Name", "EPawnInputPressTypes::DropItem" },
				{ "FastInteract.Name", "EPawnInputPressTypes::FastInteract" },
				{ "Gesture01.Name", "EPawnInputPressTypes::Gesture01" },
				{ "Gesture02.Name", "EPawnInputPressTypes::Gesture02" },
				{ "Gesture03.Name", "EPawnInputPressTypes::Gesture03" },
				{ "Gesture04.Name", "EPawnInputPressTypes::Gesture04" },
				{ "Interact.Name", "EPawnInputPressTypes::Interact" },
				{ "ModuleRelativePath", "Public/EPawnInputPressTypes.h" },
				{ "None.Name", "EPawnInputPressTypes::None" },
				{ "SecondaryAction.Name", "EPawnInputPressTypes::SecondaryAction" },
				{ "Slash.Name", "EPawnInputPressTypes::Slash" },
				{ "Struggle.Name", "EPawnInputPressTypes::Struggle" },
				{ "UseItem.Name", "EPawnInputPressTypes::UseItem" },
				{ "Wiggle.Name", "EPawnInputPressTypes::Wiggle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EPawnInputPressTypes",
				"EPawnInputPressTypes",
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
