// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/NoWayOut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoWayOut() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UNoWayOut_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UNoWayOut();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeDoor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNoWayOut::execMulticast_TriggerLoudNoise)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigator);
		P_GET_OBJECT(AEscapeDoor,Z_Param_escapeDoor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TriggerLoudNoise_Implementation(Z_Param_instigator,Z_Param_escapeDoor);
		P_NATIVE_END;
	}
	static FName NAME_UNoWayOut_Multicast_TriggerLoudNoise = FName(TEXT("Multicast_TriggerLoudNoise"));
	void UNoWayOut::Multicast_TriggerLoudNoise(ADBDPlayer* instigator, AEscapeDoor* escapeDoor)
	{
		NoWayOut_eventMulticast_TriggerLoudNoise_Parms Parms;
		Parms.instigator=instigator;
		Parms.escapeDoor=escapeDoor;
		ProcessEvent(FindFunctionChecked(NAME_UNoWayOut_Multicast_TriggerLoudNoise),&Parms);
	}
	void UNoWayOut::StaticRegisterNativesUNoWayOut()
	{
		UClass* Class = UNoWayOut::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_TriggerLoudNoise", &UNoWayOut::execMulticast_TriggerLoudNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_escapeDoor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::NewProp_escapeDoor = { "escapeDoor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoWayOut_eventMulticast_TriggerLoudNoise_Parms, escapeDoor), Z_Construct_UClass_AEscapeDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NoWayOut_eventMulticast_TriggerLoudNoise_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::NewProp_escapeDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NoWayOut.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNoWayOut, nullptr, "Multicast_TriggerLoudNoise", nullptr, nullptr, sizeof(NoWayOut_eventMulticast_TriggerLoudNoise_Parms), Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNoWayOut_NoRegister()
	{
		return UNoWayOut::StaticClass();
	}
	struct Z_Construct_UClass_UNoWayOut_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hookedSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedSurvivors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exitGatePanelBlockDurationPerToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exitGatePanelBlockDurationPerToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exitGatePanelBlockBaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exitGatePanelBlockBaseDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoWayOut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNoWayOut_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNoWayOut_Multicast_TriggerLoudNoise, "Multicast_TriggerLoudNoise" }, // 1135757022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoWayOut_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoWayOut.h" },
		{ "ModuleRelativePath", "Public/NoWayOut.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoWayOut_Statics::NewProp__hookedSurvivors_MetaData[] = {
		{ "ModuleRelativePath", "Public/NoWayOut.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNoWayOut_Statics::NewProp__hookedSurvivors = { "_hookedSurvivors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNoWayOut, _hookedSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNoWayOut_Statics::NewProp__hookedSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoWayOut_Statics::NewProp__hookedSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNoWayOut_Statics::NewProp__hookedSurvivors_Inner = { "_hookedSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockDurationPerToken_MetaData[] = {
		{ "Category", "NoWayOut" },
		{ "ModuleRelativePath", "Public/NoWayOut.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockDurationPerToken = { "_exitGatePanelBlockDurationPerToken", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exitGatePanelBlockDurationPerToken, UNoWayOut), STRUCT_OFFSET(UNoWayOut, _exitGatePanelBlockDurationPerToken), METADATA_PARAMS(Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockDurationPerToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockDurationPerToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockBaseDuration_MetaData[] = {
		{ "Category", "NoWayOut" },
		{ "ModuleRelativePath", "Public/NoWayOut.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockBaseDuration = { "_exitGatePanelBlockBaseDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exitGatePanelBlockBaseDuration, UNoWayOut), STRUCT_OFFSET(UNoWayOut, _exitGatePanelBlockBaseDuration), METADATA_PARAMS(Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockBaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockBaseDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNoWayOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoWayOut_Statics::NewProp__hookedSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoWayOut_Statics::NewProp__hookedSurvivors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockDurationPerToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNoWayOut_Statics::NewProp__exitGatePanelBlockBaseDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoWayOut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoWayOut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNoWayOut_Statics::ClassParams = {
		&UNoWayOut::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNoWayOut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNoWayOut_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNoWayOut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoWayOut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoWayOut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoWayOut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoWayOut, 1565467456);
	template<> THEK23_API UClass* StaticClass<UNoWayOut>()
	{
		return UNoWayOut::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoWayOut(Z_Construct_UClass_UNoWayOut, &UNoWayOut::StaticClass, TEXT("/Script/TheK23"), TEXT("UNoWayOut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoWayOut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
