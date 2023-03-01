// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EAIEvadeLoopSides.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAIEvadeLoopSides() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIEvadeLoopSides();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EAIEvadeLoopSides_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EAIEvadeLoopSides, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EAIEvadeLoopSides"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EAIEvadeLoopSides>()
	{
		return EAIEvadeLoopSides_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAIEvadeLoopSides(EAIEvadeLoopSides_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EAIEvadeLoopSides"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EAIEvadeLoopSides_Hash() { return 2005255520U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EAIEvadeLoopSides()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAIEvadeLoopSides"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EAIEvadeLoopSides_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAIEvadeLoopSides::Left", (int64)EAIEvadeLoopSides::Left },
				{ "EAIEvadeLoopSides::Right", (int64)EAIEvadeLoopSides::Right },
				{ "EAIEvadeLoopSides::Count", (int64)EAIEvadeLoopSides::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Count.Name", "EAIEvadeLoopSides::Count" },
				{ "Left.Name", "EAIEvadeLoopSides::Left" },
				{ "ModuleRelativePath", "Public/EAIEvadeLoopSides.h" },
				{ "Right.Name", "EAIEvadeLoopSides::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EAIEvadeLoopSides",
				"EAIEvadeLoopSides",
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
