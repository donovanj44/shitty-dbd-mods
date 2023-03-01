// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtilities/Public/CoreUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreUtilities() {}
// Cross Module References
	COREUTILITIES_API UClass* Z_Construct_UClass_UCoreUtilities_NoRegister();
	COREUTILITIES_API UClass* Z_Construct_UClass_UCoreUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CoreUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreUtilities::execGetGameInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameInstance**)Z_Param__Result=UCoreUtilities::GetGameInstance(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreUtilities::execGetRandomValuesFromArray)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_values);
		P_GET_PROPERTY(FIntProperty,Z_Param_numberOfDesiredValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UCoreUtilities::GetRandomValuesFromArray(Z_Param_Out_values,Z_Param_numberOfDesiredValues);
		P_NATIVE_END;
	}
	void UCoreUtilities::StaticRegisterNativesUCoreUtilities()
	{
		UClass* Class = UCoreUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameInstance", &UCoreUtilities::execGetGameInstance },
			{ "GetRandomValuesFromArray", &UCoreUtilities::execGetRandomValuesFromArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics
	{
		struct CoreUtilities_eventGetGameInstance_Parms
		{
			const UObject* worldContextObject;
			UGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilities_eventGetGameInstance_Parms, ReturnValue), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilities_eventGetGameInstance_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilities, nullptr, "GetGameInstance", nullptr, nullptr, sizeof(CoreUtilities_eventGetGameInstance_Parms), Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilities_GetGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilities_GetGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics
	{
		struct CoreUtilities_eventGetRandomValuesFromArray_Parms
		{
			TArray<int32> values;
			int32 numberOfDesiredValues;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfDesiredValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numberOfDesiredValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_values;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_values_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilities_eventGetRandomValuesFromArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_numberOfDesiredValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_numberOfDesiredValues = { "numberOfDesiredValues", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilities_eventGetRandomValuesFromArray_Parms, numberOfDesiredValues), METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_numberOfDesiredValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_numberOfDesiredValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_values = { "values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilities_eventGetRandomValuesFromArray_Parms, values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_values_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_values_Inner = { "values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_numberOfDesiredValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::NewProp_values_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilities, nullptr, "GetRandomValuesFromArray", nullptr, nullptr, sizeof(CoreUtilities_eventGetRandomValuesFromArray_Parms), Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreUtilities_NoRegister()
	{
		return UCoreUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCoreUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CoreUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreUtilities_GetGameInstance, "GetGameInstance" }, // 4143061093
		{ &Z_Construct_UFunction_UCoreUtilities_GetRandomValuesFromArray, "GetRandomValuesFromArray" }, // 1614225091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoreUtilities.h" },
		{ "ModuleRelativePath", "Public/CoreUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreUtilities_Statics::ClassParams = {
		&UCoreUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreUtilities, 1104877971);
	template<> COREUTILITIES_API UClass* StaticClass<UCoreUtilities>()
	{
		return UCoreUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreUtilities(Z_Construct_UClass_UCoreUtilities, &UCoreUtilities::StaticClass, TEXT("/Script/CoreUtilities"), TEXT("UCoreUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
