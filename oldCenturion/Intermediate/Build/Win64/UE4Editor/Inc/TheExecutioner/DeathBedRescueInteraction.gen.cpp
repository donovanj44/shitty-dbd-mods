// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/DeathBedRescueInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathBedRescueInteraction() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UDeathBedRescueInteraction_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UDeathBedRescueInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UDeathBedRescueInteraction::execGetRescuerSnapPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRescuerSnapPosition();
		P_NATIVE_END;
	}
	void UDeathBedRescueInteraction::StaticRegisterNativesUDeathBedRescueInteraction()
	{
		UClass* Class = UDeathBedRescueInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRescuerSnapPosition", &UDeathBedRescueInteraction::execGetRescuerSnapPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics
	{
		struct DeathBedRescueInteraction_eventGetRescuerSnapPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeathBedRescueInteraction_eventGetRescuerSnapPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedRescueInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathBedRescueInteraction, nullptr, "GetRescuerSnapPosition", nullptr, nullptr, sizeof(DeathBedRescueInteraction_eventGetRescuerSnapPosition_Parms), Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeathBedRescueInteraction_NoRegister()
	{
		return UDeathBedRescueInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDeathBedRescueInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__loudNoiseRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathBedRescueInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeathBedRescueInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeathBedRescueInteraction_GetRescuerSnapPosition, "GetRescuerSnapPosition" }, // 310997942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathBedRescueInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DeathBedRescueInteraction.h" },
		{ "ModuleRelativePath", "Public/DeathBedRescueInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathBedRescueInteraction_Statics::NewProp__loudNoiseRange_MetaData[] = {
		{ "Category", "DeathBedRescueInteraction" },
		{ "ModuleRelativePath", "Public/DeathBedRescueInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeathBedRescueInteraction_Statics::NewProp__loudNoiseRange = { "_loudNoiseRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathBedRescueInteraction, _loudNoiseRange), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UDeathBedRescueInteraction_Statics::NewProp__loudNoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathBedRescueInteraction_Statics::NewProp__loudNoiseRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeathBedRescueInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathBedRescueInteraction_Statics::NewProp__loudNoiseRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathBedRescueInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathBedRescueInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeathBedRescueInteraction_Statics::ClassParams = {
		&UDeathBedRescueInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeathBedRescueInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeathBedRescueInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathBedRescueInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathBedRescueInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathBedRescueInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeathBedRescueInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeathBedRescueInteraction, 1815226316);
	template<> THEEXECUTIONER_API UClass* StaticClass<UDeathBedRescueInteraction>()
	{
		return UDeathBedRescueInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeathBedRescueInteraction(Z_Construct_UClass_UDeathBedRescueInteraction, &UDeathBedRescueInteraction::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UDeathBedRescueInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathBedRescueInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
