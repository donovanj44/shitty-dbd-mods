// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputUtilities/Public/ButtonPressTracker.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonPressTracker() {}
// Cross Module References
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UButtonPressTracker_NoRegister();
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UButtonPressTracker();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_InputUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	void UButtonPressTracker::StaticRegisterNativesUButtonPressTracker()
	{
	}
	UClass* Z_Construct_UClass_UButtonPressTracker_NoRegister()
	{
		return UButtonPressTracker::StaticClass();
	}
	struct Z_Construct_UClass_UButtonPressTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__playerInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trackedInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__trackedInputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonPressTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_InputUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonPressTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ButtonPressTracker.h" },
		{ "ModuleRelativePath", "Public/ButtonPressTracker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__playerInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPressTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__playerInput = { "_playerInput", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonPressTracker, _playerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__playerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__playerInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__trackedInputComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ButtonPressTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__trackedInputComponent = { "_trackedInputComponent", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonPressTracker, _trackedInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__trackedInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__trackedInputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonPressTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__playerInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonPressTracker_Statics::NewProp__trackedInputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonPressTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonPressTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UButtonPressTracker_Statics::ClassParams = {
		&UButtonPressTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UButtonPressTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonPressTracker_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonPressTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonPressTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonPressTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UButtonPressTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonPressTracker, 1541052552);
	template<> INPUTUTILITIES_API UClass* StaticClass<UButtonPressTracker>()
	{
		return UButtonPressTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonPressTracker(Z_Construct_UClass_UButtonPressTracker, &UButtonPressTracker::StaticClass, TEXT("/Script/InputUtilities"), TEXT("UButtonPressTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonPressTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
