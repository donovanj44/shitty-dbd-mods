// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EHudEditorDragAxisOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHudEditorDragAxisOption() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EHudEditorDragAxisOption();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EHudEditorDragAxisOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EHudEditorDragAxisOption, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EHudEditorDragAxisOption"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EHudEditorDragAxisOption>()
	{
		return EHudEditorDragAxisOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHudEditorDragAxisOption(EHudEditorDragAxisOption_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EHudEditorDragAxisOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EHudEditorDragAxisOption_Hash() { return 1972266607U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EHudEditorDragAxisOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHudEditorDragAxisOption"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EHudEditorDragAxisOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHudEditorDragAxisOption::PositiveSide", (int64)EHudEditorDragAxisOption::PositiveSide },
				{ "EHudEditorDragAxisOption::NegativeSide", (int64)EHudEditorDragAxisOption::NegativeSide },
				{ "EHudEditorDragAxisOption::BothSide", (int64)EHudEditorDragAxisOption::BothSide },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BothSide.Name", "EHudEditorDragAxisOption::BothSide" },
				{ "ModuleRelativePath", "Public/EHudEditorDragAxisOption.h" },
				{ "NegativeSide.Name", "EHudEditorDragAxisOption::NegativeSide" },
				{ "PositiveSide.Name", "EHudEditorDragAxisOption::PositiveSide" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EHudEditorDragAxisOption",
				"EHudEditorDragAxisOption",
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
