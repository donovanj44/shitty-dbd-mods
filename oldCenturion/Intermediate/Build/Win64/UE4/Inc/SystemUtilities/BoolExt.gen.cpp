// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/BoolExt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolExt() {}
// Cross Module References
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UBoolExt_NoRegister();
	SYSTEMUTILITIES_API UClass* Z_Construct_UClass_UBoolExt();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UBoolExt::execToString)
	{
		P_GET_UBOOL(Z_Param_boolToConvert);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBoolExt::ToString(Z_Param_boolToConvert);
		P_NATIVE_END;
	}
	void UBoolExt::StaticRegisterNativesUBoolExt()
	{
		UClass* Class = UBoolExt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &UBoolExt::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoolExt_ToString_Statics
	{
		struct BoolExt_eventToString_Parms
		{
			bool boolToConvert;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boolToConvert_MetaData[];
#endif
		static void NewProp_boolToConvert_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_boolToConvert;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BoolExt_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_boolToConvert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_boolToConvert_SetBit(void* Obj)
	{
		((BoolExt_eventToString_Parms*)Obj)->boolToConvert = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_boolToConvert = { "boolToConvert", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BoolExt_eventToString_Parms), &Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_boolToConvert_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_boolToConvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_boolToConvert_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoolExt_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoolExt_ToString_Statics::NewProp_boolToConvert,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoolExt_ToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoolExt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoolExt_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoolExt, nullptr, "ToString", nullptr, nullptr, sizeof(BoolExt_eventToString_Parms), Z_Construct_UFunction_UBoolExt_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolExt_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoolExt_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoolExt_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoolExt_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoolExt_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoolExt_NoRegister()
	{
		return UBoolExt::StaticClass();
	}
	struct Z_Construct_UClass_UBoolExt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoolExt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoolExt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoolExt_ToString, "ToString" }, // 171835490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolExt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BoolExt.h" },
		{ "ModuleRelativePath", "Public/BoolExt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoolExt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolExt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoolExt_Statics::ClassParams = {
		&UBoolExt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoolExt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoolExt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoolExt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoolExt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoolExt, 3521336301);
	template<> SYSTEMUTILITIES_API UClass* StaticClass<UBoolExt>()
	{
		return UBoolExt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoolExt(Z_Construct_UClass_UBoolExt, &UBoolExt::StaticClass, TEXT("/Script/SystemUtilities"), TEXT("UBoolExt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolExt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
