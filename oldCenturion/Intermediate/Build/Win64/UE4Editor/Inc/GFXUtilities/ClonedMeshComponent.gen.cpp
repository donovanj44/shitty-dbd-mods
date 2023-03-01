// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/ClonedMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClonedMeshComponent() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClonedMeshComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UClonedMeshComponent();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UBatchMeshCommands();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void UClonedMeshComponent::StaticRegisterNativesUClonedMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UClonedMeshComponent_NoRegister()
	{
		return UClonedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClonedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cloneToOriginal_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cloneToOriginal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cloneToOriginal_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cloneToOriginal_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__originalToClone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__originalToClone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__originalToClone_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__originalToClone_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClonedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBatchMeshCommands,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClonedMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ClonedMeshComponent.h" },
		{ "ModuleRelativePath", "Public/ClonedMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClonedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal = { "_cloneToOriginal", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClonedMeshComponent, _cloneToOriginal), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal_Key_KeyProp = { "_cloneToOriginal_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal_ValueProp = { "_cloneToOriginal", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClonedMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone = { "_originalToClone", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClonedMeshComponent, _originalToClone), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone_Key_KeyProp = { "_originalToClone_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone_ValueProp = { "_originalToClone", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClonedMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__cloneToOriginal_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClonedMeshComponent_Statics::NewProp__originalToClone_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClonedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClonedMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClonedMeshComponent_Statics::ClassParams = {
		&UClonedMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClonedMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClonedMeshComponent_Statics::PropPointers),
		0,
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UClonedMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClonedMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClonedMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClonedMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClonedMeshComponent, 2940559049);
	template<> GFXUTILITIES_API UClass* StaticClass<UClonedMeshComponent>()
	{
		return UClonedMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClonedMeshComponent(Z_Construct_UClass_UClonedMeshComponent, &UClonedMeshComponent::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UClonedMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClonedMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
