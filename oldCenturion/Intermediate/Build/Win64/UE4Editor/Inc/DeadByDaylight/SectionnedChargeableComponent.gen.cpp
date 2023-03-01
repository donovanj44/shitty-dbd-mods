// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SectionnedChargeableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSectionnedChargeableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USectionnedChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USectionnedChargeableComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(USectionnedChargeableComponent::execGetSectionChargeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSectionChargeRemaining();
		P_NATIVE_END;
	}
	void USectionnedChargeableComponent::StaticRegisterNativesUSectionnedChargeableComponent()
	{
		UClass* Class = USectionnedChargeableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSectionChargeRemaining", &USectionnedChargeableComponent::execGetSectionChargeRemaining },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics
	{
		struct SectionnedChargeableComponent_eventGetSectionChargeRemaining_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SectionnedChargeableComponent_eventGetSectionChargeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SectionnedChargeableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USectionnedChargeableComponent, nullptr, "GetSectionChargeRemaining", nullptr, nullptr, sizeof(SectionnedChargeableComponent_eventGetSectionChargeRemaining_Parms), Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USectionnedChargeableComponent_NoRegister()
	{
		return USectionnedChargeableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USectionnedChargeableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__sections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USectionnedChargeableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USectionnedChargeableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USectionnedChargeableComponent_GetSectionChargeRemaining, "GetSectionChargeRemaining" }, // 24840451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USectionnedChargeableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SectionnedChargeableComponent.h" },
		{ "ModuleRelativePath", "Public/SectionnedChargeableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USectionnedChargeableComponent_Statics::NewProp__sections_MetaData[] = {
		{ "Category", "SectionnedChargeableComponent" },
		{ "ModuleRelativePath", "Public/SectionnedChargeableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USectionnedChargeableComponent_Statics::NewProp__sections = { "_sections", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USectionnedChargeableComponent, _sections), nullptr, METADATA_PARAMS(Z_Construct_UClass_USectionnedChargeableComponent_Statics::NewProp__sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USectionnedChargeableComponent_Statics::NewProp__sections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USectionnedChargeableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USectionnedChargeableComponent_Statics::NewProp__sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USectionnedChargeableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USectionnedChargeableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USectionnedChargeableComponent_Statics::ClassParams = {
		&USectionnedChargeableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USectionnedChargeableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USectionnedChargeableComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USectionnedChargeableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USectionnedChargeableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USectionnedChargeableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USectionnedChargeableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USectionnedChargeableComponent, 2517138104);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USectionnedChargeableComponent>()
	{
		return USectionnedChargeableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USectionnedChargeableComponent(Z_Construct_UClass_USectionnedChargeableComponent, &USectionnedChargeableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USectionnedChargeableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USectionnedChargeableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
