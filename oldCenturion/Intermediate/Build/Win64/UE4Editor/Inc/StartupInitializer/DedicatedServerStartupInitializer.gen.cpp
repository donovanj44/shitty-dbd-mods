// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StartupInitializer/Public/DedicatedServerStartupInitializer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDedicatedServerStartupInitializer() {}
// Cross Module References
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UDedicatedServerStartupInitializer_NoRegister();
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UDedicatedServerStartupInitializer();
	STARTUPINITIALIZER_API UClass* Z_Construct_UClass_UStartupInitializer();
	UPackage* Z_Construct_UPackage__Script_StartupInitializer();
	TIMEUTILITIES_API UClass* Z_Construct_UClass_UDBDTimeUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDedicatedServerStartupInitializerInterface_NoRegister();
// End Cross Module References
	void UDedicatedServerStartupInitializer::StaticRegisterNativesUDedicatedServerStartupInitializer()
	{
	}
	UClass* Z_Construct_UClass_UDedicatedServerStartupInitializer_NoRegister()
	{
		return UDedicatedServerStartupInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dbdTimeUtilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dbdTimeUtilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStartupInitializer,
		(UObject* (*)())Z_Construct_UPackage__Script_StartupInitializer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DedicatedServerStartupInitializer.h" },
		{ "ModuleRelativePath", "Public/DedicatedServerStartupInitializer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::NewProp__dbdTimeUtilities_MetaData[] = {
		{ "ModuleRelativePath", "Public/DedicatedServerStartupInitializer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::NewProp__dbdTimeUtilities = { "_dbdTimeUtilities", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDedicatedServerStartupInitializer, _dbdTimeUtilities), Z_Construct_UClass_UDBDTimeUtilities_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::NewProp__dbdTimeUtilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::NewProp__dbdTimeUtilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::NewProp__dbdTimeUtilities,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDedicatedServerStartupInitializerInterface_NoRegister, (int32)VTABLE_OFFSET(UDedicatedServerStartupInitializer, IDedicatedServerStartupInitializerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDedicatedServerStartupInitializer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::ClassParams = {
		&UDedicatedServerStartupInitializer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDedicatedServerStartupInitializer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDedicatedServerStartupInitializer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDedicatedServerStartupInitializer, 2387340019);
	template<> STARTUPINITIALIZER_API UClass* StaticClass<UDedicatedServerStartupInitializer>()
	{
		return UDedicatedServerStartupInitializer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDedicatedServerStartupInitializer(Z_Construct_UClass_UDedicatedServerStartupInitializer, &UDedicatedServerStartupInitializer::StaticClass, TEXT("/Script/StartupInitializer"), TEXT("UDedicatedServerStartupInitializer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDedicatedServerStartupInitializer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
