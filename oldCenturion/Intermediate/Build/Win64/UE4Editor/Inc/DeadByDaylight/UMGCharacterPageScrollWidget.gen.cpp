// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterPageScrollWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterPageScrollWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPageScrollWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPageScrollWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGGridPageScrollWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlotData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCharacterPageScrollWidget::execHandleCharacterClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCharacterClicked(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	void UUMGCharacterPageScrollWidget::StaticRegisterNativesUUMGCharacterPageScrollWidget()
	{
		UClass* Class = UUMGCharacterPageScrollWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCharacterClicked", &UUMGCharacterPageScrollWidget::execHandleCharacterClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics
	{
		struct UMGCharacterPageScrollWidget_eventHandleCharacterClicked_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterPageScrollWidget_eventHandleCharacterClicked_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterPageScrollWidget, nullptr, "HandleCharacterClicked", nullptr, nullptr, sizeof(UMGCharacterPageScrollWidget_eventHandleCharacterClicked_Parms), Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCharacterPageScrollWidget_NoRegister()
	{
		return UUMGCharacterPageScrollWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorsTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__survivorsTitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killersTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__killersTitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charactersTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__charactersTitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isKiller_MetaData[];
#endif
		static void NewProp__isKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charactersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__charactersData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__charactersData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__characterButtonWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGridPageScrollWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCharacterPageScrollWidget_HandleCharacterClicked, "HandleCharacterClicked" }, // 148858928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterPageScrollWidget.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__survivorsTitleText_MetaData[] = {
		{ "Category", "UMGCharacterPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__survivorsTitleText = { "_survivorsTitleText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPageScrollWidget, _survivorsTitleText), METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__survivorsTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__survivorsTitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__killersTitleText_MetaData[] = {
		{ "Category", "UMGCharacterPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__killersTitleText = { "_killersTitleText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPageScrollWidget, _killersTitleText), METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__killersTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__killersTitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersTitleText_MetaData[] = {
		{ "Category", "UMGCharacterPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersTitleText = { "_charactersTitleText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPageScrollWidget, _charactersTitleText), METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersTitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__isKiller_MetaData[] = {
		{ "Category", "UMGCharacterPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__isKiller_SetBit(void* Obj)
	{
		((UUMGCharacterPageScrollWidget*)Obj)->_isKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__isKiller = { "_isKiller", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGCharacterPageScrollWidget), &Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__isKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__isKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__isKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersData_MetaData[] = {
		{ "Category", "UMGCharacterPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersData = { "_charactersData", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPageScrollWidget, _charactersData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersData_Inner = { "_charactersData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__characterButtonWidgetClass_MetaData[] = {
		{ "Category", "UMGCharacterPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGCharacterPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__characterButtonWidgetClass = { "_characterButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080002000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPageScrollWidget, _characterButtonWidgetClass), Z_Construct_UClass_UUMGCharacterButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__characterButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__characterButtonWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__survivorsTitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__killersTitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersTitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__isKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__charactersData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::NewProp__characterButtonWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterPageScrollWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::ClassParams = {
		&UUMGCharacterPageScrollWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterPageScrollWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterPageScrollWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterPageScrollWidget, 2762220449);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterPageScrollWidget>()
	{
		return UUMGCharacterPageScrollWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterPageScrollWidget(Z_Construct_UClass_UUMGCharacterPageScrollWidget, &UUMGCharacterPageScrollWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterPageScrollWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterPageScrollWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
