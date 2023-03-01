// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/EK25ChainAnchorPointDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEK25ChainAnchorPointDirection() {}
// Cross Module References
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static UEnum* EK25ChainAnchorPointDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection, Z_Construct_UPackage__Script_TheK25(), TEXT("EK25ChainAnchorPointDirection"));
		}
		return Singleton;
	}
	template<> THEK25_API UEnum* StaticEnum<EK25ChainAnchorPointDirection>()
	{
		return EK25ChainAnchorPointDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EK25ChainAnchorPointDirection(EK25ChainAnchorPointDirection_StaticEnum, TEXT("/Script/TheK25"), TEXT("EK25ChainAnchorPointDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection_Hash() { return 3035654490U; }
	UEnum* Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EK25ChainAnchorPointDirection"), 0, Get_Z_Construct_UEnum_TheK25_EK25ChainAnchorPointDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EK25ChainAnchorPointDirection::Front", (int64)EK25ChainAnchorPointDirection::Front },
				{ "EK25ChainAnchorPointDirection::Left", (int64)EK25ChainAnchorPointDirection::Left },
				{ "EK25ChainAnchorPointDirection::Right", (int64)EK25ChainAnchorPointDirection::Right },
				{ "EK25ChainAnchorPointDirection::Back", (int64)EK25ChainAnchorPointDirection::Back },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Name", "EK25ChainAnchorPointDirection::Back" },
				{ "BlueprintType", "true" },
				{ "Front.Name", "EK25ChainAnchorPointDirection::Front" },
				{ "Left.Name", "EK25ChainAnchorPointDirection::Left" },
				{ "ModuleRelativePath", "Public/EK25ChainAnchorPointDirection.h" },
				{ "Right.Name", "EK25ChainAnchorPointDirection::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheK25,
				nullptr,
				"EK25ChainAnchorPointDirection",
				"EK25ChainAnchorPointDirection",
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
