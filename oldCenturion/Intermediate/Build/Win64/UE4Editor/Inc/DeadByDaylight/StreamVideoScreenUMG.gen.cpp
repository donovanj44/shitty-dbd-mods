// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StreamVideoScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamVideoScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStreamVideoScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStreamVideoScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UStreamVideoScreenUMG::execOnCloseTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCloseTriggered();
		P_NATIVE_END;
	}
	void UStreamVideoScreenUMG::StaticRegisterNativesUStreamVideoScreenUMG()
	{
		UClass* Class = UStreamVideoScreenUMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCloseTriggered", &UStreamVideoScreenUMG::execOnCloseTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamVideoScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamVideoScreenUMG, nullptr, "OnCloseTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStreamVideoScreenUMG_NoRegister()
	{
		return UStreamVideoScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UStreamVideoScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamVideoScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamVideoScreenUMG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamVideoScreenUMG_OnCloseTriggered, "OnCloseTriggered" }, // 3826590265
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamVideoScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StreamVideoScreenUMG.h" },
		{ "ModuleRelativePath", "Public/StreamVideoScreenUMG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamVideoScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamVideoScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStreamVideoScreenUMG_Statics::ClassParams = {
		&UStreamVideoScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamVideoScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamVideoScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamVideoScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStreamVideoScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStreamVideoScreenUMG, 340447545);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStreamVideoScreenUMG>()
	{
		return UStreamVideoScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStreamVideoScreenUMG(Z_Construct_UClass_UStreamVideoScreenUMG, &UStreamVideoScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStreamVideoScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamVideoScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
