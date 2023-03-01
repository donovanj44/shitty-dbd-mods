// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/MeshRotationCorrectionSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshRotationCorrectionSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UMeshRotationCorrectionSubAnimInstance::StaticRegisterNativesUMeshRotationCorrectionSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_NoRegister()
	{
		return UMeshRotationCorrectionSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__movementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__toSlopeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__toSlopeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrawling_MetaData[];
#endif
		static void NewProp__isCrawling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCrawling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rotationInterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MeshRotationCorrectionSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MeshRotationCorrectionSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__movementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshRotationCorrectionSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__movementComponent = { "_movementComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshRotationCorrectionSubAnimInstance, _movementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__movementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__movementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__toSlopeRotation_MetaData[] = {
		{ "Category", "MeshRotationCorrectionSubAnimInstance" },
		{ "ModuleRelativePath", "Public/MeshRotationCorrectionSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__toSlopeRotation = { "_toSlopeRotation", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshRotationCorrectionSubAnimInstance, _toSlopeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__toSlopeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__toSlopeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__isCrawling_MetaData[] = {
		{ "Category", "MeshRotationCorrectionSubAnimInstance" },
		{ "ModuleRelativePath", "Public/MeshRotationCorrectionSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__isCrawling_SetBit(void* Obj)
	{
		((UMeshRotationCorrectionSubAnimInstance*)Obj)->_isCrawling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__isCrawling = { "_isCrawling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMeshRotationCorrectionSubAnimInstance), &Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__isCrawling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__isCrawling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__isCrawling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__rotationInterpSpeed_MetaData[] = {
		{ "Category", "MeshRotationCorrectionSubAnimInstance" },
		{ "ModuleRelativePath", "Public/MeshRotationCorrectionSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__rotationInterpSpeed = { "_rotationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeshRotationCorrectionSubAnimInstance, _rotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__rotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__rotationInterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__movementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__toSlopeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__isCrawling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::NewProp__rotationInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshRotationCorrectionSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::ClassParams = {
		&UMeshRotationCorrectionSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshRotationCorrectionSubAnimInstance, 3579095400);
	template<> DBDANIMATION_API UClass* StaticClass<UMeshRotationCorrectionSubAnimInstance>()
	{
		return UMeshRotationCorrectionSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshRotationCorrectionSubAnimInstance(Z_Construct_UClass_UMeshRotationCorrectionSubAnimInstance, &UMeshRotationCorrectionSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UMeshRotationCorrectionSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshRotationCorrectionSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
