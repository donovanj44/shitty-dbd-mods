// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAtlantaStructuredData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAtlantaStructuredData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaStructuredData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAtlantaStructuredData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaHeartbeatActor_NoRegister();
// End Cross Module References
	void UDBDAtlantaStructuredData::StaticRegisterNativesUDBDAtlantaStructuredData()
	{
	}
	UClass* Z_Construct_UClass_UDBDAtlantaStructuredData_NoRegister()
	{
		return UDBDAtlantaStructuredData::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAtlantaStructuredData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaHeartbeatActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AtlantaHeartbeatActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAtlantaStructuredData.h" },
		{ "ModuleRelativePath", "Public/DBDAtlantaStructuredData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::NewProp_AtlantaHeartbeatActor_MetaData[] = {
		{ "Category", "DBDAtlantaStructuredData" },
		{ "ModuleRelativePath", "Public/DBDAtlantaStructuredData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::NewProp_AtlantaHeartbeatActor = { "AtlantaHeartbeatActor", nullptr, (EPropertyFlags)0x0014000002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDAtlantaStructuredData, AtlantaHeartbeatActor), Z_Construct_UClass_AAtlantaHeartbeatActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::NewProp_AtlantaHeartbeatActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::NewProp_AtlantaHeartbeatActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::NewProp_AtlantaHeartbeatActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAtlantaStructuredData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::ClassParams = {
		&UDBDAtlantaStructuredData::StaticClass,
		"Design",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAtlantaStructuredData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAtlantaStructuredData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAtlantaStructuredData, 1090544637);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAtlantaStructuredData>()
	{
		return UDBDAtlantaStructuredData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAtlantaStructuredData(Z_Construct_UClass_UDBDAtlantaStructuredData, &UDBDAtlantaStructuredData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAtlantaStructuredData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAtlantaStructuredData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
