// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ProjectileLauncher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ProjectileLauncher() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ProjectileLauncher_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ProjectileLauncher();
	PROJECTILE_API UClass* Z_Construct_UClass_UBaseProjectileLauncher();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25ControlledProjectile_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UK25ProjectileLauncher::StaticRegisterNativesUK25ProjectileLauncher()
	{
	}
	UClass* Z_Construct_UClass_UK25ProjectileLauncher_NoRegister()
	{
		return UK25ProjectileLauncher::StaticClass();
	}
	struct Z_Construct_UClass_UK25ProjectileLauncher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__controlledProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isControlledProjectileRequested_MetaData[];
#endif
		static void NewProp__isControlledProjectileRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isControlledProjectileRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectileInitialSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__controlledProjectileInitialSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ProjectileLauncher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseProjectileLauncher,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ProjectileLauncher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ProjectileLauncher.h" },
		{ "ModuleRelativePath", "Public/K25ProjectileLauncher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectile = { "_controlledProjectile", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ProjectileLauncher, _controlledProjectile), Z_Construct_UClass_AK25ControlledProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__isControlledProjectileRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ProjectileLauncher.h" },
	};
#endif
	void Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__isControlledProjectileRequested_SetBit(void* Obj)
	{
		((UK25ProjectileLauncher*)Obj)->_isControlledProjectileRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__isControlledProjectileRequested = { "_isControlledProjectileRequested", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25ProjectileLauncher), &Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__isControlledProjectileRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__isControlledProjectileRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__isControlledProjectileRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectileInitialSpeed_MetaData[] = {
		{ "Category", "K25ProjectileLauncher" },
		{ "ModuleRelativePath", "Public/K25ProjectileLauncher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectileInitialSpeed = { "_controlledProjectileInitialSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ProjectileLauncher, _controlledProjectileInitialSpeed), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectileInitialSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectileInitialSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ProjectileLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__isControlledProjectileRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ProjectileLauncher_Statics::NewProp__controlledProjectileInitialSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ProjectileLauncher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ProjectileLauncher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ProjectileLauncher_Statics::ClassParams = {
		&UK25ProjectileLauncher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK25ProjectileLauncher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ProjectileLauncher_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ProjectileLauncher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ProjectileLauncher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ProjectileLauncher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ProjectileLauncher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ProjectileLauncher, 739222012);
	template<> THEK25_API UClass* StaticClass<UK25ProjectileLauncher>()
	{
		return UK25ProjectileLauncher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ProjectileLauncher(Z_Construct_UClass_UK25ProjectileLauncher, &UK25ProjectileLauncher::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ProjectileLauncher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ProjectileLauncher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
