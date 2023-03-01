// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlueprintPlatformUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPlatformUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlueprintPlatformUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlueprintPlatformUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDPerPlatformFloat();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDPerPlatformInt();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintPlatformUtilities::execToFloat)
	{
		P_GET_STRUCT_REF(FDBDPerPlatformFloat,Z_Param_Out_perPlatformFloat);
		P_GET_OBJECT(UObject,Z_Param_objectInWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UBlueprintPlatformUtilities::ToFloat(Z_Param_Out_perPlatformFloat,Z_Param_objectInWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintPlatformUtilities::execToInteger)
	{
		P_GET_STRUCT_REF(FDBDPerPlatformInt,Z_Param_Out_perPlatformInt);
		P_GET_OBJECT(UObject,Z_Param_objectInWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBlueprintPlatformUtilities::ToInteger(Z_Param_Out_perPlatformInt,Z_Param_objectInWorld);
		P_NATIVE_END;
	}
	void UBlueprintPlatformUtilities::StaticRegisterNativesUBlueprintPlatformUtilities()
	{
		UClass* Class = UBlueprintPlatformUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToFloat", &UBlueprintPlatformUtilities::execToFloat },
			{ "ToInteger", &UBlueprintPlatformUtilities::execToInteger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics
	{
		struct BlueprintPlatformUtilities_eventToFloat_Parms
		{
			FDBDPerPlatformFloat perPlatformFloat;
			const UObject* objectInWorld;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectInWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectInWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perPlatformFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_perPlatformFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPlatformUtilities_eventToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_objectInWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_objectInWorld = { "objectInWorld", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPlatformUtilities_eventToFloat_Parms, objectInWorld), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_objectInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_objectInWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_perPlatformFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_perPlatformFloat = { "perPlatformFloat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPlatformUtilities_eventToFloat_Parms, perPlatformFloat), Z_Construct_UScriptStruct_FDBDPerPlatformFloat, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_perPlatformFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_perPlatformFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_objectInWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::NewProp_perPlatformFloat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintPlatformUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformUtilities, nullptr, "ToFloat", nullptr, nullptr, sizeof(BlueprintPlatformUtilities_eventToFloat_Parms), Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics
	{
		struct BlueprintPlatformUtilities_eventToInteger_Parms
		{
			FDBDPerPlatformInt perPlatformInt;
			const UObject* objectInWorld;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectInWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectInWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perPlatformInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_perPlatformInt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPlatformUtilities_eventToInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_objectInWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_objectInWorld = { "objectInWorld", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPlatformUtilities_eventToInteger_Parms, objectInWorld), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_objectInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_objectInWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_perPlatformInt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_perPlatformInt = { "perPlatformInt", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintPlatformUtilities_eventToInteger_Parms, perPlatformInt), Z_Construct_UScriptStruct_FDBDPerPlatformInt, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_perPlatformInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_perPlatformInt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_objectInWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::NewProp_perPlatformInt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintPlatformUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintPlatformUtilities, nullptr, "ToInteger", nullptr, nullptr, sizeof(BlueprintPlatformUtilities_eventToInteger_Parms), Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintPlatformUtilities_NoRegister()
	{
		return UBlueprintPlatformUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintPlatformUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintPlatformUtilities_ToFloat, "ToFloat" }, // 297505698
		{ &Z_Construct_UFunction_UBlueprintPlatformUtilities_ToInteger, "ToInteger" }, // 3444551530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlueprintPlatformUtilities.h" },
		{ "ModuleRelativePath", "Public/BlueprintPlatformUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintPlatformUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::ClassParams = {
		&UBlueprintPlatformUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintPlatformUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintPlatformUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintPlatformUtilities, 1458681368);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlueprintPlatformUtilities>()
	{
		return UBlueprintPlatformUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintPlatformUtilities(Z_Construct_UClass_UBlueprintPlatformUtilities, &UBlueprintPlatformUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlueprintPlatformUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPlatformUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
