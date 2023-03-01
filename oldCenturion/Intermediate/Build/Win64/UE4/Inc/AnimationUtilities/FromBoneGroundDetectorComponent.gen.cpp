// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/FromBoneGroundDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFromBoneGroundDetectorComponent() {}
// Cross Module References
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UFromBoneGroundDetectorComponent_NoRegister();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UFromBoneGroundDetectorComponent();
	ANIMATIONUTILITIES_API UClass* Z_Construct_UClass_UBaseGroundDetectorComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UFromBoneGroundDetectorComponent::StaticRegisterNativesUFromBoneGroundDetectorComponent()
	{
	}
	UClass* Z_Construct_UClass_UFromBoneGroundDetectorComponent_NoRegister()
	{
		return UFromBoneGroundDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__startOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseGroundDetectorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FromBoneGroundDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/FromBoneGroundDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::NewProp__startOffset_MetaData[] = {
		{ "Category", "FromBoneGroundDetectorComponent" },
		{ "ModuleRelativePath", "Public/FromBoneGroundDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::NewProp__startOffset = { "_startOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFromBoneGroundDetectorComponent, _startOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::NewProp__startOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::NewProp__startOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::NewProp__startOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFromBoneGroundDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::ClassParams = {
		&UFromBoneGroundDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFromBoneGroundDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFromBoneGroundDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFromBoneGroundDetectorComponent, 4178480585);
	template<> ANIMATIONUTILITIES_API UClass* StaticClass<UFromBoneGroundDetectorComponent>()
	{
		return UFromBoneGroundDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFromBoneGroundDetectorComponent(Z_Construct_UClass_UFromBoneGroundDetectorComponent, &UFromBoneGroundDetectorComponent::StaticClass, TEXT("/Script/AnimationUtilities"), TEXT("UFromBoneGroundDetectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFromBoneGroundDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
