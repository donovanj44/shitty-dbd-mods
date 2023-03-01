// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TheTwinsCheatComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheTwinsCheatComponent() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTheTwinsCheatComponent_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTheTwinsCheatComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	THETWINS_API UClass* Z_Construct_UClass_UTwinPossessionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTheTwinsCheatComponent::execDBD_TwinDestroyTheTwin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_TwinDestroyTheTwin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTheTwinsCheatComponent::execMulticast_TrySendThePlayerBackInKiller)
	{
		P_GET_OBJECT(UTwinPossessionComponent,Z_Param_twinPossessionComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TrySendThePlayerBackInKiller_Implementation(Z_Param_twinPossessionComponent);
		P_NATIVE_END;
	}
	static FName NAME_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller = FName(TEXT("Multicast_TrySendThePlayerBackInKiller"));
	void UTheTwinsCheatComponent::Multicast_TrySendThePlayerBackInKiller(UTwinPossessionComponent* twinPossessionComponent)
	{
		TheTwinsCheatComponent_eventMulticast_TrySendThePlayerBackInKiller_Parms Parms;
		Parms.twinPossessionComponent=twinPossessionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller),&Parms);
	}
	void UTheTwinsCheatComponent::StaticRegisterNativesUTheTwinsCheatComponent()
	{
		UClass* Class = UTheTwinsCheatComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_TwinDestroyTheTwin", &UTheTwinsCheatComponent::execDBD_TwinDestroyTheTwin },
			{ "Multicast_TrySendThePlayerBackInKiller", &UTheTwinsCheatComponent::execMulticast_TrySendThePlayerBackInKiller },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheTwinsCheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheTwinsCheatComponent, nullptr, "DBD_TwinDestroyTheTwin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_twinPossessionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_twinPossessionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::NewProp_twinPossessionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::NewProp_twinPossessionComponent = { "twinPossessionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheTwinsCheatComponent_eventMulticast_TrySendThePlayerBackInKiller_Parms, twinPossessionComponent), Z_Construct_UClass_UTwinPossessionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::NewProp_twinPossessionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::NewProp_twinPossessionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::NewProp_twinPossessionComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheTwinsCheatComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheTwinsCheatComponent, nullptr, "Multicast_TrySendThePlayerBackInKiller", nullptr, nullptr, sizeof(TheTwinsCheatComponent_eventMulticast_TrySendThePlayerBackInKiller_Parms), Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheTwinsCheatComponent_NoRegister()
	{
		return UTheTwinsCheatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTheTwinsCheatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheTwinsCheatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheTwinsCheatComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheTwinsCheatComponent_DBD_TwinDestroyTheTwin, "DBD_TwinDestroyTheTwin" }, // 3032849516
		{ &Z_Construct_UFunction_UTheTwinsCheatComponent_Multicast_TrySendThePlayerBackInKiller, "Multicast_TrySendThePlayerBackInKiller" }, // 507214813
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheTwinsCheatComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TheTwinsCheatComponent.h" },
		{ "ModuleRelativePath", "Public/TheTwinsCheatComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheTwinsCheatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheTwinsCheatComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheTwinsCheatComponent_Statics::ClassParams = {
		&UTheTwinsCheatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTheTwinsCheatComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheTwinsCheatComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheTwinsCheatComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheTwinsCheatComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheTwinsCheatComponent, 3798267492);
	template<> THETWINS_API UClass* StaticClass<UTheTwinsCheatComponent>()
	{
		return UTheTwinsCheatComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheTwinsCheatComponent(Z_Construct_UClass_UTheTwinsCheatComponent, &UTheTwinsCheatComponent::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTheTwinsCheatComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheTwinsCheatComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
