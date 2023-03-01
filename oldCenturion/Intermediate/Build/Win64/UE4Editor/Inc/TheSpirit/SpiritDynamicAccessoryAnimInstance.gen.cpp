// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/SpiritDynamicAccessoryAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiritDynamicAccessoryAnimInstance() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UDynamicAccessoryAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
// End Cross Module References
	void USpiritDynamicAccessoryAnimInstance::StaticRegisterNativesUSpiritDynamicAccessoryAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_NoRegister()
	{
		return USpiritDynamicAccessoryAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPassivePhaseWalkHusk_MetaData[];
#endif
		static void NewProp__isPassivePhaseWalkHusk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPassivePhaseWalkHusk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicAccessoryAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SpiritDynamicAccessoryAnimInstance.h" },
		{ "ModuleRelativePath", "Public/SpiritDynamicAccessoryAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::NewProp__isPassivePhaseWalkHusk_MetaData[] = {
		{ "Category", "SpiritDynamicAccessoryAnimInstance" },
		{ "ModuleRelativePath", "Public/SpiritDynamicAccessoryAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::NewProp__isPassivePhaseWalkHusk_SetBit(void* Obj)
	{
		((USpiritDynamicAccessoryAnimInstance*)Obj)->_isPassivePhaseWalkHusk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::NewProp__isPassivePhaseWalkHusk = { "_isPassivePhaseWalkHusk", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpiritDynamicAccessoryAnimInstance), &Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::NewProp__isPassivePhaseWalkHusk_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::NewProp__isPassivePhaseWalkHusk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::NewProp__isPassivePhaseWalkHusk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::NewProp__isPassivePhaseWalkHusk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiritDynamicAccessoryAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::ClassParams = {
		&USpiritDynamicAccessoryAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiritDynamicAccessoryAnimInstance, 3377998037);
	template<> THESPIRIT_API UClass* StaticClass<USpiritDynamicAccessoryAnimInstance>()
	{
		return USpiritDynamicAccessoryAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiritDynamicAccessoryAnimInstance(Z_Construct_UClass_USpiritDynamicAccessoryAnimInstance, &USpiritDynamicAccessoryAnimInstance::StaticClass, TEXT("/Script/TheSpirit"), TEXT("USpiritDynamicAccessoryAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiritDynamicAccessoryAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
