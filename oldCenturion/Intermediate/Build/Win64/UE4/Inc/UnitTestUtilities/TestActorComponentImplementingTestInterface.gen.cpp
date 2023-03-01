// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestUtilities/Public/TestActorComponentImplementingTestInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActorComponentImplementingTestInterface() {}
// Cross Module References
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestActorComponentImplementingTestInterface_NoRegister();
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestActorComponentImplementingTestInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnitTestUtilities();
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestInterface_NoRegister();
// End Cross Module References
	void UTestActorComponentImplementingTestInterface::StaticRegisterNativesUTestActorComponentImplementingTestInterface()
	{
	}
	UClass* Z_Construct_UClass_UTestActorComponentImplementingTestInterface_NoRegister()
	{
		return UTestActorComponentImplementingTestInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitTestUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestActorComponentImplementingTestInterface.h" },
		{ "ModuleRelativePath", "Public/TestActorComponentImplementingTestInterface.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTestInterface_NoRegister, (int32)VTABLE_OFFSET(UTestActorComponentImplementingTestInterface, ITestInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestActorComponentImplementingTestInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::ClassParams = {
		&UTestActorComponentImplementingTestInterface::StaticClass,
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
		0x04B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestActorComponentImplementingTestInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestActorComponentImplementingTestInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestActorComponentImplementingTestInterface, 1453858643);
	template<> UNITTESTUTILITIES_API UClass* StaticClass<UTestActorComponentImplementingTestInterface>()
	{
		return UTestActorComponentImplementingTestInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestActorComponentImplementingTestInterface(Z_Construct_UClass_UTestActorComponentImplementingTestInterface, &UTestActorComponentImplementingTestInterface::StaticClass, TEXT("/Script/UnitTestUtilities"), TEXT("UTestActorComponentImplementingTestInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestActorComponentImplementingTestInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
