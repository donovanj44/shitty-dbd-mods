// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameSessionDS/Public/GameSessionDS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSessionDS() {}
// Cross Module References
	GAMESESSIONDS_API UClass* Z_Construct_UClass_UGameSessionDS_NoRegister();
	GAMESESSIONDS_API UClass* Z_Construct_UClass_UGameSessionDS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameSessionDS();
// End Cross Module References
	void UGameSessionDS::StaticRegisterNativesUGameSessionDS()
	{
	}
	UClass* Z_Construct_UClass_UGameSessionDS_NoRegister()
	{
		return UGameSessionDS::StaticClass();
	}
	struct Z_Construct_UClass_UGameSessionDS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSessionDS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameSessionDS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSessionDS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameSessionDS.h" },
		{ "ModuleRelativePath", "Public/GameSessionDS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSessionDS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSessionDS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSessionDS_Statics::ClassParams = {
		&UGameSessionDS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameSessionDS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSessionDS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSessionDS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSessionDS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSessionDS, 1726379086);
	template<> GAMESESSIONDS_API UClass* StaticClass<UGameSessionDS>()
	{
		return UGameSessionDS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSessionDS(Z_Construct_UClass_UGameSessionDS, &UGameSessionDS::StaticClass, TEXT("/Script/GameSessionDS"), TEXT("UGameSessionDS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSessionDS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
