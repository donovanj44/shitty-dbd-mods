// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/EPerkInteractionObjectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPerkInteractionObjectType() {}
// Cross Module References
	THETWINS_API UEnum* Z_Construct_UEnum_TheTwins_EPerkInteractionObjectType();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	static UEnum* EPerkInteractionObjectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TheTwins_EPerkInteractionObjectType, Z_Construct_UPackage__Script_TheTwins(), TEXT("EPerkInteractionObjectType"));
		}
		return Singleton;
	}
	template<> THETWINS_API UEnum* StaticEnum<EPerkInteractionObjectType>()
	{
		return EPerkInteractionObjectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPerkInteractionObjectType(EPerkInteractionObjectType_StaticEnum, TEXT("/Script/TheTwins"), TEXT("EPerkInteractionObjectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TheTwins_EPerkInteractionObjectType_Hash() { return 1522874529U; }
	UEnum* Z_Construct_UEnum_TheTwins_EPerkInteractionObjectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TheTwins();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPerkInteractionObjectType"), 0, Get_Z_Construct_UEnum_TheTwins_EPerkInteractionObjectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPerkInteractionObjectType::Item", (int64)EPerkInteractionObjectType::Item },
				{ "EPerkInteractionObjectType::ChestClosed", (int64)EPerkInteractionObjectType::ChestClosed },
				{ "EPerkInteractionObjectType::ChestOpen", (int64)EPerkInteractionObjectType::ChestOpen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ChestClosed.Name", "EPerkInteractionObjectType::ChestClosed" },
				{ "ChestOpen.Name", "EPerkInteractionObjectType::ChestOpen" },
				{ "Item.Name", "EPerkInteractionObjectType::Item" },
				{ "ModuleRelativePath", "Public/EPerkInteractionObjectType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TheTwins,
				nullptr,
				"EPerkInteractionObjectType",
				"EPerkInteractionObjectType",
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
