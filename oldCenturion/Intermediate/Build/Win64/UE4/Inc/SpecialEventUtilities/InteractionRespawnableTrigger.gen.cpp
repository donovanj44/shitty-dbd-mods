// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpecialEventUtilities/Public/InteractionRespawnableTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionRespawnableTrigger() {}
// Cross Module References
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_UInteractionRespawnableTrigger_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_UInteractionRespawnableTrigger();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawnableTrigger();
	UPackage* Z_Construct_UPackage__Script_SpecialEventUtilities();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_ARespawnableInteractable_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawningEventComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionRespawnableTrigger::execAuthority_OnInteractionEnded)
	{
		P_GET_OBJECT(ARespawnableInteractable,Z_Param_respawnableInteractable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnInteractionEnded(Z_Param_respawnableInteractable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRespawnableTrigger::execAuthority_OnNewRespawnableSubscribed)
	{
		P_GET_OBJECT(ARespawnableInteractable,Z_Param_newRespawnableInteractable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnNewRespawnableSubscribed(Z_Param_newRespawnableInteractable);
		P_NATIVE_END;
	}
	void UInteractionRespawnableTrigger::StaticRegisterNativesUInteractionRespawnableTrigger()
	{
		UClass* Class = UInteractionRespawnableTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnInteractionEnded", &UInteractionRespawnableTrigger::execAuthority_OnInteractionEnded },
			{ "Authority_OnNewRespawnableSubscribed", &UInteractionRespawnableTrigger::execAuthority_OnNewRespawnableSubscribed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics
	{
		struct InteractionRespawnableTrigger_eventAuthority_OnInteractionEnded_Parms
		{
			ARespawnableInteractable* respawnableInteractable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_respawnableInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::NewProp_respawnableInteractable = { "respawnableInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRespawnableTrigger_eventAuthority_OnInteractionEnded_Parms, respawnableInteractable), Z_Construct_UClass_ARespawnableInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::NewProp_respawnableInteractable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionRespawnableTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRespawnableTrigger, nullptr, "Authority_OnInteractionEnded", nullptr, nullptr, sizeof(InteractionRespawnableTrigger_eventAuthority_OnInteractionEnded_Parms), Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics
	{
		struct InteractionRespawnableTrigger_eventAuthority_OnNewRespawnableSubscribed_Parms
		{
			ARespawnableInteractable* newRespawnableInteractable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newRespawnableInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::NewProp_newRespawnableInteractable = { "newRespawnableInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRespawnableTrigger_eventAuthority_OnNewRespawnableSubscribed_Parms, newRespawnableInteractable), Z_Construct_UClass_ARespawnableInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::NewProp_newRespawnableInteractable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionRespawnableTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRespawnableTrigger, nullptr, "Authority_OnNewRespawnableSubscribed", nullptr, nullptr, sizeof(InteractionRespawnableTrigger_eventAuthority_OnNewRespawnableSubscribed_Parms), Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionRespawnableTrigger_NoRegister()
	{
		return UInteractionRespawnableTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionRespawnableTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawningEventComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__respawningEventComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URespawnableTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_SpecialEventUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnInteractionEnded, "Authority_OnInteractionEnded" }, // 2469393464
		{ &Z_Construct_UFunction_UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed, "Authority_OnNewRespawnableSubscribed" }, // 2694105266
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionRespawnableTrigger.h" },
		{ "ModuleRelativePath", "Public/InteractionRespawnableTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::NewProp__respawningEventComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionRespawnableTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::NewProp__respawningEventComponent = { "_respawningEventComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRespawnableTrigger, _respawningEventComponent), Z_Construct_UClass_URespawningEventComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::NewProp__respawningEventComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::NewProp__respawningEventComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::NewProp__respawningEventComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionRespawnableTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::ClassParams = {
		&UInteractionRespawnableTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionRespawnableTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionRespawnableTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionRespawnableTrigger, 3998662460);
	template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<UInteractionRespawnableTrigger>()
	{
		return UInteractionRespawnableTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionRespawnableTrigger(Z_Construct_UClass_UInteractionRespawnableTrigger, &UInteractionRespawnableTrigger::StaticClass, TEXT("/Script/SpecialEventUtilities"), TEXT("UInteractionRespawnableTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionRespawnableTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
