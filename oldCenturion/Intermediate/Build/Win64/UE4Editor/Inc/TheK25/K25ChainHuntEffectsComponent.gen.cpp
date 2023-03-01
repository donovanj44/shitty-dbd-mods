// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainHuntEffectsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainHuntEffectsComponent() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainHuntEffectsComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainHuntEffectsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25ChainHuntEffectsComponent::execGetOwningPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetOwningPlayer();
		P_NATIVE_END;
	}
	static FName NAME_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects = FName(TEXT("Cosmetic_ActivateChainHuntEffects"));
	void UK25ChainHuntEffectsComponent::Cosmetic_ActivateChainHuntEffects(bool hasChainHuntStarted)
	{
		K25ChainHuntEffectsComponent_eventCosmetic_ActivateChainHuntEffects_Parms Parms;
		Parms.hasChainHuntStarted=hasChainHuntStarted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects),&Parms);
	}
	static FName NAME_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects = FName(TEXT("Cosmetic_DeactivateChainHuntEffects"));
	void UK25ChainHuntEffectsComponent::Cosmetic_DeactivateChainHuntEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects),NULL);
	}
	static FName NAME_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX = FName(TEXT("Cosmetic_TriggerChainHuntActivationSFX"));
	void UK25ChainHuntEffectsComponent::Cosmetic_TriggerChainHuntActivationSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX),NULL);
	}
	void UK25ChainHuntEffectsComponent::StaticRegisterNativesUK25ChainHuntEffectsComponent()
	{
		UClass* Class = UK25ChainHuntEffectsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningPlayer", &UK25ChainHuntEffectsComponent::execGetOwningPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasChainHuntStarted_MetaData[];
#endif
		static void NewProp_hasChainHuntStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasChainHuntStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::NewProp_hasChainHuntStarted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::NewProp_hasChainHuntStarted_SetBit(void* Obj)
	{
		((K25ChainHuntEffectsComponent_eventCosmetic_ActivateChainHuntEffects_Parms*)Obj)->hasChainHuntStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::NewProp_hasChainHuntStarted = { "hasChainHuntStarted", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25ChainHuntEffectsComponent_eventCosmetic_ActivateChainHuntEffects_Parms), &Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::NewProp_hasChainHuntStarted_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::NewProp_hasChainHuntStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::NewProp_hasChainHuntStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::NewProp_hasChainHuntStarted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainHuntEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainHuntEffectsComponent, nullptr, "Cosmetic_ActivateChainHuntEffects", nullptr, nullptr, sizeof(K25ChainHuntEffectsComponent_eventCosmetic_ActivateChainHuntEffects_Parms), Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainHuntEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainHuntEffectsComponent, nullptr, "Cosmetic_DeactivateChainHuntEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainHuntEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainHuntEffectsComponent, nullptr, "Cosmetic_TriggerChainHuntActivationSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics
	{
		struct K25ChainHuntEffectsComponent_eventGetOwningPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainHuntEffectsComponent_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainHuntEffectsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainHuntEffectsComponent, nullptr, "GetOwningPlayer", nullptr, nullptr, sizeof(K25ChainHuntEffectsComponent_eventGetOwningPlayer_Parms), Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ChainHuntEffectsComponent_NoRegister()
	{
		return UK25ChainHuntEffectsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_ActivateChainHuntEffects, "Cosmetic_ActivateChainHuntEffects" }, // 3854188500
		{ &Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_DeactivateChainHuntEffects, "Cosmetic_DeactivateChainHuntEffects" }, // 3963034855
		{ &Z_Construct_UFunction_UK25ChainHuntEffectsComponent_Cosmetic_TriggerChainHuntActivationSFX, "Cosmetic_TriggerChainHuntActivationSFX" }, // 243235138
		{ &Z_Construct_UFunction_UK25ChainHuntEffectsComponent_GetOwningPlayer, "GetOwningPlayer" }, // 4193195840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K25ChainHuntEffectsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/K25ChainHuntEffectsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainHuntEffectsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::ClassParams = {
		&UK25ChainHuntEffectsComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainHuntEffectsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainHuntEffectsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainHuntEffectsComponent, 1353182171);
	template<> THEK25_API UClass* StaticClass<UK25ChainHuntEffectsComponent>()
	{
		return UK25ChainHuntEffectsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainHuntEffectsComponent(Z_Construct_UClass_UK25ChainHuntEffectsComponent, &UK25ChainHuntEffectsComponent::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainHuntEffectsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainHuntEffectsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
