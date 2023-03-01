// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FriendSearchPopupScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendSearchPopupScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFriendSearchPopupScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFriendSearchPopupScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGenericPopupScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UFriendSearchPopupScreen::execOnAcceptFriendInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendKrakenID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAcceptFriendInvite(Z_Param_friendKrakenID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendSearchPopupScreen::execOnFriendSearchStart)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFriendSearchStart(Z_Param_searchText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendSearchPopupScreen::execOnInviteFriend)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendKrakenID);
		P_GET_UBOOL(Z_Param_isOffNetwork);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInviteFriend(Z_Param_friendKrakenID,Z_Param_isOffNetwork);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriendSearchPopupScreen::execOnUnblockPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendKrakenID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnblockPlayer(Z_Param_friendKrakenID);
		P_NATIVE_END;
	}
	void UFriendSearchPopupScreen::StaticRegisterNativesUFriendSearchPopupScreen()
	{
		UClass* Class = UFriendSearchPopupScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAcceptFriendInvite", &UFriendSearchPopupScreen::execOnAcceptFriendInvite },
			{ "OnFriendSearchStart", &UFriendSearchPopupScreen::execOnFriendSearchStart },
			{ "OnInviteFriend", &UFriendSearchPopupScreen::execOnInviteFriend },
			{ "OnUnblockPlayer", &UFriendSearchPopupScreen::execOnUnblockPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics
	{
		struct FriendSearchPopupScreen_eventOnAcceptFriendInvite_Parms
		{
			FString friendKrakenID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendKrakenID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendKrakenID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::NewProp_friendKrakenID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::NewProp_friendKrakenID = { "friendKrakenID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendSearchPopupScreen_eventOnAcceptFriendInvite_Parms, friendKrakenID), METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::NewProp_friendKrakenID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::NewProp_friendKrakenID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::NewProp_friendKrakenID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendSearchPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendSearchPopupScreen, nullptr, "OnAcceptFriendInvite", nullptr, nullptr, sizeof(FriendSearchPopupScreen_eventOnAcceptFriendInvite_Parms), Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics
	{
		struct FriendSearchPopupScreen_eventOnFriendSearchStart_Parms
		{
			FString searchText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_searchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::NewProp_searchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendSearchPopupScreen_eventOnFriendSearchStart_Parms, searchText), METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::NewProp_searchText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::NewProp_searchText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::NewProp_searchText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendSearchPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendSearchPopupScreen, nullptr, "OnFriendSearchStart", nullptr, nullptr, sizeof(FriendSearchPopupScreen_eventOnFriendSearchStart_Parms), Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics
	{
		struct FriendSearchPopupScreen_eventOnInviteFriend_Parms
		{
			FString friendKrakenID;
			bool isOffNetwork;
		};
		static void NewProp_isOffNetwork_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOffNetwork;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendKrakenID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendKrakenID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_isOffNetwork_SetBit(void* Obj)
	{
		((FriendSearchPopupScreen_eventOnInviteFriend_Parms*)Obj)->isOffNetwork = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_isOffNetwork = { "isOffNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FriendSearchPopupScreen_eventOnInviteFriend_Parms), &Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_isOffNetwork_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_friendKrakenID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_friendKrakenID = { "friendKrakenID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendSearchPopupScreen_eventOnInviteFriend_Parms, friendKrakenID), METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_friendKrakenID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_friendKrakenID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_isOffNetwork,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::NewProp_friendKrakenID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendSearchPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendSearchPopupScreen, nullptr, "OnInviteFriend", nullptr, nullptr, sizeof(FriendSearchPopupScreen_eventOnInviteFriend_Parms), Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics
	{
		struct FriendSearchPopupScreen_eventOnUnblockPlayer_Parms
		{
			FString friendKrakenID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendKrakenID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendKrakenID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::NewProp_friendKrakenID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::NewProp_friendKrakenID = { "friendKrakenID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FriendSearchPopupScreen_eventOnUnblockPlayer_Parms, friendKrakenID), METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::NewProp_friendKrakenID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::NewProp_friendKrakenID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::NewProp_friendKrakenID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendSearchPopupScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriendSearchPopupScreen, nullptr, "OnUnblockPlayer", nullptr, nullptr, sizeof(FriendSearchPopupScreen_eventOnUnblockPlayer_Parms), Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFriendSearchPopupScreen_NoRegister()
	{
		return UFriendSearchPopupScreen::StaticClass();
	}
	struct Z_Construct_UClass_UFriendSearchPopupScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriendSearchPopupScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenericPopupScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFriendSearchPopupScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFriendSearchPopupScreen_OnAcceptFriendInvite, "OnAcceptFriendInvite" }, // 359130456
		{ &Z_Construct_UFunction_UFriendSearchPopupScreen_OnFriendSearchStart, "OnFriendSearchStart" }, // 2242165319
		{ &Z_Construct_UFunction_UFriendSearchPopupScreen_OnInviteFriend, "OnInviteFriend" }, // 3315494281
		{ &Z_Construct_UFunction_UFriendSearchPopupScreen_OnUnblockPlayer, "OnUnblockPlayer" }, // 991782001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendSearchPopupScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FriendSearchPopupScreen.h" },
		{ "ModuleRelativePath", "Public/FriendSearchPopupScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriendSearchPopupScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriendSearchPopupScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriendSearchPopupScreen_Statics::ClassParams = {
		&UFriendSearchPopupScreen::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFriendSearchPopupScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendSearchPopupScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriendSearchPopupScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriendSearchPopupScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriendSearchPopupScreen, 1857678538);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFriendSearchPopupScreen>()
	{
		return UFriendSearchPopupScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriendSearchPopupScreen(Z_Construct_UClass_UFriendSearchPopupScreen, &UFriendSearchPopupScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFriendSearchPopupScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriendSearchPopupScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
