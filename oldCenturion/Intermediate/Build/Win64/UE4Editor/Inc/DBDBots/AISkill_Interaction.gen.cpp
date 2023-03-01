// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_Interaction() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_Interaction();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIRoll();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EInteractionCancelInputModes();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EInteractionSkillInputModes();
// End Cross Module References
	void UAISkill_Interaction::StaticRegisterNativesUAISkill_Interaction()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_Interaction_NoRegister()
	{
		return UAISkill_Interaction::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_Interaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoReleaseHoldInputWhenCharged_MetaData[];
#endif
		static void NewProp_AutoReleaseHoldInputWhenCharged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoReleaseHoldInputWhenCharged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHoldInputTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHoldInputTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopInteractionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StopInteractionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartInteractionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartInteractionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLockInput_MetaData[];
#endif
		static void NewProp_AutoLockInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoLockInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelInputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CancelInputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CancelInputMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CancelInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CancelInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_Interaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_Interaction.h" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoReleaseHoldInputWhenCharged_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoReleaseHoldInputWhenCharged_SetBit(void* Obj)
	{
		((UAISkill_Interaction*)Obj)->AutoReleaseHoldInputWhenCharged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoReleaseHoldInputWhenCharged = { "AutoReleaseHoldInputWhenCharged", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_Interaction), &Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoReleaseHoldInputWhenCharged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoReleaseHoldInputWhenCharged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoReleaseHoldInputWhenCharged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_MinHoldInputTime_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_MinHoldInputTime = { "MinHoldInputTime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, MinHoldInputTime), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_MinHoldInputTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_MinHoldInputTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StopInteractionID_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StopInteractionID = { "StopInteractionID", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, StopInteractionID), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StopInteractionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StopInteractionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartInteractionID_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartInteractionID = { "StartInteractionID", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, StartInteractionID), METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartInteractionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartInteractionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartRoll_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartRoll = { "StartRoll", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, StartRoll), Z_Construct_UScriptStruct_FAIRoll, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoLockInput_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	void Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoLockInput_SetBit(void* Obj)
	{
		((UAISkill_Interaction*)Obj)->AutoLockInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoLockInput = { "AutoLockInput", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAISkill_Interaction), &Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoLockInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoLockInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoLockInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputMode_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputMode = { "CancelInputMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, CancelInputMode), Z_Construct_UEnum_DBDBots_EInteractionCancelInputModes, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputType_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputType = { "CancelInputType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, CancelInputType), Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, InputMode), Z_Construct_UEnum_DBDBots_EInteractionSkillInputModes, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "AISkill_Interaction" },
		{ "ModuleRelativePath", "Public/AISkill_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_Interaction, InputType), Z_Construct_UEnum_DeadByDaylight_EPawnInputPressTypes, METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_Interaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoReleaseHoldInputWhenCharged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_MinHoldInputTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StopInteractionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartInteractionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_StartRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_AutoLockInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_CancelInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_Interaction_Statics::NewProp_InputType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_Interaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_Interaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_Interaction_Statics::ClassParams = {
		&UAISkill_Interaction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_Interaction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_Interaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_Interaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_Interaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_Interaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_Interaction, 2384928960);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_Interaction>()
	{
		return UAISkill_Interaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_Interaction(Z_Construct_UClass_UAISkill_Interaction, &UAISkill_Interaction::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_Interaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_Interaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
