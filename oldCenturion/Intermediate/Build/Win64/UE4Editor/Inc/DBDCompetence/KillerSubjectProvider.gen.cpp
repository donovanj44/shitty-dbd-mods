// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/KillerSubjectProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerSubjectProvider() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UKillerSubjectProvider_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UKillerSubjectProvider();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierSubjectProvider();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerSubjectProvider::execRegisterWhenKillerSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterWhenKillerSet(Z_Param_killer);
		P_NATIVE_END;
	}
	void UKillerSubjectProvider::StaticRegisterNativesUKillerSubjectProvider()
	{
		UClass* Class = UKillerSubjectProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterWhenKillerSet", &UKillerSubjectProvider::execRegisterWhenKillerSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics
	{
		struct KillerSubjectProvider_eventRegisterWhenKillerSet_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerSubjectProvider_eventRegisterWhenKillerSet_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerSubjectProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerSubjectProvider, nullptr, "RegisterWhenKillerSet", nullptr, nullptr, sizeof(KillerSubjectProvider_eventRegisterWhenKillerSet_Parms), Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerSubjectProvider_NoRegister()
	{
		return UKillerSubjectProvider::StaticClass();
	}
	struct Z_Construct_UClass_UKillerSubjectProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerSubjectProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModifierSubjectProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerSubjectProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerSubjectProvider_RegisterWhenKillerSet, "RegisterWhenKillerSet" }, // 2782068057
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerSubjectProvider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerSubjectProvider.h" },
		{ "ModuleRelativePath", "Public/KillerSubjectProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerSubjectProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerSubjectProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerSubjectProvider_Statics::ClassParams = {
		&UKillerSubjectProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerSubjectProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerSubjectProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerSubjectProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerSubjectProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerSubjectProvider, 1122129832);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UKillerSubjectProvider>()
	{
		return UKillerSubjectProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerSubjectProvider(Z_Construct_UClass_UKillerSubjectProvider, &UKillerSubjectProvider::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UKillerSubjectProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerSubjectProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
