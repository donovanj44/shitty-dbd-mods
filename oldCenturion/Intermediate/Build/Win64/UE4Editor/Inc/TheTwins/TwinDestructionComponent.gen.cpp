// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinDestructionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinDestructionComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinDestructionComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinDestructionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTwinDestructionComponent::execAuthority_OnTwinQuickDestroyOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnTwinQuickDestroyOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwinDestructionComponent::execOnDyingMontageEnd)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montage);
		P_GET_UBOOL(Z_Param_interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDyingMontageEnd(Z_Param_montage,Z_Param_interrupted);
		P_NATIVE_END;
	}
	static FName NAME_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick = FName(TEXT("Cosmetic_OnTwinDestroyedFromKick"));
	void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromKick(AConjoinedTwin* owningTwin)
	{
		TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromKick_Parms Parms;
		Parms.owningTwin=owningTwin;
		ProcessEvent(FindFunctionChecked(NAME_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick),&Parms);
	}
	static FName NAME_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove = FName(TEXT("Cosmetic_OnTwinDestroyedFromSurvivorRemove"));
	void UTwinDestructionComponent::Cosmetic_OnTwinDestroyedFromSurvivorRemove(AConjoinedTwin* owningTwin)
	{
		TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromSurvivorRemove_Parms Parms;
		Parms.owningTwin=owningTwin;
		ProcessEvent(FindFunctionChecked(NAME_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove),&Parms);
	}
	static FName NAME_UTwinDestructionComponent_OnTwinQuickDestroy = FName(TEXT("OnTwinQuickDestroy"));
	void UTwinDestructionComponent::OnTwinQuickDestroy(AConjoinedTwin* owningTwin)
	{
		TwinDestructionComponent_eventOnTwinQuickDestroy_Parms Parms;
		Parms.owningTwin=owningTwin;
		ProcessEvent(FindFunctionChecked(NAME_UTwinDestructionComponent_OnTwinQuickDestroy),&Parms);
	}
	void UTwinDestructionComponent::StaticRegisterNativesUTwinDestructionComponent()
	{
		UClass* Class = UTwinDestructionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnTwinQuickDestroyOver", &UTwinDestructionComponent::execAuthority_OnTwinQuickDestroyOver },
			{ "OnDyingMontageEnd", &UTwinDestructionComponent::execOnDyingMontageEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinDestructionComponent, nullptr, "Authority_OnTwinQuickDestroyOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::NewProp_owningTwin = { "owningTwin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromKick_Parms, owningTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::NewProp_owningTwin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinDestructionComponent, nullptr, "Cosmetic_OnTwinDestroyedFromKick", nullptr, nullptr, sizeof(TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromKick_Parms), Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::NewProp_owningTwin = { "owningTwin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromSurvivorRemove_Parms, owningTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::NewProp_owningTwin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinDestructionComponent, nullptr, "Cosmetic_OnTwinDestroyedFromSurvivorRemove", nullptr, nullptr, sizeof(TwinDestructionComponent_eventCosmetic_OnTwinDestroyedFromSurvivorRemove_Parms), Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics
	{
		struct TwinDestructionComponent_eventOnDyingMontageEnd_Parms
		{
			FAnimationMontageDescriptor montage;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((TwinDestructionComponent_eventOnDyingMontageEnd_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TwinDestructionComponent_eventOnDyingMontageEnd_Parms), &Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinDestructionComponent_eventOnDyingMontageEnd_Parms, montage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinDestructionComponent, nullptr, "OnDyingMontageEnd", nullptr, nullptr, sizeof(TwinDestructionComponent_eventOnDyingMontageEnd_Parms), Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::NewProp_owningTwin = { "owningTwin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TwinDestructionComponent_eventOnTwinQuickDestroy_Parms, owningTwin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::NewProp_owningTwin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwinDestructionComponent, nullptr, "OnTwinQuickDestroy", nullptr, nullptr, sizeof(TwinDestructionComponent_eventOnTwinQuickDestroy_Parms), Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTwinDestructionComponent_NoRegister()
	{
		return UTwinDestructionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTwinDestructionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dyingFromSurvivorTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__dyingFromSurvivorTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__diedFromSurvivorRemovingTwin_MetaData[];
#endif
		static void NewProp__diedFromSurvivorRemovingTwin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__diedFromSurvivorRemovingTwin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dyingTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dyingTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__huskClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__huskClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinDestructionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwinDestructionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinDestructionComponent_Authority_OnTwinQuickDestroyOver, "Authority_OnTwinQuickDestroyOver" }, // 1242443915
		{ &Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromKick, "Cosmetic_OnTwinDestroyedFromKick" }, // 400170208
		{ &Z_Construct_UFunction_UTwinDestructionComponent_Cosmetic_OnTwinDestroyedFromSurvivorRemove, "Cosmetic_OnTwinDestroyedFromSurvivorRemove" }, // 863922692
		{ &Z_Construct_UFunction_UTwinDestructionComponent_OnDyingMontageEnd, "OnDyingMontageEnd" }, // 790813683
		{ &Z_Construct_UFunction_UTwinDestructionComponent_OnTwinQuickDestroy, "OnTwinQuickDestroy" }, // 4178750144
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinDestructionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinDestructionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingFromSurvivorTranslation_MetaData[] = {
		{ "Category", "TwinDestructionComponent" },
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingFromSurvivorTranslation = { "_dyingFromSurvivorTranslation", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinDestructionComponent, _dyingFromSurvivorTranslation), METADATA_PARAMS(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingFromSurvivorTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingFromSurvivorTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__diedFromSurvivorRemovingTwin_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__diedFromSurvivorRemovingTwin_SetBit(void* Obj)
	{
		((UTwinDestructionComponent*)Obj)->_diedFromSurvivorRemovingTwin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__diedFromSurvivorRemovingTwin = { "_diedFromSurvivorRemovingTwin", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinDestructionComponent), &Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__diedFromSurvivorRemovingTwin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__diedFromSurvivorRemovingTwin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__diedFromSurvivorRemovingTwin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingTransform = { "_dyingTransform", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinDestructionComponent, _dyingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__huskClass_MetaData[] = {
		{ "Category", "TwinDestructionComponent" },
		{ "ModuleRelativePath", "Public/TwinDestructionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__huskClass = { "_huskClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinDestructionComponent, _huskClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__huskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__huskClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinDestructionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingFromSurvivorTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__diedFromSurvivorRemovingTwin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__dyingTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinDestructionComponent_Statics::NewProp__huskClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinDestructionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinDestructionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinDestructionComponent_Statics::ClassParams = {
		&UTwinDestructionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTwinDestructionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinDestructionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinDestructionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinDestructionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinDestructionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinDestructionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinDestructionComponent, 1630477769);
	template<> THETWINS_API UClass* StaticClass<UTwinDestructionComponent>()
	{
		return UTwinDestructionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinDestructionComponent(Z_Construct_UClass_UTwinDestructionComponent, &UTwinDestructionComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinDestructionComponent"), false, nullptr, nullptr, nullptr);

	void UTwinDestructionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__dyingTransform(TEXT("_dyingTransform"));
		static const FName Name__diedFromSurvivorRemovingTwin(TEXT("_diedFromSurvivorRemovingTwin"));

		const bool bIsValid = true
			&& Name__dyingTransform == ClassReps[(int32)ENetFields_Private::_dyingTransform].Property->GetFName()
			&& Name__diedFromSurvivorRemovingTwin == ClassReps[(int32)ENetFields_Private::_diedFromSurvivorRemovingTwin].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTwinDestructionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinDestructionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
