// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBloodStoreSubMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBloodStoreSubMenu() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreSubMenu_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreSubMenu();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBloodStoreTimer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBloodStoreSubMenu::execBroadcastCharacterRoleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastCharacterRoleButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBloodStoreSubMenu::execBroadcastExpiredBloodWeb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastExpiredBloodWeb();
		P_NATIVE_END;
	}
	static FName NAME_UUMGBloodStoreSubMenu_SetFaction = FName(TEXT("SetFaction"));
	void UUMGBloodStoreSubMenu::SetFaction(bool isKiller)
	{
		UMGBloodStoreSubMenu_eventSetFaction_Parms Parms;
		Parms.isKiller=isKiller ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGBloodStoreSubMenu_SetFaction),&Parms);
	}
	void UUMGBloodStoreSubMenu::StaticRegisterNativesUUMGBloodStoreSubMenu()
	{
		UClass* Class = UUMGBloodStoreSubMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastCharacterRoleButtonClicked", &UUMGBloodStoreSubMenu::execBroadcastCharacterRoleButtonClicked },
			{ "BroadcastExpiredBloodWeb", &UUMGBloodStoreSubMenu::execBroadcastExpiredBloodWeb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreSubMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreSubMenu, nullptr, "BroadcastCharacterRoleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreSubMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreSubMenu, nullptr, "BroadcastExpiredBloodWeb", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics
	{
		static void NewProp_isKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::NewProp_isKiller_SetBit(void* Obj)
	{
		((UMGBloodStoreSubMenu_eventSetFaction_Parms*)Obj)->isKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::NewProp_isKiller = { "isKiller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGBloodStoreSubMenu_eventSetFaction_Parms), &Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::NewProp_isKiller_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::NewProp_isKiller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBloodStoreSubMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBloodStoreSubMenu, nullptr, "SetFaction", nullptr, nullptr, sizeof(UMGBloodStoreSubMenu_eventSetFaction_Parms), Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBloodStoreSubMenu_NoRegister()
	{
		return UUMGBloodStoreSubMenu::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurvivorTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastCharacterRoleButtonClicked, "BroadcastCharacterRoleButtonClicked" }, // 1905448815
		{ &Z_Construct_UFunction_UUMGBloodStoreSubMenu_BroadcastExpiredBloodWeb, "BroadcastExpiredBloodWeb" }, // 3390389574
		{ &Z_Construct_UFunction_UUMGBloodStoreSubMenu_SetFaction, "SetFaction" }, // 684999264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBloodStoreSubMenu.h" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreSubMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_KillerTimer_MetaData[] = {
		{ "Category", "UMGBloodStoreSubMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreSubMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_KillerTimer = { "KillerTimer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreSubMenu, KillerTimer), Z_Construct_UClass_UUMGBloodStoreTimer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_KillerTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_KillerTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_SurvivorTimer_MetaData[] = {
		{ "Category", "UMGBloodStoreSubMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBloodStoreSubMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_SurvivorTimer = { "SurvivorTimer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBloodStoreSubMenu, SurvivorTimer), Z_Construct_UClass_UUMGBloodStoreTimer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_SurvivorTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_SurvivorTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_KillerTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::NewProp_SurvivorTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBloodStoreSubMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::ClassParams = {
		&UUMGBloodStoreSubMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBloodStoreSubMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBloodStoreSubMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBloodStoreSubMenu, 3376334659);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBloodStoreSubMenu>()
	{
		return UUMGBloodStoreSubMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBloodStoreSubMenu(Z_Construct_UClass_UUMGBloodStoreSubMenu, &UUMGBloodStoreSubMenu::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBloodStoreSubMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBloodStoreSubMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
