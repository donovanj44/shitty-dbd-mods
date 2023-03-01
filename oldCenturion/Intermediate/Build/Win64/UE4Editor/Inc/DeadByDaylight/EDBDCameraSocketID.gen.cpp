// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EDBDCameraSocketID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDBDCameraSocketID() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EDBDCameraSocketID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EDBDCameraSocketID"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDBDCameraSocketID>()
	{
		return EDBDCameraSocketID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDBDCameraSocketID(EDBDCameraSocketID_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EDBDCameraSocketID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID_Hash() { return 1852382852U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDBDCameraSocketID"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EDBDCameraSocketID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDBDCameraSocketID::VE_None", (int64)EDBDCameraSocketID::VE_None },
				{ "EDBDCameraSocketID::VE_Default", (int64)EDBDCameraSocketID::VE_Default },
				{ "EDBDCameraSocketID::VE_Killcam", (int64)EDBDCameraSocketID::VE_Killcam },
				{ "EDBDCameraSocketID::VE_Reaction", (int64)EDBDCameraSocketID::VE_Reaction },
				{ "EDBDCameraSocketID::VE_Struggle", (int64)EDBDCameraSocketID::VE_Struggle },
				{ "EDBDCameraSocketID::VE_Sacrifice", (int64)EDBDCameraSocketID::VE_Sacrifice },
				{ "EDBDCameraSocketID::VE_MAX", (int64)EDBDCameraSocketID::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EDBDCameraSocketID.h" },
				{ "VE_Default.Name", "EDBDCameraSocketID::VE_Default" },
				{ "VE_Killcam.Name", "EDBDCameraSocketID::VE_Killcam" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EDBDCameraSocketID::VE_MAX" },
				{ "VE_None.Name", "EDBDCameraSocketID::VE_None" },
				{ "VE_Reaction.Name", "EDBDCameraSocketID::VE_Reaction" },
				{ "VE_Sacrifice.Name", "EDBDCameraSocketID::VE_Sacrifice" },
				{ "VE_Struggle.Name", "EDBDCameraSocketID::VE_Struggle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EDBDCameraSocketID",
				"EDBDCameraSocketID",
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
