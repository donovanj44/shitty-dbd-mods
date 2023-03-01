// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestUtilities/Public/TestInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestInterface() {}
// Cross Module References
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestInterface_NoRegister();
	UNITTESTUTILITIES_API UClass* Z_Construct_UClass_UTestInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnitTestUtilities();
// End Cross Module References
	void UTestInterface::StaticRegisterNativesUTestInterface()
	{
	}
	UClass* Z_Construct_UClass_UTestInterface_NoRegister()
	{
		return UTestInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTestInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnitTestUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITestInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestInterface_Statics::ClassParams = {
		&UTestInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTestInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestInterface, 673323698);
	template<> UNITTESTUTILITIES_API UClass* StaticClass<UTestInterface>()
	{
		return UTestInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestInterface(Z_Construct_UClass_UTestInterface, &UTestInterface::StaticClass, TEXT("/Script/UnitTestUtilities"), TEXT("UTestInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
