// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinBaseAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinBaseAddon() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinBaseAddon_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinBaseAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTwinBaseAddon::execAuthority_OnTwinSet)
	{
		P_GET_OBJECT(AConjoinedTwin,Z_Param_twin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnTwinSet(Z_Param_twin);
		P_NATIVE_END;
	}
	void UTwinBaseAddon::StaticRegisterNativesUTwinBaseAddon()
	{
		UClass* Class = UTwinBaseAddon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnTwinSet", &UTwinBaseAddon::execAuthority_OnTwinSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics
	{
		struct TwinBaseAddon_eventAuthority_OnTwinSet_Parms
		{
			AConjoinedTwin* twin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinBaseAddon_eventAuthority_OnTwinSet_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinBaseAddon, nullptr, "Authority_OnTwinSet", nullptr, nullptr, sizeof(TwinBaseAddon_eventAuthority_OnTwinSet_Parms), Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinBaseAddon_NoRegister()
	{
		return UTwinBaseAddon::StaticClass();
	}
	struct Z_Construct_UClass_UTwinBaseAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__customParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__customParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinBaseAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinBaseAddon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinBaseAddon_Authority_OnTwinSet, "Authority_OnTwinSet" }, // 1541163820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinBaseAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinBaseAddon.h" },
		{ "ModuleRelativePath", "Public/TwinBaseAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__customParam_MetaData[] = {
		{ "Category", "TwinBaseAddon" },
		{ "ModuleRelativePath", "Public/TwinBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__customParam = { "_customParam", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinBaseAddon, _customParam), METADATA_PARAMS(Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__customParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__customParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__statusEffectID_MetaData[] = {
		{ "Category", "TwinBaseAddon" },
		{ "ModuleRelativePath", "Public/TwinBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__statusEffectID = { "_statusEffectID", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinBaseAddon, _statusEffectID), METADATA_PARAMS(Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__statusEffectID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__statusEffectID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinBaseAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__customParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinBaseAddon_Statics::NewProp__statusEffectID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinBaseAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBaseAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinBaseAddon_Statics::ClassParams = {
		&UTwinBaseAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinBaseAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinBaseAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinBaseAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinBaseAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinBaseAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinBaseAddon, 2295376992);
	template<> THETWINS_API UClass* StaticClass<UTwinBaseAddon>()
	{
		return UTwinBaseAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinBaseAddon(Z_Construct_UClass_UTwinBaseAddon, &UTwinBaseAddon::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinBaseAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinBaseAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
