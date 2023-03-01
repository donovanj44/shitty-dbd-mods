// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/ReloadHatchet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReloadHatchet() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_UReloadHatchet_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UReloadHatchet();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UBaseLockerInteraction();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReloadHatchet::execIsInteractionPossible_Shared)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractionPossible_Shared(Z_Param_player);
		P_NATIVE_END;
	}
	void UReloadHatchet::StaticRegisterNativesUReloadHatchet()
	{
		UClass* Class = UReloadHatchet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInteractionPossible_Shared", &UReloadHatchet::execIsInteractionPossible_Shared },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics
	{
		struct ReloadHatchet_eventIsInteractionPossible_Shared_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReloadHatchet_eventIsInteractionPossible_Shared_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReloadHatchet_eventIsInteractionPossible_Shared_Parms), &Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReloadHatchet_eventIsInteractionPossible_Shared_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReloadHatchet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReloadHatchet, nullptr, "IsInteractionPossible_Shared", nullptr, nullptr, sizeof(ReloadHatchet_eventIsInteractionPossible_Shared_Parms), Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReloadHatchet_NoRegister()
	{
		return UReloadHatchet::StaticClass();
	}
	struct Z_Construct_UClass_UReloadHatchet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReloadHatchet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLockerInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReloadHatchet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReloadHatchet_IsInteractionPossible_Shared, "IsInteractionPossible_Shared" }, // 1409272979
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReloadHatchet_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ReloadHatchet.h" },
		{ "ModuleRelativePath", "Public/ReloadHatchet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReloadHatchet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReloadHatchet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReloadHatchet_Statics::ClassParams = {
		&UReloadHatchet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReloadHatchet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReloadHatchet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReloadHatchet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReloadHatchet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReloadHatchet, 1189026717);
	template<> THEHUNTRESS_API UClass* StaticClass<UReloadHatchet>()
	{
		return UReloadHatchet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReloadHatchet(Z_Construct_UClass_UReloadHatchet, &UReloadHatchet::StaticClass, TEXT("/Script/TheHuntress"), TEXT("UReloadHatchet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReloadHatchet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
