// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDMetaGameplay/Public/DBDEmblem_KillerDevout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDEmblem_KillerDevout() {}
// Cross Module References
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerDevout_NoRegister();
	DBDMETAGAMEPLAY_API UClass* Z_Construct_UClass_UDBDEmblem_KillerDevout();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDEmblem();
	UPackage* Z_Construct_UPackage__Script_DBDMetaGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDEmblem_KillerDevout::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UDBDEmblem_KillerDevout::StaticRegisterNativesUDBDEmblem_KillerDevout()
	{
		UClass* Class = UDBDEmblem_KillerDevout::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UDBDEmblem_KillerDevout::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerDevout.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDEmblem_KillerDevout, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDEmblem_KillerDevout_NoRegister()
	{
		return UDBDEmblem_KillerDevout::StaticClass();
	}
	struct Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playersToHook_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playersToHook;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playersToHook_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDEmblem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDMetaGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDEmblem_KillerDevout_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1056519845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDEmblem_KillerDevout.h" },
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerDevout.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::NewProp__playersToHook_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDEmblem_KillerDevout.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::NewProp__playersToHook = { "_playersToHook", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDEmblem_KillerDevout, _playersToHook), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::NewProp__playersToHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::NewProp__playersToHook_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::NewProp__playersToHook_Inner = { "_playersToHook", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::NewProp__playersToHook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::NewProp__playersToHook_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDEmblem_KillerDevout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::ClassParams = {
		&UDBDEmblem_KillerDevout::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDEmblem_KillerDevout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDEmblem_KillerDevout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDEmblem_KillerDevout, 527053628);
	template<> DBDMETAGAMEPLAY_API UClass* StaticClass<UDBDEmblem_KillerDevout>()
	{
		return UDBDEmblem_KillerDevout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDEmblem_KillerDevout(Z_Construct_UClass_UDBDEmblem_KillerDevout, &UDBDEmblem_KillerDevout::StaticClass, TEXT("/Script/DBDMetaGameplay"), TEXT("UDBDEmblem_KillerDevout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDEmblem_KillerDevout);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
