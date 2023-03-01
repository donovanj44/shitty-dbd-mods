// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SurvivorAtlantaTutorialLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivorAtlantaTutorialLevel() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASurvivorAtlantaTutorialLevel();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaTutorialLevel();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDAIPlayerController_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASurvivorAtlantaTutorialLevel::execGetCamperPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACamperPlayer**)Z_Param__Result=P_THIS->GetCamperPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivorAtlantaTutorialLevel::execGetSlasherAIPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDAIPlayerController**)Z_Param__Result=P_THIS->GetSlasherAIPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivorAtlantaTutorialLevel::execGetSlasherPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASlasherPlayer**)Z_Param__Result=P_THIS->GetSlasherPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASurvivorAtlantaTutorialLevel::execSetSlasherPlayer)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_slasherPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlasherPlayer(Z_Param_slasherPlayer);
		P_NATIVE_END;
	}
	void ASurvivorAtlantaTutorialLevel::StaticRegisterNativesASurvivorAtlantaTutorialLevel()
	{
		UClass* Class = ASurvivorAtlantaTutorialLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCamperPlayer", &ASurvivorAtlantaTutorialLevel::execGetCamperPlayer },
			{ "GetSlasherAIPlayerController", &ASurvivorAtlantaTutorialLevel::execGetSlasherAIPlayerController },
			{ "GetSlasherPlayer", &ASurvivorAtlantaTutorialLevel::execGetSlasherPlayer },
			{ "SetSlasherPlayer", &ASurvivorAtlantaTutorialLevel::execSetSlasherPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics
	{
		struct SurvivorAtlantaTutorialLevel_eventGetCamperPlayer_Parms
		{
			ACamperPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAtlantaTutorialLevel_eventGetCamperPlayer_Parms, ReturnValue), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorAtlantaTutorialLevel, nullptr, "GetCamperPlayer", nullptr, nullptr, sizeof(SurvivorAtlantaTutorialLevel_eventGetCamperPlayer_Parms), Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics
	{
		struct SurvivorAtlantaTutorialLevel_eventGetSlasherAIPlayerController_Parms
		{
			ADBDAIPlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAtlantaTutorialLevel_eventGetSlasherAIPlayerController_Parms, ReturnValue), Z_Construct_UClass_ADBDAIPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorAtlantaTutorialLevel, nullptr, "GetSlasherAIPlayerController", nullptr, nullptr, sizeof(SurvivorAtlantaTutorialLevel_eventGetSlasherAIPlayerController_Parms), Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics
	{
		struct SurvivorAtlantaTutorialLevel_eventGetSlasherPlayer_Parms
		{
			ASlasherPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAtlantaTutorialLevel_eventGetSlasherPlayer_Parms, ReturnValue), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorAtlantaTutorialLevel, nullptr, "GetSlasherPlayer", nullptr, nullptr, sizeof(SurvivorAtlantaTutorialLevel_eventGetSlasherPlayer_Parms), Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics
	{
		struct SurvivorAtlantaTutorialLevel_eventSetSlasherPlayer_Parms
		{
			ASlasherPlayer* slasherPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasherPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::NewProp_slasherPlayer = { "slasherPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivorAtlantaTutorialLevel_eventSetSlasherPlayer_Parms, slasherPlayer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::NewProp_slasherPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SurvivorAtlantaTutorialLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivorAtlantaTutorialLevel, nullptr, "SetSlasherPlayer", nullptr, nullptr, sizeof(SurvivorAtlantaTutorialLevel_eventSetSlasherPlayer_Parms), Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_NoRegister()
	{
		return ASurvivorAtlantaTutorialLevel::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAtlantaTutorialLevel,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetCamperPlayer, "GetCamperPlayer" }, // 933243629
		{ &Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherAIPlayerController, "GetSlasherAIPlayerController" }, // 2957779275
		{ &Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_GetSlasherPlayer, "GetSlasherPlayer" }, // 850106670
		{ &Z_Construct_UFunction_ASurvivorAtlantaTutorialLevel_SetSlasherPlayer, "SetSlasherPlayer" }, // 3363938831
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SurvivorAtlantaTutorialLevel.h" },
		{ "ModuleRelativePath", "Public/SurvivorAtlantaTutorialLevel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivorAtlantaTutorialLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::ClassParams = {
		&ASurvivorAtlantaTutorialLevel::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivorAtlantaTutorialLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASurvivorAtlantaTutorialLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASurvivorAtlantaTutorialLevel, 1833142956);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ASurvivorAtlantaTutorialLevel>()
	{
		return ASurvivorAtlantaTutorialLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASurvivorAtlantaTutorialLevel(Z_Construct_UClass_ASurvivorAtlantaTutorialLevel, &ASurvivorAtlantaTutorialLevel::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ASurvivorAtlantaTutorialLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivorAtlantaTutorialLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
