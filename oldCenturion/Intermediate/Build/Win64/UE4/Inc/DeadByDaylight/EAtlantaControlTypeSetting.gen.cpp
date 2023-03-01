// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAtlantaControlTypeSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtlantaControlTypeSetting() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAtlantaControlTypeSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAtlantaControlTypeSetting"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAtlantaControlTypeSetting>()
	{
		return EAtlantaControlTypeSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtlantaControlTypeSetting(EAtlantaControlTypeSetting_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAtlantaControlTypeSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting_Hash() { return 3882551184U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtlantaControlTypeSetting"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAtlantaControlTypeSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtlantaControlTypeSetting::CameraFullScreen", (int64)EAtlantaControlTypeSetting::CameraFullScreen },
				{ "EAtlantaControlTypeSetting::SnapOnJoystick", (int64)EAtlantaControlTypeSetting::SnapOnJoystick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CameraFullScreen.Name", "EAtlantaControlTypeSetting::CameraFullScreen" },
				{ "ModuleRelativePath", "Public/EAtlantaControlTypeSetting.h" },
				{ "SnapOnJoystick.Name", "EAtlantaControlTypeSetting::SnapOnJoystick" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAtlantaControlTypeSetting",
				"EAtlantaControlTypeSetting",
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
