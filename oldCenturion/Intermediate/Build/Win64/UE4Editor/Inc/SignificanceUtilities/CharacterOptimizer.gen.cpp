// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SignificanceUtilities/Public/CharacterOptimizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterOptimizer() {}
// Cross Module References
	SIGNIFICANCEUTILITIES_API UClass* Z_Construct_UClass_UCharacterOptimizer_NoRegister();
	SIGNIFICANCEUTILITIES_API UClass* Z_Construct_UClass_UCharacterOptimizer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SignificanceUtilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UCharacterOptimizer::StaticRegisterNativesUCharacterOptimizer()
	{
	}
	UClass* Z_Construct_UClass_UCharacterOptimizer_NoRegister()
	{
		return UCharacterOptimizer::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterOptimizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dependentActorsToCheckSignficance_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__dependentActorsToCheckSignficance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dependentActorsToCheckSignficance_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMeshTickRateWhenInsignificant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__skeletalMeshTickRateWhenInsignificant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterMovementTickRateWhenInsignificant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__characterMovementTickRateWhenInsignificant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterOptimizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SignificanceUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOptimizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterOptimizer.h" },
		{ "ModuleRelativePath", "Public/CharacterOptimizer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__dependentActorsToCheckSignficance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterOptimizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__dependentActorsToCheckSignficance = { "_dependentActorsToCheckSignficance", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOptimizer, _dependentActorsToCheckSignficance), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__dependentActorsToCheckSignficance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__dependentActorsToCheckSignficance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__dependentActorsToCheckSignficance_Inner = { "_dependentActorsToCheckSignficance", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__skeletalMeshTickRateWhenInsignificant_MetaData[] = {
		{ "Category", "CharacterOptimizer" },
		{ "ModuleRelativePath", "Public/CharacterOptimizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__skeletalMeshTickRateWhenInsignificant = { "_skeletalMeshTickRateWhenInsignificant", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOptimizer, _skeletalMeshTickRateWhenInsignificant), METADATA_PARAMS(Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__skeletalMeshTickRateWhenInsignificant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__skeletalMeshTickRateWhenInsignificant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__characterMovementTickRateWhenInsignificant_MetaData[] = {
		{ "Category", "CharacterOptimizer" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//FBHVRPerDetailModeFloat _distance;\n" },
		{ "ModuleRelativePath", "Public/CharacterOptimizer.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nFBHVRPerDetailModeFloat _distance;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__characterMovementTickRateWhenInsignificant = { "_characterMovementTickRateWhenInsignificant", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterOptimizer, _characterMovementTickRateWhenInsignificant), METADATA_PARAMS(Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__characterMovementTickRateWhenInsignificant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__characterMovementTickRateWhenInsignificant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterOptimizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__dependentActorsToCheckSignficance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__dependentActorsToCheckSignficance_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__skeletalMeshTickRateWhenInsignificant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterOptimizer_Statics::NewProp__characterMovementTickRateWhenInsignificant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterOptimizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterOptimizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterOptimizer_Statics::ClassParams = {
		&UCharacterOptimizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterOptimizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOptimizer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterOptimizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterOptimizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterOptimizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterOptimizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterOptimizer, 2566149010);
	template<> SIGNIFICANCEUTILITIES_API UClass* StaticClass<UCharacterOptimizer>()
	{
		return UCharacterOptimizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterOptimizer(Z_Construct_UClass_UCharacterOptimizer, &UCharacterOptimizer::StaticClass, TEXT("/Script/SignificanceUtilities"), TEXT("UCharacterOptimizer"), false, nullptr, nullptr, nullptr);

	void UCharacterOptimizer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__dependentActorsToCheckSignficance(TEXT("_dependentActorsToCheckSignficance"));

		const bool bIsValid = true
			&& Name__dependentActorsToCheckSignficance == ClassReps[(int32)ENetFields_Private::_dependentActorsToCheckSignficance].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCharacterOptimizer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterOptimizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
