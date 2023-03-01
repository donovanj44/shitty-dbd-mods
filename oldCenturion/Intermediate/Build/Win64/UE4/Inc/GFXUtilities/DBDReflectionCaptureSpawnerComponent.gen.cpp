// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/DBDReflectionCaptureSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDReflectionCaptureSpawnerComponent() {}
// Cross Module References
	GFXUTILITIES_API UClass* Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType();
// End Cross Module References
	DEFINE_FUNCTION(UDBDReflectionCaptureSpawnerComponent::execSetBrightness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewBrightness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrightness(Z_Param_NewBrightness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDReflectionCaptureSpawnerComponent::execSetContributionFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewContributionFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContributionFactor(Z_Param_NewContributionFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDReflectionCaptureSpawnerComponent::execSetIBLMultiplicator)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIBLMultiplicator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIBLMultiplicator(Z_Param_NewIBLMultiplicator);
		P_NATIVE_END;
	}
	void UDBDReflectionCaptureSpawnerComponent::StaticRegisterNativesUDBDReflectionCaptureSpawnerComponent()
	{
		UClass* Class = UDBDReflectionCaptureSpawnerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBrightness", &UDBDReflectionCaptureSpawnerComponent::execSetBrightness },
			{ "SetContributionFactor", &UDBDReflectionCaptureSpawnerComponent::execSetContributionFactor },
			{ "SetIBLMultiplicator", &UDBDReflectionCaptureSpawnerComponent::execSetIBLMultiplicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics
	{
		struct DBDReflectionCaptureSpawnerComponent_eventSetBrightness_Parms
		{
			float NewBrightness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewBrightness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::NewProp_NewBrightness = { "NewBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDReflectionCaptureSpawnerComponent_eventSetBrightness_Parms, NewBrightness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::NewProp_NewBrightness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent, nullptr, "SetBrightness", nullptr, nullptr, sizeof(DBDReflectionCaptureSpawnerComponent_eventSetBrightness_Parms), Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics
	{
		struct DBDReflectionCaptureSpawnerComponent_eventSetContributionFactor_Parms
		{
			float NewContributionFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewContributionFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::NewProp_NewContributionFactor = { "NewContributionFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDReflectionCaptureSpawnerComponent_eventSetContributionFactor_Parms, NewContributionFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::NewProp_NewContributionFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent, nullptr, "SetContributionFactor", nullptr, nullptr, sizeof(DBDReflectionCaptureSpawnerComponent_eventSetContributionFactor_Parms), Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics
	{
		struct DBDReflectionCaptureSpawnerComponent_eventSetIBLMultiplicator_Parms
		{
			float NewIBLMultiplicator;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIBLMultiplicator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::NewProp_NewIBLMultiplicator = { "NewIBLMultiplicator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDReflectionCaptureSpawnerComponent_eventSetIBLMultiplicator_Parms, NewIBLMultiplicator), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::NewProp_NewIBLMultiplicator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent, nullptr, "SetIBLMultiplicator", nullptr, nullptr, sizeof(DBDReflectionCaptureSpawnerComponent_eventSetIBLMultiplicator_Parms), Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_NoRegister()
	{
		return UDBDReflectionCaptureSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedReflectionCaptureComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedReflectionCaptureComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedReflectionCaptureComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedReflectionCaptures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedReflectionCaptures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedReflectionCaptures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CaptureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeTinted_MetaData[];
#endif
		static void NewProp_bCanBeTinted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeTinted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IBLMultiplicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IBLMultiplicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContributionFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContributionFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionSourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReflectionSourceType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReflectionSourceType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetBrightness, "SetBrightness" }, // 752178900
		{ &Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetContributionFactor, "SetContributionFactor" }, // 2544587722
		{ &Z_Construct_UFunction_UDBDReflectionCaptureSpawnerComponent_SetIBLMultiplicator, "SetIBLMultiplicator" }, // 1594925052
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DBDReflectionCaptureSpawnerComponent.h" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptureComponents = { "SpawnedReflectionCaptureComponents", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, SpawnedReflectionCaptureComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptureComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptureComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptureComponents_Inner = { "SpawnedReflectionCaptureComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UReflectionCaptureComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptures_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptures = { "SpawnedReflectionCaptures", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, SpawnedReflectionCaptures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptures_Inner = { "SpawnedReflectionCaptures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AReflectionCapture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_CaptureOffset_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_CaptureOffset = { "CaptureOffset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, CaptureOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_CaptureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_CaptureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_bCanBeTinted_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_bCanBeTinted_SetBit(void* Obj)
	{
		((UDBDReflectionCaptureSpawnerComponent*)Obj)->bCanBeTinted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_bCanBeTinted = { "bCanBeTinted", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDReflectionCaptureSpawnerComponent), &Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_bCanBeTinted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_bCanBeTinted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_bCanBeTinted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_IBLMultiplicator_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_IBLMultiplicator = { "IBLMultiplicator", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, IBLMultiplicator), METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_IBLMultiplicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_IBLMultiplicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ContributionFactor_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ContributionFactor = { "ContributionFactor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, ContributionFactor), METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ContributionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ContributionFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, Brightness), METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SourceCubemapAngle_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SourceCubemapAngle = { "SourceCubemapAngle", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, SourceCubemapAngle), METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SourceCubemapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SourceCubemapAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Cubemap_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Cubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ReflectionSourceType_MetaData[] = {
		{ "Category", "DBDReflectionCaptureSpawnerComponent" },
		{ "ModuleRelativePath", "Public/DBDReflectionCaptureSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ReflectionSourceType = { "ReflectionSourceType", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDReflectionCaptureSpawnerComponent, ReflectionSourceType), Z_Construct_UEnum_Engine_EReflectionSourceType, METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ReflectionSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ReflectionSourceType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ReflectionSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptureComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptureComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SpawnedReflectionCaptures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_CaptureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_bCanBeTinted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_IBLMultiplicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ContributionFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_SourceCubemapAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_Cubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ReflectionSourceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::NewProp_ReflectionSourceType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDReflectionCaptureSpawnerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::ClassParams = {
		&UDBDReflectionCaptureSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDReflectionCaptureSpawnerComponent, 49872853);
	template<> GFXUTILITIES_API UClass* StaticClass<UDBDReflectionCaptureSpawnerComponent>()
	{
		return UDBDReflectionCaptureSpawnerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDReflectionCaptureSpawnerComponent(Z_Construct_UClass_UDBDReflectionCaptureSpawnerComponent, &UDBDReflectionCaptureSpawnerComponent::StaticClass, TEXT("/Script/GFXUtilities"), TEXT("UDBDReflectionCaptureSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDReflectionCaptureSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
