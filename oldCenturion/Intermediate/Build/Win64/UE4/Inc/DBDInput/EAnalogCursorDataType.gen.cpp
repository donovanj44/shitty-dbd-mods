// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/EAnalogCursorDataType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAnalogCursorDataType() {}
// Cross Module References
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EAnalogCursorDataType();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
// End Cross Module References
	static UEnum* EAnalogCursorDataType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDInput_EAnalogCursorDataType, Z_Construct_UPackage__Script_DBDInput(), TEXT("EAnalogCursorDataType"));
		}
		return Singleton;
	}
	template<> DBDINPUT_API UEnum* StaticEnum<EAnalogCursorDataType>()
	{
		return EAnalogCursorDataType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnalogCursorDataType(EAnalogCursorDataType_StaticEnum, TEXT("/Script/DBDInput"), TEXT("EAnalogCursorDataType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDInput_EAnalogCursorDataType_Hash() { return 3828269613U; }
	UEnum* Z_Construct_UEnum_DBDInput_EAnalogCursorDataType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnalogCursorDataType"), 0, Get_Z_Construct_UEnum_DBDInput_EAnalogCursorDataType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnalogCursorDataType::MaxSpeedDefault", (int64)EAnalogCursorDataType::MaxSpeedDefault },
				{ "EAnalogCursorDataType::MaxSpeedDefaultSlow", (int64)EAnalogCursorDataType::MaxSpeedDefaultSlow },
				{ "EAnalogCursorDataType::MaxSpeedStickyDefault", (int64)EAnalogCursorDataType::MaxSpeedStickyDefault },
				{ "EAnalogCursorDataType::MaxSpeedStickySlow", (int64)EAnalogCursorDataType::MaxSpeedStickySlow },
				{ "EAnalogCursorDataType::MaxSpeedStickyButtonMedium", (int64)EAnalogCursorDataType::MaxSpeedStickyButtonMedium },
				{ "EAnalogCursorDataType::MaxSpeedStickyButtonLarge", (int64)EAnalogCursorDataType::MaxSpeedStickyButtonLarge },
				{ "EAnalogCursorDataType::MaxSpeedDefaultBloodweb", (int64)EAnalogCursorDataType::MaxSpeedDefaultBloodweb },
				{ "EAnalogCursorDataType::MaxSpeedStickyBloodweb", (int64)EAnalogCursorDataType::MaxSpeedStickyBloodweb },
				{ "EAnalogCursorDataType::CustomAcceleration", (int64)EAnalogCursorDataType::CustomAcceleration },
				{ "EAnalogCursorDataType::DeadZone", (int64)EAnalogCursorDataType::DeadZone },
				{ "EAnalogCursorDataType::HandheldSpeedBoostFactor", (int64)EAnalogCursorDataType::HandheldSpeedBoostFactor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomAcceleration.Name", "EAnalogCursorDataType::CustomAcceleration" },
				{ "DeadZone.Name", "EAnalogCursorDataType::DeadZone" },
				{ "HandheldSpeedBoostFactor.Name", "EAnalogCursorDataType::HandheldSpeedBoostFactor" },
				{ "MaxSpeedDefault.Name", "EAnalogCursorDataType::MaxSpeedDefault" },
				{ "MaxSpeedDefaultBloodweb.Name", "EAnalogCursorDataType::MaxSpeedDefaultBloodweb" },
				{ "MaxSpeedDefaultSlow.Name", "EAnalogCursorDataType::MaxSpeedDefaultSlow" },
				{ "MaxSpeedStickyBloodweb.Name", "EAnalogCursorDataType::MaxSpeedStickyBloodweb" },
				{ "MaxSpeedStickyButtonLarge.Name", "EAnalogCursorDataType::MaxSpeedStickyButtonLarge" },
				{ "MaxSpeedStickyButtonMedium.Name", "EAnalogCursorDataType::MaxSpeedStickyButtonMedium" },
				{ "MaxSpeedStickyDefault.Name", "EAnalogCursorDataType::MaxSpeedStickyDefault" },
				{ "MaxSpeedStickySlow.Name", "EAnalogCursorDataType::MaxSpeedStickySlow" },
				{ "ModuleRelativePath", "Public/EAnalogCursorDataType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDInput,
				nullptr,
				"EAnalogCursorDataType",
				"EAnalogCursorDataType",
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
