// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TileEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileEventComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileEventComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTileEventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UTileEventComponent::StaticRegisterNativesUTileEventComponent()
	{
	}
	UClass* Z_Construct_UClass_UTileEventComponent_NoRegister()
	{
		return UTileEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTileEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileEventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileEventComponent.h" },
		{ "ModuleRelativePath", "Public/TileEventComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTileEventComponent_Statics::ClassParams = {
		&UTileEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTileEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTileEventComponent, 2345710882);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTileEventComponent>()
	{
		return UTileEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTileEventComponent(Z_Construct_UClass_UTileEventComponent, &UTileEventComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTileEventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
