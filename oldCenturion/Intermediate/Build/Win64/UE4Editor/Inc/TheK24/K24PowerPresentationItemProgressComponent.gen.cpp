// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/K24PowerPresentationItemProgressComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK24PowerPresentationItemProgressComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UK24PowerPresentationItemProgressComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPresentationItemProgressComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UClass* Z_Construct_UClass_AK24Power_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK24PowerPresentationItemProgressComponent::execSetK24Power)
	{
		P_GET_OBJECT(AK24Power,Z_Param_k24Power);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetK24Power(Z_Param_k24Power);
		P_NATIVE_END;
	}
	void UK24PowerPresentationItemProgressComponent::StaticRegisterNativesUK24PowerPresentationItemProgressComponent()
	{
		UClass* Class = UK24PowerPresentationItemProgressComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetK24Power", &UK24PowerPresentationItemProgressComponent::execSetK24Power },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics
	{
		struct K24PowerPresentationItemProgressComponent_eventSetK24Power_Parms
		{
			AK24Power* k24Power;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_k24Power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::NewProp_k24Power = { "k24Power", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K24PowerPresentationItemProgressComponent_eventSetK24Power_Parms, k24Power), Z_Construct_UClass_AK24Power_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::NewProp_k24Power,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K24PowerPresentationItemProgressComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK24PowerPresentationItemProgressComponent, nullptr, "SetK24Power", nullptr, nullptr, sizeof(K24PowerPresentationItemProgressComponent_eventSetK24Power_Parms), Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_NoRegister()
	{
		return UK24PowerPresentationItemProgressComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresentationItemProgressComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK24PowerPresentationItemProgressComponent_SetK24Power, "SetK24Power" }, // 2610854396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K24PowerPresentationItemProgressComponent.h" },
		{ "ModuleRelativePath", "Public/K24PowerPresentationItemProgressComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK24PowerPresentationItemProgressComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::ClassParams = {
		&UK24PowerPresentationItemProgressComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK24PowerPresentationItemProgressComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK24PowerPresentationItemProgressComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK24PowerPresentationItemProgressComponent, 1540624654);
	template<> THEK24_API UClass* StaticClass<UK24PowerPresentationItemProgressComponent>()
	{
		return UK24PowerPresentationItemProgressComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK24PowerPresentationItemProgressComponent(Z_Construct_UClass_UK24PowerPresentationItemProgressComponent, &UK24PowerPresentationItemProgressComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("UK24PowerPresentationItemProgressComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK24PowerPresentationItemProgressComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
