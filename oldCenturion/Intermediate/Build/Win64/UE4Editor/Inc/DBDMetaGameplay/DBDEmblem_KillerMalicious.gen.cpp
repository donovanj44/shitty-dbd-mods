// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDMetaGameplay/Public/DBDEmblem_KillerMalicious.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEmblem_KillerMalicious() {}
// Cross Module References
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerMalicious_NoRegister();
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerMalicious();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem();
	UPackage* Z_Construct_UPackage__Script_DBDMetaGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDEmblem_KillerMalicious::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UDBDEmblem_KillerMalicious::StaticRegisterNativesUDBDEmblem_KillerMalicious()
	{
		UClass* Class = UDBDEmblem_KillerMalicious::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UDBDEmblem_KillerMalicious::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerMalicious.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDEmblem_KillerMalicious, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDEmblem_KillerMalicious_NoRegister()
	{
		return UDBDEmblem_KillerMalicious::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__remainingSurvivorHookStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__remainingSurvivorHookStates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__remainingSurvivorHookStates_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__remainingSurvivorHookStates_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDEmblem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDMetaGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDEmblem_KillerMalicious_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2303481733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEmblem_KillerMalicious.h" },
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerMalicious.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerMalicious.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates = { "_remainingSurvivorHookStates", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem_KillerMalicious, _remainingSurvivorHookStates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates_Key_KeyProp = { "_remainingSurvivorHookStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates_ValueProp = { "_remainingSurvivorHookStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::NewProp__remainingSurvivorHookStates_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEmblem_KillerMalicious>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::ClassParams = {
		&UDBDEmblem_KillerMalicious::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEmblem_KillerMalicious()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEmblem_KillerMalicious_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEmblem_KillerMalicious, 3183893020);
	template<> DBDMETAGAMEPLAY_API UClass* StaticClass<UDBDEmblem_KillerMalicious>()
	{
		return UDBDEmblem_KillerMalicious::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEmblem_KillerMalicious(Z_Construct_UClass_UDBDEmblem_KillerMalicious, &UDBDEmblem_KillerMalicious::StaticClass, TEXT("/Script/DBDMetaGameplay"), TEXT("UDBDEmblem_KillerMalicious"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEmblem_KillerMalicious);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
