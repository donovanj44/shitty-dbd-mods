// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EndGameEntityAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameEntityAnimInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameEntityAnimInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEndGameEntityAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UEndGameEntityAnimInstance::StaticRegisterNativesUEndGameEntityAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UEndGameEntityAnimInstance_NoRegister()
	{
		return UEndGameEntityAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameEntityAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isBack_MetaData[];
#endif
		static void NewProp__isBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isFront_MetaData[];
#endif
		static void NewProp__isFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isFront;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EndGameEntityAnimInstance.h" },
		{ "ModuleRelativePath", "Public/EndGameEntityAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isBack_MetaData[] = {
		{ "Category", "EndGameEntityAnimInstance" },
		{ "ModuleRelativePath", "Public/EndGameEntityAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isBack_SetBit(void* Obj)
	{
		((UEndGameEntityAnimInstance*)Obj)->_isBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isBack = { "_isBack", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEndGameEntityAnimInstance), &Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isBack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isFront_MetaData[] = {
		{ "Category", "EndGameEntityAnimInstance" },
		{ "ModuleRelativePath", "Public/EndGameEntityAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isFront_SetBit(void* Obj)
	{
		((UEndGameEntityAnimInstance*)Obj)->_isFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isFront = { "_isFront", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEndGameEntityAnimInstance), &Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isFront_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isFront_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::NewProp__isFront,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameEntityAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::ClassParams = {
		&UEndGameEntityAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameEntityAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameEntityAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameEntityAnimInstance, 1920999529);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEndGameEntityAnimInstance>()
	{
		return UEndGameEntityAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameEntityAnimInstance(Z_Construct_UClass_UEndGameEntityAnimInstance, &UEndGameEntityAnimInstance::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEndGameEntityAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameEntityAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
