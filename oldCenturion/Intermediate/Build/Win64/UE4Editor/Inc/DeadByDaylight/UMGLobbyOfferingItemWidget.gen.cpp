// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLobbyOfferingItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLobbyOfferingItemWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyOfferingItemWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbyOfferingItemWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlotData();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLobbyOfferingItemWidget::execGetOfferingIcons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,TSoftObjectPtr<UTexture2D> >*)Z_Param__Result=P_THIS->GetOfferingIcons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLobbyOfferingItemWidget::execHideOfferingItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideOfferingItem();
		P_NATIVE_END;
	}
	static FName NAME_UUMGLobbyOfferingItemWidget_SetOfferingData = FName(TEXT("SetOfferingData"));
	void UUMGLobbyOfferingItemWidget::SetOfferingData(FInventorySlotData const& data)
	{
		UMGLobbyOfferingItemWidget_eventSetOfferingData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbyOfferingItemWidget_SetOfferingData),&Parms);
	}
	void UUMGLobbyOfferingItemWidget::StaticRegisterNativesUUMGLobbyOfferingItemWidget()
	{
		UClass* Class = UUMGLobbyOfferingItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOfferingIcons", &UUMGLobbyOfferingItemWidget::execGetOfferingIcons },
			{ "HideOfferingItem", &UUMGLobbyOfferingItemWidget::execHideOfferingItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics
	{
		struct UMGLobbyOfferingItemWidget_eventGetOfferingIcons_Parms
		{
			TMap<FName,TSoftObjectPtr<UTexture2D> > ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyOfferingItemWidget_eventGetOfferingIcons_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyOfferingItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyOfferingItemWidget, nullptr, "GetOfferingIcons", nullptr, nullptr, sizeof(UMGLobbyOfferingItemWidget_eventGetOfferingIcons_Parms), Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyOfferingItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyOfferingItemWidget, nullptr, "HideOfferingItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbyOfferingItemWidget_eventSetOfferingData_Parms, data), Z_Construct_UScriptStruct_FInventorySlotData, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbyOfferingItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbyOfferingItemWidget, nullptr, "SetOfferingData", nullptr, nullptr, sizeof(UMGLobbyOfferingItemWidget_eventSetOfferingData_Parms), Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLobbyOfferingItemWidget_NoRegister()
	{
		return UUMGLobbyOfferingItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_GetOfferingIcons, "GetOfferingIcons" }, // 683478422
		{ &Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_HideOfferingItem, "HideOfferingItem" }, // 796912408
		{ &Z_Construct_UFunction_UUMGLobbyOfferingItemWidget_SetOfferingData, "SetOfferingData" }, // 819457759
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLobbyOfferingItemWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLobbyOfferingItemWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLobbyOfferingItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::ClassParams = {
		&UUMGLobbyOfferingItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLobbyOfferingItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLobbyOfferingItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLobbyOfferingItemWidget, 432451013);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLobbyOfferingItemWidget>()
	{
		return UUMGLobbyOfferingItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLobbyOfferingItemWidget(Z_Construct_UClass_UUMGLobbyOfferingItemWidget, &UUMGLobbyOfferingItemWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLobbyOfferingItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLobbyOfferingItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
