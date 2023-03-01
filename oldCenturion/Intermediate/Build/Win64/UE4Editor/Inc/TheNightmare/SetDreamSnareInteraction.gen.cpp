// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/SetDreamSnareInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetDreamSnareInteraction() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_USetDreamSnareInteraction_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_USetDreamSnareInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
// End Cross Module References
	DEFINE_FUNCTION(USetDreamSnareInteraction::execGetTrapDistanceFromControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTrapDistanceFromControlRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetDreamSnareInteraction::execHasCancelledDreamSnare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCancelledDreamSnare();
		P_NATIVE_END;
	}
	void USetDreamSnareInteraction::StaticRegisterNativesUSetDreamSnareInteraction()
	{
		UClass* Class = USetDreamSnareInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrapDistanceFromControlRotation", &USetDreamSnareInteraction::execGetTrapDistanceFromControlRotation },
			{ "HasCancelledDreamSnare", &USetDreamSnareInteraction::execHasCancelledDreamSnare },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics
	{
		struct SetDreamSnareInteraction_eventGetTrapDistanceFromControlRotation_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetDreamSnareInteraction_eventGetTrapDistanceFromControlRotation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SetDreamSnareInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetDreamSnareInteraction, nullptr, "GetTrapDistanceFromControlRotation", nullptr, nullptr, sizeof(SetDreamSnareInteraction_eventGetTrapDistanceFromControlRotation_Parms), Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics
	{
		struct SetDreamSnareInteraction_eventHasCancelledDreamSnare_Parms
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
	void Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SetDreamSnareInteraction_eventHasCancelledDreamSnare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SetDreamSnareInteraction_eventHasCancelledDreamSnare_Parms), &Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SetDreamSnareInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetDreamSnareInteraction, nullptr, "HasCancelledDreamSnare", nullptr, nullptr, sizeof(SetDreamSnareInteraction_eventHasCancelledDreamSnare_Parms), Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USetDreamSnareInteraction_NoRegister()
	{
		return USetDreamSnareInteraction::StaticClass();
	}
	struct Z_Construct_UClass_USetDreamSnareInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlacementDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlacementDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlacementDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPlacementDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetDreamSnareInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USetDreamSnareInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USetDreamSnareInteraction_GetTrapDistanceFromControlRotation, "GetTrapDistanceFromControlRotation" }, // 2425712980
		{ &Z_Construct_UFunction_USetDreamSnareInteraction_HasCancelledDreamSnare, "HasCancelledDreamSnare" }, // 1718759166
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetDreamSnareInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SetDreamSnareInteraction.h" },
		{ "ModuleRelativePath", "Public/SetDreamSnareInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MaxPlacementDistance_MetaData[] = {
		{ "Category", "SetDreamSnareInteraction" },
		{ "ModuleRelativePath", "Public/SetDreamSnareInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MaxPlacementDistance = { "MaxPlacementDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetDreamSnareInteraction, MaxPlacementDistance), METADATA_PARAMS(Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MaxPlacementDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MaxPlacementDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPlacementDistance_MetaData[] = {
		{ "Category", "SetDreamSnareInteraction" },
		{ "ModuleRelativePath", "Public/SetDreamSnareInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPlacementDistance = { "MinPlacementDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetDreamSnareInteraction, MinPlacementDistance), METADATA_PARAMS(Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPlacementDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPlacementDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPitch_MetaData[] = {
		{ "Category", "SetDreamSnareInteraction" },
		{ "ModuleRelativePath", "Public/SetDreamSnareInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetDreamSnareInteraction, MinPitch), METADATA_PARAMS(Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetDreamSnareInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MaxPlacementDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPlacementDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetDreamSnareInteraction_Statics::NewProp_MinPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetDreamSnareInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetDreamSnareInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetDreamSnareInteraction_Statics::ClassParams = {
		&USetDreamSnareInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USetDreamSnareInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USetDreamSnareInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USetDreamSnareInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetDreamSnareInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetDreamSnareInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetDreamSnareInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetDreamSnareInteraction, 1436540113);
	template<> THENIGHTMARE_API UClass* StaticClass<USetDreamSnareInteraction>()
	{
		return USetDreamSnareInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetDreamSnareInteraction(Z_Construct_UClass_USetDreamSnareInteraction, &USetDreamSnareInteraction::StaticClass, TEXT("/Script/TheNightmare"), TEXT("USetDreamSnareInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetDreamSnareInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
