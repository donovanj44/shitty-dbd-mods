// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAIDodgeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIDodgeType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDodgeType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAIDodgeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAIDodgeType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAIDodgeType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAIDodgeType>()
	{
		return EAIDodgeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIDodgeType(EAIDodgeType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAIDodgeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAIDodgeType_Hash() { return 2752345884U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDodgeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIDodgeType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAIDodgeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIDodgeType::FORWARD_SIDE_STEP", (int64)EAIDodgeType::FORWARD_SIDE_STEP },
				{ "EAIDodgeType::SIDE_STEP", (int64)EAIDodgeType::SIDE_STEP },
				{ "EAIDodgeType::BACKWARD_SIDE_STEP", (int64)EAIDodgeType::BACKWARD_SIDE_STEP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BACKWARD_SIDE_STEP.Name", "EAIDodgeType::BACKWARD_SIDE_STEP" },
				{ "FORWARD_SIDE_STEP.Name", "EAIDodgeType::FORWARD_SIDE_STEP" },
				{ "ModuleRelativePath", "Public/EAIDodgeType.h" },
				{ "SIDE_STEP.Name", "EAIDodgeType::SIDE_STEP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAIDodgeType",
				"EAIDodgeType",
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
