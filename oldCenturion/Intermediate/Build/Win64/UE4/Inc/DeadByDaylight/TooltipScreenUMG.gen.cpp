// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TooltipScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTooltipScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTooltipScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTooltipScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTooltipScreenUMG::execOnCloseTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCloseTriggered();
		P_NATIVE_END;
	}
	void UTooltipScreenUMG::StaticRegisterNativesUTooltipScreenUMG()
	{
		UClass* Class = UTooltipScreenUMG::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCloseTriggered", &UTooltipScreenUMG::execOnCloseTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TooltipScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTooltipScreenUMG, nullptr, "OnCloseTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTooltipScreenUMG_NoRegister()
	{
		return UTooltipScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UTooltipScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tooltipWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__tooltipWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTooltipScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTooltipScreenUMG_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTooltipScreenUMG_OnCloseTriggered, "OnCloseTriggered" }, // 3352437661
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTooltipScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TooltipScreenUMG.h" },
		{ "ModuleRelativePath", "Public/TooltipScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTooltipScreenUMG_Statics::NewProp__tooltipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TooltipScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTooltipScreenUMG_Statics::NewProp__tooltipWidget = { "_tooltipWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTooltipScreenUMG, _tooltipWidget), Z_Construct_UClass_UBaseTooltipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTooltipScreenUMG_Statics::NewProp__tooltipWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTooltipScreenUMG_Statics::NewProp__tooltipWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTooltipScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTooltipScreenUMG_Statics::NewProp__tooltipWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTooltipScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTooltipScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTooltipScreenUMG_Statics::ClassParams = {
		&UTooltipScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTooltipScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTooltipScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTooltipScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTooltipScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTooltipScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTooltipScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTooltipScreenUMG, 1878060506);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTooltipScreenUMG>()
	{
		return UTooltipScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTooltipScreenUMG(Z_Construct_UClass_UTooltipScreenUMG, &UTooltipScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTooltipScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTooltipScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
