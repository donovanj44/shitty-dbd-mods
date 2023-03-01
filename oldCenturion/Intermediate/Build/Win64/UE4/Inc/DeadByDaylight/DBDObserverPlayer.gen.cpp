// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDObserverPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDObserverPlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDObserverPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDObserverPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPlayerData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADBDObserverPlayer::execServer_PlayerReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_PlayerReady_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_PlayerReady_Validate"));
			return;
		}
		P_THIS->Server_PlayerReady_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ADBDObserverPlayer_Server_PlayerReady = FName(TEXT("Server_PlayerReady"));
	void ADBDObserverPlayer::Server_PlayerReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDObserverPlayer_Server_PlayerReady),NULL);
	}
	void ADBDObserverPlayer::StaticRegisterNativesADBDObserverPlayer()
	{
		UClass* Class = ADBDObserverPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_PlayerReady", &ADBDObserverPlayer::execServer_PlayerReady },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDObserverPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDObserverPlayer, nullptr, "Server_PlayerReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDObserverPlayer_NoRegister()
	{
		return ADBDObserverPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ADBDObserverPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDObserverPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDObserverPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDObserverPlayer_Server_PlayerReady, "Server_PlayerReady" }, // 1374267721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDObserverPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DBDObserverPlayer.h" },
		{ "ModuleRelativePath", "Public/DBDObserverPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDObserverPlayer_Statics::NewProp__playerData_MetaData[] = {
		{ "Category", "DBDObserverPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDObserverPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDObserverPlayer_Statics::NewProp__playerData = { "_playerData", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDObserverPlayer, _playerData), Z_Construct_UClass_UDBDPlayerData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDObserverPlayer_Statics::NewProp__playerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDObserverPlayer_Statics::NewProp__playerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDObserverPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDObserverPlayer_Statics::NewProp__playerData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDObserverPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDObserverPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDObserverPlayer_Statics::ClassParams = {
		&ADBDObserverPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDObserverPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDObserverPlayer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDObserverPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDObserverPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDObserverPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDObserverPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDObserverPlayer, 3063558937);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDObserverPlayer>()
	{
		return ADBDObserverPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDObserverPlayer(Z_Construct_UClass_ADBDObserverPlayer, &ADBDObserverPlayer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDObserverPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDObserverPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
