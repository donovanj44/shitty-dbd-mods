// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPathFollowingComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDPathFollowingComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();
// End Cross Module References
	void UDBDPathFollowingComponent::StaticRegisterNativesUDBDPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDPathFollowingComponent_NoRegister()
	{
		return UDBDPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onNavLinkProxies_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__onNavLinkProxies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__onNavLinkProxies_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnblockPathTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnblockPathTimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnblockPathDeviationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnblockPathDeviationRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/DBDPathFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp__onNavLinkProxies_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp__onNavLinkProxies = { "_onNavLinkProxies", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPathFollowingComponent, _onNavLinkProxies), METADATA_PARAMS(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp__onNavLinkProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp__onNavLinkProxies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp__onNavLinkProxies_ElementProp = { "_onNavLinkProxies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANavLinkProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathTimeLimit_MetaData[] = {
		{ "Category", "DBDPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/DBDPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathTimeLimit = { "UnblockPathTimeLimit", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPathFollowingComponent, UnblockPathTimeLimit), METADATA_PARAMS(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathTimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathDeviationRadius_MetaData[] = {
		{ "Category", "DBDPathFollowingComponent" },
		{ "ModuleRelativePath", "Public/DBDPathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathDeviationRadius = { "UnblockPathDeviationRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDPathFollowingComponent, UnblockPathDeviationRadius), METADATA_PARAMS(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathDeviationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathDeviationRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDPathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp__onNavLinkProxies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp__onNavLinkProxies_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathTimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDPathFollowingComponent_Statics::NewProp_UnblockPathDeviationRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDPathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDPathFollowingComponent_Statics::ClassParams = {
		&UDBDPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDPathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDPathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDPathFollowingComponent, 3306765516);
	template<> DBDBOTS_API UClass* StaticClass<UDBDPathFollowingComponent>()
	{
		return UDBDPathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDPathFollowingComponent(Z_Construct_UClass_UDBDPathFollowingComponent, &UDBDPathFollowingComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
