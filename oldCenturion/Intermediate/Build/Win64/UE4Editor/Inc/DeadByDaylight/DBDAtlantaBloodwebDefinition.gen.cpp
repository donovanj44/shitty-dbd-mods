// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAtlantaBloodwebDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAtlantaBloodwebDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaBloodwebDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister();
// End Cross Module References
	void UDBDAtlantaBloodwebDefinition::StaticRegisterNativesUDBDAtlantaBloodwebDefinition()
	{
	}
	UClass* Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_NoRegister()
	{
		return UDBDAtlantaBloodwebDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAtlantaBloodwebDefinition.h" },
		{ "ModuleRelativePath", "Public/DBDAtlantaBloodwebDefinition.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister, (int32)VTABLE_OFFSET(UDBDAtlantaBloodwebDefinition, IDBDBloodwebDefinitionBase), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAtlantaBloodwebDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::ClassParams = {
		&UDBDAtlantaBloodwebDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAtlantaBloodwebDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAtlantaBloodwebDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAtlantaBloodwebDefinition, 4085447028);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAtlantaBloodwebDefinition>()
	{
		return UDBDAtlantaBloodwebDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAtlantaBloodwebDefinition(Z_Construct_UClass_UDBDAtlantaBloodwebDefinition, &UDBDAtlantaBloodwebDefinition::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAtlantaBloodwebDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAtlantaBloodwebDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
