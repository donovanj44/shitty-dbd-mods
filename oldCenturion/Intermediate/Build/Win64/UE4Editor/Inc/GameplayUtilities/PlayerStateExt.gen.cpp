// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/PlayerStateExt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStateExt() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPlayerStateExt_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPlayerStateExt();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void UPlayerStateExt::StaticRegisterNativesUPlayerStateExt()
	{
	}
	UClass* Z_Construct_UClass_UPlayerStateExt_NoRegister()
	{
		return UPlayerStateExt::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStateExt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStateExt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStateExt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerStateExt.h" },
		{ "ModuleRelativePath", "Public/PlayerStateExt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStateExt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateExt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateExt_Statics::ClassParams = {
		&UPlayerStateExt::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStateExt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateExt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStateExt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerStateExt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerStateExt, 620400221);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UPlayerStateExt>()
	{
		return UPlayerStateExt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerStateExt(Z_Construct_UClass_UPlayerStateExt, &UPlayerStateExt::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UPlayerStateExt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateExt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
