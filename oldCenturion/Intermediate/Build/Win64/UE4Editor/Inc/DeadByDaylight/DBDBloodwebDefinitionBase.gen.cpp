// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBloodwebDefinitionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBloodwebDefinitionBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDBloodwebDefinitionBase::StaticRegisterNativesUDBDBloodwebDefinitionBase()
	{
	}
	UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister()
	{
		return UDBDBloodwebDefinitionBase::StaticClass();
	}
	struct Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDBloodwebDefinitionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDBDBloodwebDefinitionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics::ClassParams = {
		&UDBDBloodwebDefinitionBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDBloodwebDefinitionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDBloodwebDefinitionBase, 1329165478);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDBloodwebDefinitionBase>()
	{
		return UDBDBloodwebDefinitionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDBloodwebDefinitionBase(Z_Construct_UClass_UDBDBloodwebDefinitionBase, &UDBDBloodwebDefinitionBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDBloodwebDefinitionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDBloodwebDefinitionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
