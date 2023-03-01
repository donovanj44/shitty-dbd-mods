// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EFriendContainerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFriendContainerType() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EFriendContainerType();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EFriendContainerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EFriendContainerType, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EFriendContainerType"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFriendContainerType>()
	{
		return EFriendContainerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFriendContainerType(EFriendContainerType_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EFriendContainerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EFriendContainerType_Hash() { return 2314448383U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EFriendContainerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFriendContainerType"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EFriendContainerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFriendContainerType::Connected", (int64)EFriendContainerType::Connected },
				{ "EFriendContainerType::Disconnected", (int64)EFriendContainerType::Disconnected },
				{ "EFriendContainerType::PendingSentRequest", (int64)EFriendContainerType::PendingSentRequest },
				{ "EFriendContainerType::RecentlyPlayed", (int64)EFriendContainerType::RecentlyPlayed },
				{ "EFriendContainerType::SocialSuggestions", (int64)EFriendContainerType::SocialSuggestions },
				{ "EFriendContainerType::PendingReceivedRequest", (int64)EFriendContainerType::PendingReceivedRequest },
				{ "EFriendContainerType::QueriedPlayer", (int64)EFriendContainerType::QueriedPlayer },
				{ "EFriendContainerType::Unknown", (int64)EFriendContainerType::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Connected.Name", "EFriendContainerType::Connected" },
				{ "Disconnected.Name", "EFriendContainerType::Disconnected" },
				{ "ModuleRelativePath", "Public/EFriendContainerType.h" },
				{ "PendingReceivedRequest.Name", "EFriendContainerType::PendingReceivedRequest" },
				{ "PendingSentRequest.Name", "EFriendContainerType::PendingSentRequest" },
				{ "QueriedPlayer.Name", "EFriendContainerType::QueriedPlayer" },
				{ "RecentlyPlayed.Name", "EFriendContainerType::RecentlyPlayed" },
				{ "SocialSuggestions.Name", "EFriendContainerType::SocialSuggestions" },
				{ "Unknown.Name", "EFriendContainerType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EFriendContainerType",
				"EFriendContainerType",
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
