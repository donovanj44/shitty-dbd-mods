// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/BaseMenuAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMenuAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseMenuAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseMenuAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDMenuPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseMenuAnimInstance::execGetOwningMenuPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDMenuPlayer**)Z_Param__Result=P_THIS->GetOwningMenuPlayer();
		P_NATIVE_END;
	}
	void UBaseMenuAnimInstance::StaticRegisterNativesUBaseMenuAnimInstance()
	{
		UClass* Class = UBaseMenuAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningMenuPlayer", &UBaseMenuAnimInstance::execGetOwningMenuPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics
	{
		struct BaseMenuAnimInstance_eventGetOwningMenuPlayer_Parms
		{
			ADBDMenuPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseMenuAnimInstance_eventGetOwningMenuPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDMenuPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMenuAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMenuAnimInstance, nullptr, "GetOwningMenuPlayer", nullptr, nullptr, sizeof(BaseMenuAnimInstance_eventGetOwningMenuPlayer_Parms), Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseMenuAnimInstance_NoRegister()
	{
		return UBaseMenuAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMenuAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMenuAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseMenuAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseMenuAnimInstance_GetOwningMenuPlayer, "GetOwningMenuPlayer" }, // 3866216633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMenuAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseMenuAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BaseMenuAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMenuAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMenuAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseMenuAnimInstance_Statics::ClassParams = {
		&UBaseMenuAnimInstance::StaticClass,
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
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseMenuAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMenuAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseMenuAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseMenuAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseMenuAnimInstance, 1949099927);
	template<> DBDANIMATION_API UClass* StaticClass<UBaseMenuAnimInstance>()
	{
		return UBaseMenuAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseMenuAnimInstance(Z_Construct_UClass_UBaseMenuAnimInstance, &UBaseMenuAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UBaseMenuAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMenuAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
