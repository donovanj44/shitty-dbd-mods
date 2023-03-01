// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinsAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinsAnimInstance() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinsAnimInstance_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinsAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UKillerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinsAnimInstance::StaticRegisterNativesUTwinsAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UTwinsAnimInstance_NoRegister()
	{
		return UTwinsAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTwinsAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAutoPossessingAfterRelease_MetaData[];
#endif
		static void NewProp__isAutoPossessingAfterRelease_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAutoPossessingAfterRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isWakingUpFromPossess_MetaData[];
#endif
		static void NewProp__isWakingUpFromPossess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isWakingUpFromPossess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPossessing_MetaData[];
#endif
		static void NewProp__isPossessing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPossessing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasBrotherAttached_MetaData[];
#endif
		static void NewProp__hasBrotherAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasBrotherAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDormant_MetaData[];
#endif
		static void NewProp__isDormant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDormant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinsAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TwinsAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TwinsAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isAutoPossessingAfterRelease_MetaData[] = {
		{ "Category", "TwinsAnimInstance" },
		{ "ModuleRelativePath", "Public/TwinsAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isAutoPossessingAfterRelease_SetBit(void* Obj)
	{
		((UTwinsAnimInstance*)Obj)->_isAutoPossessingAfterRelease = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isAutoPossessingAfterRelease = { "_isAutoPossessingAfterRelease", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinsAnimInstance), &Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isAutoPossessingAfterRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isAutoPossessingAfterRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isAutoPossessingAfterRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isWakingUpFromPossess_MetaData[] = {
		{ "Category", "TwinsAnimInstance" },
		{ "ModuleRelativePath", "Public/TwinsAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isWakingUpFromPossess_SetBit(void* Obj)
	{
		((UTwinsAnimInstance*)Obj)->_isWakingUpFromPossess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isWakingUpFromPossess = { "_isWakingUpFromPossess", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinsAnimInstance), &Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isWakingUpFromPossess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isWakingUpFromPossess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isWakingUpFromPossess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isPossessing_MetaData[] = {
		{ "Category", "TwinsAnimInstance" },
		{ "ModuleRelativePath", "Public/TwinsAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isPossessing_SetBit(void* Obj)
	{
		((UTwinsAnimInstance*)Obj)->_isPossessing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isPossessing = { "_isPossessing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinsAnimInstance), &Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isPossessing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isPossessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isPossessing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__hasBrotherAttached_MetaData[] = {
		{ "Category", "TwinsAnimInstance" },
		{ "ModuleRelativePath", "Public/TwinsAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__hasBrotherAttached_SetBit(void* Obj)
	{
		((UTwinsAnimInstance*)Obj)->_hasBrotherAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__hasBrotherAttached = { "_hasBrotherAttached", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinsAnimInstance), &Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__hasBrotherAttached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__hasBrotherAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__hasBrotherAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isDormant_MetaData[] = {
		{ "Category", "TwinsAnimInstance" },
		{ "ModuleRelativePath", "Public/TwinsAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isDormant_SetBit(void* Obj)
	{
		((UTwinsAnimInstance*)Obj)->_isDormant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isDormant = { "_isDormant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinsAnimInstance), &Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isDormant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isDormant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isDormant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinsAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isAutoPossessingAfterRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isWakingUpFromPossess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isPossessing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__hasBrotherAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinsAnimInstance_Statics::NewProp__isDormant,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinsAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinsAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinsAnimInstance_Statics::ClassParams = {
		&UTwinsAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwinsAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinsAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinsAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinsAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinsAnimInstance, 2384723830);
	template<> THETWINS_API UClass* StaticClass<UTwinsAnimInstance>()
	{
		return UTwinsAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinsAnimInstance(Z_Construct_UClass_UTwinsAnimInstance, &UTwinsAnimInstance::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinsAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinsAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
