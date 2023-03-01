// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EpicProfileDAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicProfileDAL() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEpicProfileDAL_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEpicProfileDAL();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerProfileDAL();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UEpicProfileDAL::StaticRegisterNativesUEpicProfileDAL()
	{
	}
	UClass* Z_Construct_UClass_UEpicProfileDAL_NoRegister()
	{
		return UEpicProfileDAL::StaticClass();
	}
	struct Z_Construct_UClass_UEpicProfileDAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicProfileDAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerProfileDAL,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicProfileDAL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EpicProfileDAL.h" },
		{ "ModuleRelativePath", "Public/EpicProfileDAL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicProfileDAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicProfileDAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicProfileDAL_Statics::ClassParams = {
		&UEpicProfileDAL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEpicProfileDAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEpicProfileDAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicProfileDAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicProfileDAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicProfileDAL, 2488801919);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEpicProfileDAL>()
	{
		return UEpicProfileDAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicProfileDAL(Z_Construct_UClass_UEpicProfileDAL, &UEpicProfileDAL::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEpicProfileDAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicProfileDAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
