// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinHuskAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinHuskAnimInstance() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinHuskAnimInstance_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinHuskAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_UTwinHuskStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void UTwinHuskAnimInstance::StaticRegisterNativesUTwinHuskAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UTwinHuskAnimInstance_NoRegister()
	{
		return UTwinHuskAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTwinHuskAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__twinHuskStateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__twinHuskStateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isDeadFromSurvivorBack_MetaData[];
#endif
		static void NewProp__isDeadFromSurvivorBack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isDeadFromSurvivorBack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinHuskAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinHuskAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "TwinHuskAnimInstance.h" },
		{ "ModuleRelativePath", "Public/TwinHuskAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__twinHuskStateComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TwinHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__twinHuskStateComponent = { "_twinHuskStateComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinHuskAnimInstance, _twinHuskStateComponent), Z_Construct_UClass_UTwinHuskStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__twinHuskStateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__twinHuskStateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__owningPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinHuskAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__owningPawn = { "_owningPawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinHuskAnimInstance, _owningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__owningPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__owningPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__isDeadFromSurvivorBack_MetaData[] = {
		{ "Category", "TwinHuskAnimInstance" },
		{ "ModuleRelativePath", "Public/TwinHuskAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__isDeadFromSurvivorBack_SetBit(void* Obj)
	{
		((UTwinHuskAnimInstance*)Obj)->_isDeadFromSurvivorBack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__isDeadFromSurvivorBack = { "_isDeadFromSurvivorBack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTwinHuskAnimInstance), &Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__isDeadFromSurvivorBack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__isDeadFromSurvivorBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__isDeadFromSurvivorBack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinHuskAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__twinHuskStateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__owningPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinHuskAnimInstance_Statics::NewProp__isDeadFromSurvivorBack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinHuskAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinHuskAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinHuskAnimInstance_Statics::ClassParams = {
		&UTwinHuskAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwinHuskAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinHuskAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinHuskAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinHuskAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinHuskAnimInstance, 1665068426);
	template<> THETWINS_API UClass* StaticClass<UTwinHuskAnimInstance>()
	{
		return UTwinHuskAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinHuskAnimInstance(Z_Construct_UClass_UTwinHuskAnimInstance, &UTwinHuskAnimInstance::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinHuskAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinHuskAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
