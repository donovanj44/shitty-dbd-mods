// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaPartyFlowUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPartyFlowUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPartyFlowUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaPartyFlowUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaPartyFlowUtilities::execIsCurrentPlayerAloneInParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaPartyFlowUtilities::IsCurrentPlayerAloneInParty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaPartyFlowUtilities::execIsCurrentPlayerInParty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaPartyFlowUtilities::IsCurrentPlayerInParty();
		P_NATIVE_END;
	}
	void UAtlantaPartyFlowUtilities::StaticRegisterNativesUAtlantaPartyFlowUtilities()
	{
		UClass* Class = UAtlantaPartyFlowUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCurrentPlayerAloneInParty", &UAtlantaPartyFlowUtilities::execIsCurrentPlayerAloneInParty },
			{ "IsCurrentPlayerInParty", &UAtlantaPartyFlowUtilities::execIsCurrentPlayerInParty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics
	{
		struct AtlantaPartyFlowUtilities_eventIsCurrentPlayerAloneInParty_Parms
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
	void Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaPartyFlowUtilities_eventIsCurrentPlayerAloneInParty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaPartyFlowUtilities_eventIsCurrentPlayerAloneInParty_Parms), &Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyFlowUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPartyFlowUtilities, nullptr, "IsCurrentPlayerAloneInParty", nullptr, nullptr, sizeof(AtlantaPartyFlowUtilities_eventIsCurrentPlayerAloneInParty_Parms), Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics
	{
		struct AtlantaPartyFlowUtilities_eventIsCurrentPlayerInParty_Parms
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
	void Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaPartyFlowUtilities_eventIsCurrentPlayerInParty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaPartyFlowUtilities_eventIsCurrentPlayerInParty_Parms), &Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPartyFlowUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaPartyFlowUtilities, nullptr, "IsCurrentPlayerInParty", nullptr, nullptr, sizeof(AtlantaPartyFlowUtilities_eventIsCurrentPlayerInParty_Parms), Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaPartyFlowUtilities_NoRegister()
	{
		return UAtlantaPartyFlowUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerAloneInParty, "IsCurrentPlayerAloneInParty" }, // 1173885733
		{ &Z_Construct_UFunction_UAtlantaPartyFlowUtilities_IsCurrentPlayerInParty, "IsCurrentPlayerInParty" }, // 2767475163
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaPartyFlowUtilities.h" },
		{ "ModuleRelativePath", "Public/AtlantaPartyFlowUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaPartyFlowUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::ClassParams = {
		&UAtlantaPartyFlowUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaPartyFlowUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaPartyFlowUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaPartyFlowUtilities, 3511521748);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaPartyFlowUtilities>()
	{
		return UAtlantaPartyFlowUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaPartyFlowUtilities(Z_Construct_UClass_UAtlantaPartyFlowUtilities, &UAtlantaPartyFlowUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaPartyFlowUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaPartyFlowUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
