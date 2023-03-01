// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ECustomMovementMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECustomMovementMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomMovementMode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ECustomMovementMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ECustomMovementMode, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ECustomMovementMode"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECustomMovementMode>()
	{
		return ECustomMovementMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMovementMode(ECustomMovementMode_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ECustomMovementMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ECustomMovementMode_Hash() { return 3849816368U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomMovementMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMovementMode"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ECustomMovementMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomMovementMode::CUSTOM_MOVE_None", (int64)ECustomMovementMode::CUSTOM_MOVE_None },
				{ "ECustomMovementMode::CUSTOM_MOVE_Snapping", (int64)ECustomMovementMode::CUSTOM_MOVE_Snapping },
				{ "ECustomMovementMode::CUSTOM_MOVE_MAX", (int64)ECustomMovementMode::CUSTOM_MOVE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CUSTOM_MOVE_MAX.Hidden", "" },
				{ "CUSTOM_MOVE_MAX.Name", "ECustomMovementMode::CUSTOM_MOVE_MAX" },
				{ "CUSTOM_MOVE_None.Name", "ECustomMovementMode::CUSTOM_MOVE_None" },
				{ "CUSTOM_MOVE_Snapping.Name", "ECustomMovementMode::CUSTOM_MOVE_Snapping" },
				{ "ModuleRelativePath", "Public/ECustomMovementMode.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ECustomMovementMode",
				"ECustomMovementMode",
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
