// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDClipRegionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDClipRegionComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDClipRegionComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDClipRegionComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDLocatorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAffectedMaterialAndVariant();
// End Cross Module References
	DEFINE_FUNCTION(UDBDClipRegionComponent::execApplyArrayOfClipsToDynamicMaterial)
	{
		P_GET_TARRAY(UDBDClipRegionComponent*,Z_Param_InRegions);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_dynamicInstanceToClip);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDClipRegionComponent::ApplyArrayOfClipsToDynamicMaterial(Z_Param_InRegions,Z_Param_dynamicInstanceToClip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDClipRegionComponent::execApplyClipToDynamicMaterial)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_dynamicInstanceToClip);
		P_GET_PROPERTY(FIntProperty,Z_Param_InRegionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyClipToDynamicMaterial(Z_Param_dynamicInstanceToClip,Z_Param_InRegionID);
		P_NATIVE_END;
	}
	static FName NAME_UDBDClipRegionComponent_ApplyClip = FName(TEXT("ApplyClip"));
	void UDBDClipRegionComponent::ApplyClip(UMaterialInstanceDynamic* InMaterial2clip, int32 InRegionID)
	{
		DBDClipRegionComponent_eventApplyClip_Parms Parms;
		Parms.InMaterial2clip=InMaterial2clip;
		Parms.InRegionID=InRegionID;
		ProcessEvent(FindFunctionChecked(NAME_UDBDClipRegionComponent_ApplyClip),&Parms);
	}
	static FName NAME_UDBDClipRegionComponent_ClipDistance = FName(TEXT("ClipDistance"));
	float UDBDClipRegionComponent::ClipDistance(UMeshComponent* InMeshComponent)
	{
		DBDClipRegionComponent_eventClipDistance_Parms Parms;
		Parms.InMeshComponent=InMeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_UDBDClipRegionComponent_ClipDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDBDClipRegionComponent_NotifyShouldClipComponent = FName(TEXT("NotifyShouldClipComponent"));
	void UDBDClipRegionComponent::NotifyShouldClipComponent(UMeshComponent* InMeshComponent)
	{
		DBDClipRegionComponent_eventNotifyShouldClipComponent_Parms Parms;
		Parms.InMeshComponent=InMeshComponent;
		ProcessEvent(FindFunctionChecked(NAME_UDBDClipRegionComponent_NotifyShouldClipComponent),&Parms);
	}
	void UDBDClipRegionComponent::StaticRegisterNativesUDBDClipRegionComponent()
	{
		UClass* Class = UDBDClipRegionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyArrayOfClipsToDynamicMaterial", &UDBDClipRegionComponent::execApplyArrayOfClipsToDynamicMaterial },
			{ "ApplyClipToDynamicMaterial", &UDBDClipRegionComponent::execApplyClipToDynamicMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics
	{
		struct DBDClipRegionComponent_eventApplyArrayOfClipsToDynamicMaterial_Parms
		{
			TArray<UDBDClipRegionComponent*> InRegions;
			UMaterialInstanceDynamic* dynamicInstanceToClip;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dynamicInstanceToClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InRegions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRegions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_dynamicInstanceToClip = { "dynamicInstanceToClip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventApplyArrayOfClipsToDynamicMaterial_Parms, dynamicInstanceToClip), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_InRegions_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_InRegions = { "InRegions", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventApplyArrayOfClipsToDynamicMaterial_Parms, InRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_InRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_InRegions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_InRegions_Inner = { "InRegions", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDClipRegionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_dynamicInstanceToClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_InRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::NewProp_InRegions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClipRegionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDClipRegionComponent, nullptr, "ApplyArrayOfClipsToDynamicMaterial", nullptr, nullptr, sizeof(DBDClipRegionComponent_eventApplyArrayOfClipsToDynamicMaterial_Parms), Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InRegionID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMaterial2clip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::NewProp_InRegionID = { "InRegionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventApplyClip_Parms, InRegionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::NewProp_InMaterial2clip = { "InMaterial2clip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventApplyClip_Parms, InMaterial2clip), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::NewProp_InRegionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::NewProp_InMaterial2clip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClipRegionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDClipRegionComponent, nullptr, "ApplyClip", nullptr, nullptr, sizeof(DBDClipRegionComponent_eventApplyClip_Parms), Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics
	{
		struct DBDClipRegionComponent_eventApplyClipToDynamicMaterial_Parms
		{
			UMaterialInstanceDynamic* dynamicInstanceToClip;
			int32 InRegionID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InRegionID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dynamicInstanceToClip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::NewProp_InRegionID = { "InRegionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventApplyClipToDynamicMaterial_Parms, InRegionID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::NewProp_dynamicInstanceToClip = { "dynamicInstanceToClip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventApplyClipToDynamicMaterial_Parms, dynamicInstanceToClip), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::NewProp_InRegionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::NewProp_dynamicInstanceToClip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClipRegionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDClipRegionComponent, nullptr, "ApplyClipToDynamicMaterial", nullptr, nullptr, sizeof(DBDClipRegionComponent_eventApplyClipToDynamicMaterial_Parms), Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventClipDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::NewProp_InMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::NewProp_InMeshComponent = { "InMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventClipDistance_Parms, InMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::NewProp_InMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::NewProp_InMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::NewProp_InMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClipRegionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDClipRegionComponent, nullptr, "ClipDistance", nullptr, nullptr, sizeof(DBDClipRegionComponent_eventClipDistance_Parms), Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::NewProp_InMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::NewProp_InMeshComponent = { "InMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDClipRegionComponent_eventNotifyShouldClipComponent_Parms, InMeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::NewProp_InMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::NewProp_InMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::NewProp_InMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDClipRegionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDClipRegionComponent, nullptr, "NotifyShouldClipComponent", nullptr, nullptr, sizeof(DBDClipRegionComponent_eventNotifyShouldClipComponent_Parms), Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDClipRegionComponent_NoRegister()
	{
		return UDBDClipRegionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDClipRegionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedMaterialsAndVariants_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectedMaterialsAndVariants;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AffectedMaterialsAndVariants_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDClipRegionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDBDLocatorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDClipRegionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDClipRegionComponent_ApplyArrayOfClipsToDynamicMaterial, "ApplyArrayOfClipsToDynamicMaterial" }, // 532940556
		{ &Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClip, "ApplyClip" }, // 4223129616
		{ &Z_Construct_UFunction_UDBDClipRegionComponent_ApplyClipToDynamicMaterial, "ApplyClipToDynamicMaterial" }, // 1627955664
		{ &Z_Construct_UFunction_UDBDClipRegionComponent_ClipDistance, "ClipDistance" }, // 2902530949
		{ &Z_Construct_UFunction_UDBDClipRegionComponent_NotifyShouldClipComponent, "NotifyShouldClipComponent" }, // 2582543475
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDClipRegionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DBDClipRegionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DBDClipRegionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDClipRegionComponent_Statics::NewProp_AffectedMaterialsAndVariants_MetaData[] = {
		{ "Category", "DBDClipRegionComponent" },
		{ "ModuleRelativePath", "Public/DBDClipRegionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDClipRegionComponent_Statics::NewProp_AffectedMaterialsAndVariants = { "AffectedMaterialsAndVariants", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDClipRegionComponent, AffectedMaterialsAndVariants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDClipRegionComponent_Statics::NewProp_AffectedMaterialsAndVariants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDClipRegionComponent_Statics::NewProp_AffectedMaterialsAndVariants_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDClipRegionComponent_Statics::NewProp_AffectedMaterialsAndVariants_Inner = { "AffectedMaterialsAndVariants", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAffectedMaterialAndVariant, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDClipRegionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDClipRegionComponent_Statics::NewProp_AffectedMaterialsAndVariants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDClipRegionComponent_Statics::NewProp_AffectedMaterialsAndVariants_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDClipRegionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDClipRegionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDClipRegionComponent_Statics::ClassParams = {
		&UDBDClipRegionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDClipRegionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDClipRegionComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDClipRegionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDClipRegionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDClipRegionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDClipRegionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDClipRegionComponent, 2493497039);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDClipRegionComponent>()
	{
		return UDBDClipRegionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDClipRegionComponent(Z_Construct_UClass_UDBDClipRegionComponent, &UDBDClipRegionComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDClipRegionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDClipRegionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
