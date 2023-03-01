// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DoesPerkHaveToken.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoesPerkHaveToken() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDoesPerkHaveToken_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDoesPerkHaveToken();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDoesPerkHaveToken::execOnRep_Perk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Perk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDoesPerkHaveToken::execSetPerk)
	{
		P_GET_OBJECT(UPerk,Z_Param_perk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPerk(Z_Param_perk);
		P_NATIVE_END;
	}
	void UDoesPerkHaveToken::StaticRegisterNativesUDoesPerkHaveToken()
	{
		UClass* Class = UDoesPerkHaveToken::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Perk", &UDoesPerkHaveToken::execOnRep_Perk },
			{ "SetPerk", &UDoesPerkHaveToken::execSetPerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoesPerkHaveToken.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoesPerkHaveToken, nullptr, "OnRep_Perk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics
	{
		struct DoesPerkHaveToken_eventSetPerk_Parms
		{
			UPerk* perk;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_perk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::NewProp_perk_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::NewProp_perk = { "perk", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoesPerkHaveToken_eventSetPerk_Parms, perk), Z_Construct_UClass_UPerk_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::NewProp_perk_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::NewProp_perk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::NewProp_perk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DoesPerkHaveToken.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDoesPerkHaveToken, nullptr, "SetPerk", nullptr, nullptr, sizeof(DoesPerkHaveToken_eventSetPerk_Parms), Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDoesPerkHaveToken_NoRegister()
	{
		return UDoesPerkHaveToken::StaticClass();
	}
	struct Z_Construct_UClass_UDoesPerkHaveToken_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perk_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__perk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoesPerkHaveToken_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDoesPerkHaveToken_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDoesPerkHaveToken_OnRep_Perk, "OnRep_Perk" }, // 3593183065
		{ &Z_Construct_UFunction_UDoesPerkHaveToken_SetPerk, "SetPerk" }, // 4092716276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoesPerkHaveToken_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoesPerkHaveToken.h" },
		{ "ModuleRelativePath", "Public/DoesPerkHaveToken.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoesPerkHaveToken_Statics::NewProp__perk_MetaData[] = {
		{ "ModuleRelativePath", "Public/DoesPerkHaveToken.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDoesPerkHaveToken_Statics::NewProp__perk = { "_perk", "OnRep_Perk", (EPropertyFlags)0x0044000100082028, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoesPerkHaveToken, _perk), Z_Construct_UClass_UPerk_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoesPerkHaveToken_Statics::NewProp__perk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoesPerkHaveToken_Statics::NewProp__perk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoesPerkHaveToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoesPerkHaveToken_Statics::NewProp__perk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoesPerkHaveToken_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoesPerkHaveToken>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDoesPerkHaveToken_Statics::ClassParams = {
		&UDoesPerkHaveToken::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDoesPerkHaveToken_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoesPerkHaveToken_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoesPerkHaveToken_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoesPerkHaveToken_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoesPerkHaveToken()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDoesPerkHaveToken_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDoesPerkHaveToken, 1489947946);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDoesPerkHaveToken>()
	{
		return UDoesPerkHaveToken::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDoesPerkHaveToken(Z_Construct_UClass_UDoesPerkHaveToken, &UDoesPerkHaveToken::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDoesPerkHaveToken"), false, nullptr, nullptr, nullptr);

	void UDoesPerkHaveToken::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__perk(TEXT("_perk"));

		const bool bIsValid = true
			&& Name__perk == ClassReps[(int32)ENetFields_Private::_perk].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDoesPerkHaveToken"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoesPerkHaveToken);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
