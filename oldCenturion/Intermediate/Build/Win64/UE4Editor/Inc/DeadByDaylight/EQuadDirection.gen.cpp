// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EQuadDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQuadDirection() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EQuadDirection();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EQuadDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EQuadDirection, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EQuadDirection"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EQuadDirection>()
	{
		return EQuadDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuadDirection(EQuadDirection_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EQuadDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EQuadDirection_Hash() { return 467465909U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EQuadDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuadDirection"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EQuadDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuadDirection::None", (int64)EQuadDirection::None },
				{ "EQuadDirection::Up", (int64)EQuadDirection::Up },
				{ "EQuadDirection::Down", (int64)EQuadDirection::Down },
				{ "EQuadDirection::Left", (int64)EQuadDirection::Left },
				{ "EQuadDirection::Right", (int64)EQuadDirection::Right },
				{ "EQuadDirection::Empty", (int64)EQuadDirection::Empty },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Down.Name", "EQuadDirection::Down" },
				{ "Empty.Name", "EQuadDirection::Empty" },
				{ "Left.Name", "EQuadDirection::Left" },
				{ "ModuleRelativePath", "Public/EQuadDirection.h" },
				{ "None.Name", "EQuadDirection::None" },
				{ "Right.Name", "EQuadDirection::Right" },
				{ "Up.Name", "EQuadDirection::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EQuadDirection",
				"EQuadDirection",
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
