// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/TheMettleOfMan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheMettleOfMan() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTheMettleOfMan_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UTheMettleOfMan();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	DBDCOMPETENCE_API UEnum* Z_Construct_UEnum_DBDCompetence_ETheMettleOfManPhase();
// End Cross Module References
	DEFINE_FUNCTION(UTheMettleOfMan::execOnRep_CurrentPhase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CurrentPhase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheMettleOfMan::execOnRep_NumTokenSoFar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_NumTokenSoFar();
		P_NATIVE_END;
	}
	void UTheMettleOfMan::StaticRegisterNativesUTheMettleOfMan()
	{
		UClass* Class = UTheMettleOfMan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CurrentPhase", &UTheMettleOfMan::execOnRep_CurrentPhase },
			{ "OnRep_NumTokenSoFar", &UTheMettleOfMan::execOnRep_NumTokenSoFar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheMettleOfMan, nullptr, "OnRep_CurrentPhase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheMettleOfMan, nullptr, "OnRep_NumTokenSoFar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheMettleOfMan_NoRegister()
	{
		return UTheMettleOfMan::StaticClass();
	}
	struct Z_Construct_UClass_UTheMettleOfMan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealToKillerEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealToKillerEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentPhase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentPhase_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numTokenSoFar_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numTokenSoFar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mustBeInjured_MetaData[];
#endif
		static void NewProp__mustBeInjured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__mustBeInjured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealOutsideRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealOutsideRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tokenNeededToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__tokenNeededToActivate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheMettleOfMan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheMettleOfMan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheMettleOfMan_OnRep_CurrentPhase, "OnRep_CurrentPhase" }, // 145553664
		{ &Z_Construct_UFunction_UTheMettleOfMan_OnRep_NumTokenSoFar, "OnRep_NumTokenSoFar" }, // 3069689392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheMettleOfMan_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TheMettleOfMan.h" },
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealToKillerEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealToKillerEffect = { "_revealToKillerEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTheMettleOfMan, _revealToKillerEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealToKillerEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealToKillerEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__currentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__currentPhase = { "_currentPhase", "OnRep_CurrentPhase", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTheMettleOfMan, _currentPhase), Z_Construct_UEnum_DBDCompetence_ETheMettleOfManPhase, METADATA_PARAMS(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__currentPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__currentPhase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__currentPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__numTokenSoFar_MetaData[] = {
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__numTokenSoFar = { "_numTokenSoFar", "OnRep_NumTokenSoFar", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTheMettleOfMan, _numTokenSoFar), METADATA_PARAMS(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__numTokenSoFar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__numTokenSoFar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__mustBeInjured_MetaData[] = {
		{ "Category", "TheMettleOfMan" },
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	void Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__mustBeInjured_SetBit(void* Obj)
	{
		((UTheMettleOfMan*)Obj)->_mustBeInjured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__mustBeInjured = { "_mustBeInjured", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTheMettleOfMan), &Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__mustBeInjured_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__mustBeInjured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__mustBeInjured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealOutsideRange_MetaData[] = {
		{ "Category", "TheMettleOfMan" },
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealOutsideRange = { "_revealOutsideRange", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_revealOutsideRange, UTheMettleOfMan), STRUCT_OFFSET(UTheMettleOfMan, _revealOutsideRange), METADATA_PARAMS(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealOutsideRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealOutsideRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__tokenNeededToActivate_MetaData[] = {
		{ "Category", "TheMettleOfMan" },
		{ "ModuleRelativePath", "Public/TheMettleOfMan.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__tokenNeededToActivate = { "_tokenNeededToActivate", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_tokenNeededToActivate, UTheMettleOfMan), STRUCT_OFFSET(UTheMettleOfMan, _tokenNeededToActivate), METADATA_PARAMS(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__tokenNeededToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__tokenNeededToActivate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTheMettleOfMan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealToKillerEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__currentPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__currentPhase_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__numTokenSoFar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__mustBeInjured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__revealOutsideRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTheMettleOfMan_Statics::NewProp__tokenNeededToActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheMettleOfMan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheMettleOfMan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheMettleOfMan_Statics::ClassParams = {
		&UTheMettleOfMan::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTheMettleOfMan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTheMettleOfMan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheMettleOfMan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheMettleOfMan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheMettleOfMan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheMettleOfMan, 2734730945);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UTheMettleOfMan>()
	{
		return UTheMettleOfMan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheMettleOfMan(Z_Construct_UClass_UTheMettleOfMan, &UTheMettleOfMan::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UTheMettleOfMan"), false, nullptr, nullptr, nullptr);

	void UTheMettleOfMan::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__numTokenSoFar(TEXT("_numTokenSoFar"));
		static const FName Name__currentPhase(TEXT("_currentPhase"));

		const bool bIsValid = true
			&& Name__numTokenSoFar == ClassReps[(int32)ENetFields_Private::_numTokenSoFar].Property->GetFName()
			&& Name__currentPhase == ClassReps[(int32)ENetFields_Private::_currentPhase].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTheMettleOfMan"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheMettleOfMan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
