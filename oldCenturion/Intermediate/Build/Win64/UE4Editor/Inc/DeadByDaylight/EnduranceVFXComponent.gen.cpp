// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EnduranceVFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnduranceVFXComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEnduranceVFXComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEnduranceVFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEnduranceVFXComponent::execAuthority_ShowHighlight)
	{
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_preventKOSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ShowHighlight(Z_Param_preventKOSource);
		P_NATIVE_END;
	}
	void UEnduranceVFXComponent::StaticRegisterNativesUEnduranceVFXComponent()
	{
		UClass* Class = UEnduranceVFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_ShowHighlight", &UEnduranceVFXComponent::execAuthority_ShowHighlight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics
	{
		struct EnduranceVFXComponent_eventAuthority_ShowHighlight_Parms
		{
			UGameplayModifierContainer* preventKOSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preventKOSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_preventKOSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::NewProp_preventKOSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::NewProp_preventKOSource = { "preventKOSource", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EnduranceVFXComponent_eventAuthority_ShowHighlight_Parms, preventKOSource), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::NewProp_preventKOSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::NewProp_preventKOSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::NewProp_preventKOSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnduranceVFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnduranceVFXComponent, nullptr, "Authority_ShowHighlight", nullptr, nullptr, sizeof(EnduranceVFXComponent_eventAuthority_ShowHighlight_Parms), Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnduranceVFXComponent_NoRegister()
	{
		return UEnduranceVFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEnduranceVFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnduranceVFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnduranceVFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnduranceVFXComponent_Authority_ShowHighlight, "Authority_ShowHighlight" }, // 2871376653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnduranceVFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnduranceVFXComponent.h" },
		{ "ModuleRelativePath", "Public/EnduranceVFXComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnduranceVFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnduranceVFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnduranceVFXComponent_Statics::ClassParams = {
		&UEnduranceVFXComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnduranceVFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnduranceVFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnduranceVFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnduranceVFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnduranceVFXComponent, 1366783565);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEnduranceVFXComponent>()
	{
		return UEnduranceVFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnduranceVFXComponent(Z_Construct_UClass_UEnduranceVFXComponent, &UEnduranceVFXComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEnduranceVFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnduranceVFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
