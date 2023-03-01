// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SoleSurvivor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoleSurvivor() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USoleSurvivor_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USoleSurvivor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USoleSurvivor::execAuthority_OnSurvivorAdded)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorAdded(Z_Param_survivor);
		P_NATIVE_END;
	}
	void USoleSurvivor::StaticRegisterNativesUSoleSurvivor()
	{
		UClass* Class = USoleSurvivor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorAdded", &USoleSurvivor::execAuthority_OnSurvivorAdded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics
	{
		struct SoleSurvivor_eventAuthority_OnSurvivorAdded_Parms
		{
			const ACamperPlayer* survivor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_survivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::NewProp_survivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoleSurvivor_eventAuthority_OnSurvivorAdded_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::NewProp_survivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::NewProp_survivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoleSurvivor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoleSurvivor, nullptr, "Authority_OnSurvivorAdded", nullptr, nullptr, sizeof(SoleSurvivor_eventAuthority_OnSurvivorAdded_Parms), Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoleSurvivor_NoRegister()
	{
		return USoleSurvivor::StaticClass();
	}
	struct Z_Construct_UClass_USoleSurvivor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__otherSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__otherSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__otherSurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__auraHideDistancePerDeadOrDisconnectedSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__auraHideDistancePerDeadOrDisconnectedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoleSurvivor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoleSurvivor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoleSurvivor_Authority_OnSurvivorAdded, "Authority_OnSurvivorAdded" }, // 179368536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoleSurvivor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoleSurvivor.h" },
		{ "ModuleRelativePath", "Public/SoleSurvivor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoleSurvivor_Statics::NewProp__otherSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoleSurvivor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoleSurvivor_Statics::NewProp__otherSurvivors = { "_otherSurvivors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoleSurvivor, _otherSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoleSurvivor_Statics::NewProp__otherSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoleSurvivor_Statics::NewProp__otherSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoleSurvivor_Statics::NewProp__otherSurvivors_Inner = { "_otherSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoleSurvivor_Statics::NewProp__auraHideDistancePerDeadOrDisconnectedSurvivor_MetaData[] = {
		{ "Category", "SoleSurvivor" },
		{ "ModuleRelativePath", "Public/SoleSurvivor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoleSurvivor_Statics::NewProp__auraHideDistancePerDeadOrDisconnectedSurvivor = { "_auraHideDistancePerDeadOrDisconnectedSurvivor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_auraHideDistancePerDeadOrDisconnectedSurvivor, USoleSurvivor), STRUCT_OFFSET(USoleSurvivor, _auraHideDistancePerDeadOrDisconnectedSurvivor), METADATA_PARAMS(Z_Construct_UClass_USoleSurvivor_Statics::NewProp__auraHideDistancePerDeadOrDisconnectedSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoleSurvivor_Statics::NewProp__auraHideDistancePerDeadOrDisconnectedSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoleSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoleSurvivor_Statics::NewProp__otherSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoleSurvivor_Statics::NewProp__otherSurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoleSurvivor_Statics::NewProp__auraHideDistancePerDeadOrDisconnectedSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoleSurvivor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoleSurvivor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoleSurvivor_Statics::ClassParams = {
		&USoleSurvivor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoleSurvivor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoleSurvivor_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USoleSurvivor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoleSurvivor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoleSurvivor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoleSurvivor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoleSurvivor, 1534599160);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USoleSurvivor>()
	{
		return USoleSurvivor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoleSurvivor(Z_Construct_UClass_USoleSurvivor, &USoleSurvivor::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USoleSurvivor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoleSurvivor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
