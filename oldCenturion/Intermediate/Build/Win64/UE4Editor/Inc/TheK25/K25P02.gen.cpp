// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25P02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25P02() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25P02_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25P02();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FDBDPlayerTotemPair();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25P02::execOnRep_CursedSurvivors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CursedSurvivors();
		P_NATIVE_END;
	}
	void UK25P02::StaticRegisterNativesUK25P02()
	{
		UClass* Class = UK25P02::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CursedSurvivors", &UK25P02::execOnRep_CursedSurvivors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25P02, nullptr, "OnRep_CursedSurvivors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25P02_NoRegister()
	{
		return UK25P02::StaticClass();
	}
	struct Z_Construct_UClass_UK25P02_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lastPlayerTotemPair_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__lastPlayerTotemPair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__previouslyBoundTotems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__previouslyBoundTotems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__previouslyBoundTotems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hookedSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedSurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cursedSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cursedSurvivors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cursedSurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemBlockerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__totemBlockerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemBlockerHasLifetime_MetaData[];
#endif
		static void NewProp__totemBlockerHasLifetime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__totemBlockerHasLifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__totemAuraRevealRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__totemAuraRevealRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25P02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHexPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25P02_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25P02_OnRep_CursedSurvivors, "OnRep_CursedSurvivors" }, // 2077339204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25P02.h" },
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::NewProp__lastPlayerTotemPair_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__lastPlayerTotemPair = { "_lastPlayerTotemPair", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P02, _lastPlayerTotemPair), Z_Construct_UScriptStruct_FDBDPlayerTotemPair, METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::NewProp__lastPlayerTotemPair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::NewProp__lastPlayerTotemPair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::NewProp__previouslyBoundTotems_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__previouslyBoundTotems = { "_previouslyBoundTotems", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P02, _previouslyBoundTotems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::NewProp__previouslyBoundTotems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::NewProp__previouslyBoundTotems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__previouslyBoundTotems_Inner = { "_previouslyBoundTotems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::NewProp__hookedSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__hookedSurvivors = { "_hookedSurvivors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P02, _hookedSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::NewProp__hookedSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::NewProp__hookedSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__hookedSurvivors_Inner = { "_hookedSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::NewProp__cursedSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__cursedSurvivors = { "_cursedSurvivors", "OnRep_CursedSurvivors", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25P02, _cursedSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::NewProp__cursedSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::NewProp__cursedSurvivors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__cursedSurvivors_Inner = { "_cursedSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDBDPlayerTotemPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerDuration_MetaData[] = {
		{ "Category", "K25P02" },
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerDuration = { "_totemBlockerDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_totemBlockerDuration, UK25P02), STRUCT_OFFSET(UK25P02, _totemBlockerDuration), METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerHasLifetime_MetaData[] = {
		{ "Category", "K25P02" },
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	void Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerHasLifetime_SetBit(void* Obj)
	{
		((UK25P02*)Obj)->_totemBlockerHasLifetime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerHasLifetime = { "_totemBlockerHasLifetime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25P02), &Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerHasLifetime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerHasLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerHasLifetime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25P02_Statics::NewProp__totemAuraRevealRadius_MetaData[] = {
		{ "Category", "K25P02" },
		{ "ModuleRelativePath", "Public/K25P02.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25P02_Statics::NewProp__totemAuraRevealRadius = { "_totemAuraRevealRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_totemAuraRevealRadius, UK25P02), STRUCT_OFFSET(UK25P02, _totemAuraRevealRadius), METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::NewProp__totemAuraRevealRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::NewProp__totemAuraRevealRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25P02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__lastPlayerTotemPair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__previouslyBoundTotems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__previouslyBoundTotems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__hookedSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__hookedSurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__cursedSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__cursedSurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__totemBlockerHasLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25P02_Statics::NewProp__totemAuraRevealRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25P02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25P02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25P02_Statics::ClassParams = {
		&UK25P02::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25P02_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25P02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25P02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25P02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25P02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25P02, 2255414104);
	template<> THEK25_API UClass* StaticClass<UK25P02>()
	{
		return UK25P02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25P02(Z_Construct_UClass_UK25P02, &UK25P02::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25P02"), false, nullptr, nullptr, nullptr);

	void UK25P02::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__cursedSurvivors(TEXT("_cursedSurvivors"));

		const bool bIsValid = true
			&& Name__cursedSurvivors == ClassReps[(int32)ENetFields_Private::_cursedSurvivors].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK25P02"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25P02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
