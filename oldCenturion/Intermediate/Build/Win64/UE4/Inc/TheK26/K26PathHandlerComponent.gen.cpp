// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26PathHandlerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26PathHandlerComponent() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26PathHandlerComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PathHandlerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	THEK26_API UClass* Z_Construct_UClass_UK26CrowPlacementValidatorComponent_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister();
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26Path();
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26PathData();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK26PathHandlerComponent::execAuthority_OnMaxAmmoSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnMaxAmmoSet(Z_Param_maxAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PathHandlerComponent::execMulticast_FillAvailablePathArray)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAmmo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FillAvailablePathArray_Implementation(Z_Param_maxAmmo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PathHandlerComponent::execOnIterativeAvailablePathUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIterativeAvailablePathUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PathHandlerComponent::execOnRep_AvailablePathData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AvailablePathData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PathHandlerComponent::execSetDependencies)
	{
		P_GET_OBJECT(UK26AmmoHandlerComponent,Z_Param_ammoHandler);
		P_GET_OBJECT(UK26CrowPlacementValidatorComponent,Z_Param_placementValidator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDependencies(Z_Param_ammoHandler,Z_Param_placementValidator);
		P_NATIVE_END;
	}
	static FName NAME_UK26PathHandlerComponent_Multicast_FillAvailablePathArray = FName(TEXT("Multicast_FillAvailablePathArray"));
	void UK26PathHandlerComponent::Multicast_FillAvailablePathArray(const int32 maxAmmo)
	{
		K26PathHandlerComponent_eventMulticast_FillAvailablePathArray_Parms Parms;
		Parms.maxAmmo=maxAmmo;
		ProcessEvent(FindFunctionChecked(NAME_UK26PathHandlerComponent_Multicast_FillAvailablePathArray),&Parms);
	}
	void UK26PathHandlerComponent::StaticRegisterNativesUK26PathHandlerComponent()
	{
		UClass* Class = UK26PathHandlerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnMaxAmmoSet", &UK26PathHandlerComponent::execAuthority_OnMaxAmmoSet },
			{ "Multicast_FillAvailablePathArray", &UK26PathHandlerComponent::execMulticast_FillAvailablePathArray },
			{ "OnIterativeAvailablePathUpdate", &UK26PathHandlerComponent::execOnIterativeAvailablePathUpdate },
			{ "OnRep_AvailablePathData", &UK26PathHandlerComponent::execOnRep_AvailablePathData },
			{ "SetDependencies", &UK26PathHandlerComponent::execSetDependencies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics
	{
		struct K26PathHandlerComponent_eventAuthority_OnMaxAmmoSet_Parms
		{
			int32 maxAmmo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::NewProp_maxAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PathHandlerComponent_eventAuthority_OnMaxAmmoSet_Parms, maxAmmo), METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::NewProp_maxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::NewProp_maxAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::NewProp_maxAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PathHandlerComponent, nullptr, "Authority_OnMaxAmmoSet", nullptr, nullptr, sizeof(K26PathHandlerComponent_eventAuthority_OnMaxAmmoSet_Parms), Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::NewProp_maxAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PathHandlerComponent_eventMulticast_FillAvailablePathArray_Parms, maxAmmo), METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::NewProp_maxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::NewProp_maxAmmo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::NewProp_maxAmmo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PathHandlerComponent, nullptr, "Multicast_FillAvailablePathArray", nullptr, nullptr, sizeof(K26PathHandlerComponent_eventMulticast_FillAvailablePathArray_Parms), Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PathHandlerComponent, nullptr, "OnIterativeAvailablePathUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PathHandlerComponent, nullptr, "OnRep_AvailablePathData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics
	{
		struct K26PathHandlerComponent_eventSetDependencies_Parms
		{
			UK26AmmoHandlerComponent* ammoHandler;
			UK26CrowPlacementValidatorComponent* placementValidator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_placementValidator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_placementValidator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammoHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ammoHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_placementValidator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_placementValidator = { "placementValidator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PathHandlerComponent_eventSetDependencies_Parms, placementValidator), Z_Construct_UClass_UK26CrowPlacementValidatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_placementValidator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_placementValidator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_ammoHandler_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_ammoHandler = { "ammoHandler", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K26PathHandlerComponent_eventSetDependencies_Parms, ammoHandler), Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_ammoHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_ammoHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_placementValidator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::NewProp_ammoHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PathHandlerComponent, nullptr, "SetDependencies", nullptr, nullptr, sizeof(K26PathHandlerComponent_eventSetDependencies_Parms), Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26PathHandlerComponent_NoRegister()
	{
		return UK26PathHandlerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK26PathHandlerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availablePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availablePaths;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__availablePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__availablePathData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__availablePathData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__availablePathData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__placementValidator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__placementValidator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ammoHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ammoHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__projectileSummonDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__projectileSummonDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visualPathEndArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__visualPathEndArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visualPathPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__visualPathPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxGroundSearchingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxGroundSearchingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxPathIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxPathIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultProjectileDistanceFromFloor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__defaultProjectileDistanceFromFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorPathVisibilityTimeOnFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__survivorPathVisibilityTimeOnFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxPathDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxPathDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26PathHandlerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26PathHandlerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26PathHandlerComponent_Authority_OnMaxAmmoSet, "Authority_OnMaxAmmoSet" }, // 3021412331
		{ &Z_Construct_UFunction_UK26PathHandlerComponent_Multicast_FillAvailablePathArray, "Multicast_FillAvailablePathArray" }, // 2359299484
		{ &Z_Construct_UFunction_UK26PathHandlerComponent_OnIterativeAvailablePathUpdate, "OnIterativeAvailablePathUpdate" }, // 3412322265
		{ &Z_Construct_UFunction_UK26PathHandlerComponent_OnRep_AvailablePathData, "OnRep_AvailablePathData" }, // 221566506
		{ &Z_Construct_UFunction_UK26PathHandlerComponent_SetDependencies, "SetDependencies" }, // 896748507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K26PathHandlerComponent.h" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePaths = { "_availablePaths", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _availablePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePaths_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePaths_Inner = { "_availablePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FK26Path, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePathData_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePathData = { "_availablePathData", "OnRep_AvailablePathData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _availablePathData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePathData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePathData_Inner = { "_availablePathData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FK26PathData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__placementValidator_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__placementValidator = { "_placementValidator", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _placementValidator), Z_Construct_UClass_UK26CrowPlacementValidatorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__placementValidator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__placementValidator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__ammoHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__ammoHandler = { "_ammoHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _ammoHandler), Z_Construct_UClass_UK26AmmoHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__ammoHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__ammoHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__projectileSummonDistance_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__projectileSummonDistance = { "_projectileSummonDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _projectileSummonDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__projectileSummonDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__projectileSummonDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathEndArrow_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathEndArrow = { "_visualPathEndArrow", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _visualPathEndArrow), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathEndArrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathEndArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathPart_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathPart = { "_visualPathPart", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _visualPathPart), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxGroundSearchingDistance_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxGroundSearchingDistance = { "_maxGroundSearchingDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _maxGroundSearchingDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxGroundSearchingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxGroundSearchingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathIterations_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathIterations = { "_maxPathIterations", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _maxPathIterations), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__defaultProjectileDistanceFromFloor_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__defaultProjectileDistanceFromFloor = { "_defaultProjectileDistanceFromFloor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _defaultProjectileDistanceFromFloor), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__defaultProjectileDistanceFromFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__defaultProjectileDistanceFromFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__survivorPathVisibilityTimeOnFire_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__survivorPathVisibilityTimeOnFire = { "_survivorPathVisibilityTimeOnFire", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _survivorPathVisibilityTimeOnFire), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__survivorPathVisibilityTimeOnFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__survivorPathVisibilityTimeOnFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathDistance_MetaData[] = {
		{ "Category", "K26PathHandlerComponent" },
		{ "ModuleRelativePath", "Public/K26PathHandlerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathDistance = { "_maxPathDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PathHandlerComponent, _maxPathDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26PathHandlerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePathData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__availablePathData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__placementValidator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__ammoHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__projectileSummonDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathEndArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__visualPathPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxGroundSearchingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__defaultProjectileDistanceFromFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__survivorPathVisibilityTimeOnFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PathHandlerComponent_Statics::NewProp__maxPathDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26PathHandlerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26PathHandlerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26PathHandlerComponent_Statics::ClassParams = {
		&UK26PathHandlerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26PathHandlerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26PathHandlerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PathHandlerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26PathHandlerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26PathHandlerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26PathHandlerComponent, 2520271526);
	template<> THEK26_API UClass* StaticClass<UK26PathHandlerComponent>()
	{
		return UK26PathHandlerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26PathHandlerComponent(Z_Construct_UClass_UK26PathHandlerComponent, &UK26PathHandlerComponent::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26PathHandlerComponent"), false, nullptr, nullptr, nullptr);

	void UK26PathHandlerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__availablePathData(TEXT("_availablePathData"));

		const bool bIsValid = true
			&& Name__availablePathData == ClassReps[(int32)ENetFields_Private::_availablePathData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK26PathHandlerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26PathHandlerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
