// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LacerationUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLacerationUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULacerationUIData_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULacerationUIData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void ULacerationUIData::StaticRegisterNativesULacerationUIData()
	{
	}
	UClass* Z_Construct_UClass_ULacerationUIData_NoRegister()
	{
		return ULacerationUIData::StaticClass();
	}
	struct Z_Construct_UClass_ULacerationUIData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULacerationUIData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationUIData_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LacerationUIData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULacerationUIData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILacerationUIData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULacerationUIData_Statics::ClassParams = {
		&ULacerationUIData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULacerationUIData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationUIData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULacerationUIData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULacerationUIData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULacerationUIData, 1553841014);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULacerationUIData>()
	{
		return ULacerationUIData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULacerationUIData(Z_Construct_UClass_ULacerationUIData, &ULacerationUIData::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULacerationUIData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULacerationUIData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
