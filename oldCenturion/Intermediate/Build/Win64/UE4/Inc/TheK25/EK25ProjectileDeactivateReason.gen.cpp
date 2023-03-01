// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/EK25ProjectileDeactivateReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEK25ProjectileDeactivateReason() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* EK25ProjectileDeactivateReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason, Z_Construct_UPackage__Script_TheK25(), TEXT("EK25ProjectileDeactivateReason"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<EK25ProjectileDeactivateReason>()
	{
		return EK25ProjectileDeactivateReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EK25ProjectileDeactivateReason(EK25ProjectileDeactivateReason_StaticEnum, TEXT("/Script/TheK25"), TEXT("EK25ProjectileDeactivateReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason_Hash() { return 1441944405U; }
	UEnum* Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EK25ProjectileDeactivateReason"), 0, Get_Z_Construct_UEnum_TheK25_EK25ProjectileDeactivateReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EK25ProjectileDeactivateReason::None", (int64)EK25ProjectileDeactivateReason::None },
				{ "EK25ProjectileDeactivateReason::WorldCollisionHit", (int64)EK25ProjectileDeactivateReason::WorldCollisionHit },
				{ "EK25ProjectileDeactivateReason::CharacterHit", (int64)EK25ProjectileDeactivateReason::CharacterHit },
				{ "EK25ProjectileDeactivateReason::OutOfBounds", (int64)EK25ProjectileDeactivateReason::OutOfBounds },
				{ "EK25ProjectileDeactivateReason::MaximumRangeReached", (int64)EK25ProjectileDeactivateReason::MaximumRangeReached },
				{ "EK25ProjectileDeactivateReason::ChainStrikeInteractionEnded", (int64)EK25ProjectileDeactivateReason::ChainStrikeInteractionEnded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChainStrikeInteractionEnded.Name", "EK25ProjectileDeactivateReason::ChainStrikeInteractionEnded" },
				{ "CharacterHit.Name", "EK25ProjectileDeactivateReason::CharacterHit" },
				{ "MaximumRangeReached.Name", "EK25ProjectileDeactivateReason::MaximumRangeReached" },
				{ "ModuleRelativePath", "Public/EK25ProjectileDeactivateReason.h" },
				{ "None.Name", "EK25ProjectileDeactivateReason::None" },
				{ "OutOfBounds.Name", "EK25ProjectileDeactivateReason::OutOfBounds" },
				{ "WorldCollisionHit.Name", "EK25ProjectileDeactivateReason::WorldCollisionHit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"EK25ProjectileDeactivateReason",
				"EK25ProjectileDeactivateReason",
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
