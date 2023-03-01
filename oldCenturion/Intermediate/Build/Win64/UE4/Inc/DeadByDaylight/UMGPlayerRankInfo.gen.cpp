// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPlayerRankInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPlayerRankInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerRankInfo_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPlayerRankInfo();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankFrame_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPipsContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPlayerRankInfo::execSetData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rank);
		P_GET_PROPERTY(FIntProperty,Z_Param_pipsRequiredForNextRank);
		P_GET_PROPERTY(FIntProperty,Z_Param_filledPips);
		P_GET_PROPERTY(FTextProperty,Z_Param_NewTitleLabel);
		P_GET_PROPERTY(FTextProperty,Z_Param_NewPipLabel);
		P_GET_ENUM(EPlayerRole,Z_Param_playerRole);
		P_GET_UBOOL(Z_Param_IsHighlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_rank,Z_Param_pipsRequiredForNextRank,Z_Param_filledPips,Z_Param_NewTitleLabel,Z_Param_NewPipLabel,EPlayerRole(Z_Param_playerRole),Z_Param_IsHighlight);
		P_NATIVE_END;
	}
	void UUMGPlayerRankInfo::StaticRegisterNativesUUMGPlayerRankInfo()
	{
		UClass* Class = UUMGPlayerRankInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UUMGPlayerRankInfo::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics
	{
		struct UMGPlayerRankInfo_eventSetData_Parms
		{
			int32 rank;
			int32 pipsRequiredForNextRank;
			int32 filledPips;
			FText NewTitleLabel;
			FText NewPipLabel;
			EPlayerRole playerRole;
			bool IsHighlight;
		};
		static void NewProp_IsHighlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHighlight;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerRole_Underlying;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewPipLabel;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewTitleLabel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_filledPips;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pipsRequiredForNextRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_IsHighlight_SetBit(void* Obj)
	{
		((UMGPlayerRankInfo_eventSetData_Parms*)Obj)->IsHighlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_IsHighlight = { "IsHighlight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGPlayerRankInfo_eventSetData_Parms), &Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_IsHighlight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_playerRole = { "playerRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerRankInfo_eventSetData_Parms, playerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_playerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_NewPipLabel = { "NewPipLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerRankInfo_eventSetData_Parms, NewPipLabel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_NewTitleLabel = { "NewTitleLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerRankInfo_eventSetData_Parms, NewTitleLabel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_filledPips = { "filledPips", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerRankInfo_eventSetData_Parms, filledPips), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_pipsRequiredForNextRank = { "pipsRequiredForNextRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerRankInfo_eventSetData_Parms, pipsRequiredForNextRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_rank = { "rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPlayerRankInfo_eventSetData_Parms, rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_IsHighlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_playerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_playerRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_NewPipLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_NewTitleLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_filledPips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_pipsRequiredForNextRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::NewProp_rank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPlayerRankInfo, nullptr, "SetData", nullptr, nullptr, sizeof(UMGPlayerRankInfo_eventSetData_Parms), Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPlayerRankInfo_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPlayerRankInfo_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPlayerRankInfo_NoRegister()
	{
		return UUMGPlayerRankInfo::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPlayerRankInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__disableOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__disableOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerColorBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__killerColorBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorColorBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__survivorColorBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighlightContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankFrameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankFrameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PipsContainerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PipsContainerWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPlayerRankInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPlayerRankInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPlayerRankInfo_SetData, "SetData" }, // 2032938113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPlayerRankInfo.h" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__disableOpacity_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__disableOpacity = { "_disableOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, _disableOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__disableOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__disableOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__killerColorBackground_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__killerColorBackground = { "_killerColorBackground", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, _killerColorBackground), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__killerColorBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__killerColorBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__survivorColorBackground_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__survivorColorBackground = { "_survivorColorBackground", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, _survivorColorBackground), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__survivorColorBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__survivorColorBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_HighlightContainer_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_HighlightContainer = { "HighlightContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, HighlightContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_HighlightContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_HighlightContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipLabel_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipLabel = { "PipLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, PipLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankLabel_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankLabel = { "RankLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, RankLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_TitleLabel_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_TitleLabel = { "TitleLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, TitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_TitleLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_TitleLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, Background), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankFrameWidget_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankFrameWidget = { "RankFrameWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, RankFrameWidget), Z_Construct_UClass_UUMGTallyRankFrame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankFrameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankFrameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipsContainerWidget_MetaData[] = {
		{ "Category", "UMGPlayerRankInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPlayerRankInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipsContainerWidget = { "PipsContainerWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPlayerRankInfo, PipsContainerWidget), Z_Construct_UClass_UUMGTallyPipsContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipsContainerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipsContainerWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPlayerRankInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__disableOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__killerColorBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp__survivorColorBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_HighlightContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_TitleLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_RankFrameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPlayerRankInfo_Statics::NewProp_PipsContainerWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPlayerRankInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPlayerRankInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPlayerRankInfo_Statics::ClassParams = {
		&UUMGPlayerRankInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPlayerRankInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPlayerRankInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPlayerRankInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPlayerRankInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPlayerRankInfo, 424915069);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPlayerRankInfo>()
	{
		return UUMGPlayerRankInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPlayerRankInfo(Z_Construct_UClass_UUMGPlayerRankInfo, &UUMGPlayerRankInfo::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPlayerRankInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPlayerRankInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
