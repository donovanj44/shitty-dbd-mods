// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialBlockList/Public/BlockListFacade.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockListFacade() {}
// Cross Module References
	SOCIALBLOCKLIST_API UClass* Z_Construct_UClass_UBlockListFacade_NoRegister();
	SOCIALBLOCKLIST_API UClass* Z_Construct_UClass_UBlockListFacade();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_SocialBlockList();
// End Cross Module References
	void UBlockListFacade::StaticRegisterNativesUBlockListFacade()
	{
	}
	UClass* Z_Construct_UClass_UBlockListFacade_NoRegister()
	{
		return UBlockListFacade::StaticClass();
	}
	struct Z_Construct_UClass_UBlockListFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockListFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SocialBlockList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockListFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlockListFacade.h" },
		{ "ModuleRelativePath", "Public/BlockListFacade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockListFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockListFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlockListFacade_Statics::ClassParams = {
		&UBlockListFacade::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlockListFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlockListFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlockListFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlockListFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlockListFacade, 2736379400);
	template<> SOCIALBLOCKLIST_API UClass* StaticClass<UBlockListFacade>()
	{
		return UBlockListFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlockListFacade(Z_Construct_UClass_UBlockListFacade, &UBlockListFacade::StaticClass, TEXT("/Script/SocialBlockList"), TEXT("UBlockListFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockListFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
