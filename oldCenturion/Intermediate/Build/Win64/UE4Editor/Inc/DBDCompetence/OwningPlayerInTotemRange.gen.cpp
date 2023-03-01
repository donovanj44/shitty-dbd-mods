// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/OwningPlayerInTotemRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwningPlayerInTotemRange() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningPlayerInTotemRange_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningPlayerInTotemRange();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UOwningPlayerInTotemRange::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UOwningPlayerInTotemRange::StaticRegisterNativesUOwningPlayerInTotemRange()
	{
		UClass* Class = UOwningPlayerInTotemRange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UOwningPlayerInTotemRange::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OwningPlayerInTotemRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOwningPlayerInTotemRange, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOwningPlayerInTotemRange_NoRegister()
	{
		return UOwningPlayerInTotemRange::StaticClass();
	}
	struct Z_Construct_UClass_UOwningPlayerInTotemRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyActorPairQueryRangeIsTrue,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOwningPlayerInTotemRange_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1474397162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OwningPlayerInTotemRange.h" },
		{ "ModuleRelativePath", "Public/OwningPlayerInTotemRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOwningPlayerInTotemRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::ClassParams = {
		&UOwningPlayerInTotemRange::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOwningPlayerInTotemRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOwningPlayerInTotemRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOwningPlayerInTotemRange, 917840290);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UOwningPlayerInTotemRange>()
	{
		return UOwningPlayerInTotemRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOwningPlayerInTotemRange(Z_Construct_UClass_UOwningPlayerInTotemRange, &UOwningPlayerInTotemRange::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UOwningPlayerInTotemRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOwningPlayerInTotemRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
