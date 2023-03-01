// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/TeleportToDemogorgonPortalInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleportToDemogorgonPortalInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADemogorgonPortal_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPortalTargetingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTeleportToDemogorgonPortalInteraction::execOnSlasherSet)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlasherSet(Z_Param_slasher);
		P_NATIVE_END;
	}
	static FName NAME_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX = FName(TEXT("OnTeleportInteractionCanceledVFX"));
	void UTeleportToDemogorgonPortalInteraction::OnTeleportInteractionCanceledVFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX),NULL);
	}
	void UTeleportToDemogorgonPortalInteraction::StaticRegisterNativesUTeleportToDemogorgonPortalInteraction()
	{
		UClass* Class = UTeleportToDemogorgonPortalInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSlasherSet", &UTeleportToDemogorgonPortalInteraction::execOnSlasherSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics
	{
		struct TeleportToDemogorgonPortalInteraction_eventOnSlasherSet_Parms
		{
			ASlasherPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TeleportToDemogorgonPortalInteraction_eventOnSlasherSet_Parms, slasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::NewProp_slasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction, nullptr, "OnSlasherSet", nullptr, nullptr, sizeof(TeleportToDemogorgonPortalInteraction_eventOnSlasherSet_Parms), Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction, nullptr, "OnTeleportInteractionCanceledVFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_NoRegister()
	{
		return UTeleportToDemogorgonPortalInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawnForHusk_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSpawnForHusk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__huskRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__huskRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactingPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactingPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetedPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetedPortal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startingPortal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__startingPortal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalPlacerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalPlacerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__portalTargetingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__portalTargetingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cancelTeleportingPhaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cancelTeleportingPhaseDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__enterPortalPhaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__enterPortalPhaseDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnSlasherSet, "OnSlasherSet" }, // 2305765021
		{ &Z_Construct_UFunction_UTeleportToDemogorgonPortalInteraction_OnTeleportInteractionCanceledVFX, "OnTeleportInteractionCanceledVFX" }, // 3743987866
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "TeleportToDemogorgonPortalInteraction.h" },
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp_ClassToSpawnForHusk_MetaData[] = {
		{ "Category", "TeleportToDemogorgonPortalInteraction" },
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp_ClassToSpawnForHusk = { "ClassToSpawnForHusk", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, ClassToSpawnForHusk), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp_ClassToSpawnForHusk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp_ClassToSpawnForHusk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__huskRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__huskRef = { "_huskRef", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _huskRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__huskRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__huskRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__interactingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__interactingPlayer = { "_interactingPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _interactingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__interactingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__interactingPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__targetedPortal_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__targetedPortal = { "_targetedPortal", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _targetedPortal), Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__targetedPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__targetedPortal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__startingPortal_MetaData[] = {
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__startingPortal = { "_startingPortal", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _startingPortal), Z_Construct_UClass_ADemogorgonPortal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__startingPortal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__startingPortal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalPlacerState_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalPlacerState = { "_portalPlacerState", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _portalPlacerState), Z_Construct_UClass_UPortalPlacerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalPlacerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalPlacerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalTargetingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalTargetingComponent = { "_portalTargetingComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _portalTargetingComponent), Z_Construct_UClass_UPortalTargetingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalTargetingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalTargetingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__cancelTeleportingPhaseDuration_MetaData[] = {
		{ "Category", "TeleportToDemogorgonPortalInteraction" },
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__cancelTeleportingPhaseDuration = { "_cancelTeleportingPhaseDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _cancelTeleportingPhaseDuration), METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__cancelTeleportingPhaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__cancelTeleportingPhaseDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__enterPortalPhaseDuration_MetaData[] = {
		{ "Category", "TeleportToDemogorgonPortalInteraction" },
		{ "ModuleRelativePath", "Public/TeleportToDemogorgonPortalInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__enterPortalPhaseDuration = { "_enterPortalPhaseDuration", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _enterPortalPhaseDuration), METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__enterPortalPhaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__enterPortalPhaseDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp_ClassToSpawnForHusk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__huskRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__interactingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__targetedPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__startingPortal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalPlacerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__portalTargetingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__cancelTeleportingPhaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::NewProp__enterPortalPhaseDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTeleportToDemogorgonPortalInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::ClassParams = {
		&UTeleportToDemogorgonPortalInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTeleportToDemogorgonPortalInteraction, 225438389);
	template<> DBDINTERACTION_API UClass* StaticClass<UTeleportToDemogorgonPortalInteraction>()
	{
		return UTeleportToDemogorgonPortalInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTeleportToDemogorgonPortalInteraction(Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction, &UTeleportToDemogorgonPortalInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UTeleportToDemogorgonPortalInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTeleportToDemogorgonPortalInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
