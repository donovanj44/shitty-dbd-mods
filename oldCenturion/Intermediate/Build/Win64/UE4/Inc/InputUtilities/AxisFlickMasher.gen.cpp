// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputUtilities/Public/AxisFlickMasher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisFlickMasher() {}
// Cross Module References
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UAxisFlickMasher_NoRegister();
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UAxisFlickMasher();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InputUtilities();
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UAxisFlick_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAxisFlickMasher::execOnAxisFlicked1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAxisFlicked1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxisFlickMasher::execOnAxisFlicked2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAxisFlicked2();
		P_NATIVE_END;
	}
	void UAxisFlickMasher::StaticRegisterNativesUAxisFlickMasher()
	{
		UClass* Class = UAxisFlickMasher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAxisFlicked1", &UAxisFlickMasher::execOnAxisFlicked1 },
			{ "OnAxisFlicked2", &UAxisFlickMasher::execOnAxisFlicked2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AxisFlickMasher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxisFlickMasher, nullptr, "OnAxisFlicked1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AxisFlickMasher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxisFlickMasher, nullptr, "OnAxisFlicked2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAxisFlickMasher_NoRegister()
	{
		return UAxisFlickMasher::StaticClass();
	}
	struct Z_Construct_UClass_UAxisFlickMasher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__axisFlick2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__axisFlick2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__axisFlick1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__axisFlick1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisFlickMasher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InputUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxisFlickMasher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked1, "OnAxisFlicked1" }, // 3573457026
		{ &Z_Construct_UFunction_UAxisFlickMasher_OnAxisFlicked2, "OnAxisFlicked2" }, // 1173592167
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisFlickMasher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AxisFlickMasher.h" },
		{ "ModuleRelativePath", "Public/AxisFlickMasher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick2_MetaData[] = {
		{ "ModuleRelativePath", "Public/AxisFlickMasher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick2 = { "_axisFlick2", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisFlickMasher, _axisFlick2), Z_Construct_UClass_UAxisFlick_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick1_MetaData[] = {
		{ "ModuleRelativePath", "Public/AxisFlickMasher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick1 = { "_axisFlick1", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisFlickMasher, _axisFlick1), Z_Construct_UClass_UAxisFlick_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__inputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AxisFlickMasher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__inputComponent = { "_inputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisFlickMasher, _inputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__inputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__inputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisFlickMasher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__axisFlick1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisFlickMasher_Statics::NewProp__inputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisFlickMasher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisFlickMasher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisFlickMasher_Statics::ClassParams = {
		&UAxisFlickMasher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAxisFlickMasher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxisFlickMasher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisFlickMasher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisFlickMasher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisFlickMasher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisFlickMasher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisFlickMasher, 713538040);
	template<> INPUTUTILITIES_API UClass* StaticClass<UAxisFlickMasher>()
	{
		return UAxisFlickMasher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisFlickMasher(Z_Construct_UClass_UAxisFlickMasher, &UAxisFlickMasher::StaticClass, TEXT("/Script/InputUtilities"), TEXT("UAxisFlickMasher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisFlickMasher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
