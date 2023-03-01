// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/EK25ChainDetachmentReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEK25ChainDetachmentReason() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* EK25ChainDetachmentReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason, Z_Construct_UPackage__Script_TheK25(), TEXT("EK25ChainDetachmentReason"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<EK25ChainDetachmentReason>()
	{
		return EK25ChainDetachmentReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EK25ChainDetachmentReason(EK25ChainDetachmentReason_StaticEnum, TEXT("/Script/TheK25"), TEXT("EK25ChainDetachmentReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason_Hash() { return 1404740976U; }
	UEnum* Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EK25ChainDetachmentReason"), 0, Get_Z_Construct_UEnum_TheK25_EK25ChainDetachmentReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EK25ChainDetachmentReason::CollisionOrMaxLengthReached", (int64)EK25ChainDetachmentReason::CollisionOrMaxLengthReached },
				{ "EK25ChainDetachmentReason::KillerAttack", (int64)EK25ChainDetachmentReason::KillerAttack },
				{ "EK25ChainDetachmentReason::RemovedByInteraction", (int64)EK25ChainDetachmentReason::RemovedByInteraction },
				{ "EK25ChainDetachmentReason::MaxNumberChainsReached", (int64)EK25ChainDetachmentReason::MaxNumberChainsReached },
				{ "EK25ChainDetachmentReason::ForcedRemoved", (int64)EK25ChainDetachmentReason::ForcedRemoved },
				{ "EK25ChainDetachmentReason::SurvivorKO", (int64)EK25ChainDetachmentReason::SurvivorKO },
				{ "EK25ChainDetachmentReason::EndGameCollapseOver", (int64)EK25ChainDetachmentReason::EndGameCollapseOver },
				{ "EK25ChainDetachmentReason::SurvivorLeftTheMatch", (int64)EK25ChainDetachmentReason::SurvivorLeftTheMatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CollisionOrMaxLengthReached.Name", "EK25ChainDetachmentReason::CollisionOrMaxLengthReached" },
				{ "EndGameCollapseOver.Name", "EK25ChainDetachmentReason::EndGameCollapseOver" },
				{ "ForcedRemoved.Name", "EK25ChainDetachmentReason::ForcedRemoved" },
				{ "KillerAttack.Name", "EK25ChainDetachmentReason::KillerAttack" },
				{ "MaxNumberChainsReached.Name", "EK25ChainDetachmentReason::MaxNumberChainsReached" },
				{ "ModuleRelativePath", "Public/EK25ChainDetachmentReason.h" },
				{ "RemovedByInteraction.Name", "EK25ChainDetachmentReason::RemovedByInteraction" },
				{ "SurvivorKO.Name", "EK25ChainDetachmentReason::SurvivorKO" },
				{ "SurvivorLeftTheMatch.Name", "EK25ChainDetachmentReason::SurvivorLeftTheMatch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"EK25ChainDetachmentReason",
				"EK25ChainDetachmentReason",
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
