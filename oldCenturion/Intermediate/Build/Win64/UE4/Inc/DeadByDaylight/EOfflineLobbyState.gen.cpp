// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EOfflineLobbyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOfflineLobbyState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfflineLobbyState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EOfflineLobbyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EOfflineLobbyState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EOfflineLobbyState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EOfflineLobbyState>()
	{
		return EOfflineLobbyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOfflineLobbyState(EOfflineLobbyState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EOfflineLobbyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EOfflineLobbyState_Hash() { return 124957134U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EOfflineLobbyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOfflineLobbyState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EOfflineLobbyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOfflineLobbyState::None", (int64)EOfflineLobbyState::None },
				{ "EOfflineLobbyState::RoleSelection", (int64)EOfflineLobbyState::RoleSelection },
				{ "EOfflineLobbyState::OfflineLobby", (int64)EOfflineLobbyState::OfflineLobby },
				{ "EOfflineLobbyState::Store", (int64)EOfflineLobbyState::Store },
				{ "EOfflineLobbyState::PartyLobby", (int64)EOfflineLobbyState::PartyLobby },
				{ "EOfflineLobbyState::Archives", (int64)EOfflineLobbyState::Archives },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Archives.Name", "EOfflineLobbyState::Archives" },
				{ "ModuleRelativePath", "Public/EOfflineLobbyState.h" },
				{ "None.Name", "EOfflineLobbyState::None" },
				{ "OfflineLobby.Name", "EOfflineLobbyState::OfflineLobby" },
				{ "PartyLobby.Name", "EOfflineLobbyState::PartyLobby" },
				{ "RoleSelection.Name", "EOfflineLobbyState::RoleSelection" },
				{ "Store.Name", "EOfflineLobbyState::Store" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EOfflineLobbyState",
				"EOfflineLobbyState",
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
