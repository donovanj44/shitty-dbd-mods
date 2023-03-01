// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/PlayerIsInExitArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerIsInExitArea() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPlayerIsInExitArea_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPlayerIsInExitArea();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerIsInExitArea::execPlayerEnterExitArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerEnterExitArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerIsInExitArea::execPlayerExitExitArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerExitExitArea();
		P_NATIVE_END;
	}
	void UPlayerIsInExitArea::StaticRegisterNativesUPlayerIsInExitArea()
	{
		UClass* Class = UPlayerIsInExitArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerEnterExitArea", &UPlayerIsInExitArea::execPlayerEnterExitArea },
			{ "PlayerExitExitArea", &UPlayerIsInExitArea::execPlayerExitExitArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerIsInExitArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerIsInExitArea, nullptr, "PlayerEnterExitArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerIsInExitArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerIsInExitArea, nullptr, "PlayerExitExitArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerIsInExitArea_NoRegister()
	{
		return UPlayerIsInExitArea::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerIsInExitArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerIsInExitArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerIsInExitArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerIsInExitArea_PlayerEnterExitArea, "PlayerEnterExitArea" }, // 3803058561
		{ &Z_Construct_UFunction_UPlayerIsInExitArea_PlayerExitExitArea, "PlayerExitExitArea" }, // 1672683866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerIsInExitArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerIsInExitArea.h" },
		{ "ModuleRelativePath", "Public/PlayerIsInExitArea.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerIsInExitArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerIsInExitArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerIsInExitArea_Statics::ClassParams = {
		&UPlayerIsInExitArea::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerIsInExitArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerIsInExitArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerIsInExitArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerIsInExitArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerIsInExitArea, 1612664921);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UPlayerIsInExitArea>()
	{
		return UPlayerIsInExitArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerIsInExitArea(Z_Construct_UClass_UPlayerIsInExitArea, &UPlayerIsInExitArea::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UPlayerIsInExitArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerIsInExitArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
