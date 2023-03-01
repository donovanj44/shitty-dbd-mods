// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGeneratorDrivenReflectionCaptureActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGeneratorDrivenReflectionCaptureActor() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGeneratorDrivenActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenyReflectionCaptureComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDGeneratorDrivenReflectionCaptureActor::execSwapToSecondState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapToSecondState();
		P_NATIVE_END;
	}
	void ADBDGeneratorDrivenReflectionCaptureActor::StaticRegisterNativesADBDGeneratorDrivenReflectionCaptureActor()
	{
		UClass* Class = ADBDGeneratorDrivenReflectionCaptureActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwapToSecondState", &ADBDGeneratorDrivenReflectionCaptureActor::execSwapToSecondState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGeneratorDrivenReflectionCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor, nullptr, "SwapToSecondState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_NoRegister()
	{
		return ADBDGeneratorDrivenReflectionCaptureActor::StaticClass();
	}
	struct Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_genyReflectionCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_genyReflectionCapture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneratorDrivenActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDGeneratorDrivenReflectionCaptureActor_SwapToSecondState, "SwapToSecondState" }, // 1411151843
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDGeneratorDrivenReflectionCaptureActor.h" },
		{ "ModuleRelativePath", "Public/DBDGeneratorDrivenReflectionCaptureActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::NewProp_genyReflectionCapture_MetaData[] = {
		{ "Category", "DBDGeneratorDrivenReflectionCaptureActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDGeneratorDrivenReflectionCaptureActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::NewProp_genyReflectionCapture = { "genyReflectionCapture", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDGeneratorDrivenReflectionCaptureActor, genyReflectionCapture), Z_Construct_UClass_UGenyReflectionCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::NewProp_genyReflectionCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::NewProp_genyReflectionCapture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::NewProp_genyReflectionCapture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDGeneratorDrivenReflectionCaptureActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::ClassParams = {
		&ADBDGeneratorDrivenReflectionCaptureActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDGeneratorDrivenReflectionCaptureActor, 2474384153);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDGeneratorDrivenReflectionCaptureActor>()
	{
		return ADBDGeneratorDrivenReflectionCaptureActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDGeneratorDrivenReflectionCaptureActor(Z_Construct_UClass_ADBDGeneratorDrivenReflectionCaptureActor, &ADBDGeneratorDrivenReflectionCaptureActor::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDGeneratorDrivenReflectionCaptureActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDGeneratorDrivenReflectionCaptureActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
