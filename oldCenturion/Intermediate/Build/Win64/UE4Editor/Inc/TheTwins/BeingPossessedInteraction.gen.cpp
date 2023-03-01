// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/BeingPossessedInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeingPossessedInteraction() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UBeingPossessedInteraction_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UBeingPossessedInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UBeingPossessedInteraction::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UBeingPossessedInteraction::StaticRegisterNativesUBeingPossessedInteraction()
	{
		UClass* Class = UBeingPossessedInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UBeingPossessedInteraction::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeingPossessedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeingPossessedInteraction, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBeingPossessedInteraction_NoRegister()
	{
		return UBeingPossessedInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UBeingPossessedInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__beingPossessedMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__beingPossessedMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBeingPossessedInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBeingPossessedInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBeingPossessedInteraction_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 42532607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeingPossessedInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BeingPossessedInteraction.h" },
		{ "ModuleRelativePath", "Public/BeingPossessedInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeingPossessedInteraction_Statics::NewProp__beingPossessedMaxCharge_MetaData[] = {
		{ "Category", "BeingPossessedInteraction" },
		{ "ModuleRelativePath", "Public/BeingPossessedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBeingPossessedInteraction_Statics::NewProp__beingPossessedMaxCharge = { "_beingPossessedMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBeingPossessedInteraction, _beingPossessedMaxCharge), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UBeingPossessedInteraction_Statics::NewProp__beingPossessedMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBeingPossessedInteraction_Statics::NewProp__beingPossessedMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBeingPossessedInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBeingPossessedInteraction_Statics::NewProp__beingPossessedMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBeingPossessedInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBeingPossessedInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBeingPossessedInteraction_Statics::ClassParams = {
		&UBeingPossessedInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBeingPossessedInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBeingPossessedInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBeingPossessedInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBeingPossessedInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBeingPossessedInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBeingPossessedInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBeingPossessedInteraction, 2917874862);
	template<> THETWINS_API UClass* StaticClass<UBeingPossessedInteraction>()
	{
		return UBeingPossessedInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBeingPossessedInteraction(Z_Construct_UClass_UBeingPossessedInteraction, &UBeingPossessedInteraction::StaticClass, TEXT("/Script/TheTwins"), TEXT("UBeingPossessedInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBeingPossessedInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
