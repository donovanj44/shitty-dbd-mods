// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/DemonModeCooldownInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemonModeCooldownInteraction() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UDemonModeCooldownInteraction_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UDemonModeCooldownInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDemonModeCooldownInteraction::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDemonModeCooldownInteraction::execSetPlayerOwner)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerOwner(Z_Param_owner);
		P_NATIVE_END;
	}
	void UDemonModeCooldownInteraction::StaticRegisterNativesUDemonModeCooldownInteraction()
	{
		UClass* Class = UDemonModeCooldownInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UDemonModeCooldownInteraction::execOnLevelReadyToPlay },
			{ "SetPlayerOwner", &UDemonModeCooldownInteraction::execSetPlayerOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemonModeCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemonModeCooldownInteraction, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics
	{
		struct DemonModeCooldownInteraction_eventSetPlayerOwner_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::NewProp_owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DemonModeCooldownInteraction_eventSetPlayerOwner_Parms, owner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::NewProp_owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::NewProp_owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DemonModeCooldownInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDemonModeCooldownInteraction, nullptr, "SetPlayerOwner", nullptr, nullptr, sizeof(DemonModeCooldownInteraction_eventSetPlayerOwner_Parms), Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDemonModeCooldownInteraction_NoRegister()
	{
		return UDemonModeCooldownInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDemonModeCooldownInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDemonModeCooldownInteraction_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1182131351
		{ &Z_Construct_UFunction_UDemonModeCooldownInteraction_SetPlayerOwner, "SetPlayerOwner" }, // 1947013273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DemonModeCooldownInteraction.h" },
		{ "ModuleRelativePath", "Public/DemonModeCooldownInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemonModeCooldownInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::ClassParams = {
		&UDemonModeCooldownInteraction::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemonModeCooldownInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemonModeCooldownInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemonModeCooldownInteraction, 241388974);
	template<> THEONI_API UClass* StaticClass<UDemonModeCooldownInteraction>()
	{
		return UDemonModeCooldownInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemonModeCooldownInteraction(Z_Construct_UClass_UDemonModeCooldownInteraction, &UDemonModeCooldownInteraction::StaticClass, TEXT("/Script/TheOni"), TEXT("UDemonModeCooldownInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemonModeCooldownInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
