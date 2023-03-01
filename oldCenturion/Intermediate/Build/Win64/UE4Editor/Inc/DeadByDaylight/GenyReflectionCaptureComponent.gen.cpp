// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GenyReflectionCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenyReflectionCaptureComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenyReflectionCaptureComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenyReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FReflectionCaptureTwoStates();
// End Cross Module References
	void UGenyReflectionCaptureComponent::StaticRegisterNativesUGenyReflectionCaptureComponent()
	{
	}
	UClass* Z_Construct_UClass_UGenyReflectionCaptureComponent_NoRegister()
	{
		return UGenyReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generatorDrivenReflectionCapture_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_generatorDrivenReflectionCapture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_generatorDrivenReflectionCapture_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GenyReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/GenyReflectionCaptureComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::NewProp_generatorDrivenReflectionCapture_MetaData[] = {
		{ "Category", "GenyReflectionCaptureComponent" },
		{ "ModuleRelativePath", "Public/GenyReflectionCaptureComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::NewProp_generatorDrivenReflectionCapture = { "generatorDrivenReflectionCapture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGenyReflectionCaptureComponent, generatorDrivenReflectionCapture), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::NewProp_generatorDrivenReflectionCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::NewProp_generatorDrivenReflectionCapture_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::NewProp_generatorDrivenReflectionCapture_Inner = { "generatorDrivenReflectionCapture", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FReflectionCaptureTwoStates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::NewProp_generatorDrivenReflectionCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::NewProp_generatorDrivenReflectionCapture_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenyReflectionCaptureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::ClassParams = {
		&UGenyReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenyReflectionCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenyReflectionCaptureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenyReflectionCaptureComponent, 4115924208);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGenyReflectionCaptureComponent>()
	{
		return UGenyReflectionCaptureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenyReflectionCaptureComponent(Z_Construct_UClass_UGenyReflectionCaptureComponent, &UGenyReflectionCaptureComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGenyReflectionCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenyReflectionCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
