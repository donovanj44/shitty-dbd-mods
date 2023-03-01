// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EInteractionOwnership.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInteractionOwnership() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInteractionOwnership();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EInteractionOwnership_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EInteractionOwnership, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EInteractionOwnership"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EInteractionOwnership>()
	{
		return EInteractionOwnership_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionOwnership(EInteractionOwnership_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EInteractionOwnership"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EInteractionOwnership_Hash() { return 1366271335U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EInteractionOwnership()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionOwnership"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EInteractionOwnership_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionOwnership::AnyCanUse", (int64)EInteractionOwnership::AnyCanUse },
				{ "EInteractionOwnership::OnlyOwnerCanUse", (int64)EInteractionOwnership::OnlyOwnerCanUse },
				{ "EInteractionOwnership::OwnerCannotUse", (int64)EInteractionOwnership::OwnerCannotUse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyCanUse.Name", "EInteractionOwnership::AnyCanUse" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EInteractionOwnership.h" },
				{ "OnlyOwnerCanUse.Name", "EInteractionOwnership::OnlyOwnerCanUse" },
				{ "OwnerCannotUse.Name", "EInteractionOwnership::OwnerCannotUse" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EInteractionOwnership",
				"EInteractionOwnership",
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
