// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/KnivesProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnivesProvider() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UKnivesProvider_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UKnivesProvider();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	PROJECTILE_API UClass* Z_Construct_UClass_UProjectileProvider_NoRegister();
// End Cross Module References
	void UKnivesProvider::StaticRegisterNativesUKnivesProvider()
	{
	}
	UClass* Z_Construct_UClass_UKnivesProvider_NoRegister()
	{
		return UKnivesProvider::StaticClass();
	}
	struct Z_Construct_UClass_UKnivesProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKnivesProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuthoritativeActorPoolComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKnivesProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KnivesProvider.h" },
		{ "ModuleRelativePath", "Public/KnivesProvider.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UKnivesProvider_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UProjectileProvider_NoRegister, (int32)VTABLE_OFFSET(UKnivesProvider, IProjectileProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKnivesProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKnivesProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKnivesProvider_Statics::ClassParams = {
		&UKnivesProvider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKnivesProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKnivesProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKnivesProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKnivesProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKnivesProvider, 3198182776);
	template<> THEK23_API UClass* StaticClass<UKnivesProvider>()
	{
		return UKnivesProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKnivesProvider(Z_Construct_UClass_UKnivesProvider, &UKnivesProvider::StaticClass, TEXT("/Script/TheK23"), TEXT("UKnivesProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKnivesProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
