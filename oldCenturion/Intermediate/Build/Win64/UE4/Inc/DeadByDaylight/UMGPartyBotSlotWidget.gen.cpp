// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPartyBotSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPartyBotSlotWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyBotSlotWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyBotSlotWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPartyBotSlotWidget::execHandleEditButtonEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEditButtonEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPartyBotSlotWidget::execHandleInvitePartyButtonEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInvitePartyButtonEvent();
		P_NATIVE_END;
	}
	void UUMGPartyBotSlotWidget::StaticRegisterNativesUUMGPartyBotSlotWidget()
	{
		UClass* Class = UUMGPartyBotSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleEditButtonEvent", &UUMGPartyBotSlotWidget::execHandleEditButtonEvent },
			{ "HandleInvitePartyButtonEvent", &UUMGPartyBotSlotWidget::execHandleInvitePartyButtonEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartyBotSlotWidget, nullptr, "HandleEditButtonEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartyBotSlotWidget, nullptr, "HandleInvitePartyButtonEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPartyBotSlotWidget_NoRegister()
	{
		return UUMGPartyBotSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DifficultyColors;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DifficultyColors_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DifficultyColors_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DifficultyColors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitePartyCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvitePartyCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitePartyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvitePartyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotDifficultyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotDifficultyText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleEditButtonEvent, "HandleEditButtonEvent" }, // 2615728585
		{ &Z_Construct_UFunction_UUMGPartyBotSlotWidget_HandleInvitePartyButtonEvent, "HandleInvitePartyButtonEvent" }, // 208079565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPartyBotSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_MetaData[] = {
		{ "Category", "UMGPartyBotSlotWidget" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors = { "DifficultyColors", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, DifficultyColors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_Key_KeyProp = { "DifficultyColors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_ValueProp = { "DifficultyColors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyCanvas_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyCanvas = { "InvitePartyCanvas", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, InvitePartyCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyButton = { "InvitePartyButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, InvitePartyButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditIcon = { "EditIcon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, EditIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditButton = { "EditButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, EditButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_CharacterNameText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_CharacterNameText = { "CharacterNameText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, CharacterNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_CharacterNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_CharacterNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_BotDifficultyText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_BotDifficultyText = { "BotDifficultyText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, BotDifficultyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_BotDifficultyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_BotDifficultyText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_RoleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyBotSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_RoleText = { "RoleText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyBotSlotWidget, RoleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_RoleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_RoleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_DifficultyColors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_InvitePartyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_EditButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_CharacterNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_BotDifficultyText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::NewProp_RoleText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPartyBotSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::ClassParams = {
		&UUMGPartyBotSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPartyBotSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPartyBotSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPartyBotSlotWidget, 644694258);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPartyBotSlotWidget>()
	{
		return UUMGPartyBotSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPartyBotSlotWidget(Z_Construct_UClass_UUMGPartyBotSlotWidget, &UUMGPartyBotSlotWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPartyBotSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPartyBotSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
