// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/ChainsawRevInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawRevInteraction() {}
// Cross Module References
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawRevInteraction_NoRegister();
	THEHILLBILLY_API UClass* Z_Construct_UClass_UChainsawRevInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChainsawRevInteraction::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UChainsawRevInteraction::StaticRegisterNativesUChainsawRevInteraction()
	{
		UClass* Class = UChainsawRevInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelReadyToPlay", &UChainsawRevInteraction::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChainsawRevInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChainsawRevInteraction, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChainsawRevInteraction_NoRegister()
	{
		return UChainsawRevInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UChainsawRevInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningSlasher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningSlasher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawRevEndAkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainsawRevEndAkAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainsawRevStartAkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainsawRevStartAkAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__soundCueDistanceDataID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__soundCueDistanceDataID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChainsawRevInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChainsawRevInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChainsawRevInteraction_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 3901445862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainsawRevInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ChainsawRevInteraction.h" },
		{ "ModuleRelativePath", "Public/ChainsawRevInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__owningSlasher_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainsawRevInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__owningSlasher = { "_owningSlasher", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainsawRevInteraction, _owningSlasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__owningSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__owningSlasher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevEndAkAudioEvent_MetaData[] = {
		{ "Category", "ChainsawRevInteraction" },
		{ "ModuleRelativePath", "Public/ChainsawRevInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevEndAkAudioEvent = { "_chainsawRevEndAkAudioEvent", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainsawRevInteraction, _chainsawRevEndAkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevEndAkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevEndAkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevStartAkAudioEvent_MetaData[] = {
		{ "Category", "ChainsawRevInteraction" },
		{ "ModuleRelativePath", "Public/ChainsawRevInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevStartAkAudioEvent = { "_chainsawRevStartAkAudioEvent", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainsawRevInteraction, _chainsawRevStartAkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevStartAkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevStartAkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__soundCueDistanceDataID_MetaData[] = {
		{ "Category", "ChainsawRevInteraction" },
		{ "ModuleRelativePath", "Public/ChainsawRevInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__soundCueDistanceDataID = { "_soundCueDistanceDataID", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChainsawRevInteraction, _soundCueDistanceDataID), METADATA_PARAMS(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__soundCueDistanceDataID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__soundCueDistanceDataID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChainsawRevInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__owningSlasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevEndAkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__chainsawRevStartAkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChainsawRevInteraction_Statics::NewProp__soundCueDistanceDataID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChainsawRevInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChainsawRevInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChainsawRevInteraction_Statics::ClassParams = {
		&UChainsawRevInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChainsawRevInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawRevInteraction_Statics::PropPointers),
		0,
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UChainsawRevInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChainsawRevInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChainsawRevInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChainsawRevInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChainsawRevInteraction, 3390516122);
	template<> THEHILLBILLY_API UClass* StaticClass<UChainsawRevInteraction>()
	{
		return UChainsawRevInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChainsawRevInteraction(Z_Construct_UClass_UChainsawRevInteraction, &UChainsawRevInteraction::StaticClass, TEXT("/Script/TheHillbilly"), TEXT("UChainsawRevInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChainsawRevInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
