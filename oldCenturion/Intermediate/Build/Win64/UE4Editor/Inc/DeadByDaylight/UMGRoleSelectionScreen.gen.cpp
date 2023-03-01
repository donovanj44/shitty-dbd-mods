// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGRoleSelectionScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGRoleSelectionScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRoleSelectionScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRoleSelectionScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ERoleSelectionScreenButton();
// End Cross Module References
	DEFINE_FUNCTION(UUMGRoleSelectionScreen::execButtonClickEvent)
	{
		P_GET_ENUM(ERoleSelectionScreenButton,Z_Param_buttonId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonClickEvent(ERoleSelectionScreenButton(Z_Param_buttonId));
		P_NATIVE_END;
	}
	void UUMGRoleSelectionScreen::StaticRegisterNativesUUMGRoleSelectionScreen()
	{
		UClass* Class = UUMGRoleSelectionScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonClickEvent", &UUMGRoleSelectionScreen::execButtonClickEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics
	{
		struct UMGRoleSelectionScreen_eventButtonClickEvent_Parms
		{
			ERoleSelectionScreenButton buttonId;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_buttonId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buttonId_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::NewProp_buttonId = { "buttonId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGRoleSelectionScreen_eventButtonClickEvent_Parms, buttonId), Z_Construct_UEnum_DeadByDaylight_ERoleSelectionScreenButton, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::NewProp_buttonId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::NewProp_buttonId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::NewProp_buttonId_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGRoleSelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGRoleSelectionScreen, nullptr, "ButtonClickEvent", nullptr, nullptr, sizeof(UMGRoleSelectionScreen_eventButtonClickEvent_Parms), Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGRoleSelectionScreen_NoRegister()
	{
		return UUMGRoleSelectionScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGRoleSelectionScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__newInboxMessageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__newInboxMessageCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGRoleSelectionScreen_ButtonClickEvent, "ButtonClickEvent" }, // 1662840569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGRoleSelectionScreen.h" },
		{ "ModuleRelativePath", "Public/UMGRoleSelectionScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::NewProp__newInboxMessageCount_MetaData[] = {
		{ "Category", "UMGRoleSelectionScreen" },
		{ "ModuleRelativePath", "Public/UMGRoleSelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::NewProp__newInboxMessageCount = { "_newInboxMessageCount", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRoleSelectionScreen, _newInboxMessageCount), METADATA_PARAMS(Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::NewProp__newInboxMessageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::NewProp__newInboxMessageCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::NewProp__newInboxMessageCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGRoleSelectionScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::ClassParams = {
		&UUMGRoleSelectionScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGRoleSelectionScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGRoleSelectionScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGRoleSelectionScreen, 33386227);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGRoleSelectionScreen>()
	{
		return UUMGRoleSelectionScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGRoleSelectionScreen(Z_Construct_UClass_UUMGRoleSelectionScreen, &UUMGRoleSelectionScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGRoleSelectionScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGRoleSelectionScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
