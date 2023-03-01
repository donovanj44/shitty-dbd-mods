// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EFriendSearchPanelOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFriendSearchPanelOption() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EFriendSearchPanelOption();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EFriendSearchPanelOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EFriendSearchPanelOption, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EFriendSearchPanelOption"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFriendSearchPanelOption>()
	{
		return EFriendSearchPanelOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFriendSearchPanelOption(EFriendSearchPanelOption_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EFriendSearchPanelOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EFriendSearchPanelOption_Hash() { return 798499243U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EFriendSearchPanelOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFriendSearchPanelOption"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EFriendSearchPanelOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFriendSearchPanelOption::NotFoundPanel", (int64)EFriendSearchPanelOption::NotFoundPanel },
				{ "EFriendSearchPanelOption::NonFriendPanel", (int64)EFriendSearchPanelOption::NonFriendPanel },
				{ "EFriendSearchPanelOption::FriendRequestReceivedPanel", (int64)EFriendSearchPanelOption::FriendRequestReceivedPanel },
				{ "EFriendSearchPanelOption::FriendRequestSentPanel", (int64)EFriendSearchPanelOption::FriendRequestSentPanel },
				{ "EFriendSearchPanelOption::FriendPanel", (int64)EFriendSearchPanelOption::FriendPanel },
				{ "EFriendSearchPanelOption::IsOwnerPanel", (int64)EFriendSearchPanelOption::IsOwnerPanel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FriendPanel.Name", "EFriendSearchPanelOption::FriendPanel" },
				{ "FriendRequestReceivedPanel.Name", "EFriendSearchPanelOption::FriendRequestReceivedPanel" },
				{ "FriendRequestSentPanel.Name", "EFriendSearchPanelOption::FriendRequestSentPanel" },
				{ "IsOwnerPanel.Name", "EFriendSearchPanelOption::IsOwnerPanel" },
				{ "ModuleRelativePath", "Public/EFriendSearchPanelOption.h" },
				{ "NonFriendPanel.Name", "EFriendSearchPanelOption::NonFriendPanel" },
				{ "NotFoundPanel.Name", "EFriendSearchPanelOption::NotFoundPanel" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EFriendSearchPanelOption",
				"EFriendSearchPanelOption",
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
