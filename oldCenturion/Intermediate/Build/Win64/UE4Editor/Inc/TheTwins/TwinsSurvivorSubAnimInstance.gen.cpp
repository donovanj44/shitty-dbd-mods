// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinsSurvivorSubAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinsSurvivorSubAnimInstance() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinsSurvivorSubAnimInstance();
	DBDANIMATION_API UClass* Z_Construct_UClass_UBaseSurvivorAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UTwinsSurvivorSubAnimInstance::StaticRegisterNativesUTwinsSurvivorSubAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_NoRegister()
	{
		return UTwinsSurvivorSubAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isRemovingTwin_MetaData[];
#endif
		static void NewProp__isRemovingTwin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isRemovingTwin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseSurvivorAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TwinsSurvivorSubAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TwinsSurvivorSubAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::NewProp__isRemovingTwin_MetaData[] = {
		{ "Category", "TwinsSurvivorSubAnimInstance" },
		{ "ModuleRelativePath", "Public/TwinsSurvivorSubAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::NewProp__isRemovingTwin_SetBit(void* Obj)
	{
		((UTwinsSurvivorSubAnimInstance*)Obj)->_isRemovingTwin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::NewProp__isRemovingTwin = { "_isRemovingTwin", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinsSurvivorSubAnimInstance), &Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::NewProp__isRemovingTwin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::NewProp__isRemovingTwin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::NewProp__isRemovingTwin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::NewProp__isRemovingTwin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinsSurvivorSubAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::ClassParams = {
		&UTwinsSurvivorSubAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinsSurvivorSubAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinsSurvivorSubAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinsSurvivorSubAnimInstance, 4227995786);
	template<> THETWINS_API UClass* StaticClass<UTwinsSurvivorSubAnimInstance>()
	{
		return UTwinsSurvivorSubAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinsSurvivorSubAnimInstance(Z_Construct_UClass_UTwinsSurvivorSubAnimInstance, &UTwinsSurvivorSubAnimInstance::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinsSurvivorSubAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinsSurvivorSubAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
