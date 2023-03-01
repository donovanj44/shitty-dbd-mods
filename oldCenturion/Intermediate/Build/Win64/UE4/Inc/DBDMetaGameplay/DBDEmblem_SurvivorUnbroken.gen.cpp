// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDMetaGameplay/Public/DBDEmblem_SurvivorUnbroken.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEmblem_SurvivorUnbroken() {}
// Cross Module References
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_NoRegister();
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem();
	UPackage* Z_Construct_UPackage__Script_DBDMetaGameplay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDRankDesignTunables_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDEmblem_SurvivorUnbroken::execOnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIntroCompleted();
		P_NATIVE_END;
	}
	void UDBDEmblem_SurvivorUnbroken::StaticRegisterNativesUDBDEmblem_SurvivorUnbroken()
	{
		UClass* Class = UDBDEmblem_SurvivorUnbroken::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnIntroCompleted", &UDBDEmblem_SurvivorUnbroken::execOnIntroCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_SurvivorUnbroken.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken, nullptr, "OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_NoRegister()
	{
		return UDBDEmblem_SurvivorUnbroken::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rankTunablesClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__rankTunablesClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pointsForTimeAlive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pointsForTimeAlive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDEmblem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDMetaGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDEmblem_SurvivorUnbroken_OnIntroCompleted, "OnIntroCompleted" }, // 2104381534
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEmblem_SurvivorUnbroken.h" },
		{ "ModuleRelativePath", "Public/DBDEmblem_SurvivorUnbroken.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__rankTunablesClass_MetaData[] = {
		{ "Category", "DBDEmblem_SurvivorUnbroken" },
		{ "ModuleRelativePath", "Public/DBDEmblem_SurvivorUnbroken.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__rankTunablesClass = { "_rankTunablesClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem_SurvivorUnbroken, _rankTunablesClass), Z_Construct_UClass_UDBDRankDesignTunables_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__rankTunablesClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__rankTunablesClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__pointsForTimeAlive_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_SurvivorUnbroken.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__pointsForTimeAlive = { "_pointsForTimeAlive", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem_SurvivorUnbroken, _pointsForTimeAlive), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__pointsForTimeAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__pointsForTimeAlive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__rankTunablesClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::NewProp__pointsForTimeAlive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEmblem_SurvivorUnbroken>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::ClassParams = {
		&UDBDEmblem_SurvivorUnbroken::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEmblem_SurvivorUnbroken, 3238510345);
	template<> DBDMETAGAMEPLAY_API UClass* StaticClass<UDBDEmblem_SurvivorUnbroken>()
	{
		return UDBDEmblem_SurvivorUnbroken::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEmblem_SurvivorUnbroken(Z_Construct_UClass_UDBDEmblem_SurvivorUnbroken, &UDBDEmblem_SurvivorUnbroken::StaticClass, TEXT("/Script/DBDMetaGameplay"), TEXT("UDBDEmblem_SurvivorUnbroken"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEmblem_SurvivorUnbroken);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif