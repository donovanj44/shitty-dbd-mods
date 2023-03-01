// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameplayNotificationManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayNotificationManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayNotificationManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayNotificationManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayNotificationData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayNotificationManager::execFireGameplayNotification)
	{
		P_GET_STRUCT_REF(FGameplayNotificationData,Z_Param_Out_notificationData);
		P_GET_UBOOL(Z_Param_addToHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireGameplayNotification(Z_Param_Out_notificationData,Z_Param_addToHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayNotificationManager::execMulticast_FireGameplayNotification)
	{
		P_GET_OBJECT(UGameplayModifierContainer,Z_Param_modifierContainer);
		P_GET_UBOOL(Z_Param_addToHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_FireGameplayNotification_Implementation(Z_Param_modifierContainer,Z_Param_addToHistory);
		P_NATIVE_END;
	}
	static FName NAME_UGameplayNotificationManager_Multicast_FireGameplayNotification = FName(TEXT("Multicast_FireGameplayNotification"));
	void UGameplayNotificationManager::Multicast_FireGameplayNotification(const UGameplayModifierContainer* modifierContainer, bool addToHistory)
	{
		GameplayNotificationManager_eventMulticast_FireGameplayNotification_Parms Parms;
		Parms.modifierContainer=modifierContainer;
		Parms.addToHistory=addToHistory ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayNotificationManager_Multicast_FireGameplayNotification),&Parms);
	}
	void UGameplayNotificationManager::StaticRegisterNativesUGameplayNotificationManager()
	{
		UClass* Class = UGameplayNotificationManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireGameplayNotification", &UGameplayNotificationManager::execFireGameplayNotification },
			{ "Multicast_FireGameplayNotification", &UGameplayNotificationManager::execMulticast_FireGameplayNotification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics
	{
		struct GameplayNotificationManager_eventFireGameplayNotification_Parms
		{
			FGameplayNotificationData notificationData;
			bool addToHistory;
		};
		static void NewProp_addToHistory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_addToHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notificationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_notificationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_addToHistory_SetBit(void* Obj)
	{
		((GameplayNotificationManager_eventFireGameplayNotification_Parms*)Obj)->addToHistory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_addToHistory = { "addToHistory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayNotificationManager_eventFireGameplayNotification_Parms), &Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_addToHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_notificationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_notificationData = { "notificationData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayNotificationManager_eventFireGameplayNotification_Parms, notificationData), Z_Construct_UScriptStruct_FGameplayNotificationData, METADATA_PARAMS(Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_notificationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_notificationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_addToHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::NewProp_notificationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayNotificationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayNotificationManager, nullptr, "FireGameplayNotification", nullptr, nullptr, sizeof(GameplayNotificationManager_eventFireGameplayNotification_Parms), Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics
	{
		static void NewProp_addToHistory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_addToHistory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_modifierContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_modifierContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_addToHistory_SetBit(void* Obj)
	{
		((GameplayNotificationManager_eventMulticast_FireGameplayNotification_Parms*)Obj)->addToHistory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_addToHistory = { "addToHistory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayNotificationManager_eventMulticast_FireGameplayNotification_Parms), &Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_addToHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_modifierContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_modifierContainer = { "modifierContainer", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayNotificationManager_eventMulticast_FireGameplayNotification_Parms, modifierContainer), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_modifierContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_modifierContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_addToHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::NewProp_modifierContainer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayNotificationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayNotificationManager, nullptr, "Multicast_FireGameplayNotification", nullptr, nullptr, sizeof(GameplayNotificationManager_eventMulticast_FireGameplayNotification_Parms), Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayNotificationManager_NoRegister()
	{
		return UGameplayNotificationManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayNotificationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayNotificationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayNotificationManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayNotificationManager_FireGameplayNotification, "FireGameplayNotification" }, // 3964933002
		{ &Z_Construct_UFunction_UGameplayNotificationManager_Multicast_FireGameplayNotification, "Multicast_FireGameplayNotification" }, // 3635587574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayNotificationManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayNotificationManager.h" },
		{ "ModuleRelativePath", "Public/GameplayNotificationManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayNotificationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayNotificationManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayNotificationManager_Statics::ClassParams = {
		&UGameplayNotificationManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayNotificationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayNotificationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayNotificationManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayNotificationManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayNotificationManager, 602095422);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameplayNotificationManager>()
	{
		return UGameplayNotificationManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayNotificationManager(Z_Construct_UClass_UGameplayNotificationManager, &UGameplayNotificationManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameplayNotificationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayNotificationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
