// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Activation/Public/ActivatableMock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivatableMock() {}
// Cross Module References
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatableMock_NoRegister();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatableMock();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Activation();
	ACTIVATION_API UClass* Z_Construct_UClass_UActivatable_NoRegister();
// End Cross Module References
	void UActivatableMock::StaticRegisterNativesUActivatableMock()
	{
	}
	UClass* Z_Construct_UClass_UActivatableMock_NoRegister()
	{
		return UActivatableMock::StaticClass();
	}
	struct Z_Construct_UClass_UActivatableMock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivatableMock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Activation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivatableMock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActivatableMock.h" },
		{ "ModuleRelativePath", "Public/ActivatableMock.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActivatableMock_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UActivatable_NoRegister, (int32)VTABLE_OFFSET(UActivatableMock, IActivatable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivatableMock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivatableMock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivatableMock_Statics::ClassParams = {
		&UActivatableMock::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivatableMock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivatableMock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivatableMock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivatableMock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivatableMock, 741300658);
	template<> ACTIVATION_API UClass* StaticClass<UActivatableMock>()
	{
		return UActivatableMock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivatableMock(Z_Construct_UClass_UActivatableMock, &UActivatableMock::StaticClass, TEXT("/Script/Activation"), TEXT("UActivatableMock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivatableMock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
