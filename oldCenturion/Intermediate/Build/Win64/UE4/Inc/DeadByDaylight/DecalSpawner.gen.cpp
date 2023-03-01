// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DecalSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalSpawner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalSpawner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnerStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDecalCollection_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDecalSpawner::execGetSpawnerStrategy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpawnerStrategy**)Z_Param__Result=P_THIS->GetSpawnerStrategy();
		P_NATIVE_END;
	}
	void UDecalSpawner::StaticRegisterNativesUDecalSpawner()
	{
		UClass* Class = UDecalSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnerStrategy", &UDecalSpawner::execGetSpawnerStrategy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics
	{
		struct DecalSpawner_eventGetSpawnerStrategy_Parms
		{
			USpawnerStrategy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DecalSpawner_eventGetSpawnerStrategy_Parms, ReturnValue), Z_Construct_UClass_USpawnerStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DecalSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalSpawner, nullptr, "GetSpawnerStrategy", nullptr, nullptr, sizeof(DecalSpawner_eventGetSpawnerStrategy_Parms), Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDecalSpawner_NoRegister()
	{
		return UDecalSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UDecalSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnerStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spawnerStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__decalCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__decalCollection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDecalSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDecalSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDecalSpawner_GetSpawnerStrategy, "GetSpawnerStrategy" }, // 135615856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DecalSpawner.h" },
		{ "ModuleRelativePath", "Public/DecalSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalSpawner_Statics::NewProp__spawnerStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/DecalSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalSpawner_Statics::NewProp__spawnerStrategy = { "_spawnerStrategy", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalSpawner, _spawnerStrategy), Z_Construct_UClass_USpawnerStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDecalSpawner_Statics::NewProp__spawnerStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalSpawner_Statics::NewProp__spawnerStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDecalSpawner_Statics::NewProp__decalCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/DecalSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDecalSpawner_Statics::NewProp__decalCollection = { "_decalCollection", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDecalSpawner, _decalCollection), Z_Construct_UClass_UDecalCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDecalSpawner_Statics::NewProp__decalCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalSpawner_Statics::NewProp__decalCollection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDecalSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalSpawner_Statics::NewProp__spawnerStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDecalSpawner_Statics::NewProp__decalCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDecalSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDecalSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDecalSpawner_Statics::ClassParams = {
		&UDecalSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDecalSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDecalSpawner_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDecalSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDecalSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDecalSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDecalSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDecalSpawner, 2324798456);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDecalSpawner>()
	{
		return UDecalSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecalSpawner(Z_Construct_UClass_UDecalSpawner, &UDecalSpawner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDecalSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecalSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
