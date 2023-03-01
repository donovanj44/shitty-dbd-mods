// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBloodStoreItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBloodStoreItemWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreItemWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreItemWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBloodStoreItemWidget::execBroadcastBloodNodeSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastBloodNodeSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreItemWidget::execCollectNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectNode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreItemWidget::execConsumeNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeNode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreItemWidget::execFocusNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusNode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreItemWidget::execUnFocusNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnFocusNode_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UUMGBloodStoreItemWidget_CollectNode = FName(TEXT("CollectNode"));
	void UUMGBloodStoreItemWidget::CollectNode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemWidget_CollectNode),NULL);
	}
	static FName NAME_UUMGBloodStoreItemWidget_ConsumeNode = FName(TEXT("ConsumeNode"));
	void UUMGBloodStoreItemWidget::ConsumeNode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemWidget_ConsumeNode),NULL);
	}
	static FName NAME_UUMGBloodStoreItemWidget_FocusNode = FName(TEXT("FocusNode"));
	void UUMGBloodStoreItemWidget::FocusNode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemWidget_FocusNode),NULL);
	}
	static FName NAME_UUMGBloodStoreItemWidget_PlayConsumedAnimation = FName(TEXT("PlayConsumedAnimation"));
	void UUMGBloodStoreItemWidget::PlayConsumedAnimation(bool skipIntro)
	{
		UMGBloodStoreItemWidget_eventPlayConsumedAnimation_Parms Parms;
		Parms.skipIntro=skipIntro ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemWidget_PlayConsumedAnimation),&Parms);
	}
	static FName NAME_UUMGBloodStoreItemWidget_SetBackgroundImages = FName(TEXT("SetBackgroundImages"));
	void UUMGBloodStoreItemWidget::SetBackgroundImages()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemWidget_SetBackgroundImages),NULL);
	}
	static FName NAME_UUMGBloodStoreItemWidget_SetSelectedVisibilities = FName(TEXT("SetSelectedVisibilities"));
	void UUMGBloodStoreItemWidget::SetSelectedVisibilities(bool isSelected)
	{
		UMGBloodStoreItemWidget_eventSetSelectedVisibilities_Parms Parms;
		Parms.isSelected=isSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemWidget_SetSelectedVisibilities),&Parms);
	}
	static FName NAME_UUMGBloodStoreItemWidget_UnFocusNode = FName(TEXT("UnFocusNode"));
	void UUMGBloodStoreItemWidget::UnFocusNode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreItemWidget_UnFocusNode),NULL);
	}
	void UUMGBloodStoreItemWidget::StaticRegisterNativesUUMGBloodStoreItemWidget()
	{
		UClass* Class = UUMGBloodStoreItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastBloodNodeSelected", &UUMGBloodStoreItemWidget::execBroadcastBloodNodeSelected },
			{ "CollectNode", &UUMGBloodStoreItemWidget::execCollectNode },
			{ "ConsumeNode", &UUMGBloodStoreItemWidget::execConsumeNode },
			{ "FocusNode", &UUMGBloodStoreItemWidget::execFocusNode },
			{ "UnFocusNode", &UUMGBloodStoreItemWidget::execUnFocusNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "BroadcastBloodNodeSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "CollectNode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "ConsumeNode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "FocusNode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skipIntro_MetaData[];
#endif
		static void NewProp_skipIntro_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_skipIntro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::NewProp_skipIntro_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::NewProp_skipIntro_SetBit(void* Obj)
	{
		((UMGBloodStoreItemWidget_eventPlayConsumedAnimation_Parms*)Obj)->skipIntro = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::NewProp_skipIntro = { "skipIntro", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreItemWidget_eventPlayConsumedAnimation_Parms), &Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::NewProp_skipIntro_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::NewProp_skipIntro_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::NewProp_skipIntro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::NewProp_skipIntro,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "PlayConsumedAnimation", nullptr, nullptr, sizeof(UMGBloodStoreItemWidget_eventPlayConsumedAnimation_Parms), Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "SetBackgroundImages", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics
	{
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGBloodStoreItemWidget_eventSetSelectedVisibilities_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreItemWidget_eventSetSelectedVisibilities_Parms), &Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "SetSelectedVisibilities", nullptr, nullptr, sizeof(UMGBloodStoreItemWidget_eventSetSelectedVisibilities_Parms), Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreItemWidget, nullptr, "UnFocusNode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBloodStoreItemWidget_NoRegister()
	{
		return UUMGBloodStoreItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__consumedOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__consumedOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normalItemScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__normalItemScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bigItemScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bigItemScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isMysteryBox_MetaData[];
#endif
		static void NewProp__isMysteryBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isMysteryBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__contentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__contentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumedPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsumedPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectedPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectedPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MysteryBoxRarityBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MysteryBoxRarityBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MysteryBoxPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MysteryBoxPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_BroadcastBloodNodeSelected, "BroadcastBloodNodeSelected" }, // 3136613931
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_CollectNode, "CollectNode" }, // 1016639677
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_ConsumeNode, "ConsumeNode" }, // 1007602072
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_FocusNode, "FocusNode" }, // 3000594105
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_PlayConsumedAnimation, "PlayConsumedAnimation" }, // 3288342028
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetBackgroundImages, "SetBackgroundImages" }, // 3078383380
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_SetSelectedVisibilities, "SetSelectedVisibilities" }, // 1955991793
		{ &Z_Construct_UFunction_UUMGBloodStoreItemWidget_UnFocusNode, "UnFocusNode" }, // 3219401983
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBloodStoreItemWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__consumedOpacity_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__consumedOpacity = { "_consumedOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, _consumedOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__consumedOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__consumedOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__normalItemScale_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__normalItemScale = { "_normalItemScale", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, _normalItemScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__normalItemScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__normalItemScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__bigItemScale_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__bigItemScale = { "_bigItemScale", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, _bigItemScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__bigItemScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__bigItemScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__isMysteryBox_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__isMysteryBox_SetBit(void* Obj)
	{
		((UUMGBloodStoreItemWidget*)Obj)->_isMysteryBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__isMysteryBox = { "_isMysteryBox", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGBloodStoreItemWidget), &Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__isMysteryBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__isMysteryBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__isMysteryBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__contentType_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__contentType = { "_contentType", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, _contentType), Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeContentType, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__contentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__contentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__contentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ConsumedPanel_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ConsumedPanel = { "ConsumedPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, ConsumedPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ConsumedPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ConsumedPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_CollectedPanel_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_CollectedPanel = { "CollectedPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, CollectedPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_CollectedPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_CollectedPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxRarityBackground_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxRarityBackground = { "MysteryBoxRarityBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, MysteryBoxRarityBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxRarityBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxRarityBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxPanel_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxPanel = { "MysteryBoxPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, MysteryBoxPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ItemPanel_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ItemPanel = { "ItemPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, ItemPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ItemPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ItemPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_RarityBackground_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_RarityBackground = { "RarityBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, RarityBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_RarityBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_RarityBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, BackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_BackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_NodeImage_MetaData[] = {
		{ "Category", "UMGBloodStoreItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_NodeImage = { "NodeImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreItemWidget, NodeImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_NodeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_NodeImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__consumedOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__normalItemScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__bigItemScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__isMysteryBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__contentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp__contentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ConsumedPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_CollectedPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxRarityBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_MysteryBoxPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_ItemPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_RarityBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_BackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::NewProp_NodeImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBloodStoreItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::ClassParams = {
		&UUMGBloodStoreItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBloodStoreItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBloodStoreItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBloodStoreItemWidget, 2531833459);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBloodStoreItemWidget>()
	{
		return UUMGBloodStoreItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBloodStoreItemWidget(Z_Construct_UClass_UUMGBloodStoreItemWidget, &UUMGBloodStoreItemWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBloodStoreItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBloodStoreItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
