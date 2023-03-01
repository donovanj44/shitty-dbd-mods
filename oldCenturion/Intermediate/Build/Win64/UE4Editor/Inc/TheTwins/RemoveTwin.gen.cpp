// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/RemoveTwin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoveTwin() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_URemoveTwin_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_URemoveTwin();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(URemoveTwin::execOnRemoveMontageEnd)
	{
		P_GET_STRUCT(FAnimationMontageDescriptor,Z_Param_montage);
		P_GET_UBOOL(Z_Param_interrupted);
		P_GET_OBJECT(ADBDPlayer,Z_Param_destroyingPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveMontageEnd(Z_Param_montage,Z_Param_interrupted,Z_Param_destroyingPlayer);
		P_NATIVE_END;
	}
	void URemoveTwin::StaticRegisterNativesURemoveTwin()
	{
		UClass* Class = URemoveTwin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRemoveMontageEnd", &URemoveTwin::execOnRemoveMontageEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics
	{
		struct RemoveTwin_eventOnRemoveMontageEnd_Parms
		{
			FAnimationMontageDescriptor montage;
			bool interrupted;
			ADBDPlayer* destroyingPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyingPlayer;
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_destroyingPlayer = { "destroyingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoveTwin_eventOnRemoveMontageEnd_Parms, destroyingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((RemoveTwin_eventOnRemoveMontageEnd_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoveTwin_eventOnRemoveMontageEnd_Parms), &Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_montage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoveTwin_eventOnRemoveMontageEnd_Parms, montage), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_destroyingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoveTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoveTwin, nullptr, "OnRemoveMontageEnd", nullptr, nullptr, sizeof(RemoveTwin_eventOnRemoveMontageEnd_Parms), Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URemoveTwin_NoRegister()
	{
		return URemoveTwin::StaticClass();
	}
	struct Z_Construct_UClass_URemoveTwin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__brotherRemoveDistanceFromSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__brotherRemoveDistanceFromSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__removeTwinExitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__removeTwinExitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__removeTwinMaxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__removeTwinMaxCharge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoveTwin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoveTwin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoveTwin_OnRemoveMontageEnd, "OnRemoveMontageEnd" }, // 3720331469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveTwin_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "RemoveTwin.h" },
		{ "ModuleRelativePath", "Public/RemoveTwin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveTwin_Statics::NewProp__brotherRemoveDistanceFromSurvivor_MetaData[] = {
		{ "Category", "RemoveTwin" },
		{ "ModuleRelativePath", "Public/RemoveTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemoveTwin_Statics::NewProp__brotherRemoveDistanceFromSurvivor = { "_brotherRemoveDistanceFromSurvivor", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoveTwin, _brotherRemoveDistanceFromSurvivor), METADATA_PARAMS(Z_Construct_UClass_URemoveTwin_Statics::NewProp__brotherRemoveDistanceFromSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveTwin_Statics::NewProp__brotherRemoveDistanceFromSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinExitTime_MetaData[] = {
		{ "Category", "RemoveTwin" },
		{ "ModuleRelativePath", "Public/RemoveTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinExitTime = { "_removeTwinExitTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoveTwin, _removeTwinExitTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinExitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinExitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinMaxCharge_MetaData[] = {
		{ "Category", "RemoveTwin" },
		{ "ModuleRelativePath", "Public/RemoveTwin.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinMaxCharge = { "_removeTwinMaxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoveTwin, _removeTwinMaxCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinMaxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinMaxCharge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoveTwin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveTwin_Statics::NewProp__brotherRemoveDistanceFromSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinExitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoveTwin_Statics::NewProp__removeTwinMaxCharge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoveTwin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoveTwin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoveTwin_Statics::ClassParams = {
		&URemoveTwin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoveTwin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoveTwin_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoveTwin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoveTwin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoveTwin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoveTwin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoveTwin, 1386498613);
	template<> THETWINS_API UClass* StaticClass<URemoveTwin>()
	{
		return URemoveTwin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoveTwin(Z_Construct_UClass_URemoveTwin, &URemoveTwin::StaticClass, TEXT("/Script/TheTwins"), TEXT("URemoveTwin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoveTwin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
