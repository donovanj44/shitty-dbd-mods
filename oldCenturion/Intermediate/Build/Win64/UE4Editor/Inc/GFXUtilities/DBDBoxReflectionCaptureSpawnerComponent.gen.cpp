// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/DBDBoxReflectionCaptureSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDBoxReflectionCaptureSpawnerComponent() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDBDBoxReflectionCaptureSpawnerComponent::StaticRegisterNativesUDBDBoxReflectionCaptureSpawnerComponent()
	{
	}
	UClass* Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_NoRegister()
	{
		return UDBDBoxReflectionCaptureSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCaptureBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCaptureBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewInfluenceBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewInfluenceBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTransitionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoxTransitionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfluenceBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfluenceBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DBDBoxReflectionCaptureSpawnerComponent.h" },
		{ "ModuleRelativePath", "Public/DBDBoxReflectionCaptureSpawnerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewCaptureBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDBoxReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewCaptureBox = { "PreviewCaptureBox", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBoxReflectionCaptureSpawnerComponent, PreviewCaptureBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewCaptureBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewCaptureBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewInfluenceBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDBoxReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewInfluenceBox = { "PreviewInfluenceBox", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBoxReflectionCaptureSpawnerComponent, PreviewInfluenceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewInfluenceBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewInfluenceBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_BoxTransitionDistance_MetaData[] = {
		{ "Category", "DBDBoxReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDBoxReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_BoxTransitionDistance = { "BoxTransitionDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBoxReflectionCaptureSpawnerComponent, BoxTransitionDistance), METADATA_PARAMS(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_BoxTransitionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_BoxTransitionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_InfluenceBox_MetaData[] = {
		{ "Category", "DBDBoxReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDBoxReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_InfluenceBox = { "InfluenceBox", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDBoxReflectionCaptureSpawnerComponent, InfluenceBox), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_InfluenceBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_InfluenceBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewCaptureBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_PreviewInfluenceBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_BoxTransitionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::NewProp_InfluenceBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDBoxReflectionCaptureSpawnerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::ClassParams = {
		&UDBDBoxReflectionCaptureSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDBoxReflectionCaptureSpawnerComponent, 1714784885);
	template<> GFXUTILITIES_API UClass* StaticClass<UDBDBoxReflectionCaptureSpawnerComponent>()
	{
		return UDBDBoxReflectionCaptureSpawnerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDBoxReflectionCaptureSpawnerComponent(Z_Construct_UClass_UDBDBoxReflectionCaptureSpawnerComponent, &UDBDBoxReflectionCaptureSpawnerComponent::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UDBDBoxReflectionCaptureSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDBoxReflectionCaptureSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
