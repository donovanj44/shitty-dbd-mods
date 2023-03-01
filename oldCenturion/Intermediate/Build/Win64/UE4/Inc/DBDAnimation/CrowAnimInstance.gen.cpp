// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/CrowAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UCrowAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UCrowAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWorldRunawayMeshComponent_NoRegister();
// End Cross Module References
	void UCrowAnimInstance::StaticRegisterNativesUCrowAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UCrowAnimInstance_NoRegister()
	{
		return UCrowAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCrowAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__crow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldTakeOff_MetaData[];
#endif
		static void NewProp__shouldTakeOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldTakeOff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CrowAnimInstance.h" },
		{ "ModuleRelativePath", "Public/CrowAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__crow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CrowAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__crow = { "_crow", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrowAnimInstance, _crow), Z_Construct_UClass_UWorldRunawayMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__crow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__crow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__shouldTakeOff_MetaData[] = {
		{ "Category", "CrowAnimInstance" },
		{ "ModuleRelativePath", "Public/CrowAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__shouldTakeOff_SetBit(void* Obj)
	{
		((UCrowAnimInstance*)Obj)->_shouldTakeOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__shouldTakeOff = { "_shouldTakeOff", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCrowAnimInstance), &Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__shouldTakeOff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__shouldTakeOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__shouldTakeOff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrowAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__crow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrowAnimInstance_Statics::NewProp__shouldTakeOff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowAnimInstance_Statics::ClassParams = {
		&UCrowAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrowAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrowAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowAnimInstance, 834661301);
	template<> DBDANIMATION_API UClass* StaticClass<UCrowAnimInstance>()
	{
		return UCrowAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowAnimInstance(Z_Construct_UClass_UCrowAnimInstance, &UCrowAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UCrowAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
