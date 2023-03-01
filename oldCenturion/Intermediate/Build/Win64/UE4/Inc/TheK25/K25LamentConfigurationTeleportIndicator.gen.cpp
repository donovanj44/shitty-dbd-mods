// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25LamentConfigurationTeleportIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25LamentConfigurationTeleportIndicator() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	static FName NAME_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility = FName(TEXT("Cosmetic_UpdateIndicatorVisibility"));
	void AK25LamentConfigurationTeleportIndicator::Cosmetic_UpdateIndicatorVisibility(bool isVisible)
	{
		K25LamentConfigurationTeleportIndicator_eventCosmetic_UpdateIndicatorVisibility_Parms Parms;
		Parms.isVisible=isVisible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility),&Parms);
	}
	void AK25LamentConfigurationTeleportIndicator::StaticRegisterNativesAK25LamentConfigurationTeleportIndicator()
	{
	}
	struct Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics
	{
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((K25LamentConfigurationTeleportIndicator_eventCosmetic_UpdateIndicatorVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25LamentConfigurationTeleportIndicator_eventCosmetic_UpdateIndicatorVisibility_Parms), &Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25LamentConfigurationTeleportIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator, nullptr, "Cosmetic_UpdateIndicatorVisibility", nullptr, nullptr, sizeof(K25LamentConfigurationTeleportIndicator_eventCosmetic_UpdateIndicatorVisibility_Parms), Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_NoRegister()
	{
		return AK25LamentConfigurationTeleportIndicator::StaticClass();
	}
	struct Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AK25LamentConfigurationTeleportIndicator_Cosmetic_UpdateIndicatorVisibility, "Cosmetic_UpdateIndicatorVisibility" }, // 912011752
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25LamentConfigurationTeleportIndicator.h" },
		{ "ModuleRelativePath", "Public/K25LamentConfigurationTeleportIndicator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK25LamentConfigurationTeleportIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::ClassParams = {
		&AK25LamentConfigurationTeleportIndicator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK25LamentConfigurationTeleportIndicator, 1014468436);
	template<> THEK25_API UClass* StaticClass<AK25LamentConfigurationTeleportIndicator>()
	{
		return AK25LamentConfigurationTeleportIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK25LamentConfigurationTeleportIndicator(Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator, &AK25LamentConfigurationTeleportIndicator::StaticClass, TEXT("/Script/TheK25"), TEXT("AK25LamentConfigurationTeleportIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK25LamentConfigurationTeleportIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
