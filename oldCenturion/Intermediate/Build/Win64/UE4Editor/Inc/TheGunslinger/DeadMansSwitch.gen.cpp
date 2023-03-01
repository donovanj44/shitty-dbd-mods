// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/DeadMansSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadMansSwitch() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UDeadMansSwitch_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UDeadMansSwitch();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDeadMansSwitch::execOnRep_BlockedGenerators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockedGenerators();
		P_NATIVE_END;
	}
	void UDeadMansSwitch::StaticRegisterNativesUDeadMansSwitch()
	{
		UClass* Class = UDeadMansSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_BlockedGenerators", &UDeadMansSwitch::execOnRep_BlockedGenerators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeadMansSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeadMansSwitch, nullptr, "OnRep_BlockedGenerators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeadMansSwitch_NoRegister()
	{
		return UDeadMansSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UDeadMansSwitch_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__anySurvivorLetGo_MetaData[];
#endif
		static void NewProp__anySurvivorLetGo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__anySurvivorLetGo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationDurationByLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__activationDurationByLevels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadMansSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeadMansSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeadMansSwitch_OnRep_BlockedGenerators, "OnRep_BlockedGenerators" }, // 2333529993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadMansSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeadMansSwitch.h" },
		{ "ModuleRelativePath", "Public/DeadMansSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__blockedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeadMansSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__blockedGenerators = { "_blockedGenerators", "OnRep_BlockedGenerators", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeadMansSwitch, _blockedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__blockedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__blockedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__blockedGenerators_Inner = { "_blockedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__anySurvivorLetGo_MetaData[] = {
		{ "Category", "DeadMansSwitch" },
		{ "ModuleRelativePath", "Public/DeadMansSwitch.h" },
	};
#endif
	void Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__anySurvivorLetGo_SetBit(void* Obj)
	{
		((UDeadMansSwitch*)Obj)->_anySurvivorLetGo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__anySurvivorLetGo = { "_anySurvivorLetGo", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDeadMansSwitch), &Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__anySurvivorLetGo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__anySurvivorLetGo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__anySurvivorLetGo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__activationDurationByLevels_MetaData[] = {
		{ "Category", "DeadMansSwitch" },
		{ "ModuleRelativePath", "Public/DeadMansSwitch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__activationDurationByLevels = { "_activationDurationByLevels", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_activationDurationByLevels, UDeadMansSwitch), STRUCT_OFFSET(UDeadMansSwitch, _activationDurationByLevels), METADATA_PARAMS(Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__activationDurationByLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__activationDurationByLevels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeadMansSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__blockedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__blockedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__anySurvivorLetGo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeadMansSwitch_Statics::NewProp__activationDurationByLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadMansSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadMansSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadMansSwitch_Statics::ClassParams = {
		&UDeadMansSwitch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeadMansSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeadMansSwitch_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeadMansSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadMansSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadMansSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadMansSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadMansSwitch, 3357442653);
	template<> THEGUNSLINGER_API UClass* StaticClass<UDeadMansSwitch>()
	{
		return UDeadMansSwitch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadMansSwitch(Z_Construct_UClass_UDeadMansSwitch, &UDeadMansSwitch::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UDeadMansSwitch"), false, nullptr, nullptr, nullptr);

	void UDeadMansSwitch::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__blockedGenerators(TEXT("_blockedGenerators"));

		const bool bIsValid = true
			&& Name__blockedGenerators == ClassReps[(int32)ENetFields_Private::_blockedGenerators].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDeadMansSwitch"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadMansSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
