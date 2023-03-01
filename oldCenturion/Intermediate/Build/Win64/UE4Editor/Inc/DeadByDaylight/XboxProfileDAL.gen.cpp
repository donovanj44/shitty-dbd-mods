// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/XboxProfileDAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXboxProfileDAL() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UXboxProfileDAL_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UXboxProfileDAL();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerProfileDAL();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UXboxProfileDAL::StaticRegisterNativesUXboxProfileDAL()
	{
	}
	UClass* Z_Construct_UClass_UXboxProfileDAL_NoRegister()
	{
		return UXboxProfileDAL::StaticClass();
	}
	struct Z_Construct_UClass_UXboxProfileDAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXboxProfileDAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerProfileDAL,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXboxProfileDAL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XboxProfileDAL.h" },
		{ "ModuleRelativePath", "Public/XboxProfileDAL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXboxProfileDAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXboxProfileDAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXboxProfileDAL_Statics::ClassParams = {
		&UXboxProfileDAL::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXboxProfileDAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXboxProfileDAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXboxProfileDAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXboxProfileDAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXboxProfileDAL, 2323992052);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UXboxProfileDAL>()
	{
		return UXboxProfileDAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXboxProfileDAL(Z_Construct_UClass_UXboxProfileDAL, &UXboxProfileDAL::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UXboxProfileDAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXboxProfileDAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
