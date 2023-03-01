// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/EFlurryOfKnivesInteractionState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFlurryOfKnivesInteractionState() {}
// Cross Module References
	THEK23_API UEnum* Z_Construct_UEnum_TheK23_EFlurryOfKnivesInteractionState();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	static UEnum* EFlurryOfKnivesInteractionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK23_EFlurryOfKnivesInteractionState, Z_Construct_UPackage__Script_TheK23(), TEXT("EFlurryOfKnivesInteractionState"));
		}
		return Singleton;
	}
	template<> THEK23_API UEnum* StaticEnum<EFlurryOfKnivesInteractionState>()
	{
		return EFlurryOfKnivesInteractionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlurryOfKnivesInteractionState(EFlurryOfKnivesInteractionState_StaticEnum, TEXT("/Script/TheK23"), TEXT("EFlurryOfKnivesInteractionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK23_EFlurryOfKnivesInteractionState_Hash() { return 2869019085U; }
	UEnum* Z_Construct_UEnum_TheK23_EFlurryOfKnivesInteractionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK23();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlurryOfKnivesInteractionState"), 0, Get_Z_Construct_UEnum_TheK23_EFlurryOfKnivesInteractionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlurryOfKnivesInteractionState::Charging", (int64)EFlurryOfKnivesInteractionState::Charging },
				{ "EFlurryOfKnivesInteractionState::Aiming", (int64)EFlurryOfKnivesInteractionState::Aiming },
				{ "EFlurryOfKnivesInteractionState::Throwing", (int64)EFlurryOfKnivesInteractionState::Throwing },
				{ "EFlurryOfKnivesInteractionState::Finished", (int64)EFlurryOfKnivesInteractionState::Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aiming.Name", "EFlurryOfKnivesInteractionState::Aiming" },
				{ "Charging.Name", "EFlurryOfKnivesInteractionState::Charging" },
				{ "Finished.Name", "EFlurryOfKnivesInteractionState::Finished" },
				{ "ModuleRelativePath", "Public/EFlurryOfKnivesInteractionState.h" },
				{ "Throwing.Name", "EFlurryOfKnivesInteractionState::Throwing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK23,
				nullptr,
				"EFlurryOfKnivesInteractionState",
				"EFlurryOfKnivesInteractionState",
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
