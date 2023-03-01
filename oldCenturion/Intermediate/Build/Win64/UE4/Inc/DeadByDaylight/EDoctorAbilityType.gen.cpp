// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EDoctorAbilityType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDoctorAbilityType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EDoctorAbilityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EDoctorAbilityType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDoctorAbilityType>()
	{
		return EDoctorAbilityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDoctorAbilityType(EDoctorAbilityType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EDoctorAbilityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType_Hash() { return 1184533509U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDoctorAbilityType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EDoctorAbilityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDoctorAbilityType::VE_ShockTherapy", (int64)EDoctorAbilityType::VE_ShockTherapy },
				{ "EDoctorAbilityType::VE_StaticBlast", (int64)EDoctorAbilityType::VE_StaticBlast },
				{ "EDoctorAbilityType::VE_None", (int64)EDoctorAbilityType::VE_None },
				{ "EDoctorAbilityType::VE_MAX", (int64)EDoctorAbilityType::VE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EDoctorAbilityType.h" },
				{ "VE_MAX.Hidden", "" },
				{ "VE_MAX.Name", "EDoctorAbilityType::VE_MAX" },
				{ "VE_None.Name", "EDoctorAbilityType::VE_None" },
				{ "VE_ShockTherapy.Name", "EDoctorAbilityType::VE_ShockTherapy" },
				{ "VE_StaticBlast.Name", "EDoctorAbilityType::VE_StaticBlast" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EDoctorAbilityType",
				"EDoctorAbilityType",
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
