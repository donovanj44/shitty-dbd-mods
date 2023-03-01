// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VFXUtilities/Public/BaseVFX.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseVFX() {}
// Cross Module References
	VFXUTILITIES_API UClass* Z_Construct_UClass_ABaseVFX_NoRegister();
	VFXUTILITIES_API UClass* Z_Construct_UClass_ABaseVFX();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VFXUtilities();
// End Cross Module References
	void ABaseVFX::StaticRegisterNativesABaseVFX()
	{
	}
	UClass* Z_Construct_UClass_ABaseVFX_NoRegister()
	{
		return ABaseVFX::StaticClass();
	}
	struct Z_Construct_UClass_ABaseVFX_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldLoadOnServer_MetaData[];
#endif
		static void NewProp__shouldLoadOnServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldLoadOnServer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseVFX_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseVFX_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseVFX.h" },
		{ "ModuleRelativePath", "Public/BaseVFX.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseVFX_Statics::NewProp__shouldLoadOnServer_MetaData[] = {
		{ "Category", "BaseVFX" },
		{ "ModuleRelativePath", "Public/BaseVFX.h" },
	};
#endif
	void Z_Construct_UClass_ABaseVFX_Statics::NewProp__shouldLoadOnServer_SetBit(void* Obj)
	{
		((ABaseVFX*)Obj)->_shouldLoadOnServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseVFX_Statics::NewProp__shouldLoadOnServer = { "_shouldLoadOnServer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseVFX), &Z_Construct_UClass_ABaseVFX_Statics::NewProp__shouldLoadOnServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseVFX_Statics::NewProp__shouldLoadOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseVFX_Statics::NewProp__shouldLoadOnServer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseVFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseVFX_Statics::NewProp__shouldLoadOnServer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseVFX_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseVFX>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseVFX_Statics::ClassParams = {
		&ABaseVFX::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseVFX_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseVFX_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseVFX_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseVFX_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseVFX()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseVFX_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseVFX, 2855056909);
	template<> VFXUTILITIES_API UClass* StaticClass<ABaseVFX>()
	{
		return ABaseVFX::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseVFX(Z_Construct_UClass_ABaseVFX, &ABaseVFX::StaticClass, TEXT("/Script/VFXUtilities"), TEXT("ABaseVFX"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseVFX);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
