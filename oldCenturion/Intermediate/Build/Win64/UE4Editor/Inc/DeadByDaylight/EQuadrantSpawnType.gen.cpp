// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EQuadrantSpawnType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQuadrantSpawnType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EQuadrantSpawnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EQuadrantSpawnType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EQuadrantSpawnType>()
	{
		return EQuadrantSpawnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuadrantSpawnType(EQuadrantSpawnType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EQuadrantSpawnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType_Hash() { return 1988318436U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuadrantSpawnType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuadrantSpawnType::L_Shape", (int64)EQuadrantSpawnType::L_Shape },
				{ "EQuadrantSpawnType::Square", (int64)EQuadrantSpawnType::Square },
				{ "EQuadrantSpawnType::Rect_X", (int64)EQuadrantSpawnType::Rect_X },
				{ "EQuadrantSpawnType::Rect_Y", (int64)EQuadrantSpawnType::Rect_Y },
				{ "EQuadrantSpawnType::Rect", (int64)EQuadrantSpawnType::Rect },
				{ "EQuadrantSpawnType::None", (int64)EQuadrantSpawnType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "L_Shape.Name", "EQuadrantSpawnType::L_Shape" },
				{ "ModuleRelativePath", "Public/EQuadrantSpawnType.h" },
				{ "None.Name", "EQuadrantSpawnType::None" },
				{ "Rect.Name", "EQuadrantSpawnType::Rect" },
				{ "Rect_X.Name", "EQuadrantSpawnType::Rect_X" },
				{ "Rect_Y.Name", "EQuadrantSpawnType::Rect_Y" },
				{ "Square.Name", "EQuadrantSpawnType::Square" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EQuadrantSpawnType",
				"EQuadrantSpawnType",
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
