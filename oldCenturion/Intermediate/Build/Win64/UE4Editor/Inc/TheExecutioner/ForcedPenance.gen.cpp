// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/ForcedPenance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForcedPenance() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UForcedPenance_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UForcedPenance();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	void UForcedPenance::StaticRegisterNativesUForcedPenance()
	{
	}
	UClass* Z_Construct_UClass_UForcedPenance_NoRegister()
	{
		return UForcedPenance::StaticClass();
	}
	struct Z_Construct_UClass_UForcedPenance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperBrokenEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__camperBrokenEffects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperBrokenEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperObliviousEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__camperObliviousEffects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__camperObliviousEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__applyBroken_MetaData[];
#endif
		static void NewProp__applyBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__applyBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__applyOblivious_MetaData[];
#endif
		static void NewProp__applyOblivious_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__applyOblivious;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkActivationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__perkActivationDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForcedPenance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForcedPenance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ForcedPenance.h" },
		{ "ModuleRelativePath", "Public/ForcedPenance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperBrokenEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ForcedPenance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperBrokenEffects = { "_camperBrokenEffects", nullptr, (EPropertyFlags)0x0040008000002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForcedPenance, _camperBrokenEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperBrokenEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperBrokenEffects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperBrokenEffects_Inner = { "_camperBrokenEffects", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperObliviousEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ForcedPenance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperObliviousEffects = { "_camperObliviousEffects", nullptr, (EPropertyFlags)0x0040008000002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForcedPenance, _camperObliviousEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperObliviousEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperObliviousEffects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperObliviousEffects_Inner = { "_camperObliviousEffects", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyBroken_MetaData[] = {
		{ "Category", "ForcedPenance" },
		{ "ModuleRelativePath", "Public/ForcedPenance.h" },
	};
#endif
	void Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyBroken_SetBit(void* Obj)
	{
		((UForcedPenance*)Obj)->_applyBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyBroken = { "_applyBroken", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UForcedPenance), &Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyBroken_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyOblivious_MetaData[] = {
		{ "Category", "ForcedPenance" },
		{ "ModuleRelativePath", "Public/ForcedPenance.h" },
	};
#endif
	void Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyOblivious_SetBit(void* Obj)
	{
		((UForcedPenance*)Obj)->_applyOblivious = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyOblivious = { "_applyOblivious", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UForcedPenance), &Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyOblivious_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyOblivious_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyOblivious_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForcedPenance_Statics::NewProp__perkActivationDuration_MetaData[] = {
		{ "Category", "ForcedPenance" },
		{ "ModuleRelativePath", "Public/ForcedPenance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForcedPenance_Statics::NewProp__perkActivationDuration = { "_perkActivationDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_perkActivationDuration, UForcedPenance), STRUCT_OFFSET(UForcedPenance, _perkActivationDuration), METADATA_PARAMS(Z_Construct_UClass_UForcedPenance_Statics::NewProp__perkActivationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForcedPenance_Statics::NewProp__perkActivationDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForcedPenance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperBrokenEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperBrokenEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperObliviousEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForcedPenance_Statics::NewProp__camperObliviousEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForcedPenance_Statics::NewProp__applyOblivious,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForcedPenance_Statics::NewProp__perkActivationDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForcedPenance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForcedPenance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForcedPenance_Statics::ClassParams = {
		&UForcedPenance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UForcedPenance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UForcedPenance_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UForcedPenance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForcedPenance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForcedPenance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForcedPenance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForcedPenance, 1078730965);
	template<> THEEXECUTIONER_API UClass* StaticClass<UForcedPenance>()
	{
		return UForcedPenance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForcedPenance(Z_Construct_UClass_UForcedPenance, &UForcedPenance::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UForcedPenance"), false, nullptr, nullptr, nullptr);

	void UForcedPenance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__camperObliviousEffects(TEXT("_camperObliviousEffects"));
		static const FName Name__camperBrokenEffects(TEXT("_camperBrokenEffects"));

		const bool bIsValid = true
			&& Name__camperObliviousEffects == ClassReps[(int32)ENetFields_Private::_camperObliviousEffects].Property->GetFName()
			&& Name__camperBrokenEffects == ClassReps[(int32)ENetFields_Private::_camperBrokenEffects].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UForcedPenance"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForcedPenance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
