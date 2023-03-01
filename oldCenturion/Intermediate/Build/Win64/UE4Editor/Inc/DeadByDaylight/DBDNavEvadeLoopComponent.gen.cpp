// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDNavEvadeLoopComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDNavEvadeLoopComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDNavEvadeLoopComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIEvadeLoopSides();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDBDNavEvadeLoopComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UDBDNavEvadeLoopComponent::StaticRegisterNativesUDBDNavEvadeLoopComponent()
	{
		UClass* Class = UDBDNavEvadeLoopComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UDBDNavEvadeLoopComponent::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDNavEvadeLoopComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDNavEvadeLoopComponent_NoRegister()
	{
		return UDBDNavEvadeLoopComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugFilter_MetaData[];
#endif
		static void NewProp_DrawDebugFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugEditMode_MetaData[];
#endif
		static void NewProp_DebugEditMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugEditMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitToSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LimitToSide;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LimitToSide_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSafetyLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSafetyLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSafetyLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSafetyLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvadeLoopFilterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EvadeLoopFilterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSnapCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoSnapCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSnapPointsDownHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSnapPointsDownHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSnapPointsUpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSnapPointsUpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideBlockerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SideBlockerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvadeDoorSideOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EvadeDoorSideOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvadeDoorFrontPointOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EvadeDoorFrontPointOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvadeDoorExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvadeDoorExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDNavEvadeLoopComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 84910574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDNavEvadeLoopComponent.h" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DrawDebugFilter_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DrawDebugFilter_SetBit(void* Obj)
	{
		((UDBDNavEvadeLoopComponent*)Obj)->DrawDebugFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DrawDebugFilter = { "DrawDebugFilter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavEvadeLoopComponent), &Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DrawDebugFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DrawDebugFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DrawDebugFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DebugEditMode_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DebugEditMode_SetBit(void* Obj)
	{
		((UDBDNavEvadeLoopComponent*)Obj)->DebugEditMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DebugEditMode = { "DebugEditMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavEvadeLoopComponent), &Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DebugEditMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DebugEditMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DebugEditMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_LimitToSide_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_LimitToSide = { "LimitToSide", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, LimitToSide), Z_Construct_UEnum_DeadByDaylight_EAIEvadeLoopSides, METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_LimitToSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_LimitToSide_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_LimitToSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MaxSafetyLength_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MaxSafetyLength = { "MaxSafetyLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, MaxSafetyLength), METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MaxSafetyLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MaxSafetyLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MinSafetyLength_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MinSafetyLength = { "MinSafetyLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, MinSafetyLength), METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MinSafetyLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MinSafetyLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeLoopFilterClass_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeLoopFilterClass = { "EvadeLoopFilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, EvadeLoopFilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeLoopFilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeLoopFilterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapCollisionChannel_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapCollisionChannel = { "AutoSnapCollisionChannel", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, AutoSnapCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsDownHeight_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsDownHeight = { "AutoSnapPointsDownHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, AutoSnapPointsDownHeight), METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsDownHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsDownHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsUpHeight_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsUpHeight = { "AutoSnapPointsUpHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, AutoSnapPointsUpHeight), METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsUpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsUpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_SideBlockerOffset_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_SideBlockerOffset = { "SideBlockerOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, SideBlockerOffset), METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_SideBlockerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_SideBlockerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorSideOffset_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorSideOffset = { "EvadeDoorSideOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, EvadeDoorSideOffset), METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorSideOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorSideOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorFrontPointOffset_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorFrontPointOffset = { "EvadeDoorFrontPointOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, EvadeDoorFrontPointOffset), METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorFrontPointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorFrontPointOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorExtent_MetaData[] = {
		{ "Category", "DBDNavEvadeLoopComponent" },
		{ "ModuleRelativePath", "Public/DBDNavEvadeLoopComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorExtent = { "EvadeDoorExtent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavEvadeLoopComponent, EvadeDoorExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DrawDebugFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_DebugEditMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_LimitToSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_LimitToSide_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MaxSafetyLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_MinSafetyLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeLoopFilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsDownHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_AutoSnapPointsUpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_SideBlockerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorSideOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorFrontPointOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::NewProp_EvadeDoorExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDNavEvadeLoopComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::ClassParams = {
		&UDBDNavEvadeLoopComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDNavEvadeLoopComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDNavEvadeLoopComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDNavEvadeLoopComponent, 4228700222);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDNavEvadeLoopComponent>()
	{
		return UDBDNavEvadeLoopComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDNavEvadeLoopComponent(Z_Construct_UClass_UDBDNavEvadeLoopComponent, &UDBDNavEvadeLoopComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDNavEvadeLoopComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDNavEvadeLoopComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
