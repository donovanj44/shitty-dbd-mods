// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaPartyFlowHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPartyFlowHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPartyFlowHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPartyFlowHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaPartyFlowHandler::execDisplayPartyFlowHandlerInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayPartyFlowHandlerInfo();
		P_NATIVE_END;
	}
	void UAtlantaPartyFlowHandler::StaticRegisterNativesUAtlantaPartyFlowHandler()
	{
		UClass* Class = UAtlantaPartyFlowHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayPartyFlowHandlerInfo", &UAtlantaPartyFlowHandler::execDisplayPartyFlowHandlerInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyFlowHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPartyFlowHandler, nullptr, "DisplayPartyFlowHandlerInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaPartyFlowHandler_NoRegister()
	{
		return UAtlantaPartyFlowHandler::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaPartyFlowHandler_DisplayPartyFlowHandlerInfo, "DisplayPartyFlowHandlerInfo" }, // 1251264298
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaPartyFlowHandler.h" },
		{ "ModuleRelativePath", "Public/AtlantaPartyFlowHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaPartyFlowHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::ClassParams = {
		&UAtlantaPartyFlowHandler::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaPartyFlowHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaPartyFlowHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaPartyFlowHandler, 2552575310);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaPartyFlowHandler>()
	{
		return UAtlantaPartyFlowHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaPartyFlowHandler(Z_Construct_UClass_UAtlantaPartyFlowHandler, &UAtlantaPartyFlowHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaPartyFlowHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaPartyFlowHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
