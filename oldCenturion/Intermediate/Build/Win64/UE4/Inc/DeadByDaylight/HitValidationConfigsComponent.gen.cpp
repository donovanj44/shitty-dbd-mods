// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HitValidationConfigsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitValidationConfigsComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidationConfigsComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHitValidationConfigsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UHitValidationConfigsComponent::execDBD_PrintInGameHitValidationConfigs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_PrintInGameHitValidationConfigs();
		P_NATIVE_END;
	}
	void UHitValidationConfigsComponent::StaticRegisterNativesUHitValidationConfigsComponent()
	{
		UClass* Class = UHitValidationConfigsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_PrintInGameHitValidationConfigs", &UHitValidationConfigsComponent::execDBD_PrintInGameHitValidationConfigs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitValidationConfigsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitValidationConfigsComponent, nullptr, "DBD_PrintInGameHitValidationConfigs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHitValidationConfigsComponent_NoRegister()
	{
		return UHitValidationConfigsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHitValidationConfigsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitValidationConfigsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHitValidationConfigsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitValidationConfigsComponent_DBD_PrintInGameHitValidationConfigs, "DBD_PrintInGameHitValidationConfigs" }, // 2745571385
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitValidationConfigsComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitValidationConfigsComponent.h" },
		{ "ModuleRelativePath", "Public/HitValidationConfigsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitValidationConfigsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitValidationConfigsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHitValidationConfigsComponent_Statics::ClassParams = {
		&UHitValidationConfigsComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHitValidationConfigsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitValidationConfigsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitValidationConfigsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHitValidationConfigsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHitValidationConfigsComponent, 1895965969);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHitValidationConfigsComponent>()
	{
		return UHitValidationConfigsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHitValidationConfigsComponent(Z_Construct_UClass_UHitValidationConfigsComponent, &UHitValidationConfigsComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHitValidationConfigsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitValidationConfigsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
