// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPartyFacade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPartyFacade() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPartyFacade_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPartyFacade();
	SOCIALPARTY_API UClass* Z_Construct_UClass_UPartyFacade();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDPartyFacade::StaticRegisterNativesUDBDPartyFacade()
	{
	}
	UClass* Z_Construct_UClass_UDBDPartyFacade_NoRegister()
	{
		return UDBDPartyFacade::StaticClass();
	}
	struct Z_Construct_UClass_UDBDPartyFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDPartyFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPartyFacade,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPartyFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDPartyFacade.h" },
		{ "ModuleRelativePath", "Public/DBDPartyFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDPartyFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDPartyFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDPartyFacade_Statics::ClassParams = {
		&UDBDPartyFacade::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDPartyFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPartyFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDPartyFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDPartyFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDPartyFacade, 1821846992);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDPartyFacade>()
	{
		return UDBDPartyFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDPartyFacade(Z_Construct_UClass_UDBDPartyFacade, &UDBDPartyFacade::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDPartyFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDPartyFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
