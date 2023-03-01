// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/GeneratorRepairInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratorRepairInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGeneratorRepairInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UGeneratorRepairInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UGeneratorRepairInteraction::execGetOwningGenerator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGenerator**)Z_Param__Result=P_THIS->GetOwningGenerator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneratorRepairInteraction::execSetIsObstructed)
	{
		P_GET_UBOOL(Z_Param_obstructed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsObstructed(Z_Param_obstructed);
		P_NATIVE_END;
	}
	void UGeneratorRepairInteraction::StaticRegisterNativesUGeneratorRepairInteraction()
	{
		UClass* Class = UGeneratorRepairInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningGenerator", &UGeneratorRepairInteraction::execGetOwningGenerator },
			{ "SetIsObstructed", &UGeneratorRepairInteraction::execSetIsObstructed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics
	{
		struct GeneratorRepairInteraction_eventGetOwningGenerator_Parms
		{
			AGenerator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeneratorRepairInteraction_eventGetOwningGenerator_Parms, ReturnValue), Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorRepairInteraction, nullptr, "GetOwningGenerator", nullptr, nullptr, sizeof(GeneratorRepairInteraction_eventGetOwningGenerator_Parms), Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics
	{
		struct GeneratorRepairInteraction_eventSetIsObstructed_Parms
		{
			bool obstructed;
		};
		static void NewProp_obstructed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_obstructed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::NewProp_obstructed_SetBit(void* Obj)
	{
		((GeneratorRepairInteraction_eventSetIsObstructed_Parms*)Obj)->obstructed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::NewProp_obstructed = { "obstructed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GeneratorRepairInteraction_eventSetIsObstructed_Parms), &Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::NewProp_obstructed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::NewProp_obstructed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneratorRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneratorRepairInteraction, nullptr, "SetIsObstructed", nullptr, nullptr, sizeof(GeneratorRepairInteraction_eventSetIsObstructed_Parms), Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGeneratorRepairInteraction_NoRegister()
	{
		return UGeneratorRepairInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratorRepairInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__penaltyPerRepairPlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__penaltyPerRepairPlayerCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratorRepairInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneratorRepairInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneratorRepairInteraction_GetOwningGenerator, "GetOwningGenerator" }, // 2589203622
		{ &Z_Construct_UFunction_UGeneratorRepairInteraction_SetIsObstructed, "SetIsObstructed" }, // 180023037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorRepairInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GeneratorRepairInteraction.h" },
		{ "ModuleRelativePath", "Public/GeneratorRepairInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratorRepairInteraction_Statics::NewProp__penaltyPerRepairPlayerCount_MetaData[] = {
		{ "Category", "GeneratorRepairInteraction" },
		{ "ModuleRelativePath", "Public/GeneratorRepairInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneratorRepairInteraction_Statics::NewProp__penaltyPerRepairPlayerCount = { "_penaltyPerRepairPlayerCount", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_penaltyPerRepairPlayerCount, UGeneratorRepairInteraction), STRUCT_OFFSET(UGeneratorRepairInteraction, _penaltyPerRepairPlayerCount), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UGeneratorRepairInteraction_Statics::NewProp__penaltyPerRepairPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorRepairInteraction_Statics::NewProp__penaltyPerRepairPlayerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneratorRepairInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneratorRepairInteraction_Statics::NewProp__penaltyPerRepairPlayerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratorRepairInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratorRepairInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGeneratorRepairInteraction_Statics::ClassParams = {
		&UGeneratorRepairInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeneratorRepairInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorRepairInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneratorRepairInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratorRepairInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratorRepairInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGeneratorRepairInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGeneratorRepairInteraction, 755681109);
	template<> DBDINTERACTION_API UClass* StaticClass<UGeneratorRepairInteraction>()
	{
		return UGeneratorRepairInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGeneratorRepairInteraction(Z_Construct_UClass_UGeneratorRepairInteraction, &UGeneratorRepairInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UGeneratorRepairInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratorRepairInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
