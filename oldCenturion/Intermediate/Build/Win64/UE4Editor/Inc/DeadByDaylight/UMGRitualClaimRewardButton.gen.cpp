// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGRitualClaimRewardButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGRitualClaimRewardButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRitualClaimRewardButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRitualClaimRewardButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGRitualClaimRewardButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGRitualClaimRewardButton::execBroadcastOnPressedAnimationCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnPressedAnimationCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGRitualClaimRewardButton::execSetClaimedButtonStatus)
	{
		P_GET_UBOOL(Z_Param_isClaimed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClaimedButtonStatus_Implementation(Z_Param_isClaimed,Z_Param_percent);
		P_NATIVE_END;
	}
	static FName NAME_UUMGRitualClaimRewardButton_SetClaimedButtonStatus = FName(TEXT("SetClaimedButtonStatus"));
	void UUMGRitualClaimRewardButton::SetClaimedButtonStatus(bool isClaimed, float percent)
	{
		UMGRitualClaimRewardButton_eventSetClaimedButtonStatus_Parms Parms;
		Parms.isClaimed=isClaimed ? true : false;
		Parms.percent=percent;
		ProcessEvent(FindFunctionChecked(NAME_UUMGRitualClaimRewardButton_SetClaimedButtonStatus),&Parms);
	}
	void UUMGRitualClaimRewardButton::StaticRegisterNativesUUMGRitualClaimRewardButton()
	{
		UClass* Class = UUMGRitualClaimRewardButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastOnPressedAnimationCompleted", &UUMGRitualClaimRewardButton::execBroadcastOnPressedAnimationCompleted },
			{ "SetClaimedButtonStatus", &UUMGRitualClaimRewardButton::execSetClaimedButtonStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGRitualClaimRewardButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGRitualClaimRewardButton, nullptr, "BroadcastOnPressedAnimationCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static void NewProp_isClaimed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClaimed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGRitualClaimRewardButton_eventSetClaimedButtonStatus_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::NewProp_isClaimed_SetBit(void* Obj)
	{
		((UMGRitualClaimRewardButton_eventSetClaimedButtonStatus_Parms*)Obj)->isClaimed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::NewProp_isClaimed = { "isClaimed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGRitualClaimRewardButton_eventSetClaimedButtonStatus_Parms), &Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::NewProp_isClaimed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::NewProp_percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::NewProp_isClaimed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGRitualClaimRewardButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGRitualClaimRewardButton, nullptr, "SetClaimedButtonStatus", nullptr, nullptr, sizeof(UMGRitualClaimRewardButton_eventSetClaimedButtonStatus_Parms), Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGRitualClaimRewardButton_NoRegister()
	{
		return UUMGRitualClaimRewardButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaimFxPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClaimFxPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPressedAnimationCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedAnimationCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGRitualClaimRewardButton_BroadcastOnPressedAnimationCompleted, "BroadcastOnPressedAnimationCompleted" }, // 1833782004
		{ &Z_Construct_UFunction_UUMGRitualClaimRewardButton_SetClaimedButtonStatus, "SetClaimedButtonStatus" }, // 1167692046
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGRitualClaimRewardButton.h" },
		{ "ModuleRelativePath", "Public/UMGRitualClaimRewardButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_ClaimFxPanel_MetaData[] = {
		{ "Category", "UMGRitualClaimRewardButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGRitualClaimRewardButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_ClaimFxPanel = { "ClaimFxPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRitualClaimRewardButton, ClaimFxPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_ClaimFxPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_ClaimFxPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_OnPressedAnimationCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGRitualClaimRewardButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_OnPressedAnimationCompleted = { "OnPressedAnimationCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRitualClaimRewardButton, OnPressedAnimationCompleted), Z_Construct_UDelegateFunction_DeadByDaylight_UMGRitualClaimRewardButtonOnPressedAnimationCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_OnPressedAnimationCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_OnPressedAnimationCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_ClaimFxPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::NewProp_OnPressedAnimationCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGRitualClaimRewardButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::ClassParams = {
		&UUMGRitualClaimRewardButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGRitualClaimRewardButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGRitualClaimRewardButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGRitualClaimRewardButton, 498932585);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGRitualClaimRewardButton>()
	{
		return UUMGRitualClaimRewardButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGRitualClaimRewardButton(Z_Construct_UClass_UUMGRitualClaimRewardButton, &UUMGRitualClaimRewardButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGRitualClaimRewardButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGRitualClaimRewardButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
