// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/Tormentor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentor() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentor_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTormentor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	FVector ITormentor::GetTormentTrailAttackSpawnPoint()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTormentTrailAttackSpawnPoint instead.");
		Tormentor_eventGetTormentTrailAttackSpawnPoint_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector ITormentor::GetTormentTrailSpawnPoint()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTormentTrailSpawnPoint instead.");
		Tormentor_eventGetTormentTrailSpawnPoint_Parms Parms;
		return Parms.ReturnValue;
	}
	void UTormentor::StaticRegisterNativesUTormentor()
	{
	}
	struct Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tormentor_eventGetTormentTrailAttackSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tormentor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentor, nullptr, "GetTormentTrailAttackSpawnPoint", nullptr, nullptr, sizeof(Tormentor_eventGetTormentTrailAttackSpawnPoint_Parms), Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tormentor_eventGetTormentTrailSpawnPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tormentor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTormentor, nullptr, "GetTormentTrailSpawnPoint", nullptr, nullptr, sizeof(Tormentor_eventGetTormentTrailSpawnPoint_Parms), Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTormentor_NoRegister()
	{
		return UTormentor::StaticClass();
	}
	struct Z_Construct_UClass_UTormentor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTormentor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTormentor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTormentor_GetTormentTrailAttackSpawnPoint, "GetTormentTrailAttackSpawnPoint" }, // 889495731
		{ &Z_Construct_UFunction_UTormentor_GetTormentTrailSpawnPoint, "GetTormentTrailSpawnPoint" }, // 2710126164
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTormentor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tormentor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTormentor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITormentor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTormentor_Statics::ClassParams = {
		&UTormentor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTormentor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTormentor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTormentor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTormentor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTormentor, 3914592618);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTormentor>()
	{
		return UTormentor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTormentor(Z_Construct_UClass_UTormentor, &UTormentor::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTormentor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTormentor);
	static FName NAME_UTormentor_GetTormentTrailAttackSpawnPoint = FName(TEXT("GetTormentTrailAttackSpawnPoint"));
	FVector ITormentor::Execute_GetTormentTrailAttackSpawnPoint(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTormentor::StaticClass()));
		Tormentor_eventGetTormentTrailAttackSpawnPoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTormentor_GetTormentTrailAttackSpawnPoint);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTormentor_GetTormentTrailSpawnPoint = FName(TEXT("GetTormentTrailSpawnPoint"));
	FVector ITormentor::Execute_GetTormentTrailSpawnPoint(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTormentor::StaticClass()));
		Tormentor_eventGetTormentTrailSpawnPoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTormentor_GetTormentTrailSpawnPoint);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
