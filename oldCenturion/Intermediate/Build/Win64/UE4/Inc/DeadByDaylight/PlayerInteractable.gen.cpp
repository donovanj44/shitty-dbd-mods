// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInteractable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APlayerInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APlayerInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerInteractable::execInitInteractable)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitInteractable_Implementation(Z_Param_player);
		P_NATIVE_END;
	}
	static FName NAME_APlayerInteractable_InitInteractable = FName(TEXT("InitInteractable"));
	void APlayerInteractable::InitInteractable(ADBDPlayer* player)
	{
		PlayerInteractable_eventInitInteractable_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_APlayerInteractable_InitInteractable),&Parms);
	}
	void APlayerInteractable::StaticRegisterNativesAPlayerInteractable()
	{
		UClass* Class = APlayerInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitInteractable", &APlayerInteractable::execInitInteractable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerInteractable_eventInitInteractable_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerInteractable, nullptr, "InitInteractable", nullptr, nullptr, sizeof(PlayerInteractable_eventInitInteractable_Parms), Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerInteractable_InitInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerInteractable_InitInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerInteractable_NoRegister()
	{
		return APlayerInteractable::StaticClass();
	}
	struct Z_Construct_UClass_APlayerInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerInteractable_InitInteractable, "InitInteractable" }, // 2661647805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerInteractable.h" },
		{ "ModuleRelativePath", "Public/PlayerInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerInteractable_Statics::ClassParams = {
		&APlayerInteractable::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerInteractable, 1455345524);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<APlayerInteractable>()
	{
		return APlayerInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerInteractable(Z_Construct_UClass_APlayerInteractable, &APlayerInteractable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("APlayerInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
