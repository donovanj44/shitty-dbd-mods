// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/OpenSupplyCrateInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenSupplyCrateInteraction() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UOpenSupplyCrateInteraction_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UOpenSupplyCrateInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_ASupplyCrateInteractable_NoRegister();
// End Cross Module References
	void UOpenSupplyCrateInteraction::StaticRegisterNativesUOpenSupplyCrateInteraction()
	{
	}
	UClass* Z_Construct_UClass_UOpenSupplyCrateInteraction_NoRegister()
	{
		return UOpenSupplyCrateInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__successExitTimeAnimSequenceReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__successExitTimeAnimSequenceReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionWasComplete_MetaData[];
#endif
		static void NewProp__interactionWasComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__interactionWasComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSupplyCrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningSupplyCrate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OpenSupplyCrateInteraction.h" },
		{ "ModuleRelativePath", "Public/OpenSupplyCrateInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__successExitTimeAnimSequenceReference_MetaData[] = {
		{ "Category", "OpenSupplyCrateInteraction" },
		{ "ModuleRelativePath", "Public/OpenSupplyCrateInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__successExitTimeAnimSequenceReference = { "_successExitTimeAnimSequenceReference", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenSupplyCrateInteraction, _successExitTimeAnimSequenceReference), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__successExitTimeAnimSequenceReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__successExitTimeAnimSequenceReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__interactionWasComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenSupplyCrateInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__interactionWasComplete_SetBit(void* Obj)
	{
		((UOpenSupplyCrateInteraction*)Obj)->_interactionWasComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__interactionWasComplete = { "_interactionWasComplete", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenSupplyCrateInteraction), &Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__interactionWasComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__interactionWasComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__interactionWasComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__owningSupplyCrate_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenSupplyCrateInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__owningSupplyCrate = { "_owningSupplyCrate", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenSupplyCrateInteraction, _owningSupplyCrate), Z_Construct_UClass_ASupplyCrateInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__owningSupplyCrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__owningSupplyCrate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__successExitTimeAnimSequenceReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__interactionWasComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::NewProp__owningSupplyCrate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenSupplyCrateInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::ClassParams = {
		&UOpenSupplyCrateInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenSupplyCrateInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenSupplyCrateInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenSupplyCrateInteraction, 99767946);
	template<> THEK24_API UClass* StaticClass<UOpenSupplyCrateInteraction>()
	{
		return UOpenSupplyCrateInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenSupplyCrateInteraction(Z_Construct_UClass_UOpenSupplyCrateInteraction, &UOpenSupplyCrateInteraction::StaticClass, TEXT("/Script/TheK24"), TEXT("UOpenSupplyCrateInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenSupplyCrateInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
