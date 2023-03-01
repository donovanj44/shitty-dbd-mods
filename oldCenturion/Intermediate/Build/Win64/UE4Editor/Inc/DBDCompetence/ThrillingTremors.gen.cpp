// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ThrillingTremors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrillingTremors() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UThrillingTremors_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UThrillingTremors();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UThrillingTremors::execOnRep_BlockedGenerators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockedGenerators();
		P_NATIVE_END;
	}
	void UThrillingTremors::StaticRegisterNativesUThrillingTremors()
	{
		UClass* Class = UThrillingTremors::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BlockedGenerators", &UThrillingTremors::execOnRep_BlockedGenerators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrillingTremors, nullptr, "OnRep_BlockedGenerators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThrillingTremors_NoRegister()
	{
		return UThrillingTremors::StaticClass();
	}
	struct Z_Construct_UClass_UThrillingTremors_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__revealedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealedGenerators_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disableWhenSurvivorPutDownOrUnhooked_MetaData[];
#endif
		static void NewProp__disableWhenSurvivorPutDownOrUnhooked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__disableWhenSurvivorPutDownOrUnhooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__durationByLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__durationByLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownByLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cooldownByLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrillingTremors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThrillingTremors_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThrillingTremors_OnRep_BlockedGenerators, "OnRep_BlockedGenerators" }, // 2303798174
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrillingTremors_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThrillingTremors.h" },
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrillingTremors_Statics::NewProp__revealedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__revealedGenerators = { "_revealedGenerators", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrillingTremors, _revealedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__revealedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__revealedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__revealedGenerators_Inner = { "_revealedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrillingTremors_Statics::NewProp__blockedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__blockedGenerators = { "_blockedGenerators", "OnRep_BlockedGenerators", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrillingTremors, _blockedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__blockedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__blockedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__blockedGenerators_Inner = { "_blockedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrillingTremors_Statics::NewProp__generatorAuraColorForKiller_MetaData[] = {
		{ "Category", "ThrillingTremors" },
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__generatorAuraColorForKiller = { "_generatorAuraColorForKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThrillingTremors, _generatorAuraColorForKiller), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__generatorAuraColorForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__generatorAuraColorForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrillingTremors_Statics::NewProp__disableWhenSurvivorPutDownOrUnhooked_MetaData[] = {
		{ "Category", "ThrillingTremors" },
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
	void Z_Construct_UClass_UThrillingTremors_Statics::NewProp__disableWhenSurvivorPutDownOrUnhooked_SetBit(void* Obj)
	{
		((UThrillingTremors*)Obj)->_disableWhenSurvivorPutDownOrUnhooked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__disableWhenSurvivorPutDownOrUnhooked = { "_disableWhenSurvivorPutDownOrUnhooked", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThrillingTremors), &Z_Construct_UClass_UThrillingTremors_Statics::NewProp__disableWhenSurvivorPutDownOrUnhooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__disableWhenSurvivorPutDownOrUnhooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__disableWhenSurvivorPutDownOrUnhooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrillingTremors_Statics::NewProp__durationByLevel_MetaData[] = {
		{ "Category", "ThrillingTremors" },
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__durationByLevel = { "_durationByLevel", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_durationByLevel, UThrillingTremors), STRUCT_OFFSET(UThrillingTremors, _durationByLevel), METADATA_PARAMS(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__durationByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__durationByLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrillingTremors_Statics::NewProp__cooldownByLevel_MetaData[] = {
		{ "Category", "ThrillingTremors" },
		{ "ModuleRelativePath", "Public/ThrillingTremors.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UThrillingTremors_Statics::NewProp__cooldownByLevel = { "_cooldownByLevel", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownByLevel, UThrillingTremors), STRUCT_OFFSET(UThrillingTremors, _cooldownByLevel), METADATA_PARAMS(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__cooldownByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::NewProp__cooldownByLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThrillingTremors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__revealedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__revealedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__blockedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__blockedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__generatorAuraColorForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__disableWhenSurvivorPutDownOrUnhooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__durationByLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThrillingTremors_Statics::NewProp__cooldownByLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrillingTremors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrillingTremors>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThrillingTremors_Statics::ClassParams = {
		&UThrillingTremors::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UThrillingTremors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UThrillingTremors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThrillingTremors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThrillingTremors()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThrillingTremors_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThrillingTremors, 2592365571);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UThrillingTremors>()
	{
		return UThrillingTremors::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThrillingTremors(Z_Construct_UClass_UThrillingTremors, &UThrillingTremors::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UThrillingTremors"), false, nullptr, nullptr, nullptr);

	void UThrillingTremors::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__blockedGenerators(TEXT("_blockedGenerators"));

		const bool bIsValid = true
			&& Name__blockedGenerators == ClassReps[(int32)ENetFields_Private::_blockedGenerators].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UThrillingTremors"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrillingTremors);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
