// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebEntity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebEntity() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebEntity_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebEntity();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	void UBloodwebEntity::StaticRegisterNativesUBloodwebEntity()
	{
	}
	UClass* Z_Construct_UClass_UBloodwebEntity_NoRegister()
	{
		return UBloodwebEntity::StaticClass();
	}
	struct Z_Construct_UClass_UBloodwebEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodWebDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__bloodWebDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodwebTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodwebEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodwebEntity.h" },
		{ "ModuleRelativePath", "Public/BloodwebEntity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodWebDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodWebDefinition = { "_bloodWebDefinition", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebEntity, _bloodWebDefinition), Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodWebDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodWebDefinition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodwebTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodwebTunables = { "_bloodwebTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebEntity, _bloodwebTunables), Z_Construct_UClass_UBloodwebTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodwebTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodwebTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebEntity.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebEntity, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodwebEntity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodWebDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__bloodwebTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebEntity_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodwebEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodwebEntity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodwebEntity_Statics::ClassParams = {
		&UBloodwebEntity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodwebEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebEntity_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodwebEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodwebEntity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodwebEntity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodwebEntity, 476218681);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodwebEntity>()
	{
		return UBloodwebEntity::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodwebEntity(Z_Construct_UClass_UBloodwebEntity, &UBloodwebEntity::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodwebEntity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodwebEntity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
