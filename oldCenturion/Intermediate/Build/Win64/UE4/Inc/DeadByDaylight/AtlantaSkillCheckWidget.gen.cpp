// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaSkillCheckWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaSkillCheckWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaSkillCheckWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaSkillCheckWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaSkillCheckWidget::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaSkillCheckWidget::execSetActive)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaSkillCheckWidget::execSetHexed)
	{
		P_GET_UBOOL(Z_Param_isHexed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHexed(Z_Param_isHexed);
		P_NATIVE_END;
	}
	static FName NAME_UAtlantaSkillCheckWidget_OnIsActiveChanged = FName(TEXT("OnIsActiveChanged"));
	void UAtlantaSkillCheckWidget::OnIsActiveChanged(bool NewIsActive)
	{
		AtlantaSkillCheckWidget_eventOnIsActiveChanged_Parms Parms;
		Parms.NewIsActive=NewIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAtlantaSkillCheckWidget_OnIsActiveChanged),&Parms);
	}
	void UAtlantaSkillCheckWidget::StaticRegisterNativesUAtlantaSkillCheckWidget()
	{
		UClass* Class = UAtlantaSkillCheckWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &UAtlantaSkillCheckWidget::execIsActive },
			{ "SetActive", &UAtlantaSkillCheckWidget::execSetActive },
			{ "SetHexed", &UAtlantaSkillCheckWidget::execSetHexed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics
	{
		struct AtlantaSkillCheckWidget_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaSkillCheckWidget_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaSkillCheckWidget_eventIsActive_Parms), &Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaSkillCheckWidget, nullptr, "IsActive", nullptr, nullptr, sizeof(AtlantaSkillCheckWidget_eventIsActive_Parms), Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics
	{
		static void NewProp_NewIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::NewProp_NewIsActive_SetBit(void* Obj)
	{
		((AtlantaSkillCheckWidget_eventOnIsActiveChanged_Parms*)Obj)->NewIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::NewProp_NewIsActive = { "NewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaSkillCheckWidget_eventOnIsActiveChanged_Parms), &Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::NewProp_NewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::NewProp_NewIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaSkillCheckWidget, nullptr, "OnIsActiveChanged", nullptr, nullptr, sizeof(AtlantaSkillCheckWidget_eventOnIsActiveChanged_Parms), Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics
	{
		struct AtlantaSkillCheckWidget_eventSetActive_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((AtlantaSkillCheckWidget_eventSetActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaSkillCheckWidget_eventSetActive_Parms), &Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaSkillCheckWidget, nullptr, "SetActive", nullptr, nullptr, sizeof(AtlantaSkillCheckWidget_eventSetActive_Parms), Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics
	{
		struct AtlantaSkillCheckWidget_eventSetHexed_Parms
		{
			bool isHexed;
		};
		static void NewProp_isHexed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHexed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::NewProp_isHexed_SetBit(void* Obj)
	{
		((AtlantaSkillCheckWidget_eventSetHexed_Parms*)Obj)->isHexed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::NewProp_isHexed = { "isHexed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaSkillCheckWidget_eventSetHexed_Parms), &Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::NewProp_isHexed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::NewProp_isHexed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaSkillCheckWidget, nullptr, "SetHexed", nullptr, nullptr, sizeof(AtlantaSkillCheckWidget_eventSetHexed_Parms), Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaSkillCheckWidget_NoRegister()
	{
		return UAtlantaSkillCheckWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathCoveredAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathCoveredAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isPlayAnimation_MetaData[];
#endif
		static void NewProp__isPlayAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isPlayAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HexColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HexColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarkerContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAreaEndMarkerContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitAreaEndMarkerContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAreaStartMarkerContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitAreaStartMarkerContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusAreaContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BonusAreaContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAreaContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitAreaContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BonusArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrangeSmoke_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OrangeSmoke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkillCheckArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaSkillCheckWidget_IsActive, "IsActive" }, // 3596634506
		{ &Z_Construct_UFunction_UAtlantaSkillCheckWidget_OnIsActiveChanged, "OnIsActiveChanged" }, // 3363191793
		{ &Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetActive, "SetActive" }, // 3303359708
		{ &Z_Construct_UFunction_UAtlantaSkillCheckWidget_SetHexed, "SetHexed" }, // 1484661122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaSkillCheckWidget.h" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_PathCoveredAngle_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_PathCoveredAngle = { "PathCoveredAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, PathCoveredAngle), METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_PathCoveredAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_PathCoveredAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp__isPlayAnimation_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	void Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp__isPlayAnimation_SetBit(void* Obj)
	{
		((UAtlantaSkillCheckWidget*)Obj)->_isPlayAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp__isPlayAnimation = { "_isPlayAnimation", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtlantaSkillCheckWidget), &Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp__isPlayAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp__isPlayAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp__isPlayAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_DefaultColor_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, DefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_DefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_DefaultColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HexColor_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HexColor = { "HexColor", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, HexColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HexColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_MarkerContainer_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_MarkerContainer = { "MarkerContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, MarkerContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_MarkerContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_MarkerContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaEndMarkerContainer_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaEndMarkerContainer = { "HitAreaEndMarkerContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, HitAreaEndMarkerContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaEndMarkerContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaEndMarkerContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaStartMarkerContainer_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaStartMarkerContainer = { "HitAreaStartMarkerContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, HitAreaStartMarkerContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaStartMarkerContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaStartMarkerContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusAreaContainer_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusAreaContainer = { "BonusAreaContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, BonusAreaContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusAreaContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusAreaContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaContainer_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaContainer = { "HitAreaContainer", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, HitAreaContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_EndMarker_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_EndMarker = { "EndMarker", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, EndMarker), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_EndMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_EndMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_StartMarker_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_StartMarker = { "StartMarker", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, StartMarker), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_StartMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_StartMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusArea_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusArea = { "BonusArea", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, BonusArea), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_OrangeSmoke_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_OrangeSmoke = { "OrangeSmoke", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, OrangeSmoke), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_OrangeSmoke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_OrangeSmoke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, Hit), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitArea_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitArea = { "HitArea", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, HitArea), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_SkillCheckArea_MetaData[] = {
		{ "Category", "AtlantaSkillCheckWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaSkillCheckWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_SkillCheckArea = { "SkillCheckArea", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaSkillCheckWidget, SkillCheckArea), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_SkillCheckArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_SkillCheckArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_PathCoveredAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp__isPlayAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_DefaultColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HexColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_MarkerContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaEndMarkerContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaStartMarkerContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusAreaContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitAreaContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_EndMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_StartMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_BonusArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_OrangeSmoke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_HitArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::NewProp_SkillCheckArea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaSkillCheckWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::ClassParams = {
		&UAtlantaSkillCheckWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaSkillCheckWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaSkillCheckWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaSkillCheckWidget, 3885921898);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaSkillCheckWidget>()
	{
		return UAtlantaSkillCheckWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaSkillCheckWidget(Z_Construct_UClass_UAtlantaSkillCheckWidget, &UAtlantaSkillCheckWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaSkillCheckWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaSkillCheckWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
