// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/DynamicAccessoryAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicAccessoryAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UDynamicAccessoryAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UDynamicAccessoryAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void UDynamicAccessoryAnimInstance::StaticRegisterNativesUDynamicAccessoryAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UDynamicAccessoryAnimInstance_NoRegister()
	{
		return UDynamicAccessoryAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__masterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__masterMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInGame_MetaData[];
#endif
		static void NewProp__isInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInMenu_MetaData[];
#endif
		static void NewProp__isInMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DynamicAccessoryAnimInstance.h" },
		{ "ModuleRelativePath", "Public/DynamicAccessoryAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__masterMesh_MetaData[] = {
		{ "Category", "DynamicAccessoryAnimInstance" },
		{ "ModuleRelativePath", "Public/DynamicAccessoryAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__masterMesh = { "_masterMesh", nullptr, (EPropertyFlags)0x002408000008201c, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDynamicAccessoryAnimInstance, _masterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__masterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__masterMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInGame_MetaData[] = {
		{ "Category", "DynamicAccessoryAnimInstance" },
		{ "ModuleRelativePath", "Public/DynamicAccessoryAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInGame_SetBit(void* Obj)
	{
		((UDynamicAccessoryAnimInstance*)Obj)->_isInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInGame = { "_isInGame", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDynamicAccessoryAnimInstance), &Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInMenu_MetaData[] = {
		{ "Category", "DynamicAccessoryAnimInstance" },
		{ "ModuleRelativePath", "Public/DynamicAccessoryAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInMenu_SetBit(void* Obj)
	{
		((UDynamicAccessoryAnimInstance*)Obj)->_isInMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInMenu = { "_isInMenu", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDynamicAccessoryAnimInstance), &Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__masterMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::NewProp__isInMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicAccessoryAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::ClassParams = {
		&UDynamicAccessoryAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicAccessoryAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDynamicAccessoryAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDynamicAccessoryAnimInstance, 1071371530);
	template<> DBDANIMATION_API UClass* StaticClass<UDynamicAccessoryAnimInstance>()
	{
		return UDynamicAccessoryAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDynamicAccessoryAnimInstance(Z_Construct_UClass_UDynamicAccessoryAnimInstance, &UDynamicAccessoryAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UDynamicAccessoryAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicAccessoryAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
