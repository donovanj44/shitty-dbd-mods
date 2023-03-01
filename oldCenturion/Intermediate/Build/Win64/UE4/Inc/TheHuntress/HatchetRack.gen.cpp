// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/HatchetRack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHatchetRack() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_AHatchetRack_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_AHatchetRack();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
// End Cross Module References
	static FName NAME_AHatchetRack_SetMovableHatchetVisibility = FName(TEXT("SetMovableHatchetVisibility"));
	void AHatchetRack::SetMovableHatchetVisibility(bool visible)
	{
		HatchetRack_eventSetMovableHatchetVisibility_Parms Parms;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AHatchetRack_SetMovableHatchetVisibility),&Parms);
	}
	void AHatchetRack::StaticRegisterNativesAHatchetRack()
	{
	}
	struct Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((HatchetRack_eventSetMovableHatchetVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HatchetRack_eventSetMovableHatchetVisibility_Parms), &Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HatchetRack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHatchetRack, nullptr, "SetMovableHatchetVisibility", nullptr, nullptr, sizeof(HatchetRack_eventSetMovableHatchetVisibility_Parms), Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHatchetRack_NoRegister()
	{
		return AHatchetRack::StaticClass();
	}
	struct Z_Construct_UClass_AHatchetRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHatchetRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHatchetRack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHatchetRack_SetMovableHatchetVisibility, "SetMovableHatchetVisibility" }, // 836101862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHatchetRack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HatchetRack.h" },
		{ "ModuleRelativePath", "Public/HatchetRack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHatchetRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHatchetRack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHatchetRack_Statics::ClassParams = {
		&AHatchetRack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHatchetRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHatchetRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHatchetRack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHatchetRack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHatchetRack, 3649358258);
	template<> THEHUNTRESS_API UClass* StaticClass<AHatchetRack>()
	{
		return AHatchetRack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHatchetRack(Z_Construct_UClass_AHatchetRack, &AHatchetRack::StaticClass, TEXT("/Script/TheHuntress"), TEXT("AHatchetRack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHatchetRack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
