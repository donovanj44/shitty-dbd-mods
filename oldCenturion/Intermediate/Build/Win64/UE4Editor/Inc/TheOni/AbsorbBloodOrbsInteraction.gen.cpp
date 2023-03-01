// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/AbsorbBloodOrbsInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbsorbBloodOrbsInteraction() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UAbsorbBloodOrbsInteraction_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UAbsorbBloodOrbsInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAbsorbBloodOrbsInteraction::execSetPlayerOwner)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerOwner(Z_Param_player);
		P_NATIVE_END;
	}
	void UAbsorbBloodOrbsInteraction::StaticRegisterNativesUAbsorbBloodOrbsInteraction()
	{
		UClass* Class = UAbsorbBloodOrbsInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetPlayerOwner", &UAbsorbBloodOrbsInteraction::execSetPlayerOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics
	{
		struct AbsorbBloodOrbsInteraction_eventSetPlayerOwner_Parms
		{
			const ADBDPlayer* player;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AbsorbBloodOrbsInteraction_eventSetPlayerOwner_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbsorbBloodOrbsInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbsorbBloodOrbsInteraction, nullptr, "SetPlayerOwner", nullptr, nullptr, sizeof(AbsorbBloodOrbsInteraction_eventSetPlayerOwner_Parms), Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbsorbBloodOrbsInteraction_NoRegister()
	{
		return UAbsorbBloodOrbsInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbsorbBloodOrbsInteraction_SetPlayerOwner, "SetPlayerOwner" }, // 127474429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AbsorbBloodOrbsInteraction.h" },
		{ "ModuleRelativePath", "Public/AbsorbBloodOrbsInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbsorbBloodOrbsInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::ClassParams = {
		&UAbsorbBloodOrbsInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbsorbBloodOrbsInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbsorbBloodOrbsInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbsorbBloodOrbsInteraction, 1779801343);
	template<> THEONI_API UClass* StaticClass<UAbsorbBloodOrbsInteraction>()
	{
		return UAbsorbBloodOrbsInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbsorbBloodOrbsInteraction(Z_Construct_UClass_UAbsorbBloodOrbsInteraction, &UAbsorbBloodOrbsInteraction::StaticClass, TEXT("/Script/TheOni"), TEXT("UAbsorbBloodOrbsInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbsorbBloodOrbsInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
