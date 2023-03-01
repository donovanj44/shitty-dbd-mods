// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/OpenChestSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenChestSurvivorSubAnimInstance() {}
// Cross Module References
	DBDANIMATION_API UClass* Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_NoRegister();
	DBDANIMATION_API UClass* Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UOpenChestSurvivorSubAnimInstance::StaticRegisterNativesUOpenChestSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_NoRegister()
	{
		return UOpenChestSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isVomiting_MetaData[];
#endif
		static void NewProp__isVomiting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isVomiting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__snapPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__snapPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractingWithOpenChest_MetaData[];
#endif
		static void NewProp__isInteractingWithOpenChest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractingWithOpenChest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractingWithChest_MetaData[];
#endif
		static void NewProp__isInteractingWithChest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractingWithChest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "OpenChestSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/OpenChestSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isVomiting_MetaData[] = {
		{ "Category", "OpenChestSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/OpenChestSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isVomiting_SetBit(void* Obj)
	{
		((UOpenChestSurvivorSubAnimInstance*)Obj)->_isVomiting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isVomiting = { "_isVomiting", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenChestSurvivorSubAnimInstance), &Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isVomiting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isVomiting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isVomiting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__snapPosition_MetaData[] = {
		{ "Category", "OpenChestSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/OpenChestSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__snapPosition = { "_snapPosition", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenChestSurvivorSubAnimInstance, _snapPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__snapPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__snapPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithOpenChest_MetaData[] = {
		{ "Category", "OpenChestSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/OpenChestSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithOpenChest_SetBit(void* Obj)
	{
		((UOpenChestSurvivorSubAnimInstance*)Obj)->_isInteractingWithOpenChest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithOpenChest = { "_isInteractingWithOpenChest", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenChestSurvivorSubAnimInstance), &Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithOpenChest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithOpenChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithOpenChest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__interactionPhase_MetaData[] = {
		{ "Category", "OpenChestSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/OpenChestSurvivorSubAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__interactionPhase = { "_interactionPhase", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenChestSurvivorSubAnimInstance, _interactionPhase), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__interactionPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__interactionPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithChest_MetaData[] = {
		{ "Category", "OpenChestSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/OpenChestSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithChest_SetBit(void* Obj)
	{
		((UOpenChestSurvivorSubAnimInstance*)Obj)->_isInteractingWithChest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithChest = { "_isInteractingWithChest", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOpenChestSurvivorSubAnimInstance), &Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithChest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithChest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isVomiting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__snapPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithOpenChest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__interactionPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::NewProp__isInteractingWithChest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenChestSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::ClassParams = {
		&UOpenChestSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenChestSurvivorSubAnimInstance, 3599106724);
	template<> DBDANIMATION_API UClass* StaticClass<UOpenChestSurvivorSubAnimInstance>()
	{
		return UOpenChestSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenChestSurvivorSubAnimInstance(Z_Construct_UClass_UOpenChestSurvivorSubAnimInstance, &UOpenChestSurvivorSubAnimInstance::StaticClass, TEXT("/Script/DBDAnimation"), TEXT("UOpenChestSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenChestSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
