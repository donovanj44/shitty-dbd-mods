// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ChatManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AChatManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AChatManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChatManager::execMulticast_DisplayMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_chatIdentifier);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_mirrorsId);
		P_GET_PROPERTY(FStrProperty,Z_Param_msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DisplayMessage_Implementation(Z_Param_chatIdentifier,Z_Param_playerIndex,Z_Param_playerName,Z_Param_mirrorsId,Z_Param_msg);
		P_NATIVE_END;
	}
	static FName NAME_AChatManager_Multicast_DisplayMessage = FName(TEXT("Multicast_DisplayMessage"));
	void AChatManager::Multicast_DisplayMessage(const FString& chatIdentifier, int32 playerIndex, const FString& playerName, const FString& mirrorsId, const FString& msg)
	{
		ChatManager_eventMulticast_DisplayMessage_Parms Parms;
		Parms.chatIdentifier=chatIdentifier;
		Parms.playerIndex=playerIndex;
		Parms.playerName=playerName;
		Parms.mirrorsId=mirrorsId;
		Parms.msg=msg;
		ProcessEvent(FindFunctionChecked(NAME_AChatManager_Multicast_DisplayMessage),&Parms);
	}
	void AChatManager::StaticRegisterNativesAChatManager()
	{
		UClass* Class = AChatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_DisplayMessage", &AChatManager::execMulticast_DisplayMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chatIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_chatIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChatManager_eventMulticast_DisplayMessage_Parms, msg), METADATA_PARAMS(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_msg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_mirrorsId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_mirrorsId = { "mirrorsId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChatManager_eventMulticast_DisplayMessage_Parms, mirrorsId), METADATA_PARAMS(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_mirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_mirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_playerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChatManager_eventMulticast_DisplayMessage_Parms, playerName), METADATA_PARAMS(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_playerName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_playerIndex = { "playerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChatManager_eventMulticast_DisplayMessage_Parms, playerIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_chatIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_chatIdentifier = { "chatIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ChatManager_eventMulticast_DisplayMessage_Parms, chatIdentifier), METADATA_PARAMS(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_chatIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_chatIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_msg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_mirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_playerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_playerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::NewProp_chatIdentifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChatManager, nullptr, "Multicast_DisplayMessage", nullptr, nullptr, sizeof(ChatManager_eventMulticast_DisplayMessage_Parms), Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChatManager_NoRegister()
	{
		return AChatManager::StaticClass();
	}
	struct Z_Construct_UClass_AChatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChatManager_Multicast_DisplayMessage, "Multicast_DisplayMessage" }, // 2946488237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChatManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChatManager.h" },
		{ "ModuleRelativePath", "Public/ChatManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChatManager_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChatManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChatManager_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChatManager, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChatManager_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChatManager_Statics::NewProp__gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChatManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChatManager_Statics::NewProp__gameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChatManager_Statics::ClassParams = {
		&AChatManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChatManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChatManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChatManager, 2188165217);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AChatManager>()
	{
		return AChatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChatManager(Z_Construct_UClass_AChatManager, &AChatManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AChatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
