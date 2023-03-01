// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/ChargeTwinJumpInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChargeTwinJumpInteraction() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UChargeTwinJumpInteraction_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UChargeTwinJumpInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	static FName NAME_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged = FName(TEXT("Cosmetic_OnJumpReadyChanged"));
	void UChargeTwinJumpInteraction::Cosmetic_OnJumpReadyChanged(ADBDPlayer* twin, bool ready)
	{
		ChargeTwinJumpInteraction_eventCosmetic_OnJumpReadyChanged_Parms Parms;
		Parms.twin=twin;
		Parms.ready=ready ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged),&Parms);
	}
	void UChargeTwinJumpInteraction::StaticRegisterNativesUChargeTwinJumpInteraction()
	{
	}
	struct Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ready_MetaData[];
#endif
		static void NewProp_ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ready;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_ready_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_ready_SetBit(void* Obj)
	{
		((ChargeTwinJumpInteraction_eventCosmetic_OnJumpReadyChanged_Parms*)Obj)->ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_ready = { "ready", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ChargeTwinJumpInteraction_eventCosmetic_OnJumpReadyChanged_Parms), &Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_ready_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_ready_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_ready_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChargeTwinJumpInteraction_eventCosmetic_OnJumpReadyChanged_Parms, twin), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_ready,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChargeTwinJumpInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChargeTwinJumpInteraction, nullptr, "Cosmetic_OnJumpReadyChanged", nullptr, nullptr, sizeof(ChargeTwinJumpInteraction_eventCosmetic_OnJumpReadyChanged_Parms), Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChargeTwinJumpInteraction_NoRegister()
	{
		return UChargeTwinJumpInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UChargeTwinJumpInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cancelCooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cancelCooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionViewPitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionViewPitchMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactionViewPitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__interactionViewPitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeJumpMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargeJumpMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChargeTwinJumpInteraction_Cosmetic_OnJumpReadyChanged, "Cosmetic_OnJumpReadyChanged" }, // 3855144300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ChargeTwinJumpInteraction.h" },
		{ "ModuleRelativePath", "Public/ChargeTwinJumpInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__cancelCooldownTime_MetaData[] = {
		{ "Category", "ChargeTwinJumpInteraction" },
		{ "ModuleRelativePath", "Public/ChargeTwinJumpInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__cancelCooldownTime = { "_cancelCooldownTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargeTwinJumpInteraction, _cancelCooldownTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__cancelCooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__cancelCooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMin_MetaData[] = {
		{ "Category", "ChargeTwinJumpInteraction" },
		{ "ModuleRelativePath", "Public/ChargeTwinJumpInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMin = { "_interactionViewPitchMin", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargeTwinJumpInteraction, _interactionViewPitchMin), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMax_MetaData[] = {
		{ "Category", "ChargeTwinJumpInteraction" },
		{ "ModuleRelativePath", "Public/ChargeTwinJumpInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMax = { "_interactionViewPitchMax", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargeTwinJumpInteraction, _interactionViewPitchMax), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__chargeJumpMaxCharge_MetaData[] = {
		{ "Category", "ChargeTwinJumpInteraction" },
		{ "ModuleRelativePath", "Public/ChargeTwinJumpInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__chargeJumpMaxCharge = { "_chargeJumpMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChargeTwinJumpInteraction, _chargeJumpMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__chargeJumpMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__chargeJumpMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__cancelCooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__interactionViewPitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::NewProp__chargeJumpMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChargeTwinJumpInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::ClassParams = {
		&UChargeTwinJumpInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChargeTwinJumpInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChargeTwinJumpInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChargeTwinJumpInteraction, 1825430569);
	template<> THETWINS_API UClass* StaticClass<UChargeTwinJumpInteraction>()
	{
		return UChargeTwinJumpInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChargeTwinJumpInteraction(Z_Construct_UClass_UChargeTwinJumpInteraction, &UChargeTwinJumpInteraction::StaticClass, TEXT("/Script/TheTwins"), TEXT("UChargeTwinJumpInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChargeTwinJumpInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
