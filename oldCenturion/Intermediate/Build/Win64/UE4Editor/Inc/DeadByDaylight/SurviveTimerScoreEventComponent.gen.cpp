// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurviveTimerScoreEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurviveTimerScoreEventComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurviveTimerScoreEventComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurviveTimerScoreEventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(USurviveTimerScoreEventComponent::execAuthority_OnGameStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnGameStarted();
		P_NATIVE_END;
	}
	void USurviveTimerScoreEventComponent::StaticRegisterNativesUSurviveTimerScoreEventComponent()
	{
		UClass* Class = USurviveTimerScoreEventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnGameStarted", &USurviveTimerScoreEventComponent::execAuthority_OnGameStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurviveTimerScoreEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurviveTimerScoreEventComponent, nullptr, "Authority_OnGameStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurviveTimerScoreEventComponent_NoRegister()
	{
		return USurviveTimerScoreEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurviveTimerScoreEventComponent_Authority_OnGameStarted, "Authority_OnGameStarted" }, // 2439708499
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurviveTimerScoreEventComponent.h" },
		{ "ModuleRelativePath", "Public/SurviveTimerScoreEventComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurviveTimerScoreEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::ClassParams = {
		&USurviveTimerScoreEventComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurviveTimerScoreEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurviveTimerScoreEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurviveTimerScoreEventComponent, 3828460822);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USurviveTimerScoreEventComponent>()
	{
		return USurviveTimerScoreEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurviveTimerScoreEventComponent(Z_Construct_UClass_USurviveTimerScoreEventComponent, &USurviveTimerScoreEventComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USurviveTimerScoreEventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurviveTimerScoreEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
