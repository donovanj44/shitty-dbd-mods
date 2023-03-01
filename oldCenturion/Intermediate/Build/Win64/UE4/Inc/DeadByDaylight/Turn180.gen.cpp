// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Turn180.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurn180() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTurn180_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTurn180();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UTurn180::StaticRegisterNativesUTurn180()
	{
	}
	UClass* Z_Construct_UClass_UTurn180_NoRegister()
	{
		return UTurn180::StaticClass();
	}
	struct Z_Construct_UClass_UTurn180_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurn180_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurn180_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Turn180.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurn180_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITurn180>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTurn180_Statics::ClassParams = {
		&UTurn180::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTurn180_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurn180_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurn180()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTurn180_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTurn180, 497524535);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTurn180>()
	{
		return UTurn180::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTurn180(Z_Construct_UClass_UTurn180, &UTurn180::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTurn180"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurn180);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
