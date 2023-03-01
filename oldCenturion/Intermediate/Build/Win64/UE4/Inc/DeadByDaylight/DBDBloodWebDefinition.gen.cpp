// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDBloodWebDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBloodWebDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodWebDefinition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodWebDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister();
// End Cross Module References
	void UDBDBloodWebDefinition::StaticRegisterNativesUDBDBloodWebDefinition()
	{
	}
	UClass* Z_Construct_UClass_UDBDBloodWebDefinition_NoRegister()
	{
		return UDBDBloodWebDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UDBDBloodWebDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDBloodWebDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBloodWebDefinition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDBloodWebDefinition.h" },
		{ "ModuleRelativePath", "Public/DBDBloodWebDefinition.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDBDBloodWebDefinition_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister, (int32)VTABLE_OFFSET(UDBDBloodWebDefinition, IDBDBloodwebDefinitionBase), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDBloodWebDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDBloodWebDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDBloodWebDefinition_Statics::ClassParams = {
		&UDBDBloodWebDefinition::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDBloodWebDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBloodWebDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDBloodWebDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDBloodWebDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDBloodWebDefinition, 4212804018);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDBloodWebDefinition>()
	{
		return UDBDBloodWebDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDBloodWebDefinition(Z_Construct_UClass_UDBDBloodWebDefinition, &UDBDBloodWebDefinition::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDBloodWebDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDBloodWebDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
