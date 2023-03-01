// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaStoreScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaStoreScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaStoreScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaStoreScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaStoreScreen::execHandleOnClickedBuyAuricCell)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_cellIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnClickedBuyAuricCell(Z_Param_cellIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaStoreScreen::execHandleOnStoreLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnStoreLeft();
		P_NATIVE_END;
	}
	static FName NAME_UUMGAtlantaStoreScreen_SetBank = FName(TEXT("SetBank"));
	void UUMGAtlantaStoreScreen::SetBank(ECurrencyType currencyType, int32 bank)
	{
		UMGAtlantaStoreScreen_eventSetBank_Parms Parms;
		Parms.currencyType=currencyType;
		Parms.bank=bank;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaStoreScreen_SetBank),&Parms);
	}
	void UUMGAtlantaStoreScreen::StaticRegisterNativesUUMGAtlantaStoreScreen()
	{
		UClass* Class = UUMGAtlantaStoreScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnClickedBuyAuricCell", &UUMGAtlantaStoreScreen::execHandleOnClickedBuyAuricCell },
			{ "HandleOnStoreLeft", &UUMGAtlantaStoreScreen::execHandleOnStoreLeft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics
	{
		struct UMGAtlantaStoreScreen_eventHandleOnClickedBuyAuricCell_Parms
		{
			int32 cellIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cellIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::NewProp_cellIndex = { "cellIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaStoreScreen_eventHandleOnClickedBuyAuricCell_Parms, cellIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::NewProp_cellIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaStoreScreen, nullptr, "HandleOnClickedBuyAuricCell", nullptr, nullptr, sizeof(UMGAtlantaStoreScreen_eventHandleOnClickedBuyAuricCell_Parms), Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaStoreScreen, nullptr, "HandleOnStoreLeft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bank;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::NewProp_bank = { "bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaStoreScreen_eventSetBank_Parms, bank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaStoreScreen_eventSetBank_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::NewProp_bank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::NewProp_currencyType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaStoreScreen, nullptr, "SetBank", nullptr, nullptr, sizeof(UMGAtlantaStoreScreen_eventSetBank_Parms), Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaStoreScreen_NoRegister()
	{
		return UUMGAtlantaStoreScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuricCellsGridPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuricCellsGridPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuricCellsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuricCellsWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnClickedBuyAuricCell, "HandleOnClickedBuyAuricCell" }, // 2689188775
		{ &Z_Construct_UFunction_UUMGAtlantaStoreScreen_HandleOnStoreLeft, "HandleOnStoreLeft" }, // 2226570861
		{ &Z_Construct_UFunction_UUMGAtlantaStoreScreen_SetBank, "SetBank" }, // 2065831387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaStoreScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaStoreScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsGridPanel_MetaData[] = {
		{ "Category", "UMGAtlantaStoreScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsGridPanel = { "AuricCellsGridPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaStoreScreen, AuricCellsGridPanel), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsGridPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsGridPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsWidget_MetaData[] = {
		{ "Category", "UMGAtlantaStoreScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaStoreScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsWidget = { "AuricCellsWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaStoreScreen, AuricCellsWidget), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsGridPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::NewProp_AuricCellsWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaStoreScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::ClassParams = {
		&UUMGAtlantaStoreScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaStoreScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaStoreScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaStoreScreen, 2234702215);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaStoreScreen>()
	{
		return UUMGAtlantaStoreScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaStoreScreen(Z_Construct_UClass_UUMGAtlantaStoreScreen, &UUMGAtlantaStoreScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaStoreScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaStoreScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
