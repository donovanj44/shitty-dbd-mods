// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGStatusEffectIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGStatusEffectIcon() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStatusEffectIcon_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStatusEffectIcon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutItemButton();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectSlotData();
// End Cross Module References
	static FName NAME_UUMGStatusEffectIcon_UpdatePercentageFill = FName(TEXT("UpdatePercentageFill"));
	void UUMGStatusEffectIcon::UpdatePercentageFill(float percentage)
	{
		UMGStatusEffectIcon_eventUpdatePercentageFill_Parms Parms;
		Parms.percentage=percentage;
		ProcessEvent(FindFunctionChecked(NAME_UUMGStatusEffectIcon_UpdatePercentageFill),&Parms);
	}
	static FName NAME_UUMGStatusEffectIcon_UpdateWidget = FName(TEXT("UpdateWidget"));
	void UUMGStatusEffectIcon::UpdateWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGStatusEffectIcon_UpdateWidget),NULL);
	}
	void UUMGStatusEffectIcon::StaticRegisterNativesUUMGStatusEffectIcon()
	{
	}
	struct Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGStatusEffectIcon_eventUpdatePercentageFill_Parms, percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStatusEffectIcon, nullptr, "UpdatePercentageFill", nullptr, nullptr, sizeof(UMGStatusEffectIcon_eventUpdatePercentageFill_Parms), Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStatusEffectIcon, nullptr, "UpdateWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGStatusEffectIcon_NoRegister()
	{
		return UUMGStatusEffectIcon::StaticClass();
	}
	struct Z_Construct_UClass_UUMGStatusEffectIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatusEffectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGStatusEffectIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGLoadoutItemButton,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGStatusEffectIcon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGStatusEffectIcon_UpdatePercentageFill, "UpdatePercentageFill" }, // 2033157000
		{ &Z_Construct_UFunction_UUMGStatusEffectIcon_UpdateWidget, "UpdateWidget" }, // 2313575704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStatusEffectIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGStatusEffectIcon.h" },
		{ "ModuleRelativePath", "Public/UMGStatusEffectIcon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStatusEffectIcon_Statics::NewProp_StatusEffectData_MetaData[] = {
		{ "Category", "UMGStatusEffectIcon" },
		{ "ModuleRelativePath", "Public/UMGStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGStatusEffectIcon_Statics::NewProp_StatusEffectData = { "StatusEffectData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStatusEffectIcon, StatusEffectData), Z_Construct_UScriptStruct_FStatusEffectSlotData, METADATA_PARAMS(Z_Construct_UClass_UUMGStatusEffectIcon_Statics::NewProp_StatusEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectIcon_Statics::NewProp_StatusEffectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGStatusEffectIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStatusEffectIcon_Statics::NewProp_StatusEffectData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGStatusEffectIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGStatusEffectIcon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGStatusEffectIcon_Statics::ClassParams = {
		&UUMGStatusEffectIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGStatusEffectIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectIcon_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGStatusEffectIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStatusEffectIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGStatusEffectIcon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGStatusEffectIcon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGStatusEffectIcon, 1339091781);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGStatusEffectIcon>()
	{
		return UUMGStatusEffectIcon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGStatusEffectIcon(Z_Construct_UClass_UUMGStatusEffectIcon, &UUMGStatusEffectIcon::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGStatusEffectIcon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGStatusEffectIcon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
