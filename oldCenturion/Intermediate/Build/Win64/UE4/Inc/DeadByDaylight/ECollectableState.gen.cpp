// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ECollectableState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECollectableState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECollectableState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* ECollectableState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_ECollectableState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ECollectableState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<ECollectableState>()
	{
		return ECollectableState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollectableState(ECollectableState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("ECollectableState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_ECollectableState_Hash() { return 3365143449U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_ECollectableState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollectableState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_ECollectableState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollectableState::OnGround", (int64)ECollectableState::OnGround },
				{ "ECollectableState::Stored", (int64)ECollectableState::Stored },
				{ "ECollectableState::Equipped", (int64)ECollectableState::Equipped },
				{ "ECollectableState::ToBeDropped", (int64)ECollectableState::ToBeDropped },
				{ "ECollectableState::InSearchable", (int64)ECollectableState::InSearchable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equipped.Name", "ECollectableState::Equipped" },
				{ "InSearchable.Name", "ECollectableState::InSearchable" },
				{ "ModuleRelativePath", "Public/ECollectableState.h" },
				{ "OnGround.Name", "ECollectableState::OnGround" },
				{ "Stored.Name", "ECollectableState::Stored" },
				{ "ToBeDropped.Name", "ECollectableState::ToBeDropped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"ECollectableState",
				"ECollectableState",
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
