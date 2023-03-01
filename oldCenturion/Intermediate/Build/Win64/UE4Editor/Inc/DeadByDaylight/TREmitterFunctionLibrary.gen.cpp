// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TREmitterFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTREmitterFunctionLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTREmitterFunctionLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTREmitterFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTREmitterFunctionLibrary::execGetActiveFakeTerrorRadiusEmittersCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTREmitterFunctionLibrary::GetActiveFakeTerrorRadiusEmittersCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UTREmitterFunctionLibrary::StaticRegisterNativesUTREmitterFunctionLibrary()
	{
		UClass* Class = UTREmitterFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveFakeTerrorRadiusEmittersCount", &UTREmitterFunctionLibrary::execGetActiveFakeTerrorRadiusEmittersCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics
	{
		struct TREmitterFunctionLibrary_eventGetActiveFakeTerrorRadiusEmittersCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TREmitterFunctionLibrary_eventGetActiveFakeTerrorRadiusEmittersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TREmitterFunctionLibrary_eventGetActiveFakeTerrorRadiusEmittersCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TREmitterFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTREmitterFunctionLibrary, nullptr, "GetActiveFakeTerrorRadiusEmittersCount", nullptr, nullptr, sizeof(TREmitterFunctionLibrary_eventGetActiveFakeTerrorRadiusEmittersCount_Parms), Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTREmitterFunctionLibrary_NoRegister()
	{
		return UTREmitterFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTREmitterFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTREmitterFunctionLibrary_GetActiveFakeTerrorRadiusEmittersCount, "GetActiveFakeTerrorRadiusEmittersCount" }, // 2510953885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TREmitterFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TREmitterFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTREmitterFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::ClassParams = {
		&UTREmitterFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTREmitterFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTREmitterFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTREmitterFunctionLibrary, 1562403187);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTREmitterFunctionLibrary>()
	{
		return UTREmitterFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTREmitterFunctionLibrary(Z_Construct_UClass_UTREmitterFunctionLibrary, &UTREmitterFunctionLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTREmitterFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTREmitterFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
