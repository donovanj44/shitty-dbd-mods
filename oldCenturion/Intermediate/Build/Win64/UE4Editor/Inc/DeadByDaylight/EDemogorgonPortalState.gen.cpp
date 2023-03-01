// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EDemogorgonPortalState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDemogorgonPortalState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EDemogorgonPortalState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EDemogorgonPortalState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EDemogorgonPortalState>()
	{
		return EDemogorgonPortalState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDemogorgonPortalState(EDemogorgonPortalState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EDemogorgonPortalState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState_Hash() { return 207117301U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDemogorgonPortalState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EDemogorgonPortalState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDemogorgonPortalState::Hidden", (int64)EDemogorgonPortalState::Hidden },
				{ "EDemogorgonPortalState::InUse", (int64)EDemogorgonPortalState::InUse },
				{ "EDemogorgonPortalState::Exposed", (int64)EDemogorgonPortalState::Exposed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Exposed.Name", "EDemogorgonPortalState::Exposed" },
				{ "Hidden.Name", "EDemogorgonPortalState::Hidden" },
				{ "InUse.Name", "EDemogorgonPortalState::InUse" },
				{ "ModuleRelativePath", "Public/EDemogorgonPortalState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EDemogorgonPortalState",
				"EDemogorgonPortalState",
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
