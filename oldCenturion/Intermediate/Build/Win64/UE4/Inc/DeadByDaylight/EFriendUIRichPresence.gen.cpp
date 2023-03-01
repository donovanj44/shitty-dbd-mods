// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EFriendUIRichPresence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFriendUIRichPresence() {}
// Cross Module References
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EFriendUIRichPresence();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static UEnum* EFriendUIRichPresence_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DeadByDaylight_EFriendUIRichPresence, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EFriendUIRichPresence"));
		}
		return Singleton;
	}
	template<> DEADBYDAYLIGHT_API UEnum* StaticEnum<EFriendUIRichPresence>()
	{
		return EFriendUIRichPresence_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFriendUIRichPresence(EFriendUIRichPresence_StaticEnum, TEXT("/Script/DeadByDaylight"), TEXT("EFriendUIRichPresence"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DeadByDaylight_EFriendUIRichPresence_Hash() { return 2795382311U; }
	UEnum* Z_Construct_UEnum_DeadByDaylight_EFriendUIRichPresence()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFriendUIRichPresence"), 0, Get_Z_Construct_UEnum_DeadByDaylight_EFriendUIRichPresence_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFriendUIRichPresence::Undefined", (int64)EFriendUIRichPresence::Undefined },
				{ "EFriendUIRichPresence::InMenus", (int64)EFriendUIRichPresence::InMenus },
				{ "EFriendUIRichPresence::InLobby", (int64)EFriendUIRichPresence::InLobby },
				{ "EFriendUIRichPresence::InMatch", (int64)EFriendUIRichPresence::InMatch },
				{ "EFriendUIRichPresence::Connected", (int64)EFriendUIRichPresence::Connected },
				{ "EFriendUIRichPresence::Closing", (int64)EFriendUIRichPresence::Closing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Closing.Name", "EFriendUIRichPresence::Closing" },
				{ "Connected.Name", "EFriendUIRichPresence::Connected" },
				{ "InLobby.Name", "EFriendUIRichPresence::InLobby" },
				{ "InMatch.Name", "EFriendUIRichPresence::InMatch" },
				{ "InMenus.Name", "EFriendUIRichPresence::InMenus" },
				{ "ModuleRelativePath", "Public/EFriendUIRichPresence.h" },
				{ "Undefined.Name", "EFriendUIRichPresence::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight,
				nullptr,
				"EFriendUIRichPresence",
				"EFriendUIRichPresence",
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
