// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAggregateCullDistanceVolumes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAggregateCullDistanceVolumes() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAggregateCullDistanceVolumes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ADBDAggregateCullDistanceVolumes::execSpawnCullDistanceVolumes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCullDistanceVolumes();
		P_NATIVE_END;
	}
	void ADBDAggregateCullDistanceVolumes::StaticRegisterNativesADBDAggregateCullDistanceVolumes()
	{
		UClass* Class = ADBDAggregateCullDistanceVolumes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnCullDistanceVolumes", &ADBDAggregateCullDistanceVolumes::execSpawnCullDistanceVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAggregateCullDistanceVolumes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDAggregateCullDistanceVolumes, nullptr, "SpawnCullDistanceVolumes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_NoRegister()
	{
		return ADBDAggregateCullDistanceVolumes::StaticClass();
	}
	struct Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDAggregateCullDistanceVolumes_SpawnCullDistanceVolumes, "SpawnCullDistanceVolumes" }, // 3070760537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDAggregateCullDistanceVolumes.h" },
		{ "ModuleRelativePath", "Public/DBDAggregateCullDistanceVolumes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDAggregateCullDistanceVolumes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::ClassParams = {
		&ADBDAggregateCullDistanceVolumes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDAggregateCullDistanceVolumes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDAggregateCullDistanceVolumes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDAggregateCullDistanceVolumes, 590510196);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDAggregateCullDistanceVolumes>()
	{
		return ADBDAggregateCullDistanceVolumes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDAggregateCullDistanceVolumes(Z_Construct_UClass_ADBDAggregateCullDistanceVolumes, &ADBDAggregateCullDistanceVolumes::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDAggregateCullDistanceVolumes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDAggregateCullDistanceVolumes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
