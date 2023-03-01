// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightPower.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightPower() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_ABlightPower_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_ABlightPower();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
	THEBLIGHT_API UEnum* Z_Construct_UEnum_TheBlight_EWallGrabState();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightPowerStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerToggleComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPowerChargeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABlightPower::execOnPowerStateChanged)
	{
		P_GET_ENUM(EWallGrabState,Z_Param_previousState);
		P_GET_ENUM(EWallGrabState,Z_Param_newState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPowerStateChanged(EWallGrabState(Z_Param_previousState),EWallGrabState(Z_Param_newState));
		P_NATIVE_END;
	}
	void ABlightPower::StaticRegisterNativesABlightPower()
	{
		UClass* Class = ABlightPower::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPowerStateChanged", &ABlightPower::execOnPowerStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics
	{
		struct BlightPower_eventOnPowerStateChanged_Parms
		{
			EWallGrabState previousState;
			EWallGrabState newState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_previousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_previousState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_previousState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_newState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPower_eventOnPowerStateChanged_Parms, newState), Z_Construct_UEnum_TheBlight_EWallGrabState, METADATA_PARAMS(Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_newState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_newState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_newState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_previousState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_previousState = { "previousState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlightPower_eventOnPowerStateChanged_Parms, previousState), Z_Construct_UEnum_TheBlight_EWallGrabState, METADATA_PARAMS(Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_previousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_previousState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_previousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_newState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_newState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_previousState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::NewProp_previousState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlightPower, nullptr, "OnPowerStateChanged", nullptr, nullptr, sizeof(BlightPower_eventOnPowerStateChanged_Parms), Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlightPower_OnPowerStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlightPower_OnPowerStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlightPower_NoRegister()
	{
		return ABlightPower::StaticClass();
	}
	struct Z_Construct_UClass_ABlightPower_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerRechargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blightPowerRechargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerDechargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blightPowerDechargeRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blightPowerMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerActivateMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__blightPowerActivateMaxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerStateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerStateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerActivateChargeable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerActivateChargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerToggle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerToggle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blightPowerCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__blightPowerCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlightPower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlightPower_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlightPower_OnPowerStateChanged, "OnPowerStateChanged" }, // 2386850807
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightPower.h" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerRechargeRate_MetaData[] = {
		{ "Category", "BlightPower" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerRechargeRate = { "_blightPowerRechargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerRechargeRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerRechargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerRechargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerDechargeRate_MetaData[] = {
		{ "Category", "BlightPower" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerDechargeRate = { "_blightPowerDechargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerDechargeRate), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerDechargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerDechargeRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerMaxCharge_MetaData[] = {
		{ "Category", "BlightPower" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerMaxCharge = { "_blightPowerMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerMaxCharge), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateMaxCharge_MetaData[] = {
		{ "Category", "BlightPower" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateMaxCharge = { "_blightPowerActivateMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerActivateMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateMaxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerStateComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerStateComponent = { "_blightPowerStateComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerStateComponent), Z_Construct_UClass_UBlightPowerStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerStateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerStateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateChargeable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlightPower" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateChargeable = { "_blightPowerActivateChargeable", nullptr, (EPropertyFlags)0x004000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerActivateChargeable), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateChargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateChargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerToggle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerToggle = { "_blightPowerToggle", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerToggle), Z_Construct_UClass_UPowerToggleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerToggle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerCharge_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlightPower.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerCharge = { "_blightPowerCharge", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlightPower, _blightPowerCharge), Z_Construct_UClass_UPowerChargeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlightPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerRechargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerDechargeRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateMaxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerStateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerActivateChargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerToggle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlightPower_Statics::NewProp__blightPowerCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlightPower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlightPower>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlightPower_Statics::ClassParams = {
		&ABlightPower::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlightPower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlightPower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlightPower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlightPower()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlightPower_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlightPower, 1750155089);
	template<> THEBLIGHT_API UClass* StaticClass<ABlightPower>()
	{
		return ABlightPower::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlightPower(Z_Construct_UClass_ABlightPower, &ABlightPower::StaticClass, TEXT("/Script/TheBlight"), TEXT("ABlightPower"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlightPower);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
