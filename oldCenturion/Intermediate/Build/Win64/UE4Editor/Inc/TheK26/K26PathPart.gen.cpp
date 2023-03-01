// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26PathPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26PathPart() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_AK26PathPart_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_AK26PathPart();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AK26PathPart::StaticRegisterNativesAK26PathPart()
	{
	}
	UClass* Z_Construct_UClass_AK26PathPart_NoRegister()
	{
		return AK26PathPart::StaticClass();
	}
	struct Z_Construct_UClass_AK26PathPart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isVisibleForKiller_MetaData[];
#endif
		static void NewProp__isVisibleForKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isVisibleForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isVisibleForSurvivor_MetaData[];
#endif
		static void NewProp__isVisibleForSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isVisibleForSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineUpdateStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineUpdateStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visualEffectSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__visualEffectSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visualEffectKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__visualEffectKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AK26PathPart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26PathPart.h" },
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForKiller_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	void Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForKiller_SetBit(void* Obj)
	{
		((AK26PathPart*)Obj)->_isVisibleForKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForKiller = { "_isVisibleForKiller", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK26PathPart), &Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	void Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForSurvivor_SetBit(void* Obj)
	{
		((AK26PathPart*)Obj)->_isVisibleForSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForSurvivor = { "_isVisibleForSurvivor", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AK26PathPart), &Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__rootComponent_MetaData[] = {
		{ "Category", "K26PathPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26PathPart, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__rootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__rootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineUpdateStrategy_MetaData[] = {
		{ "Category", "K26PathPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineUpdateStrategy = { "_outlineUpdateStrategy", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26PathPart, _outlineUpdateStrategy), Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineUpdateStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineUpdateStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectSurvivor_MetaData[] = {
		{ "Category", "K26PathPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectSurvivor = { "_visualEffectSurvivor", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26PathPart, _visualEffectSurvivor), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectKiller_MetaData[] = {
		{ "Category", "K26PathPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectKiller = { "_visualEffectKiller", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26PathPart, _visualEffectKiller), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "K26PathPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26PathPart, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AK26PathPart_Statics::NewProp__mesh_MetaData[] = {
		{ "Category", "K26PathPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AK26PathPart_Statics::NewProp__mesh = { "_mesh", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AK26PathPart, _mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::NewProp__mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::NewProp__mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AK26PathPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__isVisibleForSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__rootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineUpdateStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__visualEffectKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AK26PathPart_Statics::NewProp__mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AK26PathPart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AK26PathPart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AK26PathPart_Statics::ClassParams = {
		&AK26PathPart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AK26PathPart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AK26PathPart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AK26PathPart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AK26PathPart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AK26PathPart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AK26PathPart, 1701257575);
	template<> THEK26_API UClass* StaticClass<AK26PathPart>()
	{
		return AK26PathPart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AK26PathPart(Z_Construct_UClass_AK26PathPart, &AK26PathPart::StaticClass, TEXT("/Script/TheK26"), TEXT("AK26PathPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AK26PathPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
