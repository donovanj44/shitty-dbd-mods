// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MagicFountainOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicFountainOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UMagicFountainOutlineUpdateStrategy::execSetFountainCorrupted)
	{
		P_GET_UBOOL(Z_Param_corrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFountainCorrupted(Z_Param_corrupted);
		P_NATIVE_END;
	}
	void UMagicFountainOutlineUpdateStrategy::StaticRegisterNativesUMagicFountainOutlineUpdateStrategy()
	{
		UClass* Class = UMagicFountainOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFountainCorrupted", &UMagicFountainOutlineUpdateStrategy::execSetFountainCorrupted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics
	{
		struct MagicFountainOutlineUpdateStrategy_eventSetFountainCorrupted_Parms
		{
			bool corrupted;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_corrupted_MetaData[];
#endif
		static void NewProp_corrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_corrupted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::NewProp_corrupted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::NewProp_corrupted_SetBit(void* Obj)
	{
		((MagicFountainOutlineUpdateStrategy_eventSetFountainCorrupted_Parms*)Obj)->corrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::NewProp_corrupted = { "corrupted", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicFountainOutlineUpdateStrategy_eventSetFountainCorrupted_Parms), &Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::NewProp_corrupted_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::NewProp_corrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::NewProp_corrupted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::NewProp_corrupted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicFountainOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy, nullptr, "SetFountainCorrupted", nullptr, nullptr, sizeof(MagicFountainOutlineUpdateStrategy_eventSetFountainCorrupted_Parms), Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_NoRegister()
	{
		return UMagicFountainOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outlineColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicFountainOutlineUpdateStrategy_SetFountainCorrupted, "SetFountainCorrupted" }, // 3402343556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicFountainOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/MagicFountainOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::NewProp__outlineColor_MetaData[] = {
		{ "Category", "MagicFountainOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/MagicFountainOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::NewProp__outlineColor = { "_outlineColor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicFountainOutlineUpdateStrategy, _outlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::NewProp__outlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::NewProp__outlineColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::NewProp__outlineColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicFountainOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::ClassParams = {
		&UMagicFountainOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicFountainOutlineUpdateStrategy, 1141653221);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMagicFountainOutlineUpdateStrategy>()
	{
		return UMagicFountainOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicFountainOutlineUpdateStrategy(Z_Construct_UClass_UMagicFountainOutlineUpdateStrategy, &UMagicFountainOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMagicFountainOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicFountainOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
