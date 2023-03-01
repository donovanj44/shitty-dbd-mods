// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/PartyFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyFacade() {}
// Cross Module References
	SOCIALPARTY_API UClass* Z_Construct_UClass_UPartyFacade_NoRegister();
	SOCIALPARTY_API UClass* Z_Construct_UClass_UPartyFacade();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
// End Cross Module References
	void UPartyFacade::StaticRegisterNativesUPartyFacade()
	{
	}
	UClass* Z_Construct_UClass_UPartyFacade_NoRegister()
	{
		return UPartyFacade::StaticClass();
	}
	struct Z_Construct_UClass_UPartyFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PartyFacade.h" },
		{ "ModuleRelativePath", "Public/PartyFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPartyFacade_Statics::ClassParams = {
		&UPartyFacade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPartyFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPartyFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPartyFacade, 2790083348);
	template<> SOCIALPARTY_API UClass* StaticClass<UPartyFacade>()
	{
		return UPartyFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPartyFacade(Z_Construct_UClass_UPartyFacade, &UPartyFacade::StaticClass, TEXT("/Script/SocialParty"), TEXT("UPartyFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
