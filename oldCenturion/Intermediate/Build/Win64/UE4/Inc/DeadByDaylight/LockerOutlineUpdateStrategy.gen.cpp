// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LockerOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockerOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULockerOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULockerOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(ULockerOutlineUpdateStrategy::execGetRedColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetRedColor();
		P_NATIVE_END;
	}
	void ULockerOutlineUpdateStrategy::StaticRegisterNativesULockerOutlineUpdateStrategy()
	{
		UClass* Class = ULockerOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRedColor", &ULockerOutlineUpdateStrategy::execGetRedColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics
	{
		struct LockerOutlineUpdateStrategy_eventGetRedColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LockerOutlineUpdateStrategy_eventGetRedColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LockerOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockerOutlineUpdateStrategy, nullptr, "GetRedColor", nullptr, nullptr, sizeof(LockerOutlineUpdateStrategy_eventGetRedColor_Parms), Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULockerOutlineUpdateStrategy_NoRegister()
	{
		return ULockerOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockerOutlineUpdateStrategy_GetRedColor, "GetRedColor" }, // 2695670832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LockerOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/LockerOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockerOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::ClassParams = {
		&ULockerOutlineUpdateStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULockerOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULockerOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULockerOutlineUpdateStrategy, 2947977367);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULockerOutlineUpdateStrategy>()
	{
		return ULockerOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULockerOutlineUpdateStrategy(Z_Construct_UClass_ULockerOutlineUpdateStrategy, &ULockerOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULockerOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockerOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
