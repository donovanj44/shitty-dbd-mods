// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/IsOwningPlayerInRangeFromHook.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsOwningPlayerInRangeFromHook() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UIsOwningPlayerInRangeFromHook();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UIsOwningPlayerInRangeFromHook::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UIsOwningPlayerInRangeFromHook::StaticRegisterNativesUIsOwningPlayerInRangeFromHook()
	{
		UClass* Class = UIsOwningPlayerInRangeFromHook::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UIsOwningPlayerInRangeFromHook::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IsOwningPlayerInRangeFromHook.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsOwningPlayerInRangeFromHook, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_NoRegister()
	{
		return UIsOwningPlayerInRangeFromHook::StaticClass();
	}
	struct Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1759900573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsOwningPlayerInRangeFromHook.h" },
		{ "ModuleRelativePath", "Public/IsOwningPlayerInRangeFromHook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsOwningPlayerInRangeFromHook>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::ClassParams = {
		&UIsOwningPlayerInRangeFromHook::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsOwningPlayerInRangeFromHook()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsOwningPlayerInRangeFromHook_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsOwningPlayerInRangeFromHook, 3188092657);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UIsOwningPlayerInRangeFromHook>()
	{
		return UIsOwningPlayerInRangeFromHook::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsOwningPlayerInRangeFromHook(Z_Construct_UClass_UIsOwningPlayerInRangeFromHook, &UIsOwningPlayerInRangeFromHook::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UIsOwningPlayerInRangeFromHook"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsOwningPlayerInRangeFromHook);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
