// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniPounceInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniPounceInteraction() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniPounceInteraction_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniPounceInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UDemonModeComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOniDemonModeAttackStateComponent_NoRegister();
// End Cross Module References
	void UOniPounceInteraction::StaticRegisterNativesUOniPounceInteraction()
	{
	}
	UClass* Z_Construct_UClass_UOniPounceInteraction_NoRegister()
	{
		return UOniPounceInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UOniPounceInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__demonModeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__demonModeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargedAttackState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chargedAttackState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniPounceInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniPounceInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OniPounceInteraction.h" },
		{ "ModuleRelativePath", "Public/OniPounceInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__owningSlasher_MetaData[] = {
		{ "ModuleRelativePath", "Public/OniPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__owningSlasher = { "_owningSlasher", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniPounceInteraction, _owningSlasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__owningSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__owningSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__demonModeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OniPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__demonModeComponent = { "_demonModeComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniPounceInteraction, _demonModeComponent), Z_Construct_UClass_UDemonModeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__demonModeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__demonModeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__chargedAttackState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OniPounceInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__chargedAttackState = { "_chargedAttackState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOniPounceInteraction, _chargedAttackState), Z_Construct_UClass_UOniDemonModeAttackStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__chargedAttackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__chargedAttackState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOniPounceInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__owningSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__demonModeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOniPounceInteraction_Statics::NewProp__chargedAttackState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniPounceInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniPounceInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniPounceInteraction_Statics::ClassParams = {
		&UOniPounceInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOniPounceInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOniPounceInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOniPounceInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniPounceInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniPounceInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniPounceInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniPounceInteraction, 2659029190);
	template<> THEONI_API UClass* StaticClass<UOniPounceInteraction>()
	{
		return UOniPounceInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniPounceInteraction(Z_Construct_UClass_UOniPounceInteraction, &UOniPounceInteraction::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniPounceInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniPounceInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
