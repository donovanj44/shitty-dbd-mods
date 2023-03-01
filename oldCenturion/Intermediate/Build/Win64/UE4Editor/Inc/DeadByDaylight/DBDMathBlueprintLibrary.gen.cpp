// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDMathBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDMathBlueprintLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDMathBlueprintLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDMathBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDBDMathBlueprintLibrary::execTransformToMatrix)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UDBDMathBlueprintLibrary::TransformToMatrix(Z_Param_Out_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDMathBlueprintLibrary::execVectorAbsoluteValue)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDBDMathBlueprintLibrary::VectorAbsoluteValue(Z_Param_Out_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDMathBlueprintLibrary::execVectorIntersect)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginA);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExtentA);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginB);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExtentB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDMathBlueprintLibrary::VectorIntersect(Z_Param_Out_OriginA,Z_Param_Out_ExtentA,Z_Param_Out_OriginB,Z_Param_Out_ExtentB);
		P_NATIVE_END;
	}
	void UDBDMathBlueprintLibrary::StaticRegisterNativesUDBDMathBlueprintLibrary()
	{
		UClass* Class = UDBDMathBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TransformToMatrix", &UDBDMathBlueprintLibrary::execTransformToMatrix },
			{ "VectorAbsoluteValue", &UDBDMathBlueprintLibrary::execVectorAbsoluteValue },
			{ "VectorIntersect", &UDBDMathBlueprintLibrary::execVectorIntersect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics
	{
		struct DBDMathBlueprintLibrary_eventTransformToMatrix_Parms
		{
			FTransform A;
			TArray<FLinearColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventTransformToMatrix_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventTransformToMatrix_Parms, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMathBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMathBlueprintLibrary, nullptr, "TransformToMatrix", nullptr, nullptr, sizeof(DBDMathBlueprintLibrary_eventTransformToMatrix_Parms), Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics
	{
		struct DBDMathBlueprintLibrary_eventVectorAbsoluteValue_Parms
		{
			FVector A;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventVectorAbsoluteValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventVectorAbsoluteValue_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMathBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMathBlueprintLibrary, nullptr, "VectorAbsoluteValue", nullptr, nullptr, sizeof(DBDMathBlueprintLibrary_eventVectorAbsoluteValue_Parms), Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics
	{
		struct DBDMathBlueprintLibrary_eventVectorIntersect_Parms
		{
			FVector OriginA;
			FVector ExtentA;
			FVector OriginB;
			FVector ExtentB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtentA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtentA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDMathBlueprintLibrary_eventVectorIntersect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDMathBlueprintLibrary_eventVectorIntersect_Parms), &Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentB = { "ExtentB", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventVectorIntersect_Parms, ExtentB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginB = { "OriginB", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventVectorIntersect_Parms, OriginB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentA = { "ExtentA", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventVectorIntersect_Parms, ExtentA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginA = { "OriginA", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDMathBlueprintLibrary_eventVectorIntersect_Parms, OriginA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_ExtentA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::NewProp_OriginA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDMathBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDMathBlueprintLibrary, nullptr, "VectorIntersect", nullptr, nullptr, sizeof(DBDMathBlueprintLibrary_eventVectorIntersect_Parms), Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDMathBlueprintLibrary_NoRegister()
	{
		return UDBDMathBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDMathBlueprintLibrary_TransformToMatrix, "TransformToMatrix" }, // 3738712357
		{ &Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorAbsoluteValue, "VectorAbsoluteValue" }, // 1393591532
		{ &Z_Construct_UFunction_UDBDMathBlueprintLibrary_VectorIntersect, "VectorIntersect" }, // 4153243080
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDMathBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DBDMathBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDMathBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::ClassParams = {
		&UDBDMathBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDMathBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDMathBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDMathBlueprintLibrary, 578142701);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDMathBlueprintLibrary>()
	{
		return UDBDMathBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDMathBlueprintLibrary(Z_Construct_UClass_UDBDMathBlueprintLibrary, &UDBDMathBlueprintLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDMathBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDMathBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
