// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheWraith/Public/WraithAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWraithAnimInstance() {}
// Cross Module References
	THEWRAITH_API UClass* Z_Construct_UClass_UWraithAnimInstance_NoRegister();
	THEWRAITH_API UClass* Z_Construct_UClass_UWraithAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheWraith();
	DBDANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector();
// End Cross Module References
	void UWraithAnimInstance::StaticRegisterNativesUWraithAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UWraithAnimInstance_NoRegister()
	{
		return UWraithAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWraithAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloakingPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cloakingPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__uncloakingOutSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__uncloakingOutSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__uncloakingSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__uncloakingSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__uncloakingInSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__uncloakingInSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloakingOutSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cloakingOutSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloakingSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cloakingSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloakingInSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cloakingInSelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUncloaking_MetaData[];
#endif
		static void NewProp__isUncloaking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUncloaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCloaking_MetaData[];
#endif
		static void NewProp__isCloaking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCloaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRingingBell_MetaData[];
#endif
		static void NewProp__isRingingBell_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRingingBell;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWraithAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheWraith,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WraithAnimInstance.h" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingPlayRate_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingPlayRate = { "_cloakingPlayRate", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithAnimInstance, _cloakingPlayRate), METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingOutSelector_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingOutSelector = { "_uncloakingOutSelector", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithAnimInstance, _uncloakingOutSelector), Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingOutSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingOutSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingSelector_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingSelector = { "_uncloakingSelector", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithAnimInstance, _uncloakingSelector), Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingInSelector_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingInSelector = { "_uncloakingInSelector", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithAnimInstance, _uncloakingInSelector), Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingInSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingInSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingOutSelector_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingOutSelector = { "_cloakingOutSelector", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithAnimInstance, _cloakingOutSelector), Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingOutSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingOutSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingSelector_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingSelector = { "_cloakingSelector", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithAnimInstance, _cloakingSelector), Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingInSelector_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingInSelector = { "_cloakingInSelector", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWraithAnimInstance, _cloakingInSelector), Z_Construct_UScriptStruct_FPerspectiveDependentAnimSequenceSelector, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingInSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingInSelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isUncloaking_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isUncloaking_SetBit(void* Obj)
	{
		((UWraithAnimInstance*)Obj)->_isUncloaking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isUncloaking = { "_isUncloaking", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWraithAnimInstance), &Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isUncloaking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isUncloaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isUncloaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isCloaking_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isCloaking_SetBit(void* Obj)
	{
		((UWraithAnimInstance*)Obj)->_isCloaking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isCloaking = { "_isCloaking", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWraithAnimInstance), &Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isCloaking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isCloaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isCloaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isRingingBell_MetaData[] = {
		{ "Category", "WraithAnimInstance" },
		{ "ModuleRelativePath", "Public/WraithAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isRingingBell_SetBit(void* Obj)
	{
		((UWraithAnimInstance*)Obj)->_isRingingBell = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isRingingBell = { "_isRingingBell", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWraithAnimInstance), &Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isRingingBell_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isRingingBell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isRingingBell_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWraithAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingOutSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__uncloakingInSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingOutSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__cloakingInSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isUncloaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isCloaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWraithAnimInstance_Statics::NewProp__isRingingBell,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWraithAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWraithAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWraithAnimInstance_Statics::ClassParams = {
		&UWraithAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWraithAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWraithAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWraithAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWraithAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWraithAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWraithAnimInstance, 3232200524);
	template<> THEWRAITH_API UClass* StaticClass<UWraithAnimInstance>()
	{
		return UWraithAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWraithAnimInstance(Z_Construct_UClass_UWraithAnimInstance, &UWraithAnimInstance::StaticClass, TEXT("/Script/TheWraith"), TEXT("UWraithAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWraithAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
