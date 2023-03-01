// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/EJoinPartyMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJoinPartyMethod() {}
// Cross Module References
	SOCIALPARTY_API UEnum* Z_Construct_UEnum_SocialParty_EJoinPartyMethod();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
// End Cross Module References
	static UEnum* EJoinPartyMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SocialParty_EJoinPartyMethod, Z_Construct_UPackage__Script_SocialParty(), TEXT("EJoinPartyMethod"));
		}
		return Singleton;
	}
	template<> SOCIALPARTY_API UEnum* StaticEnum<EJoinPartyMethod>()
	{
		return EJoinPartyMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJoinPartyMethod(EJoinPartyMethod_StaticEnum, TEXT("/Script/SocialParty"), TEXT("EJoinPartyMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SocialParty_EJoinPartyMethod_Hash() { return 2826141065U; }
	UEnum* Z_Construct_UEnum_SocialParty_EJoinPartyMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJoinPartyMethod"), 0, Get_Z_Construct_UEnum_SocialParty_EJoinPartyMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJoinPartyMethod::None", (int64)EJoinPartyMethod::None },
				{ "EJoinPartyMethod::PlatformInvitation", (int64)EJoinPartyMethod::PlatformInvitation },
				{ "EJoinPartyMethod::InGameInvitation", (int64)EJoinPartyMethod::InGameInvitation },
				{ "EJoinPartyMethod::JoinRequest", (int64)EJoinPartyMethod::JoinRequest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "InGameInvitation.Name", "EJoinPartyMethod::InGameInvitation" },
				{ "JoinRequest.Name", "EJoinPartyMethod::JoinRequest" },
				{ "ModuleRelativePath", "Public/EJoinPartyMethod.h" },
				{ "None.Name", "EJoinPartyMethod::None" },
				{ "PlatformInvitation.Name", "EJoinPartyMethod::PlatformInvitation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SocialParty,
				nullptr,
				"EJoinPartyMethod",
				"EJoinPartyMethod",
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
