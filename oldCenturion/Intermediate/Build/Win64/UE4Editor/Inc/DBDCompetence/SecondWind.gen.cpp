// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SecondWind.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWind() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USecondWind_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USecondWind();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DBDCOMPETENCE_API UEnum* Z_Construct_UEnum_DBDCompetence_ESecondWindState();
// End Cross Module References
	void USecondWind::StaticRegisterNativesUSecondWind()
	{
	}
	UClass* Z_Construct_UClass_USecondWind_NoRegister()
	{
		return USecondWind::StaticClass();
	}
	struct Z_Construct_UClass_USecondWind_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__applyBrokenEffect_MetaData[];
#endif
		static void NewProp__applyBrokenEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__applyBrokenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__durationOfHeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__durationOfHeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberOfHealStateToHealToActivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__numberOfHealStateToHealToActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__amountHealed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__amountHealed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__currentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__currentState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USecondWind_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondWind_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SecondWind.h" },
		{ "ModuleRelativePath", "Public/SecondWind.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondWind_Statics::NewProp__applyBrokenEffect_MetaData[] = {
		{ "Category", "SecondWind" },
		{ "ModuleRelativePath", "Public/SecondWind.h" },
	};
#endif
	void Z_Construct_UClass_USecondWind_Statics::NewProp__applyBrokenEffect_SetBit(void* Obj)
	{
		((USecondWind*)Obj)->_applyBrokenEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USecondWind_Statics::NewProp__applyBrokenEffect = { "_applyBrokenEffect", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USecondWind), &Z_Construct_UClass_USecondWind_Statics::NewProp__applyBrokenEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_USecondWind_Statics::NewProp__applyBrokenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondWind_Statics::NewProp__applyBrokenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondWind_Statics::NewProp__durationOfHeal_MetaData[] = {
		{ "Category", "SecondWind" },
		{ "ModuleRelativePath", "Public/SecondWind.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecondWind_Statics::NewProp__durationOfHeal = { "_durationOfHeal", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_durationOfHeal, USecondWind), STRUCT_OFFSET(USecondWind, _durationOfHeal), METADATA_PARAMS(Z_Construct_UClass_USecondWind_Statics::NewProp__durationOfHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondWind_Statics::NewProp__durationOfHeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondWind_Statics::NewProp__numberOfHealStateToHealToActivate_MetaData[] = {
		{ "Category", "SecondWind" },
		{ "ModuleRelativePath", "Public/SecondWind.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecondWind_Statics::NewProp__numberOfHealStateToHealToActivate = { "_numberOfHealStateToHealToActivate", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_numberOfHealStateToHealToActivate, USecondWind), STRUCT_OFFSET(USecondWind, _numberOfHealStateToHealToActivate), METADATA_PARAMS(Z_Construct_UClass_USecondWind_Statics::NewProp__numberOfHealStateToHealToActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondWind_Statics::NewProp__numberOfHealStateToHealToActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondWind_Statics::NewProp__amountHealed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SecondWind.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecondWind_Statics::NewProp__amountHealed = { "_amountHealed", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USecondWind, _amountHealed), METADATA_PARAMS(Z_Construct_UClass_USecondWind_Statics::NewProp__amountHealed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondWind_Statics::NewProp__amountHealed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondWind_Statics::NewProp__currentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/SecondWind.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USecondWind_Statics::NewProp__currentState = { "_currentState", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USecondWind, _currentState), Z_Construct_UEnum_DBDCompetence_ESecondWindState, METADATA_PARAMS(Z_Construct_UClass_USecondWind_Statics::NewProp__currentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondWind_Statics::NewProp__currentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USecondWind_Statics::NewProp__currentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecondWind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWind_Statics::NewProp__applyBrokenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWind_Statics::NewProp__durationOfHeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWind_Statics::NewProp__numberOfHealStateToHealToActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWind_Statics::NewProp__amountHealed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWind_Statics::NewProp__currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWind_Statics::NewProp__currentState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USecondWind_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondWind>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USecondWind_Statics::ClassParams = {
		&USecondWind::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USecondWind_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USecondWind_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USecondWind_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USecondWind_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USecondWind()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USecondWind_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USecondWind, 690926301);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USecondWind>()
	{
		return USecondWind::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USecondWind(Z_Construct_UClass_USecondWind, &USecondWind::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USecondWind"), false, nullptr, nullptr, nullptr);

	void USecondWind::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__currentState(TEXT("_currentState"));
		static const FName Name__amountHealed(TEXT("_amountHealed"));

		const bool bIsValid = true
			&& Name__currentState == ClassReps[(int32)ENetFields_Private::_currentState].Property->GetFName()
			&& Name__amountHealed == ClassReps[(int32)ENetFields_Private::_amountHealed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USecondWind"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USecondWind);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
