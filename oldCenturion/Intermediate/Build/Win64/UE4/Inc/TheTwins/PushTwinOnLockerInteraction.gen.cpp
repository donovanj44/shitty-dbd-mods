// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/PushTwinOnLockerInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePushTwinOnLockerInteraction() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UPushTwinOnLockerInteraction_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UPushTwinOnLockerInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_AConjoinedTwin_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPushTwinOnLockerInteraction::execAuthority_OnSurvivorInLockerChanged)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_oldSurvivor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_newSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorInLockerChanged(Z_Param_oldSurvivor,Z_Param_newSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPushTwinOnLockerInteraction::execOnRep_PushTwinOnLockerChargeable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PushTwinOnLockerChargeable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPushTwinOnLockerInteraction::execOnTwinSet)
	{
		P_GET_OBJECT(AConjoinedTwin,Z_Param_twin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTwinSet(Z_Param_twin);
		P_NATIVE_END;
	}
	void UPushTwinOnLockerInteraction::StaticRegisterNativesUPushTwinOnLockerInteraction()
	{
		UClass* Class = UPushTwinOnLockerInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnSurvivorInLockerChanged", &UPushTwinOnLockerInteraction::execAuthority_OnSurvivorInLockerChanged },
			{ "OnRep_PushTwinOnLockerChargeable", &UPushTwinOnLockerInteraction::execOnRep_PushTwinOnLockerChargeable },
			{ "OnTwinSet", &UPushTwinOnLockerInteraction::execOnTwinSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics
	{
		struct PushTwinOnLockerInteraction_eventAuthority_OnSurvivorInLockerChanged_Parms
		{
			ADBDPlayer* oldSurvivor;
			ADBDPlayer* newSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newSurvivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::NewProp_newSurvivor = { "newSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushTwinOnLockerInteraction_eventAuthority_OnSurvivorInLockerChanged_Parms, newSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::NewProp_oldSurvivor = { "oldSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushTwinOnLockerInteraction_eventAuthority_OnSurvivorInLockerChanged_Parms, oldSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::NewProp_newSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::NewProp_oldSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PushTwinOnLockerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPushTwinOnLockerInteraction, nullptr, "Authority_OnSurvivorInLockerChanged", nullptr, nullptr, sizeof(PushTwinOnLockerInteraction_eventAuthority_OnSurvivorInLockerChanged_Parms), Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PushTwinOnLockerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPushTwinOnLockerInteraction, nullptr, "OnRep_PushTwinOnLockerChargeable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics
	{
		struct PushTwinOnLockerInteraction_eventOnTwinSet_Parms
		{
			AConjoinedTwin* twin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::NewProp_twin = { "twin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushTwinOnLockerInteraction_eventOnTwinSet_Parms, twin), Z_Construct_UClass_AConjoinedTwin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::NewProp_twin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PushTwinOnLockerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPushTwinOnLockerInteraction, nullptr, "OnTwinSet", nullptr, nullptr, sizeof(PushTwinOnLockerInteraction_eventOnTwinSet_Parms), Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPushTwinOnLockerInteraction_NoRegister()
	{
		return UPushTwinOnLockerInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pushTwinOnLockerMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__pushTwinOnLockerMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pushTwinOnLockerChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pushTwinOnLockerChargeable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPushTwinOnLockerInteraction_Authority_OnSurvivorInLockerChanged, "Authority_OnSurvivorInLockerChanged" }, // 3941816167
		{ &Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnRep_PushTwinOnLockerChargeable, "OnRep_PushTwinOnLockerChargeable" }, // 379547577
		{ &Z_Construct_UFunction_UPushTwinOnLockerInteraction_OnTwinSet, "OnTwinSet" }, // 2122641188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PushTwinOnLockerInteraction.h" },
		{ "ModuleRelativePath", "Public/PushTwinOnLockerInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerMaxCharge_MetaData[] = {
		{ "Category", "PushTwinOnLockerInteraction" },
		{ "ModuleRelativePath", "Public/PushTwinOnLockerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerMaxCharge = { "_pushTwinOnLockerMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPushTwinOnLockerInteraction, _pushTwinOnLockerMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerChargeable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PushTwinOnLockerInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerChargeable = { "_pushTwinOnLockerChargeable", "OnRep_PushTwinOnLockerChargeable", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPushTwinOnLockerInteraction, _pushTwinOnLockerChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerChargeable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::NewProp__pushTwinOnLockerChargeable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPushTwinOnLockerInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::ClassParams = {
		&UPushTwinOnLockerInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPushTwinOnLockerInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPushTwinOnLockerInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPushTwinOnLockerInteraction, 985790984);
	template<> THETWINS_API UClass* StaticClass<UPushTwinOnLockerInteraction>()
	{
		return UPushTwinOnLockerInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPushTwinOnLockerInteraction(Z_Construct_UClass_UPushTwinOnLockerInteraction, &UPushTwinOnLockerInteraction::StaticClass, TEXT("/Script/TheTwins"), TEXT("UPushTwinOnLockerInteraction"), false, nullptr, nullptr, nullptr);

	void UPushTwinOnLockerInteraction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__pushTwinOnLockerChargeable(TEXT("_pushTwinOnLockerChargeable"));

		const bool bIsValid = true
			&& Name__pushTwinOnLockerChargeable == ClassReps[(int32)ENetFields_Private::_pushTwinOnLockerChargeable].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPushTwinOnLockerInteraction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPushTwinOnLockerInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
