// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/ActivateTormentModeInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivateTormentModeInteraction() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UActivateTormentModeInteraction_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UActivateTormentModeInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentMode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActivateTormentModeInteraction::execSetTormentMode)
	{
		P_GET_OBJECT(ATormentMode,Z_Param_tormentModeComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTormentMode(Z_Param_tormentModeComponent);
		P_NATIVE_END;
	}
	void UActivateTormentModeInteraction::StaticRegisterNativesUActivateTormentModeInteraction()
	{
		UClass* Class = UActivateTormentModeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTormentMode", &UActivateTormentModeInteraction::execSetTormentMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics
	{
		struct ActivateTormentModeInteraction_eventSetTormentMode_Parms
		{
			ATormentMode* tormentModeComponent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tormentModeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::NewProp_tormentModeComponent = { "tormentModeComponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivateTormentModeInteraction_eventSetTormentMode_Parms, tormentModeComponent), Z_Construct_UClass_ATormentMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::NewProp_tormentModeComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivateTormentModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivateTormentModeInteraction, nullptr, "SetTormentMode", nullptr, nullptr, sizeof(ActivateTormentModeInteraction_eventSetTormentMode_Parms), Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivateTormentModeInteraction_NoRegister()
	{
		return UActivateTormentModeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UActivateTormentModeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivateTormentModeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivateTormentModeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivateTormentModeInteraction_SetTormentMode, "SetTormentMode" }, // 2642788973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivateTormentModeInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActivateTormentModeInteraction.h" },
		{ "ModuleRelativePath", "Public/ActivateTormentModeInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivateTormentModeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivateTormentModeInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivateTormentModeInteraction_Statics::ClassParams = {
		&UActivateTormentModeInteraction::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivateTormentModeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivateTormentModeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivateTormentModeInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivateTormentModeInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivateTormentModeInteraction, 1787844276);
	template<> THEEXECUTIONER_API UClass* StaticClass<UActivateTormentModeInteraction>()
	{
		return UActivateTormentModeInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivateTormentModeInteraction(Z_Construct_UClass_UActivateTormentModeInteraction, &UActivateTormentModeInteraction::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UActivateTormentModeInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivateTormentModeInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
