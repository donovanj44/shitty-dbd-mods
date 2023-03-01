// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Fadeable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFadeable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFadeable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFadeable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IFadeable::execOnAlphaChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newAlpha);
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAlphaChanged_Implementation(Z_Param_newAlpha,Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFadeable::execOnFadeBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFadeBegin_Implementation(Z_Param_other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFadeable::execOnFadeEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFadeEnd_Implementation(Z_Param_other);
		P_NATIVE_END;
	}
	void IFadeable::OnAlphaChanged(float newAlpha, AActor* other)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAlphaChanged instead.");
	}
	void IFadeable::OnFadeBegin(AActor* other)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFadeBegin instead.");
	}
	void IFadeable::OnFadeEnd(AActor* other)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFadeEnd instead.");
	}
	void UFadeable::StaticRegisterNativesUFadeable()
	{
		UClass* Class = UFadeable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAlphaChanged", &IFadeable::execOnAlphaChanged },
			{ "OnFadeBegin", &IFadeable::execOnFadeBegin },
			{ "OnFadeEnd", &IFadeable::execOnFadeEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fadeable_eventOnAlphaChanged_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::NewProp_newAlpha = { "newAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fadeable_eventOnAlphaChanged_Parms, newAlpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::NewProp_other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::NewProp_newAlpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fadeable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFadeable, nullptr, "OnAlphaChanged", nullptr, nullptr, sizeof(Fadeable_eventOnAlphaChanged_Parms), Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFadeable_OnAlphaChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFadeable_OnAlphaChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fadeable_eventOnFadeBegin_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fadeable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFadeable, nullptr, "OnFadeBegin", nullptr, nullptr, sizeof(Fadeable_eventOnFadeBegin_Parms), Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFadeable_OnFadeBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFadeable_OnFadeBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fadeable_eventOnFadeEnd_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::NewProp_other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fadeable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFadeable, nullptr, "OnFadeEnd", nullptr, nullptr, sizeof(Fadeable_eventOnFadeEnd_Parms), Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFadeable_OnFadeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFadeable_OnFadeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFadeable_NoRegister()
	{
		return UFadeable::StaticClass();
	}
	struct Z_Construct_UClass_UFadeable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFadeable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFadeable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFadeable_OnAlphaChanged, "OnAlphaChanged" }, // 1956208990
		{ &Z_Construct_UFunction_UFadeable_OnFadeBegin, "OnFadeBegin" }, // 4009554940
		{ &Z_Construct_UFunction_UFadeable_OnFadeEnd, "OnFadeEnd" }, // 2772420549
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFadeable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Fadeable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFadeable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFadeable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFadeable_Statics::ClassParams = {
		&UFadeable::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFadeable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFadeable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFadeable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFadeable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFadeable, 1493353177);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFadeable>()
	{
		return UFadeable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFadeable(Z_Construct_UClass_UFadeable, &UFadeable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFadeable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFadeable);
	static FName NAME_UFadeable_OnAlphaChanged = FName(TEXT("OnAlphaChanged"));
	void IFadeable::Execute_OnAlphaChanged(UObject* O, float newAlpha, AActor* other)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFadeable::StaticClass()));
		Fadeable_eventOnAlphaChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFadeable_OnAlphaChanged);
		if (Func)
		{
			Parms.newAlpha=newAlpha;
			Parms.other=other;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFadeable*)(O->GetNativeInterfaceAddress(UFadeable::StaticClass())))
		{
			I->OnAlphaChanged_Implementation(newAlpha,other);
		}
	}
	static FName NAME_UFadeable_OnFadeBegin = FName(TEXT("OnFadeBegin"));
	void IFadeable::Execute_OnFadeBegin(UObject* O, AActor* other)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFadeable::StaticClass()));
		Fadeable_eventOnFadeBegin_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFadeable_OnFadeBegin);
		if (Func)
		{
			Parms.other=other;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFadeable*)(O->GetNativeInterfaceAddress(UFadeable::StaticClass())))
		{
			I->OnFadeBegin_Implementation(other);
		}
	}
	static FName NAME_UFadeable_OnFadeEnd = FName(TEXT("OnFadeEnd"));
	void IFadeable::Execute_OnFadeEnd(UObject* O, AActor* other)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFadeable::StaticClass()));
		Fadeable_eventOnFadeEnd_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFadeable_OnFadeEnd);
		if (Func)
		{
			Parms.other=other;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFadeable*)(O->GetNativeInterfaceAddress(UFadeable::StaticClass())))
		{
			I->OnFadeEnd_Implementation(other);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
