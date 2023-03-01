// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineMessagesUtilities/Public/EClaimableInboxMessageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEClaimableInboxMessageType() {}
// Cross Module References
	ONLINEMESSAGESUTILITIES_API UEnum* Z_Construct_UEnum_OnlineMessagesUtilities_EClaimableInboxMessageType();
	UPackage* Z_Construct_UPackage__Script_OnlineMessagesUtilities();
// End Cross Module References
	static UEnum* EClaimableInboxMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineMessagesUtilities_EClaimableInboxMessageType, Z_Construct_UPackage__Script_OnlineMessagesUtilities(), TEXT("EClaimableInboxMessageType"));
		}
		return Singleton;
	}
	template<> ONLINEMESSAGESUTILITIES_API UEnum* StaticEnum<EClaimableInboxMessageType>()
	{
		return EClaimableInboxMessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClaimableInboxMessageType(EClaimableInboxMessageType_StaticEnum, TEXT("/Script/OnlineMessagesUtilities"), TEXT("EClaimableInboxMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineMessagesUtilities_EClaimableInboxMessageType_Hash() { return 4136704811U; }
	UEnum* Z_Construct_UEnum_OnlineMessagesUtilities_EClaimableInboxMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineMessagesUtilities();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClaimableInboxMessageType"), 0, Get_Z_Construct_UEnum_OnlineMessagesUtilities_EClaimableInboxMessageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClaimableInboxMessageType::None", (int64)EClaimableInboxMessageType::None },
				{ "EClaimableInboxMessageType::Currency", (int64)EClaimableInboxMessageType::Currency },
				{ "EClaimableInboxMessageType::Inventory", (int64)EClaimableInboxMessageType::Inventory },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Currency.Name", "EClaimableInboxMessageType::Currency" },
				{ "Inventory.Name", "EClaimableInboxMessageType::Inventory" },
				{ "ModuleRelativePath", "Public/EClaimableInboxMessageType.h" },
				{ "None.Name", "EClaimableInboxMessageType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineMessagesUtilities,
				nullptr,
				"EClaimableInboxMessageType",
				"EClaimableInboxMessageType",
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
