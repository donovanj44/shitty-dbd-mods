// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PostProcessUpdate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessUpdate() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APostProcessUpdate_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APostProcessUpdate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	static FName NAME_APostProcessUpdate_PostProcessToggle = FName(TEXT("PostProcessToggle"));
	void APostProcessUpdate::PostProcessToggle(bool toggle)
	{
		PostProcessUpdate_eventPostProcessToggle_Parms Parms;
		Parms.toggle=toggle ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APostProcessUpdate_PostProcessToggle),&Parms);
	}
	void APostProcessUpdate::StaticRegisterNativesAPostProcessUpdate()
	{
	}
	struct Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics
	{
		static void NewProp_toggle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toggle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::NewProp_toggle_SetBit(void* Obj)
	{
		((PostProcessUpdate_eventPostProcessToggle_Parms*)Obj)->toggle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::NewProp_toggle = { "toggle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PostProcessUpdate_eventPostProcessToggle_Parms), &Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::NewProp_toggle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::NewProp_toggle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostProcessUpdate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APostProcessUpdate, nullptr, "PostProcessToggle", nullptr, nullptr, sizeof(PostProcessUpdate_eventPostProcessToggle_Parms), Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APostProcessUpdate_NoRegister()
	{
		return APostProcessUpdate::StaticClass();
	}
	struct Z_Construct_UClass_APostProcessUpdate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostProcessUpdate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APostProcessUpdate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APostProcessUpdate_PostProcessToggle, "PostProcessToggle" }, // 3778007107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostProcessUpdate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PostProcessUpdate.h" },
		{ "ModuleRelativePath", "Public/PostProcessUpdate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostProcessUpdate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostProcessUpdate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostProcessUpdate_Statics::ClassParams = {
		&APostProcessUpdate::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APostProcessUpdate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostProcessUpdate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostProcessUpdate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostProcessUpdate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostProcessUpdate, 2900650305);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<APostProcessUpdate>()
	{
		return APostProcessUpdate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostProcessUpdate(Z_Construct_UClass_APostProcessUpdate, &APostProcessUpdate::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("APostProcessUpdate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostProcessUpdate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
