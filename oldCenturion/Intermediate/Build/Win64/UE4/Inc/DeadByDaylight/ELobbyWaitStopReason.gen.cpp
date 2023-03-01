// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ELobbyWaitStopReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELobbyWaitStopReason() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELobbyWaitStopReason();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ELobbyWaitStopReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ELobbyWaitStopReason, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ELobbyWaitStopReason"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ELobbyWaitStopReason>()
	{
		return ELobbyWaitStopReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELobbyWaitStopReason(ELobbyWaitStopReason_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ELobbyWaitStopReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ELobbyWaitStopReason_Hash() { return 1466972653U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ELobbyWaitStopReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELobbyWaitStopReason"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ELobbyWaitStopReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELobbyWaitStopReason::StartMatchWait", (int64)ELobbyWaitStopReason::StartMatchWait },
				{ "ELobbyWaitStopReason::PlayerCancelled", (int64)ELobbyWaitStopReason::PlayerCancelled },
				{ "ELobbyWaitStopReason::Unknown", (int64)ELobbyWaitStopReason::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ELobbyWaitStopReason.h" },
				{ "PlayerCancelled.Name", "ELobbyWaitStopReason::PlayerCancelled" },
				{ "StartMatchWait.Name", "ELobbyWaitStopReason::StartMatchWait" },
				{ "Unknown.Name", "ELobbyWaitStopReason::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ELobbyWaitStopReason",
				"ELobbyWaitStopReason",
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
