// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halloween2020/Public/BlightedSerumCollisionInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightedSerumCollisionInteraction() {}
// Cross Module References
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumCollisionInteraction_NoRegister();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumCollisionInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_Halloween2020();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_UBlightedSerumCooldownInteraction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBlightedSerumCollisionInteraction::execSetCooldownInteraction)
	{
		P_GET_OBJECT(UBlightedSerumCooldownInteraction,Z_Param_cooldownInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCooldownInteraction(Z_Param_cooldownInteraction);
		P_NATIVE_END;
	}
	void UBlightedSerumCollisionInteraction::StaticRegisterNativesUBlightedSerumCollisionInteraction()
	{
		UClass* Class = UBlightedSerumCollisionInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCooldownInteraction", &UBlightedSerumCollisionInteraction::execSetCooldownInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics
	{
		struct BlightedSerumCollisionInteraction_eventSetCooldownInteraction_Parms
		{
			UBlightedSerumCooldownInteraction* cooldownInteraction;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cooldownInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction = { "cooldownInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightedSerumCollisionInteraction_eventSetCooldownInteraction_Parms, cooldownInteraction), Z_Construct_UClass_UBlightedSerumCooldownInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::NewProp_cooldownInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightedSerumCollisionInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlightedSerumCollisionInteraction, nullptr, "SetCooldownInteraction", nullptr, nullptr, sizeof(BlightedSerumCollisionInteraction_eventSetCooldownInteraction_Parms), Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlightedSerumCollisionInteraction_NoRegister()
	{
		return UBlightedSerumCollisionInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bounceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__bounceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cooldownInteraction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_Halloween2020,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlightedSerumCollisionInteraction_SetCooldownInteraction, "SetCooldownInteraction" }, // 3924485761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BlightedSerumCollisionInteraction.h" },
		{ "ModuleRelativePath", "Public/BlightedSerumCollisionInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__bounceTime_MetaData[] = {
		{ "Category", "BlightedSerumCollisionInteraction" },
		{ "ModuleRelativePath", "Public/BlightedSerumCollisionInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__bounceTime = { "_bounceTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumCollisionInteraction, _bounceTime), METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__bounceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__bounceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__cooldownInteraction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightedSerumCollisionInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__cooldownInteraction = { "_cooldownInteraction", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlightedSerumCollisionInteraction, _cooldownInteraction), Z_Construct_UClass_UBlightedSerumCooldownInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__cooldownInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__cooldownInteraction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__bounceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::NewProp__cooldownInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightedSerumCollisionInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::ClassParams = {
		&UBlightedSerumCollisionInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightedSerumCollisionInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightedSerumCollisionInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightedSerumCollisionInteraction, 2454454308);
	template<> HALLOWEEN2020_API UClass* StaticClass<UBlightedSerumCollisionInteraction>()
	{
		return UBlightedSerumCollisionInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightedSerumCollisionInteraction(Z_Construct_UClass_UBlightedSerumCollisionInteraction, &UBlightedSerumCollisionInteraction::StaticClass, TEXT("/Script/Halloween2020"), TEXT("UBlightedSerumCollisionInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightedSerumCollisionInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
