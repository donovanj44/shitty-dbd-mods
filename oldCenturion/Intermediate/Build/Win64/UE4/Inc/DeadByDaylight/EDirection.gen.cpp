// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDirection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDirection();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EDirection, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EDirection"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDirection>()
	{
		return EDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDirection(EDirection_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EDirection_Hash() { return 4293005419U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDirection"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDirection::Up", (int64)EDirection::Up },
				{ "EDirection::Down", (int64)EDirection::Down },
				{ "EDirection::Left", (int64)EDirection::Left },
				{ "EDirection::Right", (int64)EDirection::Right },
				{ "EDirection::UpLeft", (int64)EDirection::UpLeft },
				{ "EDirection::UpRight", (int64)EDirection::UpRight },
				{ "EDirection::DownLeft", (int64)EDirection::DownLeft },
				{ "EDirection::DownRight", (int64)EDirection::DownRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Down.Name", "EDirection::Down" },
				{ "DownLeft.Name", "EDirection::DownLeft" },
				{ "DownRight.Name", "EDirection::DownRight" },
				{ "Left.Name", "EDirection::Left" },
				{ "ModuleRelativePath", "Public/EDirection.h" },
				{ "Right.Name", "EDirection::Right" },
				{ "Up.Name", "EDirection::Up" },
				{ "UpLeft.Name", "EDirection::UpLeft" },
				{ "UpRight.Name", "EDirection::UpRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EDirection",
				"EDirection",
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
