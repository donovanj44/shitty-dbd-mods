// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTooltipManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTooltipManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTooltipManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTooltipManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCloseTooltipWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaTooltipManager::execTryCloseActiveTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryCloseActiveTooltip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaTooltipManager::execTryCloseActiveTooltipWithWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryCloseActiveTooltipWithWidget();
		P_NATIVE_END;
	}
	void UAtlantaTooltipManager::StaticRegisterNativesUAtlantaTooltipManager()
	{
		UClass* Class = UAtlantaTooltipManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryCloseActiveTooltip", &UAtlantaTooltipManager::execTryCloseActiveTooltip },
			{ "TryCloseActiveTooltipWithWidget", &UAtlantaTooltipManager::execTryCloseActiveTooltipWithWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics
	{
		struct AtlantaTooltipManager_eventTryCloseActiveTooltip_Parms
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
	void Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaTooltipManager_eventTryCloseActiveTooltip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaTooltipManager_eventTryCloseActiveTooltip_Parms), &Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaTooltipManager, nullptr, "TryCloseActiveTooltip", nullptr, nullptr, sizeof(AtlantaTooltipManager_eventTryCloseActiveTooltip_Parms), Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaTooltipManager, nullptr, "TryCloseActiveTooltipWithWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaTooltipManager_NoRegister()
	{
		return UAtlantaTooltipManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaTooltipManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__closeTooltipWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__closeTooltipWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeTooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaTooltipManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaTooltipManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltip, "TryCloseActiveTooltip" }, // 853269789
		{ &Z_Construct_UFunction_UAtlantaTooltipManager_TryCloseActiveTooltipWithWidget, "TryCloseActiveTooltipWithWidget" }, // 3786371095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaTooltipManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaTooltipManager.h" },
		{ "ModuleRelativePath", "Public/AtlantaTooltipManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__closeTooltipWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__closeTooltipWidget = { "_closeTooltipWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaTooltipManager, _closeTooltipWidget), Z_Construct_UClass_UUMGCloseTooltipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__closeTooltipWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__closeTooltipWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__activeTooltip_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__activeTooltip = { "_activeTooltip", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtlantaTooltipManager, _activeTooltip), Z_Construct_UClass_UBaseTooltipWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__activeTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__activeTooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtlantaTooltipManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__closeTooltipWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtlantaTooltipManager_Statics::NewProp__activeTooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaTooltipManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaTooltipManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaTooltipManager_Statics::ClassParams = {
		&UAtlantaTooltipManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtlantaTooltipManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTooltipManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaTooltipManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTooltipManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaTooltipManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaTooltipManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaTooltipManager, 292476150);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaTooltipManager>()
	{
		return UAtlantaTooltipManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaTooltipManager(Z_Construct_UClass_UAtlantaTooltipManager, &UAtlantaTooltipManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaTooltipManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaTooltipManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
