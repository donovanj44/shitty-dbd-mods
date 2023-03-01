// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Camaraderie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamaraderie() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCamaraderie_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCamaraderie();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UCamaraderie::execAuthority_EnablePerk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_EnablePerk();
		P_NATIVE_END;
	}
	void UCamaraderie::StaticRegisterNativesUCamaraderie()
	{
		UClass* Class = UCamaraderie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_EnablePerk", &UCamaraderie::execAuthority_EnablePerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Camaraderie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCamaraderie, nullptr, "Authority_EnablePerk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCamaraderie_NoRegister()
	{
		return UCamaraderie::StaticClass();
	}
	struct Z_Construct_UClass_UCamaraderie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__needItemToTrigger_MetaData[];
#endif
		static void NewProp__needItemToTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__needItemToTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pauseTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__pauseTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__percentUseItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__percentUseItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCamaraderie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCamaraderie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCamaraderie_Authority_EnablePerk, "Authority_EnablePerk" }, // 3435394539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamaraderie_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camaraderie.h" },
		{ "ModuleRelativePath", "Public/Camaraderie.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamaraderie_Statics::NewProp__needItemToTrigger_MetaData[] = {
		{ "Category", "Camaraderie" },
		{ "ModuleRelativePath", "Public/Camaraderie.h" },
	};
#endif
	void Z_Construct_UClass_UCamaraderie_Statics::NewProp__needItemToTrigger_SetBit(void* Obj)
	{
		((UCamaraderie*)Obj)->_needItemToTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCamaraderie_Statics::NewProp__needItemToTrigger = { "_needItemToTrigger", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCamaraderie), &Z_Construct_UClass_UCamaraderie_Statics::NewProp__needItemToTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCamaraderie_Statics::NewProp__needItemToTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamaraderie_Statics::NewProp__needItemToTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamaraderie_Statics::NewProp__pauseTimer_MetaData[] = {
		{ "Category", "Camaraderie" },
		{ "ModuleRelativePath", "Public/Camaraderie.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamaraderie_Statics::NewProp__pauseTimer = { "_pauseTimer", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_pauseTimer, UCamaraderie), STRUCT_OFFSET(UCamaraderie, _pauseTimer), METADATA_PARAMS(Z_Construct_UClass_UCamaraderie_Statics::NewProp__pauseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamaraderie_Statics::NewProp__pauseTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCamaraderie_Statics::NewProp__percentUseItem_MetaData[] = {
		{ "Category", "Camaraderie" },
		{ "ModuleRelativePath", "Public/Camaraderie.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCamaraderie_Statics::NewProp__percentUseItem = { "_percentUseItem", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_percentUseItem, UCamaraderie), STRUCT_OFFSET(UCamaraderie, _percentUseItem), METADATA_PARAMS(Z_Construct_UClass_UCamaraderie_Statics::NewProp__percentUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCamaraderie_Statics::NewProp__percentUseItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCamaraderie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamaraderie_Statics::NewProp__needItemToTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamaraderie_Statics::NewProp__pauseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCamaraderie_Statics::NewProp__percentUseItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCamaraderie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamaraderie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCamaraderie_Statics::ClassParams = {
		&UCamaraderie::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCamaraderie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCamaraderie_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCamaraderie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCamaraderie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCamaraderie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCamaraderie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCamaraderie, 949662934);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UCamaraderie>()
	{
		return UCamaraderie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCamaraderie(Z_Construct_UClass_UCamaraderie, &UCamaraderie::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UCamaraderie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCamaraderie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
