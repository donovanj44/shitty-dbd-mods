// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EEscapeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEscapeType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEscapeType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EEscapeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EEscapeType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EEscapeType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EEscapeType>()
	{
		return EEscapeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEscapeType(EEscapeType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EEscapeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EEscapeType_Hash() { return 2173806952U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EEscapeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEscapeType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EEscapeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEscapeType::Escape_ExitGate", (int64)EEscapeType::Escape_ExitGate },
				{ "EEscapeType::Escape_Hatch", (int64)EEscapeType::Escape_Hatch },
				{ "EEscapeType::Escape_KillerDisconnect", (int64)EEscapeType::Escape_KillerDisconnect },
				{ "EEscapeType::Escape_MAX", (int64)EEscapeType::Escape_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Escape_ExitGate.Name", "EEscapeType::Escape_ExitGate" },
				{ "Escape_Hatch.Name", "EEscapeType::Escape_Hatch" },
				{ "Escape_KillerDisconnect.Name", "EEscapeType::Escape_KillerDisconnect" },
				{ "Escape_MAX.Hidden", "" },
				{ "Escape_MAX.Name", "EEscapeType::Escape_MAX" },
				{ "ModuleRelativePath", "Public/EEscapeType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EEscapeType",
				"EEscapeType",
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
