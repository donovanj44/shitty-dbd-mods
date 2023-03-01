// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26PowerChargePresentationPowerFadeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26PowerChargePresentationPowerFadeComponent() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationPowerFadeComponent();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	THEK26_API UClass* Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK26PowerChargePresentationPowerFadeComponent::execSetDependencies)
	{
		P_GET_OBJECT(UK26AmmoHandlerComponent,Z_Param_ammoHandler);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDependencies(Z_Param_ammoHandler);
		P_NATIVE_END;
	}
	void UK26PowerChargePresentationPowerFadeComponent::StaticRegisterNativesUK26PowerChargePresentationPowerFadeComponent()
	{
		UClass* Class = UK26PowerChargePresentationPowerFadeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDependencies", &UK26PowerChargePresentationPowerFadeComponent::execSetDependencies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics
	{
		struct K26PowerChargePresentationPowerFadeComponent_eventSetDependencies_Parms
		{
			UK26AmmoHandlerComponent* ammoHandler;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ammoHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::NewProp_ammoHandler_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::NewProp_ammoHandler = { "ammoHandler", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PowerChargePresentationPowerFadeComponent_eventSetDependencies_Parms, ammoHandler), Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::NewProp_ammoHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::NewProp_ammoHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::NewProp_ammoHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerChargePresentationPowerFadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent, nullptr, "SetDependencies", nullptr, nullptr, sizeof(K26PowerChargePresentationPowerFadeComponent_eventSetDependencies_Parms), Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_NoRegister()
	{
		return UK26PowerChargePresentationPowerFadeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ammoHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ammoHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationPowerFadeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26PowerChargePresentationPowerFadeComponent_SetDependencies, "SetDependencies" }, // 3310357832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K26PowerChargePresentationPowerFadeComponent.h" },
		{ "ModuleRelativePath", "Public/K26PowerChargePresentationPowerFadeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::NewProp__ammoHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PowerChargePresentationPowerFadeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::NewProp__ammoHandler = { "_ammoHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerChargePresentationPowerFadeComponent, _ammoHandler), Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::NewProp__ammoHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::NewProp__ammoHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::NewProp__ammoHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26PowerChargePresentationPowerFadeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::ClassParams = {
		&UK26PowerChargePresentationPowerFadeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26PowerChargePresentationPowerFadeComponent, 342369837);
	template<> THEK26_API UClass* StaticClass<UK26PowerChargePresentationPowerFadeComponent>()
	{
		return UK26PowerChargePresentationPowerFadeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26PowerChargePresentationPowerFadeComponent(Z_Construct_UClass_UK26PowerChargePresentationPowerFadeComponent, &UK26PowerChargePresentationPowerFadeComponent::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26PowerChargePresentationPowerFadeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26PowerChargePresentationPowerFadeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
