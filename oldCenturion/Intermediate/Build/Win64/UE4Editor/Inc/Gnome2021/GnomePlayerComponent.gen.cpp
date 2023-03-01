// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gnome2021/Public/GnomePlayerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGnomePlayerComponent() {}
// Cross Module References
	GNOME2021_API UClass* Z_Construct_UClass_UGnomePlayerComponent_NoRegister();
	GNOME2021_API UClass* Z_Construct_UClass_UGnomePlayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Gnome2021();
// End Cross Module References
	void UGnomePlayerComponent::StaticRegisterNativesUGnomePlayerComponent()
	{
	}
	UClass* Z_Construct_UClass_UGnomePlayerComponent_NoRegister()
	{
		return UGnomePlayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGnomePlayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasInteractedWithGnomeThisGame_MetaData[];
#endif
		static void NewProp__hasInteractedWithGnomeThisGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasInteractedWithGnomeThisGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGnomePlayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Gnome2021,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGnomePlayerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GnomePlayerComponent.h" },
		{ "ModuleRelativePath", "Public/GnomePlayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGnomePlayerComponent_Statics::NewProp__hasInteractedWithGnomeThisGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/GnomePlayerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGnomePlayerComponent_Statics::NewProp__hasInteractedWithGnomeThisGame_SetBit(void* Obj)
	{
		((UGnomePlayerComponent*)Obj)->_hasInteractedWithGnomeThisGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGnomePlayerComponent_Statics::NewProp__hasInteractedWithGnomeThisGame = { "_hasInteractedWithGnomeThisGame", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGnomePlayerComponent), &Z_Construct_UClass_UGnomePlayerComponent_Statics::NewProp__hasInteractedWithGnomeThisGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGnomePlayerComponent_Statics::NewProp__hasInteractedWithGnomeThisGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGnomePlayerComponent_Statics::NewProp__hasInteractedWithGnomeThisGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGnomePlayerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGnomePlayerComponent_Statics::NewProp__hasInteractedWithGnomeThisGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGnomePlayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGnomePlayerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGnomePlayerComponent_Statics::ClassParams = {
		&UGnomePlayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGnomePlayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGnomePlayerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGnomePlayerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGnomePlayerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGnomePlayerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGnomePlayerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGnomePlayerComponent, 2179228496);
	template<> GNOME2021_API UClass* StaticClass<UGnomePlayerComponent>()
	{
		return UGnomePlayerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGnomePlayerComponent(Z_Construct_UClass_UGnomePlayerComponent, &UGnomePlayerComponent::StaticClass, TEXT("/Script/Gnome2021"), TEXT("UGnomePlayerComponent"), false, nullptr, nullptr, nullptr);

	void UGnomePlayerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__hasInteractedWithGnomeThisGame(TEXT("_hasInteractedWithGnomeThisGame"));

		const bool bIsValid = true
			&& Name__hasInteractedWithGnomeThisGame == ClassReps[(int32)ENetFields_Private::_hasInteractedWithGnomeThisGame].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGnomePlayerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGnomePlayerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
