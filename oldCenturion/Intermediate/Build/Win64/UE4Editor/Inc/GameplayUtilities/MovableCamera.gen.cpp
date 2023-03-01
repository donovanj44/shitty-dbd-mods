// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/MovableCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovableCamera() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_AMovableCamera_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_AMovableCamera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void AMovableCamera::StaticRegisterNativesAMovableCamera()
	{
	}
	UClass* Z_Construct_UClass_AMovableCamera_NoRegister()
	{
		return AMovableCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMovableCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__playerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiresShiftModifierForInput_MetaData[];
#endif
		static void NewProp_RequiresShiftModifierForInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequiresShiftModifierForInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovableCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MovableCamera.h" },
		{ "ModuleRelativePath", "Public/MovableCamera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableCamera_Statics::NewProp__playerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovableCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovableCamera_Statics::NewProp__playerController = { "_playerController", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovableCamera, _playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovableCamera_Statics::NewProp__playerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableCamera_Statics::NewProp__playerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableCamera_Statics::NewProp_RequiresShiftModifierForInput_MetaData[] = {
		{ "Category", "MovableCamera" },
		{ "ModuleRelativePath", "Public/MovableCamera.h" },
	};
#endif
	void Z_Construct_UClass_AMovableCamera_Statics::NewProp_RequiresShiftModifierForInput_SetBit(void* Obj)
	{
		((AMovableCamera*)Obj)->RequiresShiftModifierForInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovableCamera_Statics::NewProp_RequiresShiftModifierForInput = { "RequiresShiftModifierForInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovableCamera), &Z_Construct_UClass_AMovableCamera_Statics::NewProp_RequiresShiftModifierForInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovableCamera_Statics::NewProp_RequiresShiftModifierForInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableCamera_Statics::NewProp_RequiresShiftModifierForInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovableCamera_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "MovableCamera" },
		{ "ModuleRelativePath", "Public/MovableCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovableCamera_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovableCamera, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AMovableCamera_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableCamera_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovableCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableCamera_Statics::NewProp__playerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableCamera_Statics::NewProp_RequiresShiftModifierForInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovableCamera_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovableCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovableCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovableCamera_Statics::ClassParams = {
		&AMovableCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovableCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovableCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovableCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovableCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovableCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovableCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovableCamera, 1389767889);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<AMovableCamera>()
	{
		return AMovableCamera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovableCamera(Z_Construct_UClass_AMovableCamera, &AMovableCamera::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("AMovableCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovableCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
