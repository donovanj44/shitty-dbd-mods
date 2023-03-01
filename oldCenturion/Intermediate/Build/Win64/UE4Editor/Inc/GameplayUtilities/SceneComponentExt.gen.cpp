// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/SceneComponentExt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneComponentExt() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_USceneComponentExt_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_USceneComponentExt();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void USceneComponentExt::StaticRegisterNativesUSceneComponentExt()
	{
	}
	UClass* Z_Construct_UClass_USceneComponentExt_NoRegister()
	{
		return USceneComponentExt::StaticClass();
	}
	struct Z_Construct_UClass_USceneComponentExt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneComponentExt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneComponentExt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SceneComponentExt.h" },
		{ "ModuleRelativePath", "Public/SceneComponentExt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneComponentExt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneComponentExt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USceneComponentExt_Statics::ClassParams = {
		&USceneComponentExt::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USceneComponentExt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneComponentExt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneComponentExt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USceneComponentExt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USceneComponentExt, 2514059303);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<USceneComponentExt>()
	{
		return USceneComponentExt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneComponentExt(Z_Construct_UClass_USceneComponentExt, &USceneComponentExt::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("USceneComponentExt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneComponentExt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
