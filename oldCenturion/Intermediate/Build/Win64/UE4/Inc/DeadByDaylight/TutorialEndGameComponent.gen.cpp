// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialEndGameComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialEndGameComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialEndGameComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTutorialEndGameComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UTutorialEndGameComponent::execSetTimerMaxCompletionPercentage)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimerMaxCompletionPercentage(Z_Param_Out_percentage);
		P_NATIVE_END;
	}
	void UTutorialEndGameComponent::StaticRegisterNativesUTutorialEndGameComponent()
	{
		UClass* Class = UTutorialEndGameComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTimerMaxCompletionPercentage", &UTutorialEndGameComponent::execSetTimerMaxCompletionPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics
	{
		struct TutorialEndGameComponent_eventSetTimerMaxCompletionPercentage_Parms
		{
			float percentage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::NewProp_percentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialEndGameComponent_eventSetTimerMaxCompletionPercentage_Parms, percentage), METADATA_PARAMS(Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::NewProp_percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::NewProp_percentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialEndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialEndGameComponent, nullptr, "SetTimerMaxCompletionPercentage", nullptr, nullptr, sizeof(TutorialEndGameComponent_eventSetTimerMaxCompletionPercentage_Parms), Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialEndGameComponent_NoRegister()
	{
		return UTutorialEndGameComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialEndGameComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerMaxCompletionPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timerMaxCompletionPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialEndGameComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEndGameComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialEndGameComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialEndGameComponent_SetTimerMaxCompletionPercentage, "SetTimerMaxCompletionPercentage" }, // 2481867913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialEndGameComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TutorialEndGameComponent.h" },
		{ "ModuleRelativePath", "Public/TutorialEndGameComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialEndGameComponent_Statics::NewProp__timerMaxCompletionPercentage_MetaData[] = {
		{ "Category", "TutorialEndGameComponent" },
		{ "ModuleRelativePath", "Public/TutorialEndGameComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTutorialEndGameComponent_Statics::NewProp__timerMaxCompletionPercentage = { "_timerMaxCompletionPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTutorialEndGameComponent, _timerMaxCompletionPercentage), METADATA_PARAMS(Z_Construct_UClass_UTutorialEndGameComponent_Statics::NewProp__timerMaxCompletionPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialEndGameComponent_Statics::NewProp__timerMaxCompletionPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTutorialEndGameComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTutorialEndGameComponent_Statics::NewProp__timerMaxCompletionPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialEndGameComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTutorialEndGameComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialEndGameComponent_Statics::ClassParams = {
		&UTutorialEndGameComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTutorialEndGameComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialEndGameComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialEndGameComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialEndGameComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialEndGameComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialEndGameComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialEndGameComponent, 2209998650);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTutorialEndGameComponent>()
	{
		return UTutorialEndGameComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialEndGameComponent(Z_Construct_UClass_UTutorialEndGameComponent, &UTutorialEndGameComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTutorialEndGameComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialEndGameComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
