// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurveillancePerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurveillancePerk() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurveillancePerk_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurveillancePerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurveillancePerk::execHandleGeneratorIsDamagedChanged)
	{
		P_GET_OBJECT(AGenerator,Z_Param_generator);
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleGeneratorIsDamagedChanged(Z_Param_generator,Z_Param_player);
		P_NATIVE_END;
	}
	void USurveillancePerk::StaticRegisterNativesUSurveillancePerk()
	{
		UClass* Class = USurveillancePerk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleGeneratorIsDamagedChanged", &USurveillancePerk::execHandleGeneratorIsDamagedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics
	{
		struct SurveillancePerk_eventHandleGeneratorIsDamagedChanged_Parms
		{
			AGenerator* generator;
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurveillancePerk_eventHandleGeneratorIsDamagedChanged_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::NewProp_generator = { "generator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurveillancePerk_eventHandleGeneratorIsDamagedChanged_Parms, generator), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::NewProp_generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurveillancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurveillancePerk, nullptr, "HandleGeneratorIsDamagedChanged", nullptr, nullptr, sizeof(SurveillancePerk_eventHandleGeneratorIsDamagedChanged_Parms), Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurveillancePerk_NoRegister()
	{
		return USurveillancePerk::StaticClass();
	}
	struct Z_Construct_UClass_USurveillancePerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generatorRegressionStopRevealTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_generatorRegressionStopRevealTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurveillancePerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurveillancePerk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurveillancePerk_HandleGeneratorIsDamagedChanged, "HandleGeneratorIsDamagedChanged" }, // 3172109579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurveillancePerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurveillancePerk.h" },
		{ "ModuleRelativePath", "Public/SurveillancePerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurveillancePerk_Statics::NewProp_generatorRegressionStopRevealTime_MetaData[] = {
		{ "Category", "SurveillancePerk" },
		{ "ModuleRelativePath", "Public/SurveillancePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurveillancePerk_Statics::NewProp_generatorRegressionStopRevealTime = { "generatorRegressionStopRevealTime", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USurveillancePerk, generatorRegressionStopRevealTime), METADATA_PARAMS(Z_Construct_UClass_USurveillancePerk_Statics::NewProp_generatorRegressionStopRevealTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USurveillancePerk_Statics::NewProp_generatorRegressionStopRevealTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurveillancePerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurveillancePerk_Statics::NewProp_generatorRegressionStopRevealTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurveillancePerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurveillancePerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurveillancePerk_Statics::ClassParams = {
		&USurveillancePerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USurveillancePerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USurveillancePerk_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurveillancePerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurveillancePerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurveillancePerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurveillancePerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurveillancePerk, 384927449);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USurveillancePerk>()
	{
		return USurveillancePerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurveillancePerk(Z_Construct_UClass_USurveillancePerk, &USurveillancePerk::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USurveillancePerk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurveillancePerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
