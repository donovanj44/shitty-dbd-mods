// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ESettingScreenButtonData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESettingScreenButtonData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESettingScreenButtonData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ESettingScreenButtonData_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ESettingScreenButtonData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ESettingScreenButtonData"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ESettingScreenButtonData>()
	{
		return ESettingScreenButtonData_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingScreenButtonData(ESettingScreenButtonData_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ESettingScreenButtonData"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ESettingScreenButtonData_Hash() { return 1354745917U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ESettingScreenButtonData()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingScreenButtonData"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ESettingScreenButtonData_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingScreenButtonData::PRIVACY", (int64)ESettingScreenButtonData::PRIVACY },
				{ "ESettingScreenButtonData::EULA", (int64)ESettingScreenButtonData::EULA },
				{ "ESettingScreenButtonData::CREDITS", (int64)ESettingScreenButtonData::CREDITS },
				{ "ESettingScreenButtonData::SURVIVORTUTORIAL", (int64)ESettingScreenButtonData::SURVIVORTUTORIAL },
				{ "ESettingScreenButtonData::KILLERTUTORIAL", (int64)ESettingScreenButtonData::KILLERTUTORIAL },
				{ "ESettingScreenButtonData::SURVIVORCINEMATIC", (int64)ESettingScreenButtonData::SURVIVORCINEMATIC },
				{ "ESettingScreenButtonData::KILLERCINEMATIC", (int64)ESettingScreenButtonData::KILLERCINEMATIC },
				{ "ESettingScreenButtonData::LORECINEMATIC", (int64)ESettingScreenButtonData::LORECINEMATIC },
				{ "ESettingScreenButtonData::COMMUNITY", (int64)ESettingScreenButtonData::COMMUNITY },
				{ "ESettingScreenButtonData::PLAYERCLOUDID", (int64)ESettingScreenButtonData::PLAYERCLOUDID },
				{ "ESettingScreenButtonData::SUBSCRIBE", (int64)ESettingScreenButtonData::SUBSCRIBE },
				{ "ESettingScreenButtonData::TERMSOFUSE", (int64)ESettingScreenButtonData::TERMSOFUSE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "COMMUNITY.Name", "ESettingScreenButtonData::COMMUNITY" },
				{ "CREDITS.Name", "ESettingScreenButtonData::CREDITS" },
				{ "EULA.Name", "ESettingScreenButtonData::EULA" },
				{ "KILLERCINEMATIC.Name", "ESettingScreenButtonData::KILLERCINEMATIC" },
				{ "KILLERTUTORIAL.Name", "ESettingScreenButtonData::KILLERTUTORIAL" },
				{ "LORECINEMATIC.Name", "ESettingScreenButtonData::LORECINEMATIC" },
				{ "ModuleRelativePath", "Public/ESettingScreenButtonData.h" },
				{ "PLAYERCLOUDID.Name", "ESettingScreenButtonData::PLAYERCLOUDID" },
				{ "PRIVACY.Name", "ESettingScreenButtonData::PRIVACY" },
				{ "SUBSCRIBE.Name", "ESettingScreenButtonData::SUBSCRIBE" },
				{ "SURVIVORCINEMATIC.Name", "ESettingScreenButtonData::SURVIVORCINEMATIC" },
				{ "SURVIVORTUTORIAL.Name", "ESettingScreenButtonData::SURVIVORTUTORIAL" },
				{ "TERMSOFUSE.Name", "ESettingScreenButtonData::TERMSOFUSE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ESettingScreenButtonData",
				"ESettingScreenButtonData",
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
