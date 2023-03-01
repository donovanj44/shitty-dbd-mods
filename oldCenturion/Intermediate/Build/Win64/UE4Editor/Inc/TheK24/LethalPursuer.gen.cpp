// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/LethalPursuer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLethalPursuer() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_ULethalPursuer_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_ULethalPursuer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	DEFINE_FUNCTION(ULethalPursuer::execLocal_OnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULethalPursuer::execServer_ActivatePerk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_ActivatePerk_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ULethalPursuer_Server_ActivatePerk = FName(TEXT("Server_ActivatePerk"));
	void ULethalPursuer::Server_ActivatePerk()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULethalPursuer_Server_ActivatePerk),NULL);
	}
	void ULethalPursuer::StaticRegisterNativesULethalPursuer()
	{
		UClass* Class = ULethalPursuer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_OnIntroCompleted", &ULethalPursuer::execLocal_OnIntroCompleted },
			{ "Server_ActivatePerk", &ULethalPursuer::execServer_ActivatePerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LethalPursuer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULethalPursuer, nullptr, "Local_OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LethalPursuer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULethalPursuer, nullptr, "Server_ActivatePerk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULethalPursuer_NoRegister()
	{
		return ULethalPursuer::StaticClass();
	}
	struct Z_Construct_UClass_ULethalPursuer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__survivorRevealDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULethalPursuer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULethalPursuer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULethalPursuer_Local_OnIntroCompleted, "Local_OnIntroCompleted" }, // 249317521
		{ &Z_Construct_UFunction_ULethalPursuer_Server_ActivatePerk, "Server_ActivatePerk" }, // 2879544173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULethalPursuer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LethalPursuer.h" },
		{ "ModuleRelativePath", "Public/LethalPursuer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULethalPursuer_Statics::NewProp__survivorRevealDuration_MetaData[] = {
		{ "Category", "LethalPursuer" },
		{ "ModuleRelativePath", "Public/LethalPursuer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULethalPursuer_Statics::NewProp__survivorRevealDuration = { "_survivorRevealDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_survivorRevealDuration, ULethalPursuer), STRUCT_OFFSET(ULethalPursuer, _survivorRevealDuration), METADATA_PARAMS(Z_Construct_UClass_ULethalPursuer_Statics::NewProp__survivorRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULethalPursuer_Statics::NewProp__survivorRevealDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULethalPursuer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULethalPursuer_Statics::NewProp__survivorRevealDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULethalPursuer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULethalPursuer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULethalPursuer_Statics::ClassParams = {
		&ULethalPursuer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULethalPursuer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULethalPursuer_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULethalPursuer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULethalPursuer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULethalPursuer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULethalPursuer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULethalPursuer, 1311094908);
	template<> THEK24_API UClass* StaticClass<ULethalPursuer>()
	{
		return ULethalPursuer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULethalPursuer(Z_Construct_UClass_ULethalPursuer, &ULethalPursuer::StaticClass, TEXT("/Script/TheK24"), TEXT("ULethalPursuer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULethalPursuer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
