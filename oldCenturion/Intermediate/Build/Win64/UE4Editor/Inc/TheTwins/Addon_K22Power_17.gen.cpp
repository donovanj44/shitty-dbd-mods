// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Addon_K22Power_17.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_K22Power_17() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_17_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_17();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UAddon_K22Power_17::execAuthority_OnTwinSet)
	{
		P_GET_OBJECT(AConjoinedTwin,Z_Param_twin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnTwinSet(Z_Param_twin);
		P_NATIVE_END;
	}
	void UAddon_K22Power_17::StaticRegisterNativesUAddon_K22Power_17()
	{
		UClass* Class = UAddon_K22Power_17::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnTwinSet", &UAddon_K22Power_17::execAuthority_OnTwinSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics
	{
		struct Addon_K22Power_17_eventAuthority_OnTwinSet_Parms
		{
			AConjoinedTwin* twin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Addon_K22Power_17_eventAuthority_OnTwinSet_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Addon_K22Power_17.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAddon_K22Power_17, nullptr, "Authority_OnTwinSet", nullptr, nullptr, sizeof(Addon_K22Power_17_eventAuthority_OnTwinSet_Parms), Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAddon_K22Power_17_NoRegister()
	{
		return UAddon_K22Power_17::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_K22Power_17_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lingerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lingerDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_K22Power_17_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAddon_K22Power_17_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAddon_K22Power_17_Authority_OnTwinSet, "Authority_OnTwinSet" }, // 2341050341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_17_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_K22Power_17.h" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_17.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_17_Statics::NewProp__lingerDuration_MetaData[] = {
		{ "Category", "Addon_K22Power_17" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_17.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAddon_K22Power_17_Statics::NewProp__lingerDuration = { "_lingerDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_K22Power_17, _lingerDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_17_Statics::NewProp__lingerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_17_Statics::NewProp__lingerDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_K22Power_17_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_K22Power_17_Statics::NewProp__lingerDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_K22Power_17_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_K22Power_17>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_K22Power_17_Statics::ClassParams = {
		&UAddon_K22Power_17::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAddon_K22Power_17_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_17_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_17_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_17_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_K22Power_17()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_K22Power_17_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_K22Power_17, 1070391172);
	template<> THETWINS_API UClass* StaticClass<UAddon_K22Power_17>()
	{
		return UAddon_K22Power_17::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_K22Power_17(Z_Construct_UClass_UAddon_K22Power_17, &UAddon_K22Power_17::StaticClass, TEXT("/Script/TheTwins"), TEXT("UAddon_K22Power_17"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_K22Power_17);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
