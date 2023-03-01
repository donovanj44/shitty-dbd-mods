// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EStoryNodeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStoryNodeState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EStoryNodeState();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EStoryNodeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EStoryNodeState, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EStoryNodeState"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EStoryNodeState>()
	{
		return EStoryNodeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStoryNodeState(EStoryNodeState_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EStoryNodeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EStoryNodeState_Hash() { return 2234993089U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EStoryNodeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStoryNodeState"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EStoryNodeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStoryNodeState::None", (int64)EStoryNodeState::None },
				{ "EStoryNodeState::Unavailable", (int64)EStoryNodeState::Unavailable },
				{ "EStoryNodeState::AvailableDefault", (int64)EStoryNodeState::AvailableDefault },
				{ "EStoryNodeState::AvailableActive", (int64)EStoryNodeState::AvailableActive },
				{ "EStoryNodeState::AvailablePaused", (int64)EStoryNodeState::AvailablePaused },
				{ "EStoryNodeState::Completed", (int64)EStoryNodeState::Completed },
				{ "EStoryNodeState::Claimed", (int64)EStoryNodeState::Claimed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AvailableActive.Name", "EStoryNodeState::AvailableActive" },
				{ "AvailableDefault.Name", "EStoryNodeState::AvailableDefault" },
				{ "AvailablePaused.Name", "EStoryNodeState::AvailablePaused" },
				{ "Claimed.Name", "EStoryNodeState::Claimed" },
				{ "Completed.Name", "EStoryNodeState::Completed" },
				{ "ModuleRelativePath", "Public/EStoryNodeState.h" },
				{ "None.Name", "EStoryNodeState::None" },
				{ "Unavailable.Name", "EStoryNodeState::Unavailable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EStoryNodeState",
				"EStoryNodeState",
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
