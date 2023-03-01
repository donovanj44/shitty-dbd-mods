// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DBDNavLinkCustomComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDNavLinkCustomComponent() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDNavLinkCustomComponent_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UDBDNavLinkCustomComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDBDNavLinkCustomComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UDBDNavLinkCustomComponent::StaticRegisterNativesUDBDNavLinkCustomComponent()
	{
		UClass* Class = UDBDNavLinkCustomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UDBDNavLinkCustomComponent::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDNavLinkCustomComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDNavLinkCustomComponent_NoRegister()
	{
		return UDBDNavLinkCustomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__navLinkProxyInProximity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__navLinkProxyInProximity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__navLinkProxyInProximity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowDebugInfo_MetaData[];
#endif
		static void NewProp_ShowDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowDebugInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherSmartLinkInProximitySearchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OtherSmartLinkInProximitySearchDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableOtherSmartLinkInProximityOnDisable_MetaData[];
#endif
		static void NewProp_EnableOtherSmartLinkInProximityOnDisable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableOtherSmartLinkInProximityOnDisable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableOtherSmartLinkInProximityOnEnable_MetaData[];
#endif
		static void NewProp_DisableOtherSmartLinkInProximityOnEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableOtherSmartLinkInProximityOnEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathObstructionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathObstructionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathObstructionTestHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathObstructionTestHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathObstructionTestShapeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathObstructionTestShapeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathObstructionTestDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathObstructionTestDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSmartLinkOnPathObstruction_MetaData[];
#endif
		static void NewProp_DisableSmartLinkOnPathObstruction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSmartLinkOnPathObstruction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSmartLinkDirectionMaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSmartLinkDirectionMaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSnapCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoSnapCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSnapSmartLinkPointsDownHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSnapSmartLinkPointsDownHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSnapSmartLinkPointsUpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoSnapSmartLinkPointsUpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLinkDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BaseLinkDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLinkRelativeEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseLinkRelativeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLinkRelativeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseLinkRelativeStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavLinkCustomComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDNavLinkCustomComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 1256441277
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDNavLinkCustomComponent.h" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp__navLinkProxyInProximity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp__navLinkProxyInProximity = { "_navLinkProxyInProximity", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, _navLinkProxyInProximity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp__navLinkProxyInProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp__navLinkProxyInProximity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp__navLinkProxyInProximity_Inner = { "_navLinkProxyInProximity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANavLinkProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_ShowDebugInfo_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_ShowDebugInfo_SetBit(void* Obj)
	{
		((UDBDNavLinkCustomComponent*)Obj)->ShowDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_ShowDebugInfo = { "ShowDebugInfo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavLinkCustomComponent), &Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_ShowDebugInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_ShowDebugInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_ShowDebugInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_OtherSmartLinkInProximitySearchDistance_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_OtherSmartLinkInProximitySearchDistance = { "OtherSmartLinkInProximitySearchDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, OtherSmartLinkInProximitySearchDistance), METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_OtherSmartLinkInProximitySearchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_OtherSmartLinkInProximitySearchDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_EnableOtherSmartLinkInProximityOnDisable_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_EnableOtherSmartLinkInProximityOnDisable_SetBit(void* Obj)
	{
		((UDBDNavLinkCustomComponent*)Obj)->EnableOtherSmartLinkInProximityOnDisable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_EnableOtherSmartLinkInProximityOnDisable = { "EnableOtherSmartLinkInProximityOnDisable", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavLinkCustomComponent), &Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_EnableOtherSmartLinkInProximityOnDisable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_EnableOtherSmartLinkInProximityOnDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_EnableOtherSmartLinkInProximityOnDisable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableOtherSmartLinkInProximityOnEnable_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableOtherSmartLinkInProximityOnEnable_SetBit(void* Obj)
	{
		((UDBDNavLinkCustomComponent*)Obj)->DisableOtherSmartLinkInProximityOnEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableOtherSmartLinkInProximityOnEnable = { "DisableOtherSmartLinkInProximityOnEnable", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavLinkCustomComponent), &Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableOtherSmartLinkInProximityOnEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableOtherSmartLinkInProximityOnEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableOtherSmartLinkInProximityOnEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionCollisionChannel_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionCollisionChannel = { "PathObstructionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, PathObstructionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestHeightOffset_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestHeightOffset = { "PathObstructionTestHeightOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, PathObstructionTestHeightOffset), METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestShapeRadius_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestShapeRadius = { "PathObstructionTestShapeRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, PathObstructionTestShapeRadius), METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestShapeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestShapeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestDistance_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestDistance = { "PathObstructionTestDistance", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, PathObstructionTestDistance), METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableSmartLinkOnPathObstruction_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableSmartLinkOnPathObstruction_SetBit(void* Obj)
	{
		((UDBDNavLinkCustomComponent*)Obj)->DisableSmartLinkOnPathObstruction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableSmartLinkOnPathObstruction = { "DisableSmartLinkOnPathObstruction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDNavLinkCustomComponent), &Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableSmartLinkOnPathObstruction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableSmartLinkOnPathObstruction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableSmartLinkOnPathObstruction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSmartLinkDirectionMaxHeight_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSmartLinkDirectionMaxHeight = { "AutoSmartLinkDirectionMaxHeight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, AutoSmartLinkDirectionMaxHeight), METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSmartLinkDirectionMaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSmartLinkDirectionMaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapCollisionChannel_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapCollisionChannel = { "AutoSnapCollisionChannel", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, AutoSnapCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsDownHeight_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsDownHeight = { "AutoSnapSmartLinkPointsDownHeight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, AutoSnapSmartLinkPointsDownHeight), METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsDownHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsDownHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsUpHeight_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsUpHeight = { "AutoSnapSmartLinkPointsUpHeight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, AutoSnapSmartLinkPointsUpHeight), METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsUpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsUpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkDirection_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkDirection = { "BaseLinkDirection", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, BaseLinkDirection), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeEnd_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeEnd = { "BaseLinkRelativeEnd", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, BaseLinkRelativeEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeStart_MetaData[] = {
		{ "Category", "DBDNavLinkCustomComponent" },
		{ "ModuleRelativePath", "Public/DBDNavLinkCustomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeStart = { "BaseLinkRelativeStart", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDNavLinkCustomComponent, BaseLinkRelativeStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp__navLinkProxyInProximity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp__navLinkProxyInProximity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_ShowDebugInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_OtherSmartLinkInProximitySearchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_EnableOtherSmartLinkInProximityOnDisable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableOtherSmartLinkInProximityOnEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestShapeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_PathObstructionTestDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_DisableSmartLinkOnPathObstruction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSmartLinkDirectionMaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsDownHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_AutoSnapSmartLinkPointsUpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::NewProp_BaseLinkRelativeStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDNavLinkCustomComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::ClassParams = {
		&UDBDNavLinkCustomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDNavLinkCustomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDNavLinkCustomComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDNavLinkCustomComponent, 586805978);
	template<> DBDBOTS_API UClass* StaticClass<UDBDNavLinkCustomComponent>()
	{
		return UDBDNavLinkCustomComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDNavLinkCustomComponent(Z_Construct_UClass_UDBDNavLinkCustomComponent, &UDBDNavLinkCustomComponent::StaticClass, TEXT("/Script/DBDBots"), TEXT("UDBDNavLinkCustomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDNavLinkCustomComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
