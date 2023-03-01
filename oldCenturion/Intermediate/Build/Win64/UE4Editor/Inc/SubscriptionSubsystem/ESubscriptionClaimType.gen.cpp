// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubscriptionSubsystem/Public/ESubscriptionClaimType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESubscriptionClaimType() {}
// Cross Module References
	SUBSCRIPTIONSUBSYSTEM_API UEnum* Z_Construct_UEnum_SubscriptionSubsystem_ESubscriptionClaimType();
	UPackage* Z_Construct_UPackage__Script_SubscriptionSubsystem();
// End Cross Module References
	static UEnum* ESubscriptionClaimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubscriptionSubsystem_ESubscriptionClaimType, Z_Construct_UPackage__Script_SubscriptionSubsystem(), TEXT("ESubscriptionClaimType"));
		}
		return Singleton;
	}
	template<> SUBSCRIPTIONSUBSYSTEM_API UEnum* StaticEnum<ESubscriptionClaimType>()
	{
		return ESubscriptionClaimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubscriptionClaimType(ESubscriptionClaimType_StaticEnum, TEXT("/Script/SubscriptionSubsystem"), TEXT("ESubscriptionClaimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubscriptionSubsystem_ESubscriptionClaimType_Hash() { return 3161165801U; }
	UEnum* Z_Construct_UEnum_SubscriptionSubsystem_ESubscriptionClaimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubscriptionSubsystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubscriptionClaimType"), 0, Get_Z_Construct_UEnum_SubscriptionSubsystem_ESubscriptionClaimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubscriptionClaimType::None", (int64)ESubscriptionClaimType::None },
				{ "ESubscriptionClaimType::Daily", (int64)ESubscriptionClaimType::Daily },
				{ "ESubscriptionClaimType::Renewal", (int64)ESubscriptionClaimType::Renewal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Daily.Name", "ESubscriptionClaimType::Daily" },
				{ "ModuleRelativePath", "Public/ESubscriptionClaimType.h" },
				{ "None.Name", "ESubscriptionClaimType::None" },
				{ "Renewal.Name", "ESubscriptionClaimType::Renewal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubscriptionSubsystem,
				nullptr,
				"ESubscriptionClaimType",
				"ESubscriptionClaimType",
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
