// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LanternLightCollectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLanternLightCollectable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALanternLightCollectable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALanternLightCollectable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ALanternInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALanternLightCollectable::execSetParentLantern)
	{
		P_GET_OBJECT(ALanternInteractable,Z_Param_parentLantern);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentLantern(Z_Param_parentLantern);
		P_NATIVE_END;
	}
	void ALanternLightCollectable::StaticRegisterNativesALanternLightCollectable()
	{
		UClass* Class = ALanternLightCollectable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetParentLantern", &ALanternLightCollectable::execSetParentLantern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics
	{
		struct LanternLightCollectable_eventSetParentLantern_Parms
		{
			ALanternInteractable* parentLantern;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parentLantern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::NewProp_parentLantern = { "parentLantern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LanternLightCollectable_eventSetParentLantern_Parms, parentLantern), Z_Construct_UClass_ALanternInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::NewProp_parentLantern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LanternLightCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALanternLightCollectable, nullptr, "SetParentLantern", nullptr, nullptr, sizeof(LanternLightCollectable_eventSetParentLantern_Parms), Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALanternLightCollectable_NoRegister()
	{
		return ALanternLightCollectable::StaticClass();
	}
	struct Z_Construct_UClass_ALanternLightCollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__parentLantern_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__parentLantern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALanternLightCollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALanternLightCollectable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALanternLightCollectable_SetParentLantern, "SetParentLantern" }, // 4198130409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanternLightCollectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LanternLightCollectable.h" },
		{ "ModuleRelativePath", "Public/LanternLightCollectable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanternLightCollectable_Statics::NewProp__parentLantern_MetaData[] = {
		{ "ModuleRelativePath", "Public/LanternLightCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALanternLightCollectable_Statics::NewProp__parentLantern = { "_parentLantern", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALanternLightCollectable, _parentLantern), Z_Construct_UClass_ALanternInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALanternLightCollectable_Statics::NewProp__parentLantern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALanternLightCollectable_Statics::NewProp__parentLantern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALanternLightCollectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALanternLightCollectable_Statics::NewProp__parentLantern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALanternLightCollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALanternLightCollectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALanternLightCollectable_Statics::ClassParams = {
		&ALanternLightCollectable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALanternLightCollectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALanternLightCollectable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALanternLightCollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALanternLightCollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALanternLightCollectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALanternLightCollectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALanternLightCollectable, 967330884);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ALanternLightCollectable>()
	{
		return ALanternLightCollectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALanternLightCollectable(Z_Construct_UClass_ALanternLightCollectable, &ALanternLightCollectable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ALanternLightCollectable"), false, nullptr, nullptr, nullptr);

	void ALanternLightCollectable::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__parentLantern(TEXT("_parentLantern"));

		const bool bIsValid = true
			&& Name__parentLantern == ClassReps[(int32)ENetFields_Private::_parentLantern].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALanternLightCollectable"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALanternLightCollectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
