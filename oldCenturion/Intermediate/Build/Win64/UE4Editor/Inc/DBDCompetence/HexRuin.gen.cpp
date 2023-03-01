// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/HexRuin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexRuin() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexRuin_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexRuin();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
// End Cross Module References
	DEFINE_FUNCTION(UHexRuin::execAuthority_ConstructActivationTimersMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ConstructActivationTimersMap();
		P_NATIVE_END;
	}
	void UHexRuin::StaticRegisterNativesUHexRuin()
	{
		UClass* Class = UHexRuin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ConstructActivationTimersMap", &UHexRuin::execAuthority_ConstructActivationTimersMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HexRuin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHexRuin, nullptr, "Authority_ConstructActivationTimersMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHexRuin_NoRegister()
	{
		return UHexRuin::StaticClass();
	}
	struct Z_Construct_UClass_UHexRuin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__curseActivationTimers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__curseActivationTimers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__curseActivationTimers_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__curseActivationTimers_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexRuin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHexPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHexRuin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHexRuin_Authority_ConstructActivationTimersMap, "Authority_ConstructActivationTimersMap" }, // 2802847334
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexRuin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexRuin.h" },
		{ "ModuleRelativePath", "Public/HexRuin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/HexRuin.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers = { "_curseActivationTimers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHexRuin, _curseActivationTimers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers_Key_KeyProp = { "_curseActivationTimers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers_ValueProp = { "_curseActivationTimers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexRuin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexRuin_Statics::NewProp__curseActivationTimers_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexRuin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexRuin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexRuin_Statics::ClassParams = {
		&UHexRuin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHexRuin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexRuin_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHexRuin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexRuin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexRuin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexRuin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexRuin, 984088834);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UHexRuin>()
	{
		return UHexRuin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexRuin(Z_Construct_UClass_UHexRuin, &UHexRuin::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UHexRuin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexRuin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
