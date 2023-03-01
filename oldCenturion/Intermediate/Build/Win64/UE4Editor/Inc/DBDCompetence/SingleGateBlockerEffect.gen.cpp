// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SingleGateBlockerEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleGateBlockerEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USingleGateBlockerEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USingleGateBlockerEffect();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UGateBlockerEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeDoor_NoRegister();
// End Cross Module References
	void USingleGateBlockerEffect::StaticRegisterNativesUSingleGateBlockerEffect()
	{
	}
	UClass* Z_Construct_UClass_USingleGateBlockerEffect_NoRegister()
	{
		return USingleGateBlockerEffect::StaticClass();
	}
	struct Z_Construct_UClass_USingleGateBlockerEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInRange_MetaData[];
#endif
		static void NewProp__isInRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__distanceThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleGateBlockerEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGateBlockerEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleGateBlockerEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingleGateBlockerEffect.h" },
		{ "ModuleRelativePath", "Public/SingleGateBlockerEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__isInRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/SingleGateBlockerEffect.h" },
	};
#endif
	void Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__isInRange_SetBit(void* Obj)
	{
		((USingleGateBlockerEffect*)Obj)->_isInRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__isInRange = { "_isInRange", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USingleGateBlockerEffect), &Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__isInRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__isInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__isInRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__gate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SingleGateBlockerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__gate = { "_gate", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USingleGateBlockerEffect, _gate), Z_Construct_UClass_AEscapeDoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__gate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__gate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__distanceThreshold_MetaData[] = {
		{ "Category", "SingleGateBlockerEffect" },
		{ "ModuleRelativePath", "Public/SingleGateBlockerEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__distanceThreshold = { "_distanceThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USingleGateBlockerEffect, _distanceThreshold), METADATA_PARAMS(Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__distanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__distanceThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleGateBlockerEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__isInRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__gate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleGateBlockerEffect_Statics::NewProp__distanceThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleGateBlockerEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleGateBlockerEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingleGateBlockerEffect_Statics::ClassParams = {
		&USingleGateBlockerEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleGateBlockerEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleGateBlockerEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USingleGateBlockerEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleGateBlockerEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleGateBlockerEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingleGateBlockerEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingleGateBlockerEffect, 3819633046);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USingleGateBlockerEffect>()
	{
		return USingleGateBlockerEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingleGateBlockerEffect(Z_Construct_UClass_USingleGateBlockerEffect, &USingleGateBlockerEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USingleGateBlockerEffect"), false, nullptr, nullptr, nullptr);

	void USingleGateBlockerEffect::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isInRange(TEXT("_isInRange"));

		const bool bIsValid = true
			&& Name__isInRange == ClassReps[(int32)ENetFields_Private::_isInRange].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USingleGateBlockerEffect"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleGateBlockerEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
