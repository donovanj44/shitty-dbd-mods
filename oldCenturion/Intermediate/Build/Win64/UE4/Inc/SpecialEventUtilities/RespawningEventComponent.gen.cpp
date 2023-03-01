// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpecialEventUtilities/Public/RespawningEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawningEventComponent() {}
// Cross Module References
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawningEventComponent_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawningEventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SpecialEventUtilities();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_ARespawnableInteractable_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawnablePositioner_NoRegister();
	SPECIALEVENTUTILITIES_API UClass* Z_Construct_UClass_URespawnableStrategy_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URespawningEventComponent::execAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged)
	{
		P_GET_OBJECT(ARespawnableInteractable,Z_Param_respawnableInteractable);
		P_GET_UBOOL(Z_Param_isInteracting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(Z_Param_respawnableInteractable,Z_Param_isInteracting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URespawningEventComponent::execDBD_ForceRespawnSpecialEventObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ForceRespawnSpecialEventObject();
		P_NATIVE_END;
	}
	void URespawningEventComponent::StaticRegisterNativesURespawningEventComponent()
	{
		UClass* Class = URespawningEventComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnIsInteractingWithAnyRespawnableInteractableChanged", &URespawningEventComponent::execAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged },
			{ "DBD_ForceRespawnSpecialEventObject", &URespawningEventComponent::execDBD_ForceRespawnSpecialEventObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics
	{
		struct RespawningEventComponent_eventAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged_Parms
		{
			ARespawnableInteractable* respawnableInteractable;
			bool isInteracting;
		};
		static void NewProp_isInteracting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInteracting;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_respawnableInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::NewProp_isInteracting_SetBit(void* Obj)
	{
		((RespawningEventComponent_eventAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged_Parms*)Obj)->isInteracting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::NewProp_isInteracting = { "isInteracting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RespawningEventComponent_eventAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged_Parms), &Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::NewProp_isInteracting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::NewProp_respawnableInteractable = { "respawnableInteractable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RespawningEventComponent_eventAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged_Parms, respawnableInteractable), Z_Construct_UClass_ARespawnableInteractable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::NewProp_isInteracting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::NewProp_respawnableInteractable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawningEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URespawningEventComponent, nullptr, "Authority_OnIsInteractingWithAnyRespawnableInteractableChanged", nullptr, nullptr, sizeof(RespawningEventComponent_eventAuthority_OnIsInteractingWithAnyRespawnableInteractableChanged_Parms), Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RespawningEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URespawningEventComponent, nullptr, "DBD_ForceRespawnSpecialEventObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URespawningEventComponent_NoRegister()
	{
		return URespawningEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_URespawningEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnablePositioner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__respawnablePositioner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnableStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__respawnableStrategy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawningEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpecialEventUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URespawningEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged, "Authority_OnIsInteractingWithAnyRespawnableInteractableChanged" }, // 2756496339
		{ &Z_Construct_UFunction_URespawningEventComponent_DBD_ForceRespawnSpecialEventObject, "DBD_ForceRespawnSpecialEventObject" }, // 2698811281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawningEventComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RespawningEventComponent.h" },
		{ "ModuleRelativePath", "Public/RespawningEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnablePositioner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RespawningEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnablePositioner = { "_respawnablePositioner", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawningEventComponent, _respawnablePositioner), Z_Construct_UClass_URespawnablePositioner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnablePositioner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnablePositioner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnableStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RespawningEventComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnableStrategy = { "_respawnableStrategy", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawningEventComponent, _respawnableStrategy), Z_Construct_UClass_URespawnableStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnableStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnableStrategy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URespawningEventComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnablePositioner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawningEventComponent_Statics::NewProp__respawnableStrategy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawningEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawningEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URespawningEventComponent_Statics::ClassParams = {
		&URespawningEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URespawningEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URespawningEventComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URespawningEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawningEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawningEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URespawningEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URespawningEventComponent, 1344567621);
	template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<URespawningEventComponent>()
	{
		return URespawningEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URespawningEventComponent(Z_Construct_UClass_URespawningEventComponent, &URespawningEventComponent::StaticClass, TEXT("/Script/SpecialEventUtilities"), TEXT("URespawningEventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawningEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
