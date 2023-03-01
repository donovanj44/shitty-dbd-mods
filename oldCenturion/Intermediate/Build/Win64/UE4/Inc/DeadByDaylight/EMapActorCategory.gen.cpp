// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EMapActorCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMapActorCategory() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EMapActorCategory();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EMapActorCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EMapActorCategory, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EMapActorCategory"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EMapActorCategory>()
	{
		return EMapActorCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMapActorCategory(EMapActorCategory_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EMapActorCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EMapActorCategory_Hash() { return 2786186613U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EMapActorCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMapActorCategory"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EMapActorCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMapActorCategory::None", (int64)EMapActorCategory::None },
				{ "EMapActorCategory::Objective", (int64)EMapActorCategory::Objective },
				{ "EMapActorCategory::Chest", (int64)EMapActorCategory::Chest },
				{ "EMapActorCategory::BlackLock", (int64)EMapActorCategory::BlackLock },
				{ "EMapActorCategory::KillerObject", (int64)EMapActorCategory::KillerObject },
				{ "EMapActorCategory::ExitGate", (int64)EMapActorCategory::ExitGate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlackLock.Name", "EMapActorCategory::BlackLock" },
				{ "BlueprintType", "true" },
				{ "Chest.Name", "EMapActorCategory::Chest" },
				{ "ExitGate.Name", "EMapActorCategory::ExitGate" },
				{ "KillerObject.Name", "EMapActorCategory::KillerObject" },
				{ "ModuleRelativePath", "Public/EMapActorCategory.h" },
				{ "None.Name", "EMapActorCategory::None" },
				{ "Objective.Name", "EMapActorCategory::Objective" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EMapActorCategory",
				"EMapActorCategory",
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
