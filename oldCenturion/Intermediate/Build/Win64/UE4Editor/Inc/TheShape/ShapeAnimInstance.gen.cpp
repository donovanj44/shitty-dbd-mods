// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheShape/Public/ShapeAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapeAnimInstance() {}
// Cross Module References
	THESHAPE_API UClass* Z_Construct_UClass_UShapeAnimInstance_NoRegister();
	THESHAPE_API UClass* Z_Construct_UClass_UShapeAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheShape();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvilWithinComponent_NoRegister();
// End Cross Module References
	void UShapeAnimInstance::StaticRegisterNativesUShapeAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UShapeAnimInstance_NoRegister()
	{
		return UShapeAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UShapeAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__evilWithinComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__evilWithinComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTier3Active_MetaData[];
#endif
		static void NewProp__isTier3Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTier3Active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShapeAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheShape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ShapeAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ShapeAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__evilWithinComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShapeAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__evilWithinComponent = { "_evilWithinComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShapeAnimInstance, _evilWithinComponent), Z_Construct_UClass_UEvilWithinComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__evilWithinComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__evilWithinComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__isTier3Active_MetaData[] = {
		{ "Category", "ShapeAnimInstance" },
		{ "ModuleRelativePath", "Public/ShapeAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__isTier3Active_SetBit(void* Obj)
	{
		((UShapeAnimInstance*)Obj)->_isTier3Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__isTier3Active = { "_isTier3Active", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShapeAnimInstance), &Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__isTier3Active_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__isTier3Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__isTier3Active_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShapeAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__evilWithinComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShapeAnimInstance_Statics::NewProp__isTier3Active,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShapeAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapeAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShapeAnimInstance_Statics::ClassParams = {
		&UShapeAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShapeAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShapeAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShapeAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShapeAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShapeAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShapeAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShapeAnimInstance, 1141455128);
	template<> THESHAPE_API UClass* StaticClass<UShapeAnimInstance>()
	{
		return UShapeAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShapeAnimInstance(Z_Construct_UClass_UShapeAnimInstance, &UShapeAnimInstance::StaticClass, TEXT("/Script/TheShape"), TEXT("UShapeAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShapeAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
