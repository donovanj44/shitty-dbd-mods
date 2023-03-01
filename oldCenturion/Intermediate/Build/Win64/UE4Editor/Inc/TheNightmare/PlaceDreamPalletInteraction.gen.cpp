// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/PlaceDreamPalletInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceDreamPalletInteraction() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UPlaceDreamPalletInteraction_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UPlaceDreamPalletInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APalletTracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPlaceDreamPalletInteraction::execCanSpawnDreamPalletAtTracker)
	{
		P_GET_OBJECT(APalletTracker,Z_Param_tracker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSpawnDreamPalletAtTracker(Z_Param_tracker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlaceDreamPalletInteraction::execGetTargetedPallet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APalletTracker**)Z_Param__Result=P_THIS->GetTargetedPallet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlaceDreamPalletInteraction::execInitializeTunableValues)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTunableValues(Z_Param_killer);
		P_NATIVE_END;
	}
	static FName NAME_UPlaceDreamPalletInteraction_SpawnDreamPallet = FName(TEXT("SpawnDreamPallet"));
	void UPlaceDreamPalletInteraction::SpawnDreamPallet(APalletTracker* trackerAtLocation)
	{
		PlaceDreamPalletInteraction_eventSpawnDreamPallet_Parms Parms;
		Parms.trackerAtLocation=trackerAtLocation;
		ProcessEvent(FindFunctionChecked(NAME_UPlaceDreamPalletInteraction_SpawnDreamPallet),&Parms);
	}
	void UPlaceDreamPalletInteraction::StaticRegisterNativesUPlaceDreamPalletInteraction()
	{
		UClass* Class = UPlaceDreamPalletInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanSpawnDreamPalletAtTracker", &UPlaceDreamPalletInteraction::execCanSpawnDreamPalletAtTracker },
			{ "GetTargetedPallet", &UPlaceDreamPalletInteraction::execGetTargetedPallet },
			{ "InitializeTunableValues", &UPlaceDreamPalletInteraction::execInitializeTunableValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics
	{
		struct PlaceDreamPalletInteraction_eventCanSpawnDreamPalletAtTracker_Parms
		{
			APalletTracker* tracker;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tracker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlaceDreamPalletInteraction_eventCanSpawnDreamPalletAtTracker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlaceDreamPalletInteraction_eventCanSpawnDreamPalletAtTracker_Parms), &Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::NewProp_tracker = { "tracker", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlaceDreamPalletInteraction_eventCanSpawnDreamPalletAtTracker_Parms, tracker), Z_Construct_UClass_APalletTracker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::NewProp_tracker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlaceDreamPalletInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaceDreamPalletInteraction, nullptr, "CanSpawnDreamPalletAtTracker", nullptr, nullptr, sizeof(PlaceDreamPalletInteraction_eventCanSpawnDreamPalletAtTracker_Parms), Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics
	{
		struct PlaceDreamPalletInteraction_eventGetTargetedPallet_Parms
		{
			APalletTracker* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlaceDreamPalletInteraction_eventGetTargetedPallet_Parms, ReturnValue), Z_Construct_UClass_APalletTracker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlaceDreamPalletInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaceDreamPalletInteraction, nullptr, "GetTargetedPallet", nullptr, nullptr, sizeof(PlaceDreamPalletInteraction_eventGetTargetedPallet_Parms), Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics
	{
		struct PlaceDreamPalletInteraction_eventInitializeTunableValues_Parms
		{
			ASlasherPlayer* killer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlaceDreamPalletInteraction_eventInitializeTunableValues_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlaceDreamPalletInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaceDreamPalletInteraction, nullptr, "InitializeTunableValues", nullptr, nullptr, sizeof(PlaceDreamPalletInteraction_eventInitializeTunableValues_Parms), Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackerAtLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::NewProp_trackerAtLocation = { "trackerAtLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlaceDreamPalletInteraction_eventSpawnDreamPallet_Parms, trackerAtLocation), Z_Construct_UClass_APalletTracker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::NewProp_trackerAtLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlaceDreamPalletInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaceDreamPalletInteraction, nullptr, "SpawnDreamPallet", nullptr, nullptr, sizeof(PlaceDreamPalletInteraction_eventSpawnDreamPallet_Parms), Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlaceDreamPalletInteraction_NoRegister()
	{
		return UPlaceDreamPalletInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__closestTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__closestTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__palletTrackers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__palletTrackers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__palletTrackers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlaceDreamPalletInteraction_CanSpawnDreamPalletAtTracker, "CanSpawnDreamPalletAtTracker" }, // 4152024392
		{ &Z_Construct_UFunction_UPlaceDreamPalletInteraction_GetTargetedPallet, "GetTargetedPallet" }, // 3981079882
		{ &Z_Construct_UFunction_UPlaceDreamPalletInteraction_InitializeTunableValues, "InitializeTunableValues" }, // 3048198410
		{ &Z_Construct_UFunction_UPlaceDreamPalletInteraction_SpawnDreamPallet, "SpawnDreamPallet" }, // 3928120994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PlaceDreamPalletInteraction.h" },
		{ "ModuleRelativePath", "Public/PlaceDreamPalletInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__closestTracker_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaceDreamPalletInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__closestTracker = { "_closestTracker", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceDreamPalletInteraction, _closestTracker), Z_Construct_UClass_APalletTracker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__closestTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__closestTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__palletTrackers_MetaData[] = {
		{ "Category", "PlaceDreamPalletInteraction" },
		{ "ModuleRelativePath", "Public/PlaceDreamPalletInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__palletTrackers = { "_palletTrackers", nullptr, (EPropertyFlags)0x0020080000002024, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlaceDreamPalletInteraction, _palletTrackers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__palletTrackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__palletTrackers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__palletTrackers_Inner = { "_palletTrackers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APalletTracker_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__closestTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__palletTrackers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::NewProp__palletTrackers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceDreamPalletInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::ClassParams = {
		&UPlaceDreamPalletInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaceDreamPalletInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlaceDreamPalletInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlaceDreamPalletInteraction, 4138414738);
	template<> THENIGHTMARE_API UClass* StaticClass<UPlaceDreamPalletInteraction>()
	{
		return UPlaceDreamPalletInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlaceDreamPalletInteraction(Z_Construct_UClass_UPlaceDreamPalletInteraction, &UPlaceDreamPalletInteraction::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UPlaceDreamPalletInteraction"), false, nullptr, nullptr, nullptr);

	void UPlaceDreamPalletInteraction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__palletTrackers(TEXT("_palletTrackers"));

		const bool bIsValid = true
			&& Name__palletTrackers == ClassReps[(int32)ENetFields_Private::_palletTrackers].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlaceDreamPalletInteraction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceDreamPalletInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
