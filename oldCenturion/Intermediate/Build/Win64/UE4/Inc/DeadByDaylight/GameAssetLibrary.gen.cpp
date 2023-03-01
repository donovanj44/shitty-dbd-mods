// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameAssetLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAssetLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameAssetLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameAssetLibrary();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAssetLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	void UGameAssetLibrary::StaticRegisterNativesUGameAssetLibrary()
	{
	}
	UClass* Z_Construct_UClass_UGameAssetLibrary_NoRegister()
	{
		return UGameAssetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGameAssetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAssetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAssetLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAssetLibrary.h" },
		{ "ModuleRelativePath", "Public/GameAssetLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAssetLibrary_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameAssetLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameAssetLibrary_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameAssetLibrary, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameAssetLibrary_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAssetLibrary_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameAssetLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameAssetLibrary_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAssetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAssetLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameAssetLibrary_Statics::ClassParams = {
		&UGameAssetLibrary::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameAssetLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameAssetLibrary_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAssetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAssetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAssetLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameAssetLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameAssetLibrary, 1345453819);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameAssetLibrary>()
	{
		return UGameAssetLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameAssetLibrary(Z_Construct_UClass_UGameAssetLibrary, &UGameAssetLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameAssetLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAssetLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
