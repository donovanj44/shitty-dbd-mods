// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26CrowAttachmentSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26CrowAttachmentSubAnimInstance() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK26();
// End Cross Module References
	void UK26CrowAttachmentSubAnimInstance::StaticRegisterNativesUK26CrowAttachmentSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_NoRegister()
	{
		return UK26CrowAttachmentSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRemovingCrow_MetaData[];
#endif
		static void NewProp__isRemovingCrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRemovingCrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasCrowAttached_MetaData[];
#endif
		static void NewProp__hasCrowAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasCrowAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "K26CrowAttachmentSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/K26CrowAttachmentSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__isRemovingCrow_MetaData[] = {
		{ "Category", "K26CrowAttachmentSubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowAttachmentSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__isRemovingCrow_SetBit(void* Obj)
	{
		((UK26CrowAttachmentSubAnimInstance*)Obj)->_isRemovingCrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__isRemovingCrow = { "_isRemovingCrow", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowAttachmentSubAnimInstance), &Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__isRemovingCrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__isRemovingCrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__isRemovingCrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__hasCrowAttached_MetaData[] = {
		{ "Category", "K26CrowAttachmentSubAnimInstance" },
		{ "ModuleRelativePath", "Public/K26CrowAttachmentSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__hasCrowAttached_SetBit(void* Obj)
	{
		((UK26CrowAttachmentSubAnimInstance*)Obj)->_hasCrowAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__hasCrowAttached = { "_hasCrowAttached", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26CrowAttachmentSubAnimInstance), &Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__hasCrowAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__hasCrowAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__hasCrowAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__isRemovingCrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::NewProp__hasCrowAttached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26CrowAttachmentSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::ClassParams = {
		&UK26CrowAttachmentSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26CrowAttachmentSubAnimInstance, 1053331036);
	template<> THEK26_API UClass* StaticClass<UK26CrowAttachmentSubAnimInstance>()
	{
		return UK26CrowAttachmentSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26CrowAttachmentSubAnimInstance(Z_Construct_UClass_UK26CrowAttachmentSubAnimInstance, &UK26CrowAttachmentSubAnimInstance::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26CrowAttachmentSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26CrowAttachmentSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
