// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGunslinger/Public/Gearhead.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGearhead() {}
// Cross Module References
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGearhead_NoRegister();
	THEGUNSLINGER_API UClass* Z_Construct_UClass_UGearhead();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheGunslinger();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AGenerator_NoRegister();
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFastTimer();
// End Cross Module References
	DEFINE_FUNCTION(UGearhead::execOnRep_RevealedGenerators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RevealedGenerators();
		P_NATIVE_END;
	}
	void UGearhead::StaticRegisterNativesUGearhead()
	{
		UClass* Class = UGearhead::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_RevealedGenerators", &UGearhead::execOnRep_RevealedGenerators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGearhead, nullptr, "OnRep_RevealedGenerators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGearhead_NoRegister()
	{
		return UGearhead::StaticClass();
	}
	struct Z_Construct_UClass_UGearhead_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__local_revealedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__local_revealedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__local_revealedGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__revealedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__revealedGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__markedGenerators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__markedGenerators;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__markedGenerators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timersBeforeUnreveal_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__timersBeforeUnreveal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__timersBeforeUnreveal_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timersBeforeUnreveal_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numAttacksBeforeActivation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numAttacksBeforeActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attacksNeededToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__attacksNeededToActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minimumAuraRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minimumAuraRevealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__basicAttack_MetaData[];
#endif
		static void NewProp__basicAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__basicAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__greatSkillCheck_MetaData[];
#endif
		static void NewProp__greatSkillCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__greatSkillCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkActivationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__perkActivationDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGearhead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheGunslinger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGearhead_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGearhead_OnRep_RevealedGenerators, "OnRep_RevealedGenerators" }, // 4240027340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gearhead.h" },
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__local_revealedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__local_revealedGenerators = { "_local_revealedGenerators", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearhead, _local_revealedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__local_revealedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__local_revealedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__local_revealedGenerators_Inner = { "_local_revealedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__revealedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__revealedGenerators = { "_revealedGenerators", "OnRep_RevealedGenerators", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearhead, _revealedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__revealedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__revealedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__revealedGenerators_Inner = { "_revealedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__markedGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__markedGenerators = { "_markedGenerators", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearhead, _markedGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__markedGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__markedGenerators_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__markedGenerators_Inner = { "_markedGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal = { "_timersBeforeUnreveal", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearhead, _timersBeforeUnreveal), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal_Key_KeyProp = { "_timersBeforeUnreveal_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal_ValueProp = { "_timersBeforeUnreveal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFastTimer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__numAttacksBeforeActivation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__numAttacksBeforeActivation = { "_numAttacksBeforeActivation", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearhead, _numAttacksBeforeActivation), METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__numAttacksBeforeActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__numAttacksBeforeActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__attacksNeededToActivate_MetaData[] = {
		{ "Category", "Gearhead" },
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__attacksNeededToActivate = { "_attacksNeededToActivate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearhead, _attacksNeededToActivate), METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__attacksNeededToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__attacksNeededToActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__minimumAuraRevealDuration_MetaData[] = {
		{ "Category", "Gearhead" },
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__minimumAuraRevealDuration = { "_minimumAuraRevealDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGearhead, _minimumAuraRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__minimumAuraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__minimumAuraRevealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__basicAttack_MetaData[] = {
		{ "Category", "Gearhead" },
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	void Z_Construct_UClass_UGearhead_Statics::NewProp__basicAttack_SetBit(void* Obj)
	{
		((UGearhead*)Obj)->_basicAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__basicAttack = { "_basicAttack", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGearhead), &Z_Construct_UClass_UGearhead_Statics::NewProp__basicAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__basicAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__basicAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__greatSkillCheck_MetaData[] = {
		{ "Category", "Gearhead" },
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	void Z_Construct_UClass_UGearhead_Statics::NewProp__greatSkillCheck_SetBit(void* Obj)
	{
		((UGearhead*)Obj)->_greatSkillCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__greatSkillCheck = { "_greatSkillCheck", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGearhead), &Z_Construct_UClass_UGearhead_Statics::NewProp__greatSkillCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__greatSkillCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__greatSkillCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGearhead_Statics::NewProp__perkActivationDuration_MetaData[] = {
		{ "Category", "Gearhead" },
		{ "ModuleRelativePath", "Public/Gearhead.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGearhead_Statics::NewProp__perkActivationDuration = { "_perkActivationDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_perkActivationDuration, UGearhead), STRUCT_OFFSET(UGearhead, _perkActivationDuration), METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::NewProp__perkActivationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::NewProp__perkActivationDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGearhead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__local_revealedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__local_revealedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__revealedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__revealedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__markedGenerators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__markedGenerators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__timersBeforeUnreveal_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__numAttacksBeforeActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__attacksNeededToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__minimumAuraRevealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__basicAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__greatSkillCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGearhead_Statics::NewProp__perkActivationDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGearhead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGearhead>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGearhead_Statics::ClassParams = {
		&UGearhead::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGearhead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGearhead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGearhead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGearhead()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGearhead_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGearhead, 2390949679);
	template<> THEGUNSLINGER_API UClass* StaticClass<UGearhead>()
	{
		return UGearhead::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGearhead(Z_Construct_UClass_UGearhead, &UGearhead::StaticClass, TEXT("/Script/TheGunslinger"), TEXT("UGearhead"), false, nullptr, nullptr, nullptr);

	void UGearhead::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__numAttacksBeforeActivation(TEXT("_numAttacksBeforeActivation"));
		static const FName Name__revealedGenerators(TEXT("_revealedGenerators"));

		const bool bIsValid = true
			&& Name__numAttacksBeforeActivation == ClassReps[(int32)ENetFields_Private::_numAttacksBeforeActivation].Property->GetFName()
			&& Name__revealedGenerators == ClassReps[(int32)ENetFields_Private::_revealedGenerators].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGearhead"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGearhead);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
