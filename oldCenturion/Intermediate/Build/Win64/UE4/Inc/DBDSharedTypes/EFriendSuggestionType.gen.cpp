// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/EFriendSuggestionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFriendSuggestionType() {}
// Cross Module References
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EFriendSuggestionType();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
	static UEnum* EFriendSuggestionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDSharedTypes_EFriendSuggestionType, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("EFriendSuggestionType"));
		}
		return Singleton;
	}
	template<> DBDSHAREDTYPES_API UEnum* StaticEnum<EFriendSuggestionType>()
	{
		return EFriendSuggestionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFriendSuggestionType(EFriendSuggestionType_StaticEnum, TEXT("/Script/DBDSharedTypes"), TEXT("EFriendSuggestionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDSharedTypes_EFriendSuggestionType_Hash() { return 1970354103U; }
	UEnum* Z_Construct_UEnum_DBDSharedTypes_EFriendSuggestionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFriendSuggestionType"), 0, Get_Z_Construct_UEnum_DBDSharedTypes_EFriendSuggestionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFriendSuggestionType::None", (int64)EFriendSuggestionType::None },
				{ "EFriendSuggestionType::Facebook", (int64)EFriendSuggestionType::Facebook },
				{ "EFriendSuggestionType::Google", (int64)EFriendSuggestionType::Google },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Facebook.Name", "EFriendSuggestionType::Facebook" },
				{ "Google.Name", "EFriendSuggestionType::Google" },
				{ "ModuleRelativePath", "Public/EFriendSuggestionType.h" },
				{ "None.Name", "EFriendSuggestionType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDSharedTypes,
				nullptr,
				"EFriendSuggestionType",
				"EFriendSuggestionType",
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
