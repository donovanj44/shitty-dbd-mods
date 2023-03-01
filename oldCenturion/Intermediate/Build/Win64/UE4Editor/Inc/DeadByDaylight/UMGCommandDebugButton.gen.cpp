// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCommandDebugButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCommandDebugButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCommandDebugButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCommandDebugButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCommandDebugButton::execTriggerCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCommand();
		P_NATIVE_END;
	}
	void UUMGCommandDebugButton::StaticRegisterNativesUUMGCommandDebugButton()
	{
		UClass* Class = UUMGCommandDebugButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerCommand", &UUMGCommandDebugButton::execTriggerCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCommandDebugButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCommandDebugButton, nullptr, "TriggerCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCommandDebugButton_NoRegister()
	{
		return UUMGCommandDebugButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCommandDebugButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommandButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommandLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCommandDebugButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCommandDebugButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCommandDebugButton_TriggerCommand, "TriggerCommand" }, // 993521497
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCommandDebugButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCommandDebugButton.h" },
		{ "ModuleRelativePath", "Public/UMGCommandDebugButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandName_MetaData[] = {
		{ "Category", "UMGCommandDebugButton" },
		{ "ModuleRelativePath", "Public/UMGCommandDebugButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCommandDebugButton, CommandName), METADATA_PARAMS(Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCommandDebugButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandButton = { "CommandButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCommandDebugButton, CommandButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCommandDebugButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandLabel = { "CommandLabel", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCommandDebugButton, CommandLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCommandDebugButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCommandDebugButton_Statics::NewProp_CommandLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCommandDebugButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCommandDebugButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCommandDebugButton_Statics::ClassParams = {
		&UUMGCommandDebugButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCommandDebugButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCommandDebugButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCommandDebugButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCommandDebugButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCommandDebugButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCommandDebugButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCommandDebugButton, 4048377142);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCommandDebugButton>()
	{
		return UUMGCommandDebugButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCommandDebugButton(Z_Construct_UClass_UUMGCommandDebugButton, &UUMGCommandDebugButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCommandDebugButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCommandDebugButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
