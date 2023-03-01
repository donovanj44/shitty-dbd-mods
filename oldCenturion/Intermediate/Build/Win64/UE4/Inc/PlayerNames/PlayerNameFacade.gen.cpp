// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerNames/Public/PlayerNameFacade.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerNameFacade() {}
// Cross Module References
	PLAYERNAMES_API UClass* Z_Construct_UClass_UPlayerNameFacade_NoRegister();
	PLAYERNAMES_API UClass* Z_Construct_UClass_UPlayerNameFacade();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_PlayerNames();
// End Cross Module References
	void UPlayerNameFacade::StaticRegisterNativesUPlayerNameFacade()
	{
	}
	UClass* Z_Construct_UClass_UPlayerNameFacade_NoRegister()
	{
		return UPlayerNameFacade::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerNameFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerNameFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayerNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerNameFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerNameFacade.h" },
		{ "ModuleRelativePath", "Public/PlayerNameFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerNameFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerNameFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerNameFacade_Statics::ClassParams = {
		&UPlayerNameFacade::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerNameFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerNameFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerNameFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerNameFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerNameFacade, 3580031704);
	template<> PLAYERNAMES_API UClass* StaticClass<UPlayerNameFacade>()
	{
		return UPlayerNameFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerNameFacade(Z_Construct_UClass_UPlayerNameFacade, &UPlayerNameFacade::StaticClass, TEXT("/Script/PlayerNames"), TEXT("UPlayerNameFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerNameFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
