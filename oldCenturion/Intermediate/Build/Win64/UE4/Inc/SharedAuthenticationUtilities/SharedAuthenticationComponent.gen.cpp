// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedAuthenticationUtilities/Public/SharedAuthenticationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedAuthenticationComponent() {}
// Cross Module References
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_USharedAuthenticationComponent_NoRegister();
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_USharedAuthenticationComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_USharedAuthenticationMigrateComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SHAREDAUTHENTICATIONUTILITIES_API UEnum* Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_UUMGAuthenticationProviderSelection_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHAREDAUTHENTICATIONUTILITIES_API UClass* Z_Construct_UClass_UUMGAutheticationProviderSelection_NoRegister();
// End Cross Module References
	void USharedAuthenticationComponent::StaticRegisterNativesUSharedAuthenticationComponent()
	{
	}
	UClass* Z_Construct_UClass_USharedAuthenticationComponent_NoRegister()
	{
		return USharedAuthenticationComponent::StaticClass();
	}
	struct Z_Construct_UClass_USharedAuthenticationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__migrateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__migrateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__worldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginBackgroundToLoadWidgetToLoadMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoginBackgroundToLoadWidgetToLoadMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoginBackgroundToLoadWidgetToLoadMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoginBackgroundToLoadWidgetToLoadMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_LoginBackgroundToLoadWidgetToLoadMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthenticationProviderSelectionWidgetToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AuthenticationProviderSelectionWidgetToLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthenticationProviderSelectionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AuthenticationProviderSelectionWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupZOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PopupZOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedAuthenticationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SharedAuthenticationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SharedAuthenticationComponent.h" },
		{ "ModuleRelativePath", "Public/SharedAuthenticationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__migrateComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedAuthenticationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__migrateComponent = { "_migrateComponent", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedAuthenticationComponent, _migrateComponent), Z_Construct_UClass_USharedAuthenticationMigrateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__migrateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__migrateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__worldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedAuthenticationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__worldContextObject = { "_worldContextObject", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedAuthenticationComponent, _worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__worldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_MetaData[] = {
		{ "Category", "SharedAuthenticationComponent" },
		{ "ModuleRelativePath", "Public/SharedAuthenticationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap = { "LoginBackgroundToLoadWidgetToLoadMap", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedAuthenticationComponent, LoginBackgroundToLoadWidgetToLoadMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_Key_KeyProp = { "LoginBackgroundToLoadWidgetToLoadMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SharedAuthenticationUtilities_ESharedAuthenticationProvider, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_ValueProp = { "LoginBackgroundToLoadWidgetToLoadMap", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidgetToLoad_MetaData[] = {
		{ "Category", "SharedAuthenticationComponent" },
		{ "ModuleRelativePath", "Public/SharedAuthenticationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidgetToLoad = { "AuthenticationProviderSelectionWidgetToLoad", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedAuthenticationComponent, AuthenticationProviderSelectionWidgetToLoad), Z_Construct_UClass_UUMGAuthenticationProviderSelection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidgetToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidgetToLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidget_MetaData[] = {
		{ "Category", "SharedAuthenticationComponent" },
		{ "ModuleRelativePath", "Public/SharedAuthenticationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidget = { "AuthenticationProviderSelectionWidget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedAuthenticationComponent, AuthenticationProviderSelectionWidget), Z_Construct_UClass_UUMGAutheticationProviderSelection_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_PopupZOrder_MetaData[] = {
		{ "Category", "SharedAuthenticationComponent" },
		{ "ModuleRelativePath", "Public/SharedAuthenticationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_PopupZOrder = { "PopupZOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USharedAuthenticationComponent, PopupZOrder), METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_PopupZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_PopupZOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharedAuthenticationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__migrateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp__worldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_LoginBackgroundToLoadWidgetToLoadMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidgetToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_AuthenticationProviderSelectionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedAuthenticationComponent_Statics::NewProp_PopupZOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedAuthenticationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedAuthenticationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USharedAuthenticationComponent_Statics::ClassParams = {
		&USharedAuthenticationComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharedAuthenticationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USharedAuthenticationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedAuthenticationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedAuthenticationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USharedAuthenticationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USharedAuthenticationComponent, 3379010244);
	template<> SHAREDAUTHENTICATIONUTILITIES_API UClass* StaticClass<USharedAuthenticationComponent>()
	{
		return USharedAuthenticationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USharedAuthenticationComponent(Z_Construct_UClass_USharedAuthenticationComponent, &USharedAuthenticationComponent::StaticClass, TEXT("/Script/SharedAuthenticationUtilities"), TEXT("USharedAuthenticationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedAuthenticationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
