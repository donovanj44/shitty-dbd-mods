// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TriplanarDecalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriplanarDecalComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTriplanarDecalComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTriplanarDecalComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_UTriplanarDecalComponent_UpdateTriplanarDecal = FName(TEXT("UpdateTriplanarDecal"));
	void UTriplanarDecalComponent::UpdateTriplanarDecal()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriplanarDecalComponent_UpdateTriplanarDecal),NULL);
	}
	void UTriplanarDecalComponent::StaticRegisterNativesUTriplanarDecalComponent()
	{
	}
	struct Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriplanarDecalComponent, nullptr, "UpdateTriplanarDecal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriplanarDecalComponent_NoRegister()
	{
		return UTriplanarDecalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriplanarDecalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__decalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__decalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__triPlanarDecalClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__triPlanarDecalClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__triPlanarDecal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__triPlanarDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinQualitySetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinQualitySetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaskIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriplanarDecalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriplanarDecalComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriplanarDecalComponent_UpdateTriplanarDecal, "UpdateTriplanarDecal" }, // 559962918
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TriplanarDecalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__decalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__decalMaterial = { "_decalMaterial", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, _decalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__decalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__decalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecalClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecalClass = { "_triPlanarDecalClass", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, _triPlanarDecalClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecalClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecalClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecal_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecal = { "_triPlanarDecal", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, _triPlanarDecal), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinQualitySetting_MetaData[] = {
		{ "Category", "TriplanarDecalComponent" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinQualitySetting = { "MinQualitySetting", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, MinQualitySetting), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinQualitySetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinQualitySetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskTexture_MetaData[] = {
		{ "Category", "TriplanarDecalComponent" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskTexture = { "MaskTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, MaskTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_BottomTexture_MetaData[] = {
		{ "Category", "TriplanarDecalComponent" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_BottomTexture = { "BottomTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, BottomTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_BottomTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_BottomTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_TopTexture_MetaData[] = {
		{ "Category", "TriplanarDecalComponent" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_TopTexture = { "TopTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, TopTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_TopTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_TopTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskIntensity_MetaData[] = {
		{ "Category", "TriplanarDecalComponent" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskIntensity = { "MaskIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, MaskIntensity), METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "TriplanarDecalComponent" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, Height), METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "TriplanarDecalComponent" },
		{ "ModuleRelativePath", "Public/TriplanarDecalComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriplanarDecalComponent, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriplanarDecalComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__decalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp__triPlanarDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinQualitySetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_BottomTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_TopTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MaskIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriplanarDecalComponent_Statics::NewProp_MinHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriplanarDecalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriplanarDecalComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriplanarDecalComponent_Statics::ClassParams = {
		&UTriplanarDecalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriplanarDecalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriplanarDecalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriplanarDecalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriplanarDecalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriplanarDecalComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriplanarDecalComponent, 3831269191);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTriplanarDecalComponent>()
	{
		return UTriplanarDecalComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriplanarDecalComponent(Z_Construct_UClass_UTriplanarDecalComponent, &UTriplanarDecalComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTriplanarDecalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriplanarDecalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
