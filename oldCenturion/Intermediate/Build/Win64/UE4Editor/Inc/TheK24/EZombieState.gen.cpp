// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/EZombieState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEZombieState() {}
// Cross Module References
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EZombieState();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	static UEnum* EZombieState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK24_EZombieState, Z_Construct_UPackage__Script_TheK24(), TEXT("EZombieState"));
		}
		return Singleton;
	}
	template<> THEK24_API UEnum* StaticEnum<EZombieState>()
	{
		return EZombieState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EZombieState(EZombieState_StaticEnum, TEXT("/Script/TheK24"), TEXT("EZombieState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK24_EZombieState_Hash() { return 2277912212U; }
	UEnum* Z_Construct_UEnum_TheK24_EZombieState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK24();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EZombieState"), 0, Get_Z_Construct_UEnum_TheK24_EZombieState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EZombieState::InPool", (int64)EZombieState::InPool },
				{ "EZombieState::Spawn", (int64)EZombieState::Spawn },
				{ "EZombieState::Patrolling", (int64)EZombieState::Patrolling },
				{ "EZombieState::Searching", (int64)EZombieState::Searching },
				{ "EZombieState::Chase", (int64)EZombieState::Chase },
				{ "EZombieState::Attack", (int64)EZombieState::Attack },
				{ "EZombieState::Dying", (int64)EZombieState::Dying },
				{ "EZombieState::Dead", (int64)EZombieState::Dead },
				{ "EZombieState::ChaseSearching", (int64)EZombieState::ChaseSearching },
				{ "EZombieState::InPlaceIdle", (int64)EZombieState::InPlaceIdle },
				{ "EZombieState::Stunned", (int64)EZombieState::Stunned },
				{ "EZombieState::FallSmash", (int64)EZombieState::FallSmash },
				{ "EZombieState::AttackCooldown", (int64)EZombieState::AttackCooldown },
				{ "EZombieState::Stop", (int64)EZombieState::Stop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EZombieState::Attack" },
				{ "AttackCooldown.Name", "EZombieState::AttackCooldown" },
				{ "BlueprintType", "true" },
				{ "Chase.Name", "EZombieState::Chase" },
				{ "ChaseSearching.Name", "EZombieState::ChaseSearching" },
				{ "Dead.Name", "EZombieState::Dead" },
				{ "Dying.Name", "EZombieState::Dying" },
				{ "FallSmash.Name", "EZombieState::FallSmash" },
				{ "InPlaceIdle.Name", "EZombieState::InPlaceIdle" },
				{ "InPool.Name", "EZombieState::InPool" },
				{ "ModuleRelativePath", "Public/EZombieState.h" },
				{ "Patrolling.Name", "EZombieState::Patrolling" },
				{ "Searching.Name", "EZombieState::Searching" },
				{ "Spawn.Name", "EZombieState::Spawn" },
				{ "Stop.Name", "EZombieState::Stop" },
				{ "Stunned.Name", "EZombieState::Stunned" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK24,
				nullptr,
				"EZombieState",
				"EZombieState",
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
