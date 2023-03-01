// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/EK26ProjectileState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEK26ProjectileState() {}
// Cross Module References
	THEK26_API UEnum* Z_Construct_UEnum_TheK26_EK26ProjectileState();
	UPackage* Z_Construct_UPackage__Script_TheK26();
// End Cross Module References
	static UEnum* EK26ProjectileState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK26_EK26ProjectileState, Z_Construct_UPackage__Script_TheK26(), TEXT("EK26ProjectileState"));
		}
		return Singleton;
	}
	template<> THEK26_API UEnum* StaticEnum<EK26ProjectileState>()
	{
		return EK26ProjectileState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EK26ProjectileState(EK26ProjectileState_StaticEnum, TEXT("/Script/TheK26"), TEXT("EK26ProjectileState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK26_EK26ProjectileState_Hash() { return 2936580833U; }
	UEnum* Z_Construct_UEnum_TheK26_EK26ProjectileState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK26();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EK26ProjectileState"), 0, Get_Z_Construct_UEnum_TheK26_EK26ProjectileState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EK26ProjectileState::Invalid", (int64)EK26ProjectileState::Invalid },
				{ "EK26ProjectileState::Summoning", (int64)EK26ProjectileState::Summoning },
				{ "EK26ProjectileState::Idle", (int64)EK26ProjectileState::Idle },
				{ "EK26ProjectileState::FollowingPath", (int64)EK26ProjectileState::FollowingPath },
				{ "EK26ProjectileState::OffPath", (int64)EK26ProjectileState::OffPath },
				{ "EK26ProjectileState::Destroyed", (int64)EK26ProjectileState::Destroyed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Destroyed.Name", "EK26ProjectileState::Destroyed" },
				{ "FollowingPath.Name", "EK26ProjectileState::FollowingPath" },
				{ "Idle.Name", "EK26ProjectileState::Idle" },
				{ "Invalid.Name", "EK26ProjectileState::Invalid" },
				{ "ModuleRelativePath", "Public/EK26ProjectileState.h" },
				{ "OffPath.Name", "EK26ProjectileState::OffPath" },
				{ "Summoning.Name", "EK26ProjectileState::Summoning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK26,
				nullptr,
				"EK26ProjectileState",
				"EK26ProjectileState",
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
