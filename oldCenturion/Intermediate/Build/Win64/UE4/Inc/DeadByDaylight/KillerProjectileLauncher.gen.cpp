// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerProjectileLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerProjectileLauncher() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileLauncher_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerProjectileLauncher();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileLauncher();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerProjectileLauncher::execGetOwningKiller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetOwningKiller();
		P_NATIVE_END;
	}
	void UKillerProjectileLauncher::StaticRegisterNativesUKillerProjectileLauncher()
	{
		UClass* Class = UKillerProjectileLauncher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningKiller", &UKillerProjectileLauncher::execGetOwningKiller },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics
	{
		struct KillerProjectileLauncher_eventGetOwningKiller_Parms
		{
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerProjectileLauncher_eventGetOwningKiller_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerProjectileLauncher, nullptr, "GetOwningKiller", nullptr, nullptr, sizeof(KillerProjectileLauncher_eventGetOwningKiller_Parms), Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerProjectileLauncher_NoRegister()
	{
		return UKillerProjectileLauncher::StaticClass();
	}
	struct Z_Construct_UClass_UKillerProjectileLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerProjectileLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseProjectileLauncher,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerProjectileLauncher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerProjectileLauncher_GetOwningKiller, "GetOwningKiller" }, // 4244988216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerProjectileLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerProjectileLauncher.h" },
		{ "ModuleRelativePath", "Public/KillerProjectileLauncher.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerProjectileLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerProjectileLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerProjectileLauncher_Statics::ClassParams = {
		&UKillerProjectileLauncher::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerProjectileLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerProjectileLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerProjectileLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerProjectileLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerProjectileLauncher, 2163675325);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerProjectileLauncher>()
	{
		return UKillerProjectileLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerProjectileLauncher(Z_Construct_UClass_UKillerProjectileLauncher, &UKillerProjectileLauncher::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerProjectileLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerProjectileLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif