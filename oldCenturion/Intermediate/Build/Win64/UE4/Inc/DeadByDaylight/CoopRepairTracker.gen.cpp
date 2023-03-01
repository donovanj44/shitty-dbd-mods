// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CoopRepairTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoopRepairTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoopRepairTracker_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCoopRepairTracker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoopRepairTracker::execHasEverCoopRepaired)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEverCoopRepaired(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoopRepairTracker::execSetHasEverCoopRepaired)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasEverCoopRepaired(Z_Param_player);
		P_NATIVE_END;
	}
	void UCoopRepairTracker::StaticRegisterNativesUCoopRepairTracker()
	{
		UClass* Class = UCoopRepairTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasEverCoopRepaired", &UCoopRepairTracker::execHasEverCoopRepaired },
			{ "SetHasEverCoopRepaired", &UCoopRepairTracker::execSetHasEverCoopRepaired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics
	{
		struct CoopRepairTracker_eventHasEverCoopRepaired_Parms
		{
			const ADBDPlayer* player;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoopRepairTracker_eventHasEverCoopRepaired_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoopRepairTracker_eventHasEverCoopRepaired_Parms), &Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopRepairTracker_eventHasEverCoopRepaired_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopRepairTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoopRepairTracker, nullptr, "HasEverCoopRepaired", nullptr, nullptr, sizeof(CoopRepairTracker_eventHasEverCoopRepaired_Parms), Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics
	{
		struct CoopRepairTracker_eventSetHasEverCoopRepaired_Parms
		{
			const ADBDPlayer* player;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoopRepairTracker_eventSetHasEverCoopRepaired_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoopRepairTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoopRepairTracker, nullptr, "SetHasEverCoopRepaired", nullptr, nullptr, sizeof(CoopRepairTracker_eventSetHasEverCoopRepaired_Parms), Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoopRepairTracker_NoRegister()
	{
		return UCoopRepairTracker::StaticClass();
	}
	struct Z_Construct_UClass_UCoopRepairTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__coopRepairerHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__coopRepairerHistory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__coopRepairerHistory_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoopRepairTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoopRepairTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoopRepairTracker_HasEverCoopRepaired, "HasEverCoopRepaired" }, // 1776773580
		{ &Z_Construct_UFunction_UCoopRepairTracker_SetHasEverCoopRepaired, "SetHasEverCoopRepaired" }, // 4066891100
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoopRepairTracker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoopRepairTracker.h" },
		{ "ModuleRelativePath", "Public/CoopRepairTracker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoopRepairTracker_Statics::NewProp__coopRepairerHistory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoopRepairTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoopRepairTracker_Statics::NewProp__coopRepairerHistory = { "_coopRepairerHistory", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoopRepairTracker, _coopRepairerHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoopRepairTracker_Statics::NewProp__coopRepairerHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoopRepairTracker_Statics::NewProp__coopRepairerHistory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoopRepairTracker_Statics::NewProp__coopRepairerHistory_Inner = { "_coopRepairerHistory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoopRepairTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoopRepairTracker_Statics::NewProp__coopRepairerHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoopRepairTracker_Statics::NewProp__coopRepairerHistory_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoopRepairTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoopRepairTracker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoopRepairTracker_Statics::ClassParams = {
		&UCoopRepairTracker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoopRepairTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoopRepairTracker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoopRepairTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoopRepairTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoopRepairTracker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoopRepairTracker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoopRepairTracker, 779658422);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCoopRepairTracker>()
	{
		return UCoopRepairTracker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoopRepairTracker(Z_Construct_UClass_UCoopRepairTracker, &UCoopRepairTracker::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCoopRepairTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoopRepairTracker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
