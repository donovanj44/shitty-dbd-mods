// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinStunnableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinStunnableComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinStunnableComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinStunnableComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStunnableComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinStunnableComponent::StaticRegisterNativesUTwinStunnableComponent()
	{
	}
	UClass* Z_Construct_UClass_UTwinStunnableComponent_NoRegister()
	{
		return UTwinStunnableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinStunnableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinStunnableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStunnableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinStunnableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinStunnableComponent.h" },
		{ "ModuleRelativePath", "Public/TwinStunnableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinStunnableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinStunnableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinStunnableComponent_Statics::ClassParams = {
		&UTwinStunnableComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinStunnableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinStunnableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinStunnableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinStunnableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinStunnableComponent, 2585206017);
	template<> THETWINS_API UClass* StaticClass<UTwinStunnableComponent>()
	{
		return UTwinStunnableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinStunnableComponent(Z_Construct_UClass_UTwinStunnableComponent, &UTwinStunnableComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinStunnableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinStunnableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
