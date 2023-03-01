// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EditorActorVisualization.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorActorVisualization() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEditorActorVisualization_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEditorActorVisualization();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UEditorActorVisualization::StaticRegisterNativesUEditorActorVisualization()
	{
	}
	UClass* Z_Construct_UClass_UEditorActorVisualization_NoRegister()
	{
		return UEditorActorVisualization::StaticClass();
	}
	struct Z_Construct_UClass_UEditorActorVisualization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorVisualization_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorVisualization;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorActorVisualization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorActorVisualization_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "EditorActorVisualization.h" },
		{ "ModuleRelativePath", "Public/EditorActorVisualization.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "EditorActorVisualization" },
		{ "ModuleRelativePath", "Public/EditorActorVisualization.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorActorVisualization, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_ActorVisualization_MetaData[] = {
		{ "Category", "EditorActorVisualization" },
		{ "ModuleRelativePath", "Public/EditorActorVisualization.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_ActorVisualization = { "ActorVisualization", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditorActorVisualization, ActorVisualization), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_ActorVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_ActorVisualization_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorActorVisualization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorActorVisualization_Statics::NewProp_ActorVisualization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorActorVisualization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorActorVisualization>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditorActorVisualization_Statics::ClassParams = {
		&UEditorActorVisualization::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorActorVisualization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorActorVisualization_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorActorVisualization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorActorVisualization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorActorVisualization()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditorActorVisualization_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditorActorVisualization, 3246793427);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEditorActorVisualization>()
	{
		return UEditorActorVisualization::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditorActorVisualization(Z_Construct_UClass_UEditorActorVisualization, &UEditorActorVisualization::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEditorActorVisualization"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorActorVisualization);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
