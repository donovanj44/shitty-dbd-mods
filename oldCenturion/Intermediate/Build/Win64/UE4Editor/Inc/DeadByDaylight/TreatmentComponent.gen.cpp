// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TreatmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreatmentComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTreatmentComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTreatmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UTreatmentComponent::execIsInTreatmentMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTreatmentMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTreatmentComponent::execSetIsInTreatmentMode)
	{
		P_GET_UBOOL(Z_Param_treatmentMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInTreatmentMode(Z_Param_treatmentMode);
		P_NATIVE_END;
	}
	void UTreatmentComponent::StaticRegisterNativesUTreatmentComponent()
	{
		UClass* Class = UTreatmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInTreatmentMode", &UTreatmentComponent::execIsInTreatmentMode },
			{ "SetIsInTreatmentMode", &UTreatmentComponent::execSetIsInTreatmentMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics
	{
		struct TreatmentComponent_eventIsInTreatmentMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TreatmentComponent_eventIsInTreatmentMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TreatmentComponent_eventIsInTreatmentMode_Parms), &Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TreatmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreatmentComponent, nullptr, "IsInTreatmentMode", nullptr, nullptr, sizeof(TreatmentComponent_eventIsInTreatmentMode_Parms), Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics
	{
		struct TreatmentComponent_eventSetIsInTreatmentMode_Parms
		{
			bool treatmentMode;
		};
		static void NewProp_treatmentMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_treatmentMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::NewProp_treatmentMode_SetBit(void* Obj)
	{
		((TreatmentComponent_eventSetIsInTreatmentMode_Parms*)Obj)->treatmentMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::NewProp_treatmentMode = { "treatmentMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TreatmentComponent_eventSetIsInTreatmentMode_Parms), &Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::NewProp_treatmentMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::NewProp_treatmentMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TreatmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTreatmentComponent, nullptr, "SetIsInTreatmentMode", nullptr, nullptr, sizeof(TreatmentComponent_eventSetIsInTreatmentMode_Parms), Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTreatmentComponent_NoRegister()
	{
		return UTreatmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTreatmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTreatmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTreatmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTreatmentComponent_IsInTreatmentMode, "IsInTreatmentMode" }, // 2966797696
		{ &Z_Construct_UFunction_UTreatmentComponent_SetIsInTreatmentMode, "SetIsInTreatmentMode" }, // 121559692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTreatmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TreatmentComponent.h" },
		{ "ModuleRelativePath", "Public/TreatmentComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTreatmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreatmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTreatmentComponent_Statics::ClassParams = {
		&UTreatmentComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTreatmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTreatmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTreatmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTreatmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTreatmentComponent, 1122818474);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTreatmentComponent>()
	{
		return UTreatmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTreatmentComponent(Z_Construct_UClass_UTreatmentComponent, &UTreatmentComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTreatmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTreatmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
