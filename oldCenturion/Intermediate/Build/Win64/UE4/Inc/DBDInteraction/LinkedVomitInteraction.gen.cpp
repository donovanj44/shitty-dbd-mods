// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/LinkedVomitInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinkedVomitInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_ULinkedVomitInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_ULinkedVomitInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVomitStateComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULinkedVomitInteraction::execGetVomitStateComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVomitStateComponent**)Z_Param__Result=P_THIS->GetVomitStateComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinkedVomitInteraction::execIsChargeComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChargeComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULinkedVomitInteraction::execIsVomiting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVomiting();
		P_NATIVE_END;
	}
	void ULinkedVomitInteraction::StaticRegisterNativesULinkedVomitInteraction()
	{
		UClass* Class = ULinkedVomitInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVomitStateComponent", &ULinkedVomitInteraction::execGetVomitStateComponent },
			{ "IsChargeComplete", &ULinkedVomitInteraction::execIsChargeComplete },
			{ "IsVomiting", &ULinkedVomitInteraction::execIsVomiting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics
	{
		struct LinkedVomitInteraction_eventGetVomitStateComponent_Parms
		{
			UVomitStateComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LinkedVomitInteraction_eventGetVomitStateComponent_Parms, ReturnValue), Z_Construct_UClass_UVomitStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LinkedVomitInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinkedVomitInteraction, nullptr, "GetVomitStateComponent", nullptr, nullptr, sizeof(LinkedVomitInteraction_eventGetVomitStateComponent_Parms), Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics
	{
		struct LinkedVomitInteraction_eventIsChargeComplete_Parms
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
	void Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LinkedVomitInteraction_eventIsChargeComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LinkedVomitInteraction_eventIsChargeComplete_Parms), &Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LinkedVomitInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinkedVomitInteraction, nullptr, "IsChargeComplete", nullptr, nullptr, sizeof(LinkedVomitInteraction_eventIsChargeComplete_Parms), Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics
	{
		struct LinkedVomitInteraction_eventIsVomiting_Parms
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
	void Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LinkedVomitInteraction_eventIsVomiting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LinkedVomitInteraction_eventIsVomiting_Parms), &Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LinkedVomitInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULinkedVomitInteraction, nullptr, "IsVomiting", nullptr, nullptr, sizeof(LinkedVomitInteraction_eventIsVomiting_Parms), Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULinkedVomitInteraction_NoRegister()
	{
		return ULinkedVomitInteraction::StaticClass();
	}
	struct Z_Construct_UClass_ULinkedVomitInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeComplete_MetaData[];
#endif
		static void NewProp__chargeComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__chargeComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinkedVomitInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULinkedVomitInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULinkedVomitInteraction_GetVomitStateComponent, "GetVomitStateComponent" }, // 848415842
		{ &Z_Construct_UFunction_ULinkedVomitInteraction_IsChargeComplete, "IsChargeComplete" }, // 1843285382
		{ &Z_Construct_UFunction_ULinkedVomitInteraction_IsVomiting, "IsVomiting" }, // 940577583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinkedVomitInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LinkedVomitInteraction.h" },
		{ "ModuleRelativePath", "Public/LinkedVomitInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinkedVomitInteraction_Statics::NewProp__chargeComplete_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LinkedVomitInteraction" },
		{ "ModuleRelativePath", "Public/LinkedVomitInteraction.h" },
	};
#endif
	void Z_Construct_UClass_ULinkedVomitInteraction_Statics::NewProp__chargeComplete_SetBit(void* Obj)
	{
		((ULinkedVomitInteraction*)Obj)->_chargeComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULinkedVomitInteraction_Statics::NewProp__chargeComplete = { "_chargeComplete", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULinkedVomitInteraction), &Z_Construct_UClass_ULinkedVomitInteraction_Statics::NewProp__chargeComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULinkedVomitInteraction_Statics::NewProp__chargeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinkedVomitInteraction_Statics::NewProp__chargeComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinkedVomitInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinkedVomitInteraction_Statics::NewProp__chargeComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinkedVomitInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinkedVomitInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULinkedVomitInteraction_Statics::ClassParams = {
		&ULinkedVomitInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULinkedVomitInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULinkedVomitInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULinkedVomitInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinkedVomitInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinkedVomitInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULinkedVomitInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULinkedVomitInteraction, 212730560);
	template<> DBDINTERACTION_API UClass* StaticClass<ULinkedVomitInteraction>()
	{
		return ULinkedVomitInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinkedVomitInteraction(Z_Construct_UClass_ULinkedVomitInteraction, &ULinkedVomitInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("ULinkedVomitInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinkedVomitInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
