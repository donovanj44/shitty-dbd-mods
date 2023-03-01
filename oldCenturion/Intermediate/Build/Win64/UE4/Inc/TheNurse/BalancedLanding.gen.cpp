// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNurse/Public/BalancedLanding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalancedLanding() {}
// Cross Module References
	THENURSE_API UClass* Z_Construct_UClass_UBalancedLanding_NoRegister();
	THENURSE_API UClass* Z_Construct_UClass_UBalancedLanding();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheNurse();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBalancedLanding::execClient_UnvalidateBalanceLanding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_UnvalidateBalanceLanding_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBalancedLanding::execServer_WarnBalancedLandingPredicted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_WarnBalancedLandingPredicted_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UBalancedLanding_Client_UnvalidateBalanceLanding = FName(TEXT("Client_UnvalidateBalanceLanding"));
	void UBalancedLanding::Client_UnvalidateBalanceLanding()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBalancedLanding_Client_UnvalidateBalanceLanding),NULL);
	}
	static FName NAME_UBalancedLanding_Server_WarnBalancedLandingPredicted = FName(TEXT("Server_WarnBalancedLandingPredicted"));
	void UBalancedLanding::Server_WarnBalancedLandingPredicted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBalancedLanding_Server_WarnBalancedLandingPredicted),NULL);
	}
	void UBalancedLanding::StaticRegisterNativesUBalancedLanding()
	{
		UClass* Class = UBalancedLanding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_UnvalidateBalanceLanding", &UBalancedLanding::execClient_UnvalidateBalanceLanding },
			{ "Server_WarnBalancedLandingPredicted", &UBalancedLanding::execServer_WarnBalancedLandingPredicted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BalancedLanding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBalancedLanding, nullptr, "Client_UnvalidateBalanceLanding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BalancedLanding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBalancedLanding, nullptr, "Server_WarnBalancedLandingPredicted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBalancedLanding_NoRegister()
	{
		return UBalancedLanding::StaticClass();
	}
	struct Z_Construct_UClass_UBalancedLanding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__exhaustedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustionDurationPerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exhaustionDurationPerLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sprintDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__sprintDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBalancedLanding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNurse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBalancedLanding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBalancedLanding_Client_UnvalidateBalanceLanding, "Client_UnvalidateBalanceLanding" }, // 1134192367
		{ &Z_Construct_UFunction_UBalancedLanding_Server_WarnBalancedLandingPredicted, "Server_WarnBalancedLandingPredicted" }, // 1254287351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBalancedLanding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BalancedLanding.h" },
		{ "ModuleRelativePath", "Public/BalancedLanding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustedEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BalancedLanding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustedEffect = { "_exhaustedEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBalancedLanding, _exhaustedEffect), Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustionDurationPerLevel_MetaData[] = {
		{ "Category", "BalancedLanding" },
		{ "ModuleRelativePath", "Public/BalancedLanding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustionDurationPerLevel = { "_exhaustionDurationPerLevel", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exhaustionDurationPerLevel, UBalancedLanding), STRUCT_OFFSET(UBalancedLanding, _exhaustionDurationPerLevel), METADATA_PARAMS(Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustionDurationPerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustionDurationPerLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBalancedLanding_Statics::NewProp__sprintDuration_MetaData[] = {
		{ "Category", "BalancedLanding" },
		{ "ModuleRelativePath", "Public/BalancedLanding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBalancedLanding_Statics::NewProp__sprintDuration = { "_sprintDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBalancedLanding, _sprintDuration), METADATA_PARAMS(Z_Construct_UClass_UBalancedLanding_Statics::NewProp__sprintDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBalancedLanding_Statics::NewProp__sprintDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBalancedLanding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBalancedLanding_Statics::NewProp__exhaustionDurationPerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBalancedLanding_Statics::NewProp__sprintDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBalancedLanding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBalancedLanding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBalancedLanding_Statics::ClassParams = {
		&UBalancedLanding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBalancedLanding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBalancedLanding_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBalancedLanding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBalancedLanding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBalancedLanding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBalancedLanding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBalancedLanding, 1983348255);
	template<> THENURSE_API UClass* StaticClass<UBalancedLanding>()
	{
		return UBalancedLanding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBalancedLanding(Z_Construct_UClass_UBalancedLanding, &UBalancedLanding::StaticClass, TEXT("/Script/TheNurse"), TEXT("UBalancedLanding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBalancedLanding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
