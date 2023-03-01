// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAltantaRitual.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAltantaRitual() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAltantaRitual_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAltantaRitual();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualUIData();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAltantaRitual::execBroadcastOnClaimRewardsButtonPressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ritualId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnClaimRewardsButtonPressed(Z_Param_ritualId);
		P_NATIVE_END;
	}
	static FName NAME_UUMGAltantaRitual_SetData = FName(TEXT("SetData"));
	void UUMGAltantaRitual::SetData(FAtlantaRitualUIData const& ritual)
	{
		UMGAltantaRitual_eventSetData_Parms Parms;
		Parms.ritual=ritual;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAltantaRitual_SetData),&Parms);
	}
	void UUMGAltantaRitual::StaticRegisterNativesUUMGAltantaRitual()
	{
		UClass* Class = UUMGAltantaRitual::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastOnClaimRewardsButtonPressed", &UUMGAltantaRitual::execBroadcastOnClaimRewardsButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics
	{
		struct UMGAltantaRitual_eventBroadcastOnClaimRewardsButtonPressed_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId = { "ritualId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAltantaRitual_eventBroadcastOnClaimRewardsButtonPressed_Parms, ritualId), METADATA_PARAMS(Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::NewProp_ritualId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAltantaRitual.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAltantaRitual, nullptr, "BroadcastOnClaimRewardsButtonPressed", nullptr, nullptr, sizeof(UMGAltantaRitual_eventBroadcastOnClaimRewardsButtonPressed_Parms), Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ritual_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ritual;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::NewProp_ritual_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::NewProp_ritual = { "ritual", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAltantaRitual_eventSetData_Parms, ritual), Z_Construct_UScriptStruct_FAtlantaRitualUIData, METADATA_PARAMS(Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::NewProp_ritual_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::NewProp_ritual_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::NewProp_ritual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAltantaRitual.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAltantaRitual, nullptr, "SetData", nullptr, nullptr, sizeof(UMGAltantaRitual_eventSetData_Parms), Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAltantaRitual_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAltantaRitual_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAltantaRitual_NoRegister()
	{
		return UUMGAltantaRitual::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAltantaRitual_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__completedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__completedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__claimedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__claimedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__claimText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__claimText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAltantaRitual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAltantaRitual_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAltantaRitual_BroadcastOnClaimRewardsButtonPressed, "BroadcastOnClaimRewardsButtonPressed" }, // 652226960
		{ &Z_Construct_UFunction_UUMGAltantaRitual_SetData, "SetData" }, // 266962157
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAltantaRitual_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAltantaRitual.h" },
		{ "ModuleRelativePath", "Public/UMGAltantaRitual.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__completedText_MetaData[] = {
		{ "Category", "UMGAltantaRitual" },
		{ "ModuleRelativePath", "Public/UMGAltantaRitual.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__completedText = { "_completedText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAltantaRitual, _completedText), METADATA_PARAMS(Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__completedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__completedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimedText_MetaData[] = {
		{ "Category", "UMGAltantaRitual" },
		{ "ModuleRelativePath", "Public/UMGAltantaRitual.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimedText = { "_claimedText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAltantaRitual, _claimedText), METADATA_PARAMS(Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimText_MetaData[] = {
		{ "Category", "UMGAltantaRitual" },
		{ "ModuleRelativePath", "Public/UMGAltantaRitual.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimText = { "_claimText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAltantaRitual, _claimText), METADATA_PARAMS(Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAltantaRitual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__completedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAltantaRitual_Statics::NewProp__claimText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAltantaRitual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAltantaRitual>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAltantaRitual_Statics::ClassParams = {
		&UUMGAltantaRitual::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAltantaRitual_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAltantaRitual_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAltantaRitual_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAltantaRitual_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAltantaRitual()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAltantaRitual_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAltantaRitual, 1272246643);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAltantaRitual>()
	{
		return UUMGAltantaRitual::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAltantaRitual(Z_Construct_UClass_UUMGAltantaRitual, &UUMGAltantaRitual::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAltantaRitual"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAltantaRitual);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
