// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/DeathBedAntiCampComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathBedAntiCampComponent() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UDeathBedAntiCampComponent_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UDeathBedAntiCampComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UDeathBedAntiCampComponent::execAuthority_OnInRangeChanged)
	{
		P_GET_UBOOL(Z_Param_inRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnInRangeChanged(Z_Param_inRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeathBedAntiCampComponent::execMulticast_TriggerDeathBedRelocate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TriggerDeathBedRelocate_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate = FName(TEXT("Multicast_TriggerDeathBedRelocate"));
	void UDeathBedAntiCampComponent::Multicast_TriggerDeathBedRelocate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate),NULL);
	}
	void UDeathBedAntiCampComponent::StaticRegisterNativesUDeathBedAntiCampComponent()
	{
		UClass* Class = UDeathBedAntiCampComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnInRangeChanged", &UDeathBedAntiCampComponent::execAuthority_OnInRangeChanged },
			{ "Multicast_TriggerDeathBedRelocate", &UDeathBedAntiCampComponent::execMulticast_TriggerDeathBedRelocate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics
	{
		struct DeathBedAntiCampComponent_eventAuthority_OnInRangeChanged_Parms
		{
			bool inRange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((DeathBedAntiCampComponent_eventAuthority_OnInRangeChanged_Parms*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeathBedAntiCampComponent_eventAuthority_OnInRangeChanged_Parms), &Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::NewProp_inRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::NewProp_inRange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedAntiCampComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathBedAntiCampComponent, nullptr, "Authority_OnInRangeChanged", nullptr, nullptr, sizeof(DeathBedAntiCampComponent_eventAuthority_OnInRangeChanged_Parms), Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DeathBedAntiCampComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeathBedAntiCampComponent, nullptr, "Multicast_TriggerDeathBedRelocate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeathBedAntiCampComponent_NoRegister()
	{
		return UDeathBedAntiCampComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDeathBedAntiCampComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__anticampZoneTimeToTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__anticampZoneTimeToTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__anticampZoneDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__anticampZoneDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeathBedAntiCampComponent_Authority_OnInRangeChanged, "Authority_OnInRangeChanged" }, // 66141381
		{ &Z_Construct_UFunction_UDeathBedAntiCampComponent_Multicast_TriggerDeathBedRelocate, "Multicast_TriggerDeathBedRelocate" }, // 3002698270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeathBedAntiCampComponent.h" },
		{ "ModuleRelativePath", "Public/DeathBedAntiCampComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneTimeToTrigger_MetaData[] = {
		{ "Category", "DeathBedAntiCampComponent" },
		{ "ModuleRelativePath", "Public/DeathBedAntiCampComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneTimeToTrigger = { "_anticampZoneTimeToTrigger", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathBedAntiCampComponent, _anticampZoneTimeToTrigger), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneTimeToTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneTimeToTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneDistance_MetaData[] = {
		{ "Category", "DeathBedAntiCampComponent" },
		{ "ModuleRelativePath", "Public/DeathBedAntiCampComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneDistance = { "_anticampZoneDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDeathBedAntiCampComponent, _anticampZoneDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneTimeToTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::NewProp__anticampZoneDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathBedAntiCampComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::ClassParams = {
		&UDeathBedAntiCampComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathBedAntiCampComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeathBedAntiCampComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeathBedAntiCampComponent, 3686029939);
	template<> THEEXECUTIONER_API UClass* StaticClass<UDeathBedAntiCampComponent>()
	{
		return UDeathBedAntiCampComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeathBedAntiCampComponent(Z_Construct_UClass_UDeathBedAntiCampComponent, &UDeathBedAntiCampComponent::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UDeathBedAntiCampComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathBedAntiCampComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
