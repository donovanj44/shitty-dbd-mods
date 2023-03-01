// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaRitualTab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaRitualTab() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRitualTab_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRitualTab();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAltantaRitual_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaRitualTab::execBroadcastOnClaimRewardsButtonPressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ritualId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnClaimRewardsButtonPressed(Z_Param_ritualId);
		P_NATIVE_END;
	}
	void UUMGAtlantaRitualTab::StaticRegisterNativesUUMGAtlantaRitualTab()
	{
		UClass* Class = UUMGAtlantaRitualTab::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastOnClaimRewardsButtonPressed", &UUMGAtlantaRitualTab::execBroadcastOnClaimRewardsButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics
	{
		struct UMGAtlantaRitualTab_eventBroadcastOnClaimRewardsButtonPressed_Parms
		{
			int32 ritualId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ritualId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ritualId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId = { "ritualId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaRitualTab_eventBroadcastOnClaimRewardsButtonPressed_Parms, ritualId), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualTab.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRitualTab, nullptr, "BroadcastOnClaimRewardsButtonPressed", nullptr, nullptr, sizeof(UMGAtlantaRitualTab_eventBroadcastOnClaimRewardsButtonPressed_Parms), Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaRitualTab_NoRegister()
	{
		return UUMGAtlantaRitualTab::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaRitualTab_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__itemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContainerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaRitualTab_BroadcastOnClaimRewardsButtonPressed, "BroadcastOnClaimRewardsButtonPressed" }, // 527331303
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaRitualTab.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualTab.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp__itemWidgetClass_MetaData[] = {
		{ "Category", "UMGAtlantaRitualTab" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualTab.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp__itemWidgetClass = { "_itemWidgetClass", nullptr, (EPropertyFlags)0x0044000002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualTab, _itemWidgetClass), Z_Construct_UClass_UUMGAltantaRitual_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp__itemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp__itemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp_ContainerBox_MetaData[] = {
		{ "Category", "UMGAtlantaRitualTab" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualTab.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp_ContainerBox = { "ContainerBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualTab, ContainerBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp_ContainerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp_ContainerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp__itemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::NewProp_ContainerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaRitualTab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::ClassParams = {
		&UUMGAtlantaRitualTab::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaRitualTab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaRitualTab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaRitualTab, 878152929);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaRitualTab>()
	{
		return UUMGAtlantaRitualTab::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaRitualTab(Z_Construct_UClass_UUMGAtlantaRitualTab, &UUMGAtlantaRitualTab::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaRitualTab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaRitualTab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
