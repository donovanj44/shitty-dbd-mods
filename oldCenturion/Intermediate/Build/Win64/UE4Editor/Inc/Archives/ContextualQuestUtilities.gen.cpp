// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/ContextualQuestUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualQuestUtilities() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UContextualQuestUtilities_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UContextualQuestUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UContextualQuestUtilities::execPlayerHasAssociatedQuest)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FNameProperty,Z_Param_specialBehaviourId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UContextualQuestUtilities::PlayerHasAssociatedQuest(Z_Param_player,Z_Param_specialBehaviourId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualQuestUtilities::execPlayerHasToCompleteAssociatedQuest)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_GET_PROPERTY(FNameProperty,Z_Param_specialBehaviourId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UContextualQuestUtilities::PlayerHasToCompleteAssociatedQuest(Z_Param_player,Z_Param_specialBehaviourId);
		P_NATIVE_END;
	}
	void UContextualQuestUtilities::StaticRegisterNativesUContextualQuestUtilities()
	{
		UClass* Class = UContextualQuestUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerHasAssociatedQuest", &UContextualQuestUtilities::execPlayerHasAssociatedQuest },
			{ "PlayerHasToCompleteAssociatedQuest", &UContextualQuestUtilities::execPlayerHasToCompleteAssociatedQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics
	{
		struct ContextualQuestUtilities_eventPlayerHasAssociatedQuest_Parms
		{
			const ADBDPlayer* player;
			FName specialBehaviourId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specialBehaviourId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_specialBehaviourId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualQuestUtilities_eventPlayerHasAssociatedQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ContextualQuestUtilities_eventPlayerHasAssociatedQuest_Parms), &Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_specialBehaviourId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_specialBehaviourId = { "specialBehaviourId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContextualQuestUtilities_eventPlayerHasAssociatedQuest_Parms, specialBehaviourId), METADATA_PARAMS(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_specialBehaviourId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_specialBehaviourId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContextualQuestUtilities_eventPlayerHasAssociatedQuest_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_specialBehaviourId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualQuestUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualQuestUtilities, nullptr, "PlayerHasAssociatedQuest", nullptr, nullptr, sizeof(ContextualQuestUtilities_eventPlayerHasAssociatedQuest_Parms), Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics
	{
		struct ContextualQuestUtilities_eventPlayerHasToCompleteAssociatedQuest_Parms
		{
			const ADBDPlayer* player;
			FName specialBehaviourId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specialBehaviourId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_specialBehaviourId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualQuestUtilities_eventPlayerHasToCompleteAssociatedQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ContextualQuestUtilities_eventPlayerHasToCompleteAssociatedQuest_Parms), &Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_specialBehaviourId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_specialBehaviourId = { "specialBehaviourId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContextualQuestUtilities_eventPlayerHasToCompleteAssociatedQuest_Parms, specialBehaviourId), METADATA_PARAMS(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_specialBehaviourId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_specialBehaviourId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContextualQuestUtilities_eventPlayerHasToCompleteAssociatedQuest_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_specialBehaviourId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualQuestUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualQuestUtilities, nullptr, "PlayerHasToCompleteAssociatedQuest", nullptr, nullptr, sizeof(ContextualQuestUtilities_eventPlayerHasToCompleteAssociatedQuest_Parms), Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UContextualQuestUtilities_NoRegister()
	{
		return UContextualQuestUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UContextualQuestUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualQuestUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualQuestUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasAssociatedQuest, "PlayerHasAssociatedQuest" }, // 3812717051
		{ &Z_Construct_UFunction_UContextualQuestUtilities_PlayerHasToCompleteAssociatedQuest, "PlayerHasToCompleteAssociatedQuest" }, // 2991783417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualQuestUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ContextualQuestUtilities.h" },
		{ "ModuleRelativePath", "Public/ContextualQuestUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualQuestUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualQuestUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContextualQuestUtilities_Statics::ClassParams = {
		&UContextualQuestUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualQuestUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualQuestUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualQuestUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContextualQuestUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContextualQuestUtilities, 4009632463);
	template<> ARCHIVES_API UClass* StaticClass<UContextualQuestUtilities>()
	{
		return UContextualQuestUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContextualQuestUtilities(Z_Construct_UClass_UContextualQuestUtilities, &UContextualQuestUtilities::StaticClass, TEXT("/Script/Archives"), TEXT("UContextualQuestUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualQuestUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
