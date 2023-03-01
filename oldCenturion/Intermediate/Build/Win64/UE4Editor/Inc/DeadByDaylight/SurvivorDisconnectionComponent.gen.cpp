// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorDisconnectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorDisconnectionComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorDisconnectionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USurvivorDisconnectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USurvivorDisconnectionComponent::execAuthority_OnPlayerDisconnected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnPlayerDisconnected(Z_Param_player);
		P_NATIVE_END;
	}
	void USurvivorDisconnectionComponent::StaticRegisterNativesUSurvivorDisconnectionComponent()
	{
		UClass* Class = USurvivorDisconnectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnPlayerDisconnected", &USurvivorDisconnectionComponent::execAuthority_OnPlayerDisconnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics
	{
		struct SurvivorDisconnectionComponent_eventAuthority_OnPlayerDisconnected_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorDisconnectionComponent_eventAuthority_OnPlayerDisconnected_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorDisconnectionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvivorDisconnectionComponent, nullptr, "Authority_OnPlayerDisconnected", nullptr, nullptr, sizeof(SurvivorDisconnectionComponent_eventAuthority_OnPlayerDisconnected_Parms), Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USurvivorDisconnectionComponent_NoRegister()
	{
		return USurvivorDisconnectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USurvivorDisconnectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvivorDisconnectionComponent_Authority_OnPlayerDisconnected, "Authority_OnPlayerDisconnected" }, // 3233333512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SurvivorDisconnectionComponent.h" },
		{ "ModuleRelativePath", "Public/SurvivorDisconnectionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvivorDisconnectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::ClassParams = {
		&USurvivorDisconnectionComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USurvivorDisconnectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USurvivorDisconnectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USurvivorDisconnectionComponent, 3811850136);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USurvivorDisconnectionComponent>()
	{
		return USurvivorDisconnectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USurvivorDisconnectionComponent(Z_Construct_UClass_USurvivorDisconnectionComponent, &USurvivorDisconnectionComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USurvivorDisconnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USurvivorDisconnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif