// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerInGameAssetPreloadState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInGameAssetPreloadState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerInGameAssetPreloadState_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerInGameAssetPreloadState();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerInGameAssetPreloadState::execServer_SetPreloadCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetPreloadCompleted_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted = FName(TEXT("Server_SetPreloadCompleted"));
	void UPlayerInGameAssetPreloadState::Server_SetPreloadCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted),NULL);
	}
	void UPlayerInGameAssetPreloadState::StaticRegisterNativesUPlayerInGameAssetPreloadState()
	{
		UClass* Class = UPlayerInGameAssetPreloadState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_SetPreloadCompleted", &UPlayerInGameAssetPreloadState::execServer_SetPreloadCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerInGameAssetPreloadState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInGameAssetPreloadState, nullptr, "Server_SetPreloadCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerInGameAssetPreloadState_NoRegister()
	{
		return UPlayerInGameAssetPreloadState::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInGameAssetPreloadState_Server_SetPreloadCompleted, "Server_SetPreloadCompleted" }, // 1359263277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerInGameAssetPreloadState.h" },
		{ "ModuleRelativePath", "Public/PlayerInGameAssetPreloadState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInGameAssetPreloadState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::ClassParams = {
		&UPlayerInGameAssetPreloadState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInGameAssetPreloadState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerInGameAssetPreloadState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerInGameAssetPreloadState, 4143617604);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPlayerInGameAssetPreloadState>()
	{
		return UPlayerInGameAssetPreloadState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerInGameAssetPreloadState(Z_Construct_UClass_UPlayerInGameAssetPreloadState, &UPlayerInGameAssetPreloadState::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPlayerInGameAssetPreloadState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInGameAssetPreloadState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
