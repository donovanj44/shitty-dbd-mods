// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/HillbillyOverheatPresentationItemProgressComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHillbillyOverheatPresentationItemProgressComponent() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationItemProgressComponent();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UHillbillyChainsawOverheatComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHillbillyOverheatPresentationItemProgressComponent::execSetHillbillyChainsawOverheatComponent)
	{
		P_GET_OBJECT(UHillbillyChainsawOverheatComponent,Z_Param_hillbillyChainsawOverheatComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHillbillyChainsawOverheatComponent(Z_Param_hillbillyChainsawOverheatComponent);
		P_NATIVE_END;
	}
	void UHillbillyOverheatPresentationItemProgressComponent::StaticRegisterNativesUHillbillyOverheatPresentationItemProgressComponent()
	{
		UClass* Class = UHillbillyOverheatPresentationItemProgressComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHillbillyChainsawOverheatComponent", &UHillbillyOverheatPresentationItemProgressComponent::execSetHillbillyChainsawOverheatComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics
	{
		struct HillbillyOverheatPresentationItemProgressComponent_eventSetHillbillyChainsawOverheatComponent_Parms
		{
			UHillbillyChainsawOverheatComponent* hillbillyChainsawOverheatComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hillbillyChainsawOverheatComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hillbillyChainsawOverheatComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::NewProp_hillbillyChainsawOverheatComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::NewProp_hillbillyChainsawOverheatComponent = { "hillbillyChainsawOverheatComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HillbillyOverheatPresentationItemProgressComponent_eventSetHillbillyChainsawOverheatComponent_Parms, hillbillyChainsawOverheatComponent), Z_Construct_UClass_UHillbillyChainsawOverheatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::NewProp_hillbillyChainsawOverheatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::NewProp_hillbillyChainsawOverheatComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::NewProp_hillbillyChainsawOverheatComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HillbillyOverheatPresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent, nullptr, "SetHillbillyChainsawOverheatComponent", nullptr, nullptr, sizeof(HillbillyOverheatPresentationItemProgressComponent_eventSetHillbillyChainsawOverheatComponent_Parms), Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_NoRegister()
	{
		return UHillbillyOverheatPresentationItemProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hillbillyChainsawOverheatComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hillbillyChainsawOverheatComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationItemProgressComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHillbillyOverheatPresentationItemProgressComponent_SetHillbillyChainsawOverheatComponent, "SetHillbillyChainsawOverheatComponent" }, // 826664094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HillbillyOverheatPresentationItemProgressComponent.h" },
		{ "ModuleRelativePath", "Public/HillbillyOverheatPresentationItemProgressComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::NewProp__hillbillyChainsawOverheatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HillbillyOverheatPresentationItemProgressComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HillbillyOverheatPresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::NewProp__hillbillyChainsawOverheatComponent = { "_hillbillyChainsawOverheatComponent", nullptr, (EPropertyFlags)0x004000000008200c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHillbillyOverheatPresentationItemProgressComponent, _hillbillyChainsawOverheatComponent), Z_Construct_UClass_UHillbillyChainsawOverheatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::NewProp__hillbillyChainsawOverheatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::NewProp__hillbillyChainsawOverheatComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::NewProp__hillbillyChainsawOverheatComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHillbillyOverheatPresentationItemProgressComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::ClassParams = {
		&UHillbillyOverheatPresentationItemProgressComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHillbillyOverheatPresentationItemProgressComponent, 224901887);
	template<> THEHILLBILLY_API UClass* StaticClass<UHillbillyOverheatPresentationItemProgressComponent>()
	{
		return UHillbillyOverheatPresentationItemProgressComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHillbillyOverheatPresentationItemProgressComponent(Z_Construct_UClass_UHillbillyOverheatPresentationItemProgressComponent, &UHillbillyOverheatPresentationItemProgressComponent::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UHillbillyOverheatPresentationItemProgressComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHillbillyOverheatPresentationItemProgressComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
