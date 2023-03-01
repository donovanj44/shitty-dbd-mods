// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterSelectSubmenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterSelectSubmenu() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterSelectSubmenu_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterSelectSubmenu();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCharacterSelectSubmenu::execBroadcastInfoButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastInfoButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCharacterSelectSubmenu::execBroadcastRoleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastRoleButtonClicked();
		P_NATIVE_END;
	}
	static FName NAME_UUMGCharacterSelectSubmenu_SetCurrentRole = FName(TEXT("SetCurrentRole"));
	void UUMGCharacterSelectSubmenu::SetCurrentRole(bool isKiller)
	{
		UMGCharacterSelectSubmenu_eventSetCurrentRole_Parms Parms;
		Parms.isKiller=isKiller ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCharacterSelectSubmenu_SetCurrentRole),&Parms);
	}
	static FName NAME_UUMGCharacterSelectSubmenu_SetInInfoPanelMode = FName(TEXT("SetInInfoPanelMode"));
	void UUMGCharacterSelectSubmenu::SetInInfoPanelMode(bool isInInfoPanel)
	{
		UMGCharacterSelectSubmenu_eventSetInInfoPanelMode_Parms Parms;
		Parms.isInInfoPanel=isInInfoPanel ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGCharacterSelectSubmenu_SetInInfoPanelMode),&Parms);
	}
	void UUMGCharacterSelectSubmenu::StaticRegisterNativesUUMGCharacterSelectSubmenu()
	{
		UClass* Class = UUMGCharacterSelectSubmenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastInfoButtonClicked", &UUMGCharacterSelectSubmenu::execBroadcastInfoButtonClicked },
			{ "BroadcastRoleButtonClicked", &UUMGCharacterSelectSubmenu::execBroadcastRoleButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSelectSubmenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSelectSubmenu, nullptr, "BroadcastInfoButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSelectSubmenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSelectSubmenu, nullptr, "BroadcastRoleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics
	{
		static void NewProp_isKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::NewProp_isKiller_SetBit(void* Obj)
	{
		((UMGCharacterSelectSubmenu_eventSetCurrentRole_Parms*)Obj)->isKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::NewProp_isKiller = { "isKiller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGCharacterSelectSubmenu_eventSetCurrentRole_Parms), &Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::NewProp_isKiller_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::NewProp_isKiller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSelectSubmenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSelectSubmenu, nullptr, "SetCurrentRole", nullptr, nullptr, sizeof(UMGCharacterSelectSubmenu_eventSetCurrentRole_Parms), Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics
	{
		static void NewProp_isInInfoPanel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInInfoPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::NewProp_isInInfoPanel_SetBit(void* Obj)
	{
		((UMGCharacterSelectSubmenu_eventSetInInfoPanelMode_Parms*)Obj)->isInInfoPanel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::NewProp_isInInfoPanel = { "isInInfoPanel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGCharacterSelectSubmenu_eventSetInInfoPanelMode_Parms), &Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::NewProp_isInInfoPanel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::NewProp_isInInfoPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterSelectSubmenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterSelectSubmenu, nullptr, "SetInInfoPanelMode", nullptr, nullptr, sizeof(UMGCharacterSelectSubmenu_eventSetInInfoPanelMode_Parms), Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCharacterSelectSubmenu_NoRegister()
	{
		return UUMGCharacterSelectSubmenu::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastInfoButtonClicked, "BroadcastInfoButtonClicked" }, // 1561550744
		{ &Z_Construct_UFunction_UUMGCharacterSelectSubmenu_BroadcastRoleButtonClicked, "BroadcastRoleButtonClicked" }, // 133246299
		{ &Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetCurrentRole, "SetCurrentRole" }, // 820123720
		{ &Z_Construct_UFunction_UUMGCharacterSelectSubmenu_SetInInfoPanelMode, "SetInInfoPanelMode" }, // 1988970820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterSelectSubmenu.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterSelectSubmenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterSelectSubmenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::ClassParams = {
		&UUMGCharacterSelectSubmenu::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterSelectSubmenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterSelectSubmenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterSelectSubmenu, 3185766136);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterSelectSubmenu>()
	{
		return UUMGCharacterSelectSubmenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterSelectSubmenu(Z_Construct_UClass_UUMGCharacterSelectSubmenu, &UUMGCharacterSelectSubmenu::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterSelectSubmenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterSelectSubmenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
