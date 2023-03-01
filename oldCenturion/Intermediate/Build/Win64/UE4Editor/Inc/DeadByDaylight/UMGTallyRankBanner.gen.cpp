// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyRankBanner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyRankBanner() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankBanner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankBanner();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRankBanner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPipsContainer_NoRegister();
// End Cross Module References
	static FName NAME_UUMGTallyRankBanner_SetAsLocked = FName(TEXT("SetAsLocked"));
	void UUMGTallyRankBanner::SetAsLocked(bool locked)
	{
		UMGTallyRankBanner_eventSetAsLocked_Parms Parms;
		Parms.locked=locked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyRankBanner_SetAsLocked),&Parms);
	}
	void UUMGTallyRankBanner::StaticRegisterNativesUUMGTallyRankBanner()
	{
	}
	struct Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics
	{
		static void NewProp_locked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::NewProp_locked_SetBit(void* Obj)
	{
		((UMGTallyRankBanner_eventSetAsLocked_Parms*)Obj)->locked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::NewProp_locked = { "locked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGTallyRankBanner_eventSetAsLocked_Parms), &Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::NewProp_locked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::NewProp_locked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyRankBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyRankBanner, nullptr, "SetAsLocked", nullptr, nullptr, sizeof(UMGTallyRankBanner_eventSetAsLocked_Parms), Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyRankBanner_NoRegister()
	{
		return UUMGTallyRankBanner::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyRankBanner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmokeBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmokeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsContainerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipsContainerWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyRankBanner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyRankBanner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyRankBanner_SetAsLocked, "SetAsLocked" }, // 3508073792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankBanner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyRankBanner.h" },
		{ "ModuleRelativePath", "Public/UMGTallyRankBanner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_SmokeBackground_MetaData[] = {
		{ "Category", "UMGTallyRankBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_SmokeBackground = { "SmokeBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankBanner, SmokeBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_SmokeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_SmokeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_RankBanner_MetaData[] = {
		{ "Category", "UMGTallyRankBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_RankBanner = { "RankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankBanner, RankBanner), Z_Construct_UClass_UUMGRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_RankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_RankBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_PipsContainerWidget_MetaData[] = {
		{ "Category", "UMGTallyRankBanner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankBanner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_PipsContainerWidget = { "PipsContainerWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankBanner, PipsContainerWidget), Z_Construct_UClass_UUMGTallyPipsContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_PipsContainerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_PipsContainerWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyRankBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_SmokeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_RankBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankBanner_Statics::NewProp_PipsContainerWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyRankBanner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyRankBanner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyRankBanner_Statics::ClassParams = {
		&UUMGTallyRankBanner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyRankBanner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankBanner_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankBanner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankBanner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyRankBanner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyRankBanner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyRankBanner, 576913088);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyRankBanner>()
	{
		return UUMGTallyRankBanner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyRankBanner(Z_Construct_UClass_UUMGTallyRankBanner, &UUMGTallyRankBanner::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyRankBanner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyRankBanner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
