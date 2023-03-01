// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ExposerInteriorZoneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposerInteriorZoneComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExposerInteriorZoneComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExposerInteriorZoneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UExposerInteriorZoneComponent::execAddExposerSpawnPoint)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_point);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddExposerSpawnPoint(Z_Param_point);
		P_NATIVE_END;
	}
	void UExposerInteriorZoneComponent::StaticRegisterNativesUExposerInteriorZoneComponent()
	{
		UClass* Class = UExposerInteriorZoneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExposerSpawnPoint", &UExposerInteriorZoneComponent::execAddExposerSpawnPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics
	{
		struct ExposerInteriorZoneComponent_eventAddExposerSpawnPoint_Parms
		{
			USceneComponent* point;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::NewProp_point_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExposerInteriorZoneComponent_eventAddExposerSpawnPoint_Parms, point), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::NewProp_point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::NewProp_point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::NewProp_point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExposerInteriorZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposerInteriorZoneComponent, nullptr, "AddExposerSpawnPoint", nullptr, nullptr, sizeof(ExposerInteriorZoneComponent_eventAddExposerSpawnPoint_Parms), Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExposerInteriorZoneComponent_NoRegister()
	{
		return UExposerInteriorZoneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExposerInteriorZoneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposerSpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExposerSpawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExposerSpawnPoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExposerInteriorZoneComponent_AddExposerSpawnPoint, "AddExposerSpawnPoint" }, // 3572259372
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "ExposerInteriorZoneComponent.h" },
		{ "ModuleRelativePath", "Public/ExposerInteriorZoneComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::NewProp_ExposerSpawnPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExposerInteriorZoneComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::NewProp_ExposerSpawnPoints = { "ExposerSpawnPoints", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExposerInteriorZoneComponent, ExposerSpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::NewProp_ExposerSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::NewProp_ExposerSpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::NewProp_ExposerSpawnPoints_Inner = { "ExposerSpawnPoints", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::NewProp_ExposerSpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::NewProp_ExposerSpawnPoints_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExposerInteriorZoneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::ClassParams = {
		&UExposerInteriorZoneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExposerInteriorZoneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExposerInteriorZoneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExposerInteriorZoneComponent, 3560059596);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UExposerInteriorZoneComponent>()
	{
		return UExposerInteriorZoneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExposerInteriorZoneComponent(Z_Construct_UClass_UExposerInteriorZoneComponent, &UExposerInteriorZoneComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UExposerInteriorZoneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExposerInteriorZoneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
