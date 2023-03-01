// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/EChainStrikeEndReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChainStrikeEndReason() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EChainStrikeEndReason();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* EChainStrikeEndReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_EChainStrikeEndReason, Z_Construct_UPackage__Script_TheK25(), TEXT("EChainStrikeEndReason"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<EChainStrikeEndReason>()
	{
		return EChainStrikeEndReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChainStrikeEndReason(EChainStrikeEndReason_StaticEnum, TEXT("/Script/TheK25"), TEXT("EChainStrikeEndReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_EChainStrikeEndReason_Hash() { return 4293595847U; }
	UEnum* Z_Construct_UEnum_TheK25_EChainStrikeEndReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChainStrikeEndReason"), 0, Get_Z_Construct_UEnum_TheK25_EChainStrikeEndReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChainStrikeEndReason::None", (int64)EChainStrikeEndReason::None },
				{ "EChainStrikeEndReason::AbortedGatewayPlacementState", (int64)EChainStrikeEndReason::AbortedGatewayPlacementState },
				{ "EChainStrikeEndReason::AbortedGatewayPlacementBecauseOfInvalidPlacementState", (int64)EChainStrikeEndReason::AbortedGatewayPlacementBecauseOfInvalidPlacementState },
				{ "EChainStrikeEndReason::AbortedGatewayPossession", (int64)EChainStrikeEndReason::AbortedGatewayPossession },
				{ "EChainStrikeEndReason::ControlledProjectileStopped", (int64)EChainStrikeEndReason::ControlledProjectileStopped },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbortedGatewayPlacementBecauseOfInvalidPlacementState.Name", "EChainStrikeEndReason::AbortedGatewayPlacementBecauseOfInvalidPlacementState" },
				{ "AbortedGatewayPlacementState.Name", "EChainStrikeEndReason::AbortedGatewayPlacementState" },
				{ "AbortedGatewayPossession.Name", "EChainStrikeEndReason::AbortedGatewayPossession" },
				{ "ControlledProjectileStopped.Name", "EChainStrikeEndReason::ControlledProjectileStopped" },
				{ "ModuleRelativePath", "Public/EChainStrikeEndReason.h" },
				{ "None.Name", "EChainStrikeEndReason::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"EChainStrikeEndReason",
				"EChainStrikeEndReason",
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
