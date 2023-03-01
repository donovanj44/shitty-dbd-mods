// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerIntroComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerIntroComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerIntroComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerIntroComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EFPVTransitionStrategy();
// End Cross Module References
	DEFINE_FUNCTION(UKillerIntroComponent::execKillerCameraPanInUpdateNative)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_killerIntroCompletedPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KillerCameraPanInUpdateNative(Z_Param_killerIntroCompletedPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerIntroComponent::execOnIntroCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnIntroCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerIntroComponent::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UKillerIntroComponent::StaticRegisterNativesUKillerIntroComponent()
	{
		UClass* Class = UKillerIntroComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "KillerCameraPanInUpdateNative", &UKillerIntroComponent::execKillerCameraPanInUpdateNative },
			{ "OnIntroCompleted", &UKillerIntroComponent::execOnIntroCompleted },
			{ "OnLevelReadyToPlay", &UKillerIntroComponent::execOnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics
	{
		struct KillerIntroComponent_eventKillerCameraPanInUpdateNative_Parms
		{
			float killerIntroCompletedPercent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_killerIntroCompletedPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_killerIntroCompletedPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::NewProp_killerIntroCompletedPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::NewProp_killerIntroCompletedPercent = { "killerIntroCompletedPercent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerIntroComponent_eventKillerCameraPanInUpdateNative_Parms, killerIntroCompletedPercent), METADATA_PARAMS(Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::NewProp_killerIntroCompletedPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::NewProp_killerIntroCompletedPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::NewProp_killerIntroCompletedPercent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerIntroComponent, nullptr, "KillerCameraPanInUpdateNative", nullptr, nullptr, sizeof(KillerIntroComponent_eventKillerCameraPanInUpdateNative_Parms), Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerIntroComponent, nullptr, "OnIntroCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerIntroComponent, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerIntroComponent_NoRegister()
	{
		return UKillerIntroComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerIntroComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startKillerIntroDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__startKillerIntroDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraPanInHidingStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__cameraPanInHidingStrategy;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__cameraPanInHidingStrategy_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cameraPanInAmountToSquish_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cameraPanInAmountToSquish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__percentOfCameraPanInProgressRequiredToHideKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__percentOfCameraPanInProgressRequiredToHideKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerIntroComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerIntroComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerIntroComponent_KillerCameraPanInUpdateNative, "KillerCameraPanInUpdateNative" }, // 2084404855
		{ &Z_Construct_UFunction_UKillerIntroComponent_OnIntroCompleted, "OnIntroCompleted" }, // 786320451
		{ &Z_Construct_UFunction_UKillerIntroComponent_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 169800841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerIntroComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KillerIntroComponent.h" },
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__startKillerIntroDelay_MetaData[] = {
		{ "Category", "KillerIntroComponent" },
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__startKillerIntroDelay = { "_startKillerIntroDelay", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerIntroComponent, _startKillerIntroDelay), METADATA_PARAMS(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__startKillerIntroDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__startKillerIntroDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInHidingStrategy_MetaData[] = {
		{ "Category", "KillerIntroComponent" },
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInHidingStrategy = { "_cameraPanInHidingStrategy", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerIntroComponent, _cameraPanInHidingStrategy), Z_Construct_UEnum_DeadByDaylight_EFPVTransitionStrategy, METADATA_PARAMS(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInHidingStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInHidingStrategy_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInHidingStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInAmountToSquish_MetaData[] = {
		{ "Category", "KillerIntroComponent" },
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInAmountToSquish = { "_cameraPanInAmountToSquish", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerIntroComponent, _cameraPanInAmountToSquish), METADATA_PARAMS(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInAmountToSquish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInAmountToSquish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__percentOfCameraPanInProgressRequiredToHideKiller_MetaData[] = {
		{ "Category", "KillerIntroComponent" },
		{ "ModuleRelativePath", "Public/KillerIntroComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__percentOfCameraPanInProgressRequiredToHideKiller = { "_percentOfCameraPanInProgressRequiredToHideKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKillerIntroComponent, _percentOfCameraPanInProgressRequiredToHideKiller), METADATA_PARAMS(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__percentOfCameraPanInProgressRequiredToHideKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__percentOfCameraPanInProgressRequiredToHideKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKillerIntroComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__startKillerIntroDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInHidingStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInHidingStrategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__cameraPanInAmountToSquish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKillerIntroComponent_Statics::NewProp__percentOfCameraPanInProgressRequiredToHideKiller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerIntroComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerIntroComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerIntroComponent_Statics::ClassParams = {
		&UKillerIntroComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKillerIntroComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKillerIntroComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerIntroComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerIntroComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerIntroComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerIntroComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerIntroComponent, 1645362967);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerIntroComponent>()
	{
		return UKillerIntroComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerIntroComponent(Z_Construct_UClass_UKillerIntroComponent, &UKillerIntroComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerIntroComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerIntroComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
