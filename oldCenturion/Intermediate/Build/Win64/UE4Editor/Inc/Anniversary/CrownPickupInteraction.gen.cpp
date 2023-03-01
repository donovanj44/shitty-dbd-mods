// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anniversary/Public/CrownPickupInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrownPickupInteraction() {}
// Cross Module References
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPickupInteraction_NoRegister();
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPickupInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_Anniversary();
// End Cross Module References
	void UCrownPickupInteraction::StaticRegisterNativesUCrownPickupInteraction()
	{
	}
	UClass* Z_Construct_UClass_UCrownPickupInteraction_NoRegister()
	{
		return UCrownPickupInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UCrownPickupInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractionChargeComplete_MetaData[];
#endif
		static void NewProp__isInteractionChargeComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractionChargeComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__attachToSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__attachToSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrownPickupInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_Anniversary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPickupInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CrownPickupInteraction.h" },
		{ "ModuleRelativePath", "Public/CrownPickupInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__isInteractionChargeComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrownPickupInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__isInteractionChargeComplete_SetBit(void* Obj)
	{
		((UCrownPickupInteraction*)Obj)->_isInteractionChargeComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__isInteractionChargeComplete = { "_isInteractionChargeComplete", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCrownPickupInteraction), &Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__isInteractionChargeComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__isInteractionChargeComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__isInteractionChargeComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__attachToSocketName_MetaData[] = {
		{ "Category", "CrownPickupInteraction" },
		{ "ModuleRelativePath", "Public/CrownPickupInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__attachToSocketName = { "_attachToSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrownPickupInteraction, _attachToSocketName), METADATA_PARAMS(Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__attachToSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__attachToSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrownPickupInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__isInteractionChargeComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrownPickupInteraction_Statics::NewProp__attachToSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrownPickupInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrownPickupInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrownPickupInteraction_Statics::ClassParams = {
		&UCrownPickupInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrownPickupInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPickupInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrownPickupInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPickupInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrownPickupInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrownPickupInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrownPickupInteraction, 2275769367);
	template<> ANNIVERSARY_API UClass* StaticClass<UCrownPickupInteraction>()
	{
		return UCrownPickupInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrownPickupInteraction(Z_Construct_UClass_UCrownPickupInteraction, &UCrownPickupInteraction::StaticClass, TEXT("/Script/Anniversary"), TEXT("UCrownPickupInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrownPickupInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
