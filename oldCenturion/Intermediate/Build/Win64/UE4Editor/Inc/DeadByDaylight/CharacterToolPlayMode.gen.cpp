// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterToolPlayMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterToolPlayMode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharacterToolPlayMode_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharacterToolPlayMode();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharacterTool();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterToolPlayMode::execGetAnimationInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAnimInstance*>*)Z_Param__Result=P_THIS->GetAnimationInstances();
		P_NATIVE_END;
	}
	void ACharacterToolPlayMode::StaticRegisterNativesACharacterToolPlayMode()
	{
		UClass* Class = ACharacterToolPlayMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationInstances", &ACharacterToolPlayMode::execGetAnimationInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics
	{
		struct CharacterToolPlayMode_eventGetAnimationInstances_Parms
		{
			TArray<UAnimInstance*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterToolPlayMode_eventGetAnimationInstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterToolPlayMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterToolPlayMode, nullptr, "GetAnimationInstances", nullptr, nullptr, sizeof(CharacterToolPlayMode_eventGetAnimationInstances_Parms), Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterToolPlayMode_NoRegister()
	{
		return ACharacterToolPlayMode::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterToolPlayMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterToolPlayMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterTool,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterToolPlayMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterToolPlayMode_GetAnimationInstances, "GetAnimationInstances" }, // 3205443591
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterToolPlayMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterToolPlayMode.h" },
		{ "ModuleRelativePath", "Public/CharacterToolPlayMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterToolPlayMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterToolPlayMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterToolPlayMode_Statics::ClassParams = {
		&ACharacterToolPlayMode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterToolPlayMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterToolPlayMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterToolPlayMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterToolPlayMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterToolPlayMode, 2422989612);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ACharacterToolPlayMode>()
	{
		return ACharacterToolPlayMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterToolPlayMode(Z_Construct_UClass_ACharacterToolPlayMode, &ACharacterToolPlayMode::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ACharacterToolPlayMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterToolPlayMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
