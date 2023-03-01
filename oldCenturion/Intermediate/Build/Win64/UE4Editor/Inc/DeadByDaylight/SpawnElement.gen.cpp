// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpawnElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnElement() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnElement_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnElement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USpawnElement::StaticRegisterNativesUSpawnElement()
	{
	}
	UClass* Z_Construct_UClass_USpawnElement_NoRegister()
	{
		return USpawnElement::StaticClass();
	}
	struct Z_Construct_UClass_USpawnElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnElement_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpawnElement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISpawnElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpawnElement_Statics::ClassParams = {
		&USpawnElement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpawnElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpawnElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpawnElement, 1546642590);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USpawnElement>()
	{
		return USpawnElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpawnElement(Z_Construct_UClass_USpawnElement, &USpawnElement::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USpawnElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnElement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
