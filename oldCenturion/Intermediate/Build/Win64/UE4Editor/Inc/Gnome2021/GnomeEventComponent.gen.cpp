// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gnome2021/Public/GnomeEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGnomeEventComponent() {}
// Cross Module References
	GNOME2021_API UClass* Z_Construct_UClass_UGnomeEventComponent_NoRegister();
	GNOME2021_API UClass* Z_Construct_UClass_UGnomeEventComponent();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawningEventComponent();
	UPackage* Z_Construct_UPackage__Script_Gnome2021();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_UTimedRespawnableTrigger_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_UInteractionRespawnableTrigger_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGnomeEventComponent::execAuthority_OnEndGameStarted)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnEndGameStarted(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UGnomeEventComponent::StaticRegisterNativesUGnomeEventComponent()
	{
		UClass* Class = UGnomeEventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnEndGameStarted", &UGnomeEventComponent::execAuthority_OnEndGameStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics
	{
		struct GnomeEventComponent_eventAuthority_OnEndGameStarted_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GnomeEventComponent_eventAuthority_OnEndGameStarted_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GnomeEventComponent_eventAuthority_OnEndGameStarted_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GnomeEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGnomeEventComponent, nullptr, "Authority_OnEndGameStarted", nullptr, nullptr, sizeof(GnomeEventComponent_eventAuthority_OnEndGameStarted_Parms), Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGnomeEventComponent_NoRegister()
	{
		return UGnomeEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGnomeEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timedRespawnableTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__timedRespawnableTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionRespawnableTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactionRespawnableTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGnomeEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URespawningEventComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Gnome2021,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGnomeEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGnomeEventComponent_Authority_OnEndGameStarted, "Authority_OnEndGameStarted" }, // 3040933975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGnomeEventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GnomeEventComponent.h" },
		{ "ModuleRelativePath", "Public/GnomeEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__timedRespawnableTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GnomeEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__timedRespawnableTrigger = { "_timedRespawnableTrigger", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGnomeEventComponent, _timedRespawnableTrigger), Z_Construct_UClass_UTimedRespawnableTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__timedRespawnableTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__timedRespawnableTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__interactionRespawnableTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GnomeEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__interactionRespawnableTrigger = { "_interactionRespawnableTrigger", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGnomeEventComponent, _interactionRespawnableTrigger), Z_Construct_UClass_UInteractionRespawnableTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__interactionRespawnableTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__interactionRespawnableTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGnomeEventComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__timedRespawnableTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGnomeEventComponent_Statics::NewProp__interactionRespawnableTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGnomeEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGnomeEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGnomeEventComponent_Statics::ClassParams = {
		&UGnomeEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGnomeEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGnomeEventComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGnomeEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGnomeEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGnomeEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGnomeEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGnomeEventComponent, 1395793396);
	template<> GNOME2021_API UClass* StaticClass<UGnomeEventComponent>()
	{
		return UGnomeEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGnomeEventComponent(Z_Construct_UClass_UGnomeEventComponent, &UGnomeEventComponent::StaticClass, TEXT("/Script/Gnome2021"), TEXT("UGnomeEventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGnomeEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
