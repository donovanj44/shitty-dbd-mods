// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/KnifeRack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKnifeRack() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_AKnifeRack_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_AKnifeRack();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	static FName NAME_AKnifeRack_OnReloadEnded = FName(TEXT("OnReloadEnded"));
	void AKnifeRack::OnReloadEnded(ADBDPlayer* player)
	{
		KnifeRack_eventOnReloadEnded_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_AKnifeRack_OnReloadEnded),&Parms);
	}
	static FName NAME_AKnifeRack_OnReloadMontageStarted = FName(TEXT("OnReloadMontageStarted"));
	void AKnifeRack::OnReloadMontageStarted(float actionSpeedMultiplier, ADBDPlayer* player)
	{
		KnifeRack_eventOnReloadMontageStarted_Parms Parms;
		Parms.actionSpeedMultiplier=actionSpeedMultiplier;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_AKnifeRack_OnReloadMontageStarted),&Parms);
	}
	void AKnifeRack::StaticRegisterNativesAKnifeRack()
	{
	}
	struct Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeRack_eventOnReloadEnded_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeRack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeRack, nullptr, "OnReloadEnded", nullptr, nullptr, sizeof(KnifeRack_eventOnReloadEnded_Parms), Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeRack_OnReloadEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeRack_OnReloadEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_actionSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeRack_eventOnReloadMontageStarted_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::NewProp_actionSpeedMultiplier = { "actionSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KnifeRack_eventOnReloadMontageStarted_Parms, actionSpeedMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::NewProp_actionSpeedMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KnifeRack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKnifeRack, nullptr, "OnReloadMontageStarted", nullptr, nullptr, sizeof(KnifeRack_eventOnReloadMontageStarted_Parms), Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKnifeRack_NoRegister()
	{
		return AKnifeRack::StaticClass();
	}
	struct Z_Construct_UClass_AKnifeRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKnifeRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKnifeRack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKnifeRack_OnReloadEnded, "OnReloadEnded" }, // 3436796926
		{ &Z_Construct_UFunction_AKnifeRack_OnReloadMontageStarted, "OnReloadMontageStarted" }, // 1015593125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKnifeRack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KnifeRack.h" },
		{ "ModuleRelativePath", "Public/KnifeRack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKnifeRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKnifeRack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKnifeRack_Statics::ClassParams = {
		&AKnifeRack::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKnifeRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKnifeRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKnifeRack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKnifeRack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKnifeRack, 1201918649);
	template<> THEK23_API UClass* StaticClass<AKnifeRack>()
	{
		return AKnifeRack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKnifeRack(Z_Construct_UClass_AKnifeRack, &AKnifeRack::StaticClass, TEXT("/Script/TheK23"), TEXT("AKnifeRack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKnifeRack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
