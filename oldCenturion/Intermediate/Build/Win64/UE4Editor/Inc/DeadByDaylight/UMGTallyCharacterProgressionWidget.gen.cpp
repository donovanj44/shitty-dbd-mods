// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyCharacterProgressionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyCharacterProgressionWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyListElementWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyCharacterProgressionWidget::execOnFullBarIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFullBarIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyCharacterProgressionWidget::execOnFullBarOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFullBarOut();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyCharacterProgressionWidget::execSetWidgetToFinalState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetToFinalState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyCharacterProgressionWidget::execStartNewLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartNewLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyCharacterProgressionWidget::execStartSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSequence();
		P_NATIVE_END;
	}
	void UUMGTallyCharacterProgressionWidget::StaticRegisterNativesUUMGTallyCharacterProgressionWidget()
	{
		UClass* Class = UUMGTallyCharacterProgressionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFullBarIn", &UUMGTallyCharacterProgressionWidget::execOnFullBarIn },
			{ "OnFullBarOut", &UUMGTallyCharacterProgressionWidget::execOnFullBarOut },
			{ "SetWidgetToFinalState", &UUMGTallyCharacterProgressionWidget::execSetWidgetToFinalState },
			{ "StartNewLevel", &UUMGTallyCharacterProgressionWidget::execStartNewLevel },
			{ "StartSequence", &UUMGTallyCharacterProgressionWidget::execStartSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyCharacterProgressionWidget, nullptr, "OnFullBarIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyCharacterProgressionWidget, nullptr, "OnFullBarOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyCharacterProgressionWidget, nullptr, "SetWidgetToFinalState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyCharacterProgressionWidget, nullptr, "StartNewLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyCharacterProgressionWidget, nullptr, "StartSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_NoRegister()
	{
		return UUMGTallyCharacterProgressionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperiencePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExperiencePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextCharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrestigeIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPicture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterPicture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCurrentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextCurrentLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextExperienceEarned_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextExperienceEarned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextExperienceForNextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextExperienceForNextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextCharacterCurrentExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextCharacterCurrentExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterProgressionBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterProgressionBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGTallyListElementWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarIn, "OnFullBarIn" }, // 2379617691
		{ &Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_OnFullBarOut, "OnFullBarOut" }, // 3415144476
		{ &Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_SetWidgetToFinalState, "SetWidgetToFinalState" }, // 725337684
		{ &Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartNewLevel, "StartNewLevel" }, // 1814497624
		{ &Z_Construct_UFunction_UUMGTallyCharacterProgressionWidget_StartSequence, "StartSequence" }, // 3452826775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyCharacterProgressionWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_ExperiencePerSecond_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_ExperiencePerSecond = { "ExperiencePerSecond", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, ExperiencePerSecond), METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_ExperiencePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_ExperiencePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterName_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterName = { "TextCharacterName", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextCharacterName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_PrestigeIcon_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_PrestigeIcon = { "PrestigeIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, PrestigeIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_PrestigeIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_PrestigeIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterPicture_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterPicture = { "CharacterPicture", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, CharacterPicture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterPicture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterPicture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCurrentLevel_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCurrentLevel = { "TextCurrentLevel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextCurrentLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCurrentLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceEarned_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceEarned = { "TextExperienceEarned", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextExperienceEarned), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceEarned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceEarned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceForNextLevel_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceForNextLevel = { "TextExperienceForNextLevel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextExperienceForNextLevel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceForNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceForNextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterCurrentExperience_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterCurrentExperience = { "TextCharacterCurrentExperience", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, TextCharacterCurrentExperience), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterCurrentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterCurrentExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterProgressionBar_MetaData[] = {
		{ "Category", "UMGTallyCharacterProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyCharacterProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterProgressionBar = { "CharacterProgressionBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyCharacterProgressionWidget, CharacterProgressionBar), Z_Construct_UClass_UUMGTallyCharacterProgressionBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterProgressionBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterProgressionBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_ExperiencePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_PrestigeIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterPicture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCurrentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceEarned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextExperienceForNextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_TextCharacterCurrentExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::NewProp_CharacterProgressionBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyCharacterProgressionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::ClassParams = {
		&UUMGTallyCharacterProgressionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyCharacterProgressionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyCharacterProgressionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyCharacterProgressionWidget, 2250638215);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyCharacterProgressionWidget>()
	{
		return UUMGTallyCharacterProgressionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyCharacterProgressionWidget(Z_Construct_UClass_UUMGTallyCharacterProgressionWidget, &UUMGTallyCharacterProgressionWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyCharacterProgressionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyCharacterProgressionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
