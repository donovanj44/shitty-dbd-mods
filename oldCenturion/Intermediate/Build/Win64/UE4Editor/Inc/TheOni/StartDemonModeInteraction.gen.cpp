// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/StartDemonModeInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartDemonModeInteraction() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UStartDemonModeInteraction_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UStartDemonModeInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
	DEFINE_FUNCTION(UStartDemonModeInteraction::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartDemonModeInteraction::execSetPlayerOwner)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerOwner(Z_Param_owner);
		P_NATIVE_END;
	}
	void UStartDemonModeInteraction::StaticRegisterNativesUStartDemonModeInteraction()
	{
		UClass* Class = UStartDemonModeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UStartDemonModeInteraction::execOnLevelReadyToPlay },
			{ "SetPlayerOwner", &UStartDemonModeInteraction::execSetPlayerOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartDemonModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartDemonModeInteraction, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics
	{
		struct StartDemonModeInteraction_eventSetPlayerOwner_Parms
		{
			const ADBDPlayer* owner;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::NewProp_owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartDemonModeInteraction_eventSetPlayerOwner_Parms, owner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::NewProp_owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartDemonModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartDemonModeInteraction, nullptr, "SetPlayerOwner", nullptr, nullptr, sizeof(StartDemonModeInteraction_eventSetPlayerOwner_Parms), Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStartDemonModeInteraction_NoRegister()
	{
		return UStartDemonModeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UStartDemonModeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemonModeActivationMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DemonModeActivationMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawAdjustTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawAdjustTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartDemonModeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStartDemonModeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartDemonModeInteraction_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2809504902
		{ &Z_Construct_UFunction_UStartDemonModeInteraction_SetPlayerOwner, "SetPlayerOwner" }, // 3944834532
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartDemonModeInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "StartDemonModeInteraction.h" },
		{ "ModuleRelativePath", "Public/StartDemonModeInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_DemonModeActivationMontage_MetaData[] = {
		{ "Category", "StartDemonModeInteraction" },
		{ "ModuleRelativePath", "Public/StartDemonModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_DemonModeActivationMontage = { "DemonModeActivationMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartDemonModeInteraction, DemonModeActivationMontage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_DemonModeActivationMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_DemonModeActivationMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_YawAdjustTime_MetaData[] = {
		{ "Category", "StartDemonModeInteraction" },
		{ "ModuleRelativePath", "Public/StartDemonModeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_YawAdjustTime = { "YawAdjustTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartDemonModeInteraction, YawAdjustTime), METADATA_PARAMS(Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_YawAdjustTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_YawAdjustTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartDemonModeInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_DemonModeActivationMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartDemonModeInteraction_Statics::NewProp_YawAdjustTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartDemonModeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartDemonModeInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartDemonModeInteraction_Statics::ClassParams = {
		&UStartDemonModeInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStartDemonModeInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStartDemonModeInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStartDemonModeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartDemonModeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartDemonModeInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartDemonModeInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartDemonModeInteraction, 1802070183);
	template<> THEONI_API UClass* StaticClass<UStartDemonModeInteraction>()
	{
		return UStartDemonModeInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartDemonModeInteraction(Z_Construct_UClass_UStartDemonModeInteraction, &UStartDemonModeInteraction::StaticClass, TEXT("/Script/TheOni"), TEXT("UStartDemonModeInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartDemonModeInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
