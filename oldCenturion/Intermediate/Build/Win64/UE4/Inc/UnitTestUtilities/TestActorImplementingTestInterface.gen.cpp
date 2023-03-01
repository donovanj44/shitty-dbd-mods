// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestUtilities/Public/TestActorImplementingTestInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActorImplementingTestInterface() {}
// Cross Module References
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_ATestActorImplementingTestInterface_NoRegister();
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_ATestActorImplementingTestInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnitTestUtilities();
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestInterface_NoRegister();
// End Cross Module References
	void ATestActorImplementingTestInterface::StaticRegisterNativesATestActorImplementingTestInterface()
	{
	}
	UClass* Z_Construct_UClass_ATestActorImplementingTestInterface_NoRegister()
	{
		return ATestActorImplementingTestInterface::StaticClass();
	}
	struct Z_Construct_UClass_ATestActorImplementingTestInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitTestUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestActorImplementingTestInterface.h" },
		{ "ModuleRelativePath", "Public/TestActorImplementingTestInterface.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTestInterface_NoRegister, (int32)VTABLE_OFFSET(ATestActorImplementingTestInterface, ITestInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActorImplementingTestInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::ClassParams = {
		&ATestActorImplementingTestInterface::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestActorImplementingTestInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestActorImplementingTestInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestActorImplementingTestInterface, 3805276180);
	template<> UNITTESTUTILITIES_API UClass* StaticClass<ATestActorImplementingTestInterface>()
	{
		return ATestActorImplementingTestInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestActorImplementingTestInterface(Z_Construct_UClass_ATestActorImplementingTestInterface, &ATestActorImplementingTestInterface::StaticClass, TEXT("/Script/UnitTestUtilities"), TEXT("ATestActorImplementingTestInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActorImplementingTestInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
