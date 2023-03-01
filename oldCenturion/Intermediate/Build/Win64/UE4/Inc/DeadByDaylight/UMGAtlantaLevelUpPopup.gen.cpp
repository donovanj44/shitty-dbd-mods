// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaLevelUpPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaLevelUpPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaLevelUpPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaLevelUpPopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItemData();
// End Cross Module References
	static FName NAME_UUMGAtlantaLevelUpPopup_OnSetData = FName(TEXT("OnSetData"));
	void UUMGAtlantaLevelUpPopup::OnSetData(int32 level, int32 prestige, bool prestigeIncreased, TArray<FRewardItemData> const& rewards)
	{
		UMGAtlantaLevelUpPopup_eventOnSetData_Parms Parms;
		Parms.level=level;
		Parms.prestige=prestige;
		Parms.prestigeIncreased=prestigeIncreased ? true : false;
		Parms.rewards=rewards;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaLevelUpPopup_OnSetData),&Parms);
	}
	void UUMGAtlantaLevelUpPopup::StaticRegisterNativesUUMGAtlantaLevelUpPopup()
	{
	}
	struct Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewards_Inner;
		static void NewProp_prestigeIncreased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_prestigeIncreased;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_prestige;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_rewards_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_rewards = { "rewards", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaLevelUpPopup_eventOnSetData_Parms, rewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_rewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_rewards_Inner = { "rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardItemData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_prestigeIncreased_SetBit(void* Obj)
	{
		((UMGAtlantaLevelUpPopup_eventOnSetData_Parms*)Obj)->prestigeIncreased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_prestigeIncreased = { "prestigeIncreased", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaLevelUpPopup_eventOnSetData_Parms), &Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_prestigeIncreased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_prestige = { "prestige", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaLevelUpPopup_eventOnSetData_Parms, prestige), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaLevelUpPopup_eventOnSetData_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_prestigeIncreased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaLevelUpPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaLevelUpPopup, nullptr, "OnSetData", nullptr, nullptr, sizeof(UMGAtlantaLevelUpPopup_eventOnSetData_Parms), Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaLevelUpPopup_NoRegister()
	{
		return UUMGAtlantaLevelUpPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaLevelUpPopup_OnSetData, "OnSetData" }, // 3248288941
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaLevelUpPopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaLevelUpPopup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaLevelUpPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::ClassParams = {
		&UUMGAtlantaLevelUpPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaLevelUpPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaLevelUpPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaLevelUpPopup, 960147066);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaLevelUpPopup>()
	{
		return UUMGAtlantaLevelUpPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaLevelUpPopup(Z_Construct_UClass_UUMGAtlantaLevelUpPopup, &UUMGAtlantaLevelUpPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaLevelUpPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaLevelUpPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
