// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/CorruptIntervention.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorruptIntervention() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCorruptIntervention_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UCorruptIntervention();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UCorruptIntervention::execLocal_OnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Local_OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorruptIntervention::execOnRep_BlockedGenerators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockedGenerators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorruptIntervention::execServer_ActivatePerk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_ActivatePerk_Validate())
		{
			RPC_ValidateFailed(TEXT("Server_ActivatePerk_Validate"));
			return;
		}
		P_THIS->Server_ActivatePerk_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCorruptIntervention_Server_ActivatePerk = FName(TEXT("Server_ActivatePerk"));
	void UCorruptIntervention::Server_ActivatePerk()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCorruptIntervention_Server_ActivatePerk),NULL);
	}
	void UCorruptIntervention::StaticRegisterNativesUCorruptIntervention()
	{
		UClass* Class = UCorruptIntervention::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Local_OnIntroCompleted", &UCorruptIntervention::execLocal_OnIntroCompleted },
			{ "OnRep_BlockedGenerators", &UCorruptIntervention::execOnRep_BlockedGenerators },
			{ "Server_ActivatePerk", &UCorruptIntervention::execServer_ActivatePerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorruptIntervention, nullptr, "Local_OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorruptIntervention, nullptr, "OnRep_BlockedGenerators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorruptIntervention, nullptr, "Server_ActivatePerk", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorruptIntervention_NoRegister()
	{
		return UCorruptIntervention::StaticClass();
	}
	struct Z_Construct_UClass_UCorruptIntervention_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__blockedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blockedGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorAuraColorForKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__generatorAuraColorForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorBlockDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__generatorBlockDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockedGeneratorCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__blockedGeneratorCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorruptIntervention_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorruptIntervention_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorruptIntervention_Local_OnIntroCompleted, "Local_OnIntroCompleted" }, // 2450419968
		{ &Z_Construct_UFunction_UCorruptIntervention_OnRep_BlockedGenerators, "OnRep_BlockedGenerators" }, // 4261539889
		{ &Z_Construct_UFunction_UCorruptIntervention_Server_ActivatePerk, "Server_ActivatePerk" }, // 3828566937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptIntervention_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorruptIntervention.h" },
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGenerators = { "_blockedGenerators", "OnRep_BlockedGenerators", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorruptIntervention, _blockedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGenerators_Inner = { "_blockedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorAuraColorForKiller_MetaData[] = {
		{ "Category", "CorruptIntervention" },
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorAuraColorForKiller = { "_generatorAuraColorForKiller", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorruptIntervention, _generatorAuraColorForKiller), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorAuraColorForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorAuraColorForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorBlockDuration_MetaData[] = {
		{ "Category", "CorruptIntervention" },
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorBlockDuration = { "_generatorBlockDuration", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_generatorBlockDuration, UCorruptIntervention), STRUCT_OFFSET(UCorruptIntervention, _generatorBlockDuration), METADATA_PARAMS(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorBlockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorBlockDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGeneratorCount_MetaData[] = {
		{ "Category", "CorruptIntervention" },
		{ "ModuleRelativePath", "Public/CorruptIntervention.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGeneratorCount = { "_blockedGeneratorCount", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_blockedGeneratorCount, UCorruptIntervention), STRUCT_OFFSET(UCorruptIntervention, _blockedGeneratorCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGeneratorCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGeneratorCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorruptIntervention_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorAuraColorForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__generatorBlockDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorruptIntervention_Statics::NewProp__blockedGeneratorCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorruptIntervention_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorruptIntervention>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorruptIntervention_Statics::ClassParams = {
		&UCorruptIntervention::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorruptIntervention_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptIntervention_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCorruptIntervention_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptIntervention_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorruptIntervention()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorruptIntervention_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorruptIntervention, 613848821);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UCorruptIntervention>()
	{
		return UCorruptIntervention::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorruptIntervention(Z_Construct_UClass_UCorruptIntervention, &UCorruptIntervention::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UCorruptIntervention"), false, nullptr, nullptr, nullptr);

	void UCorruptIntervention::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__blockedGenerators(TEXT("_blockedGenerators"));

		const bool bIsValid = true
			&& Name__blockedGenerators == ClassReps[(int32)ENetFields_Private::_blockedGenerators].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCorruptIntervention"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorruptIntervention);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
