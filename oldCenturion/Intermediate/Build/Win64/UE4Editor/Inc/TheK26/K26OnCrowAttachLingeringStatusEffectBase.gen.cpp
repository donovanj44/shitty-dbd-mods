// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26OnCrowAttachLingeringStatusEffectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26OnCrowAttachLingeringStatusEffectBase() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UK26OnCrowAttachLingeringStatusEffectBase::execGetLingerTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLingerTime();
		P_NATIVE_END;
	}
	void UK26OnCrowAttachLingeringStatusEffectBase::StaticRegisterNativesUK26OnCrowAttachLingeringStatusEffectBase()
	{
		UClass* Class = UK26OnCrowAttachLingeringStatusEffectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLingerTime", &UK26OnCrowAttachLingeringStatusEffectBase::execGetLingerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics
	{
		struct K26OnCrowAttachLingeringStatusEffectBase_eventGetLingerTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26OnCrowAttachLingeringStatusEffectBase_eventGetLingerTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26OnCrowAttachLingeringStatusEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase, nullptr, "GetLingerTime", nullptr, nullptr, sizeof(K26OnCrowAttachLingeringStatusEffectBase_eventGetLingerTime_Parms), Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_NoRegister()
	{
		return UK26OnCrowAttachLingeringStatusEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lingerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lingerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onCrowAttachStateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__onCrowAttachStateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26OnCrowAttachLingeringStatusEffectBase_GetLingerTime, "GetLingerTime" }, // 2916160259
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26OnCrowAttachLingeringStatusEffectBase.h" },
		{ "ModuleRelativePath", "Public/K26OnCrowAttachLingeringStatusEffectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__lingerTime_MetaData[] = {
		{ "Category", "K26OnCrowAttachLingeringStatusEffectBase" },
		{ "ModuleRelativePath", "Public/K26OnCrowAttachLingeringStatusEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__lingerTime = { "_lingerTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26OnCrowAttachLingeringStatusEffectBase, _lingerTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__lingerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__lingerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__onCrowAttachStateTag_MetaData[] = {
		{ "Category", "K26OnCrowAttachLingeringStatusEffectBase" },
		{ "ModuleRelativePath", "Public/K26OnCrowAttachLingeringStatusEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__onCrowAttachStateTag = { "_onCrowAttachStateTag", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26OnCrowAttachLingeringStatusEffectBase, _onCrowAttachStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__onCrowAttachStateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__onCrowAttachStateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__lingerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::NewProp__onCrowAttachStateTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26OnCrowAttachLingeringStatusEffectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::ClassParams = {
		&UK26OnCrowAttachLingeringStatusEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26OnCrowAttachLingeringStatusEffectBase, 3487386183);
	template<> THEK26_API UClass* StaticClass<UK26OnCrowAttachLingeringStatusEffectBase>()
	{
		return UK26OnCrowAttachLingeringStatusEffectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26OnCrowAttachLingeringStatusEffectBase(Z_Construct_UClass_UK26OnCrowAttachLingeringStatusEffectBase, &UK26OnCrowAttachLingeringStatusEffectBase::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26OnCrowAttachLingeringStatusEffectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26OnCrowAttachLingeringStatusEffectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
