// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheDemogorgon/Public/PortalSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalSurvivorSubAnimInstance() {}
// Cross Module References
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UPortalSurvivorSubAnimInstance_NoRegister();
	THEDEMOGORGON_API UClass* Z_Construct_UClass_UPortalSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheDemogorgon();
	DBDANIMATION_API UClass* Z_Construct_UClass_USkillCheckFailureTracker_NoRegister();
// End Cross Module References
	void UPortalSurvivorSubAnimInstance::StaticRegisterNativesUPortalSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UPortalSurvivorSubAnimInstance_NoRegister()
	{
		return UPortalSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasSkillCheckFailed_MetaData[];
#endif
		static void NewProp__hasSkillCheckFailed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasSkillCheckFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSpooked_MetaData[];
#endif
		static void NewProp__isSpooked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSpooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDestroyingPortal_MetaData[];
#endif
		static void NewProp__isDestroyingPortal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDestroyingPortal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheDemogorgon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PortalSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/PortalSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData[] = {
		{ "Category", "PortalSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/PortalSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_SetBit(void* Obj)
	{
		((UPortalSurvivorSubAnimInstance*)Obj)->_hasSkillCheckFailed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed = { "_hasSkillCheckFailed", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPortalSurvivorSubAnimInstance), &Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isSpooked_MetaData[] = {
		{ "Category", "PortalSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/PortalSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isSpooked_SetBit(void* Obj)
	{
		((UPortalSurvivorSubAnimInstance*)Obj)->_isSpooked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isSpooked = { "_isSpooked", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPortalSurvivorSubAnimInstance), &Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isSpooked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isSpooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isSpooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isDestroyingPortal_MetaData[] = {
		{ "Category", "PortalSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/PortalSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isDestroyingPortal_SetBit(void* Obj)
	{
		((UPortalSurvivorSubAnimInstance*)Obj)->_isDestroyingPortal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isDestroyingPortal = { "_isDestroyingPortal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPortalSurvivorSubAnimInstance), &Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isDestroyingPortal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isDestroyingPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isDestroyingPortal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__hasSkillCheckFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isSpooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::NewProp__isDestroyingPortal,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USkillCheckFailureTracker_NoRegister, (int32)VTABLE_OFFSET(UPortalSurvivorSubAnimInstance, ISkillCheckFailureTracker), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPortalSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::ClassParams = {
		&UPortalSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPortalSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPortalSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPortalSurvivorSubAnimInstance, 2324027184);
	template<> THEDEMOGORGON_API UClass* StaticClass<UPortalSurvivorSubAnimInstance>()
	{
		return UPortalSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPortalSurvivorSubAnimInstance(Z_Construct_UClass_UPortalSurvivorSubAnimInstance, &UPortalSurvivorSubAnimInstance::StaticClass, TEXT("/Script/TheDemogorgon"), TEXT("UPortalSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPortalSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
