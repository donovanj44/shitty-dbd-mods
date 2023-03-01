// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGInboxMessageEntryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGInboxMessageEntryWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInboxMessageEntryWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInboxMessageEntryWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageElapsedTime();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageUIData();
// End Cross Module References
	DEFINE_FUNCTION(UUMGInboxMessageEntryWidget::execGetElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInboxMessageElapsedTime*)Z_Param__Result=P_THIS->GetElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxMessageEntryWidget::execSetMessageData)
	{
		P_GET_STRUCT_REF(FInboxMessageUIData,Z_Param_Out_messageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMessageData(Z_Param_Out_messageData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxMessageEntryWidget::execUpdateMessageData)
	{
		P_GET_STRUCT(FInboxMessageUIData,Z_Param_messageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMessageData_Implementation(Z_Param_messageData);
		P_NATIVE_END;
	}
	static FName NAME_UUMGInboxMessageEntryWidget_UpdateMessageData = FName(TEXT("UpdateMessageData"));
	void UUMGInboxMessageEntryWidget::UpdateMessageData(FInboxMessageUIData messageData)
	{
		UMGInboxMessageEntryWidget_eventUpdateMessageData_Parms Parms;
		Parms.messageData=messageData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGInboxMessageEntryWidget_UpdateMessageData),&Parms);
	}
	void UUMGInboxMessageEntryWidget::StaticRegisterNativesUUMGInboxMessageEntryWidget()
	{
		UClass* Class = UUMGInboxMessageEntryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElapsedTime", &UUMGInboxMessageEntryWidget::execGetElapsedTime },
			{ "SetMessageData", &UUMGInboxMessageEntryWidget::execSetMessageData },
			{ "UpdateMessageData", &UUMGInboxMessageEntryWidget::execUpdateMessageData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics
	{
		struct UMGInboxMessageEntryWidget_eventGetElapsedTime_Parms
		{
			FInboxMessageElapsedTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxMessageEntryWidget_eventGetElapsedTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FInboxMessageElapsedTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxMessageEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxMessageEntryWidget, nullptr, "GetElapsedTime", nullptr, nullptr, sizeof(UMGInboxMessageEntryWidget_eventGetElapsedTime_Parms), Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics
	{
		struct UMGInboxMessageEntryWidget_eventSetMessageData_Parms
		{
			FInboxMessageUIData messageData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_messageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::NewProp_messageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::NewProp_messageData = { "messageData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxMessageEntryWidget_eventSetMessageData_Parms, messageData), Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::NewProp_messageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::NewProp_messageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::NewProp_messageData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxMessageEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxMessageEntryWidget, nullptr, "SetMessageData", nullptr, nullptr, sizeof(UMGInboxMessageEntryWidget_eventSetMessageData_Parms), Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_messageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::NewProp_messageData = { "messageData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxMessageEntryWidget_eventUpdateMessageData_Parms, messageData), Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::NewProp_messageData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxMessageEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxMessageEntryWidget, nullptr, "UpdateMessageData", nullptr, nullptr, sizeof(UMGInboxMessageEntryWidget_eventUpdateMessageData_Parms), Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGInboxMessageEntryWidget_NoRegister()
	{
		return UUMGInboxMessageEntryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCurrentSelection_MetaData[];
#endif
		static void NewProp__isCurrentSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isCurrentSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__messageData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__messageData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGInboxMessageEntryWidget_GetElapsedTime, "GetElapsedTime" }, // 1312210096
		{ &Z_Construct_UFunction_UUMGInboxMessageEntryWidget_SetMessageData, "SetMessageData" }, // 1026187764
		{ &Z_Construct_UFunction_UUMGInboxMessageEntryWidget_UpdateMessageData, "UpdateMessageData" }, // 2564812029
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGInboxMessageEntryWidget.h" },
		{ "ModuleRelativePath", "Public/UMGInboxMessageEntryWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__isCurrentSelection_MetaData[] = {
		{ "Category", "UMGInboxMessageEntryWidget" },
		{ "ModuleRelativePath", "Public/UMGInboxMessageEntryWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__isCurrentSelection_SetBit(void* Obj)
	{
		((UUMGInboxMessageEntryWidget*)Obj)->_isCurrentSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__isCurrentSelection = { "_isCurrentSelection", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGInboxMessageEntryWidget), &Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__isCurrentSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__isCurrentSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__isCurrentSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__messageData_MetaData[] = {
		{ "Category", "UMGInboxMessageEntryWidget" },
		{ "ModuleRelativePath", "Public/UMGInboxMessageEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__messageData = { "_messageData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGInboxMessageEntryWidget, _messageData), Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__messageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__messageData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__isCurrentSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::NewProp__messageData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGInboxMessageEntryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::ClassParams = {
		&UUMGInboxMessageEntryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGInboxMessageEntryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGInboxMessageEntryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGInboxMessageEntryWidget, 1340468596);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGInboxMessageEntryWidget>()
	{
		return UUMGInboxMessageEntryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGInboxMessageEntryWidget(Z_Construct_UClass_UUMGInboxMessageEntryWidget, &UUMGInboxMessageEntryWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGInboxMessageEntryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGInboxMessageEntryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
