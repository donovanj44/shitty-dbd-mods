// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/GhostChargeStalkModeInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostChargeStalkModeInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGhostChargeStalkModeInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGhostChargeStalkModeInteraction();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseStalkModeInteraction();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGhostStealthComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGhostChargeStalkModeInteraction::execGetStealthComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGhostStealthComponent**)Z_Param__Result=P_THIS->GetStealthComponent();
		P_NATIVE_END;
	}
	void UGhostChargeStalkModeInteraction::StaticRegisterNativesUGhostChargeStalkModeInteraction()
	{
		UClass* Class = UGhostChargeStalkModeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStealthComponent", &UGhostChargeStalkModeInteraction::execGetStealthComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics
	{
		struct GhostChargeStalkModeInteraction_eventGetStealthComponent_Parms
		{
			UGhostStealthComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GhostChargeStalkModeInteraction_eventGetStealthComponent_Parms, ReturnValue), Z_Construct_UClass_UGhostStealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GhostChargeStalkModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGhostChargeStalkModeInteraction, nullptr, "GetStealthComponent", nullptr, nullptr, sizeof(GhostChargeStalkModeInteraction_eventGetStealthComponent_Parms), Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGhostChargeStalkModeInteraction_NoRegister()
	{
		return UGhostChargeStalkModeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseStalkModeInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGhostChargeStalkModeInteraction_GetStealthComponent, "GetStealthComponent" }, // 3987588065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GhostChargeStalkModeInteraction.h" },
		{ "ModuleRelativePath", "Public/GhostChargeStalkModeInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGhostChargeStalkModeInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::ClassParams = {
		&UGhostChargeStalkModeInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGhostChargeStalkModeInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGhostChargeStalkModeInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGhostChargeStalkModeInteraction, 439757679);
	template<> DBDINTERACTION_API UClass* StaticClass<UGhostChargeStalkModeInteraction>()
	{
		return UGhostChargeStalkModeInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGhostChargeStalkModeInteraction(Z_Construct_UClass_UGhostChargeStalkModeInteraction, &UGhostChargeStalkModeInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UGhostChargeStalkModeInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGhostChargeStalkModeInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
