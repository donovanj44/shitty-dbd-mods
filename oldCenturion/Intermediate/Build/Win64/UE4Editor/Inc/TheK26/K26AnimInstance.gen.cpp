// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26AnimInstance() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26AnimInstance_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26AnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK26();
// End Cross Module References
	void UK26AnimInstance::StaticRegisterNativesUK26AnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UK26AnimInstance_NoRegister()
	{
		return UK26AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK26AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUsingPower_MetaData[];
#endif
		static void NewProp__isUsingPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUsingPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K26AnimInstance.h" },
		{ "ModuleRelativePath", "Public/K26AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26AnimInstance_Statics::NewProp__isUsingPower_MetaData[] = {
		{ "Category", "K26AnimInstance" },
		{ "ModuleRelativePath", "Public/K26AnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26AnimInstance_Statics::NewProp__isUsingPower_SetBit(void* Obj)
	{
		((UK26AnimInstance*)Obj)->_isUsingPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26AnimInstance_Statics::NewProp__isUsingPower = { "_isUsingPower", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26AnimInstance), &Z_Construct_UClass_UK26AnimInstance_Statics::NewProp__isUsingPower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26AnimInstance_Statics::NewProp__isUsingPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AnimInstance_Statics::NewProp__isUsingPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26AnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26AnimInstance_Statics::NewProp__isUsingPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26AnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26AnimInstance_Statics::ClassParams = {
		&UK26AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK26AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26AnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK26AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26AnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26AnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26AnimInstance, 960670567);
	template<> THEK26_API UClass* StaticClass<UK26AnimInstance>()
	{
		return UK26AnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26AnimInstance(Z_Construct_UClass_UK26AnimInstance, &UK26AnimInstance::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26AnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
