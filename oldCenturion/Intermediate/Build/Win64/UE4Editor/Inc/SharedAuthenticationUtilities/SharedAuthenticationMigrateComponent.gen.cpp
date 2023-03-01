// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedAuthenticationUtilities/Public/SharedAuthenticationMigrateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedAuthenticationMigrateComponent() {}
// Cross Module References
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_USharedAuthenticationMigrateComponent_NoRegister();
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_USharedAuthenticationMigrateComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USharedAuthenticationMigrateComponent::StaticRegisterNativesUSharedAuthenticationMigrateComponent()
	{
	}
	UClass* Z_Construct_UClass_USharedAuthenticationMigrateComponent_NoRegister()
	{
		return USharedAuthenticationMigrateComponent::StaticClass();
	}
	struct Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SharedAuthenticationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SharedAuthenticationMigrateComponent.h" },
		{ "ModuleRelativePath", "Public/SharedAuthenticationMigrateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::NewProp__worldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedAuthenticationMigrateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::NewProp__worldContextObject = { "_worldContextObject", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedAuthenticationMigrateComponent, _worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::NewProp__worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::NewProp__worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::NewProp__worldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedAuthenticationMigrateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::ClassParams = {
		&USharedAuthenticationMigrateComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedAuthenticationMigrateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USharedAuthenticationMigrateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USharedAuthenticationMigrateComponent, 3268762605);
	template<> SHAREDAUTHENTICATIONUTILITIES_API UClass* StaticClass<USharedAuthenticationMigrateComponent>()
	{
		return USharedAuthenticationMigrateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USharedAuthenticationMigrateComponent(Z_Construct_UClass_USharedAuthenticationMigrateComponent, &USharedAuthenticationMigrateComponent::StaticClass, TEXT("/Script/SharedAuthenticationUtilities"), TEXT("USharedAuthenticationMigrateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedAuthenticationMigrateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
