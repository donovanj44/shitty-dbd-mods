// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlessedVignetteController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlessedVignetteController() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlessedVignetteController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlessedVignetteController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static FName NAME_UBlessedVignetteController_OnActivateBlessedVignette = FName(TEXT("OnActivateBlessedVignette"));
	void UBlessedVignetteController::OnActivateBlessedVignette()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBlessedVignetteController_OnActivateBlessedVignette),NULL);
	}
	static FName NAME_UBlessedVignetteController_OnDeactivateBlessedVignette = FName(TEXT("OnDeactivateBlessedVignette"));
	void UBlessedVignetteController::OnDeactivateBlessedVignette()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBlessedVignetteController_OnDeactivateBlessedVignette),NULL);
	}
	void UBlessedVignetteController::StaticRegisterNativesUBlessedVignetteController()
	{
	}
	struct Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessedVignetteController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessedVignetteController, nullptr, "OnActivateBlessedVignette", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlessedVignetteController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlessedVignetteController, nullptr, "OnDeactivateBlessedVignette", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlessedVignetteController_NoRegister()
	{
		return UBlessedVignetteController::StaticClass();
	}
	struct Z_Construct_UClass_UBlessedVignetteController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlessedVignetteController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlessedVignetteController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlessedVignetteController_OnActivateBlessedVignette, "OnActivateBlessedVignette" }, // 40486173
		{ &Z_Construct_UFunction_UBlessedVignetteController_OnDeactivateBlessedVignette, "OnDeactivateBlessedVignette" }, // 2260376040
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlessedVignetteController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlessedVignetteController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlessedVignetteController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlessedVignetteController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlessedVignetteController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlessedVignetteController_Statics::ClassParams = {
		&UBlessedVignetteController::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlessedVignetteController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlessedVignetteController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlessedVignetteController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlessedVignetteController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlessedVignetteController, 194968899);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlessedVignetteController>()
	{
		return UBlessedVignetteController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlessedVignetteController(Z_Construct_UClass_UBlessedVignetteController, &UBlessedVignetteController::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlessedVignetteController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlessedVignetteController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
