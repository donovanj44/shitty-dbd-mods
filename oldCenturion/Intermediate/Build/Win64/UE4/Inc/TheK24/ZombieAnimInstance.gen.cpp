// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAnimInstance() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieAnimInstance_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EZombieGender();
	THEK24_API UClass* Z_Construct_UClass_AZombieCharacter_NoRegister();
	THEK24_API UEnum* Z_Construct_UEnum_TheK24_EZombieState();
// End Cross Module References
	void UZombieAnimInstance::StaticRegisterNativesUZombieAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UZombieAnimInstance_NoRegister()
	{
		return UZombieAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UZombieAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieGender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__zombieGender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__zombieGender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFalling_MetaData[];
#endif
		static void NewProp__isFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__zombieCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__zombieState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__zombieState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ZombieAnimInstance.h" },
		{ "ModuleRelativePath", "Public/ZombieAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieGender_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "Public/ZombieAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieGender = { "_zombieGender", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieAnimInstance, _zombieGender), Z_Construct_UEnum_TheK24_EZombieGender, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieGender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieGender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieGender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__isFalling_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "Public/ZombieAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__isFalling_SetBit(void* Obj)
	{
		((UZombieAnimInstance*)Obj)->_isFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__isFalling = { "_isFalling", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UZombieAnimInstance), &Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__isFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__isFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__isFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZombieAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieCharacter = { "_zombieCharacter", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieAnimInstance, _zombieCharacter), Z_Construct_UClass_AZombieCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieState_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "Public/ZombieAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieState = { "_zombieState", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieAnimInstance, _zombieState), Z_Construct_UEnum_TheK24_EZombieState, METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__speed_MetaData[] = {
		{ "Category", "ZombieAnimInstance" },
		{ "ModuleRelativePath", "Public/ZombieAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieAnimInstance, _speed), METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieGender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieGender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__isFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__zombieState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieAnimInstance_Statics::NewProp__speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieAnimInstance_Statics::ClassParams = {
		&UZombieAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZombieAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieAnimInstance, 90311248);
	template<> THEK24_API UClass* StaticClass<UZombieAnimInstance>()
	{
		return UZombieAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieAnimInstance(Z_Construct_UClass_UZombieAnimInstance, &UZombieAnimInstance::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
