// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialBehaviourInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialBehaviourInteractable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASpecialBehaviourInteractable_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASpecialBehaviourInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_NoRegister();
// End Cross Module References
	void ASpecialBehaviourInteractable::StaticRegisterNativesASpecialBehaviourInteractable()
	{
	}
	UClass* Z_Construct_UClass_ASpecialBehaviourInteractable_NoRegister()
	{
		return ASpecialBehaviourInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ASpecialBehaviourInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__specialBehaviourOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__specialBehaviourOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpecialBehaviourInteractable.h" },
		{ "ModuleRelativePath", "Public/SpecialBehaviourInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::NewProp__specialBehaviourOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpecialBehaviourInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::NewProp__specialBehaviourOwner = { "_specialBehaviourOwner", nullptr, (EPropertyFlags)0x0044000000002020, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpecialBehaviourInteractable, _specialBehaviourOwner), Z_Construct_UClass_ADBDPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::NewProp__specialBehaviourOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::NewProp__specialBehaviourOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::NewProp__specialBehaviourOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpecialBehaviourInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::ClassParams = {
		&ASpecialBehaviourInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpecialBehaviourInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpecialBehaviourInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpecialBehaviourInteractable, 1463951786);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ASpecialBehaviourInteractable>()
	{
		return ASpecialBehaviourInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpecialBehaviourInteractable(Z_Construct_UClass_ASpecialBehaviourInteractable, &ASpecialBehaviourInteractable::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ASpecialBehaviourInteractable"), false, nullptr, nullptr, nullptr);

	void ASpecialBehaviourInteractable::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__specialBehaviourOwner(TEXT("_specialBehaviourOwner"));

		const bool bIsValid = true
			&& Name__specialBehaviourOwner == ClassReps[(int32)ENetFields_Private::_specialBehaviourOwner].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpecialBehaviourInteractable"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpecialBehaviourInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
