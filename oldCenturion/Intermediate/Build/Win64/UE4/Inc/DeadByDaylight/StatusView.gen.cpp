// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StatusView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusView() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStatusView_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AStatusView();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusViewSource();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AStatusView::execFireNotification)
	{
		P_GET_STRUCT(FStatusViewSource,Z_Param_statusViewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireNotification(Z_Param_statusViewSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStatusView::execResetView)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_dbdPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetView_Implementation(Z_Param_dbdPlayer);
		P_NATIVE_END;
	}
	static FName NAME_AStatusView_ResetView = FName(TEXT("ResetView"));
	void AStatusView::ResetView(const ADBDPlayer* dbdPlayer)
	{
		StatusView_eventResetView_Parms Parms;
		Parms.dbdPlayer=dbdPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AStatusView_ResetView),&Parms);
	}
	void AStatusView::StaticRegisterNativesAStatusView()
	{
		UClass* Class = AStatusView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireNotification", &AStatusView::execFireNotification },
			{ "ResetView", &AStatusView::execResetView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStatusView_FireNotification_Statics
	{
		struct StatusView_eventFireNotification_Parms
		{
			FStatusViewSource statusViewSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusViewSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_statusViewSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusView_FireNotification_Statics::NewProp_statusViewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatusView_FireNotification_Statics::NewProp_statusViewSource = { "statusViewSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusView_eventFireNotification_Parms, statusViewSource), Z_Construct_UScriptStruct_FStatusViewSource, METADATA_PARAMS(Z_Construct_UFunction_AStatusView_FireNotification_Statics::NewProp_statusViewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusView_FireNotification_Statics::NewProp_statusViewSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusView_FireNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusView_FireNotification_Statics::NewProp_statusViewSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusView_FireNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusView_FireNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusView, nullptr, "FireNotification", nullptr, nullptr, sizeof(StatusView_eventFireNotification_Parms), Z_Construct_UFunction_AStatusView_FireNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusView_FireNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusView_FireNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusView_FireNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusView_FireNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusView_FireNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatusView_ResetView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dbdPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dbdPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusView_ResetView_Statics::NewProp_dbdPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStatusView_ResetView_Statics::NewProp_dbdPlayer = { "dbdPlayer", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusView_eventResetView_Parms, dbdPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AStatusView_ResetView_Statics::NewProp_dbdPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusView_ResetView_Statics::NewProp_dbdPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatusView_ResetView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatusView_ResetView_Statics::NewProp_dbdPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatusView_ResetView_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatusView_ResetView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatusView, nullptr, "ResetView", nullptr, nullptr, sizeof(StatusView_eventResetView_Parms), Z_Construct_UFunction_AStatusView_ResetView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusView_ResetView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatusView_ResetView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStatusView_ResetView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatusView_ResetView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatusView_ResetView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStatusView_NoRegister()
	{
		return AStatusView::StaticClass();
	}
	struct Z_Construct_UClass_AStatusView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localDBDPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__localDBDPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsClockwiseTimer_MetaData[];
#endif
		static void NewProp_IsClockwiseTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsClockwiseTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentageFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentageFill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatusView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStatusView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStatusView_FireNotification, "FireNotification" }, // 1657555700
		{ &Z_Construct_UFunction_AStatusView_ResetView, "ResetView" }, // 1099269957
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusView_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatusView.h" },
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusView_Statics::NewProp__localDBDPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStatusView_Statics::NewProp__localDBDPlayer = { "_localDBDPlayer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatusView, _localDBDPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStatusView_Statics::NewProp__localDBDPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusView_Statics::NewProp__localDBDPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusView_Statics::NewProp_IsClockwiseTimer_MetaData[] = {
		{ "Category", "StatusView" },
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
	void Z_Construct_UClass_AStatusView_Statics::NewProp_IsClockwiseTimer_SetBit(void* Obj)
	{
		((AStatusView*)Obj)->IsClockwiseTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatusView_Statics::NewProp_IsClockwiseTimer = { "IsClockwiseTimer", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatusView), &Z_Construct_UClass_AStatusView_Statics::NewProp_IsClockwiseTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatusView_Statics::NewProp_IsClockwiseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusView_Statics::NewProp_IsClockwiseTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusView_Statics::NewProp_PercentageFill_MetaData[] = {
		{ "Category", "StatusView" },
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatusView_Statics::NewProp_PercentageFill = { "PercentageFill", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatusView, PercentageFill), METADATA_PARAMS(Z_Construct_UClass_AStatusView_Statics::NewProp_PercentageFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusView_Statics::NewProp_PercentageFill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusView_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "StatusView" },
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStatusView_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatusView, Level), METADATA_PARAMS(Z_Construct_UClass_AStatusView_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusView_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatusView_Statics::NewProp_IsActive_MetaData[] = {
		{ "Category", "StatusView" },
		{ "ModuleRelativePath", "Public/StatusView.h" },
	};
#endif
	void Z_Construct_UClass_AStatusView_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((AStatusView*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatusView_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatusView), &Z_Construct_UClass_AStatusView_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatusView_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusView_Statics::NewProp_IsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatusView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatusView_Statics::NewProp__localDBDPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatusView_Statics::NewProp_IsClockwiseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatusView_Statics::NewProp_PercentageFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatusView_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatusView_Statics::NewProp_IsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatusView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatusView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatusView_Statics::ClassParams = {
		&AStatusView::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStatusView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStatusView_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStatusView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStatusView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatusView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatusView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatusView, 1567941444);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AStatusView>()
	{
		return AStatusView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatusView(Z_Construct_UClass_AStatusView, &AStatusView::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AStatusView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatusView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
