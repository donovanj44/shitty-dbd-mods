// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlueprintDebugUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintDebugUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlueprintDebugUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlueprintDebugUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintDebugUtilities::execEnsureFalseWithMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ensureMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintDebugUtilities::EnsureFalseWithMessage(Z_Param_ensureMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintDebugUtilities::execEnsureOnConditionWithMessage)
	{
		P_GET_UBOOL(Z_Param_condition);
		P_GET_PROPERTY(FStrProperty,Z_Param_ensureMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintDebugUtilities::EnsureOnConditionWithMessage(Z_Param_condition,Z_Param_ensureMessage);
		P_NATIVE_END;
	}
	void UBlueprintDebugUtilities::StaticRegisterNativesUBlueprintDebugUtilities()
	{
		UClass* Class = UBlueprintDebugUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnsureFalseWithMessage", &UBlueprintDebugUtilities::execEnsureFalseWithMessage },
			{ "EnsureOnConditionWithMessage", &UBlueprintDebugUtilities::execEnsureOnConditionWithMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics
	{
		struct BlueprintDebugUtilities_eventEnsureFalseWithMessage_Parms
		{
			FString ensureMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ensureMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ensureMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::NewProp_ensureMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::NewProp_ensureMessage = { "ensureMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintDebugUtilities_eventEnsureFalseWithMessage_Parms, ensureMessage), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::NewProp_ensureMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::NewProp_ensureMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::NewProp_ensureMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintDebugUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintDebugUtilities, nullptr, "EnsureFalseWithMessage", nullptr, nullptr, sizeof(BlueprintDebugUtilities_eventEnsureFalseWithMessage_Parms), Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics
	{
		struct BlueprintDebugUtilities_eventEnsureOnConditionWithMessage_Parms
		{
			bool condition;
			FString ensureMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ensureMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ensureMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_condition_MetaData[];
#endif
		static void NewProp_condition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_condition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_ensureMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_ensureMessage = { "ensureMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintDebugUtilities_eventEnsureOnConditionWithMessage_Parms, ensureMessage), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_ensureMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_ensureMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_condition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_condition_SetBit(void* Obj)
	{
		((BlueprintDebugUtilities_eventEnsureOnConditionWithMessage_Parms*)Obj)->condition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_condition = { "condition", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintDebugUtilities_eventEnsureOnConditionWithMessage_Parms), &Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_condition_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_condition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_ensureMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::NewProp_condition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintDebugUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintDebugUtilities, nullptr, "EnsureOnConditionWithMessage", nullptr, nullptr, sizeof(BlueprintDebugUtilities_eventEnsureOnConditionWithMessage_Parms), Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintDebugUtilities_NoRegister()
	{
		return UBlueprintDebugUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintDebugUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintDebugUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintDebugUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureFalseWithMessage, "EnsureFalseWithMessage" }, // 2358714640
		{ &Z_Construct_UFunction_UBlueprintDebugUtilities_EnsureOnConditionWithMessage, "EnsureOnConditionWithMessage" }, // 3961395935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintDebugUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlueprintDebugUtilities.h" },
		{ "ModuleRelativePath", "Public/BlueprintDebugUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintDebugUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintDebugUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintDebugUtilities_Statics::ClassParams = {
		&UBlueprintDebugUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintDebugUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintDebugUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintDebugUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintDebugUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintDebugUtilities, 2829611076);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlueprintDebugUtilities>()
	{
		return UBlueprintDebugUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintDebugUtilities(Z_Construct_UClass_UBlueprintDebugUtilities, &UBlueprintDebugUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlueprintDebugUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintDebugUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
