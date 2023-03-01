// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26CooldownInteractionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26CooldownInteractionDefinition() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26CooldownInteractionDefinition_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26CooldownInteractionDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	DEFINE_FUNCTION(UK26CooldownInteractionDefinition::execOnKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	void UK26CooldownInteractionDefinition::StaticRegisterNativesUK26CooldownInteractionDefinition()
	{
		UClass* Class = UK26CooldownInteractionDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnKillerSet", &UK26CooldownInteractionDefinition::execOnKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics
	{
		struct K26CooldownInteractionDefinition_eventOnKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26CooldownInteractionDefinition_eventOnKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26CooldownInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26CooldownInteractionDefinition, nullptr, "OnKillerSet", nullptr, nullptr, sizeof(K26CooldownInteractionDefinition_eventOnKillerSet_Parms), Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26CooldownInteractionDefinition_NoRegister()
	{
		return UK26CooldownInteractionDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cooldownTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26CooldownInteractionDefinition_OnKillerSet, "OnKillerSet" }, // 3365882406
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K26CooldownInteractionDefinition.h" },
		{ "ModuleRelativePath", "Public/K26CooldownInteractionDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::NewProp__cooldownTime_MetaData[] = {
		{ "Category", "K26CooldownInteractionDefinition" },
		{ "ModuleRelativePath", "Public/K26CooldownInteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::NewProp__cooldownTime = { "_cooldownTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26CooldownInteractionDefinition, _cooldownTime), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::NewProp__cooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::NewProp__cooldownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::NewProp__cooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26CooldownInteractionDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::ClassParams = {
		&UK26CooldownInteractionDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26CooldownInteractionDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26CooldownInteractionDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26CooldownInteractionDefinition, 2668445491);
	template<> THEK26_API UClass* StaticClass<UK26CooldownInteractionDefinition>()
	{
		return UK26CooldownInteractionDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26CooldownInteractionDefinition(Z_Construct_UClass_UK26CooldownInteractionDefinition, &UK26CooldownInteractionDefinition::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26CooldownInteractionDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26CooldownInteractionDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
