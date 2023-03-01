// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeBaseState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeBaseState() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeBaseState_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeBaseState();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFSM_State();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25Gateway_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Power_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25ChainStrikeBaseState::execGetK25Gateway)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25Gateway**)Z_Param__Result=P_THIS->GetK25Gateway();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeBaseState::execGetK25Power)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25Power**)Z_Param__Result=P_THIS->GetK25Power();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeBaseState::execGetPlayerOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetPlayerOwner();
		P_NATIVE_END;
	}
	void UK25ChainStrikeBaseState::StaticRegisterNativesUK25ChainStrikeBaseState()
	{
		UClass* Class = UK25ChainStrikeBaseState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetK25Gateway", &UK25ChainStrikeBaseState::execGetK25Gateway },
			{ "GetK25Power", &UK25ChainStrikeBaseState::execGetK25Power },
			{ "GetPlayerOwner", &UK25ChainStrikeBaseState::execGetPlayerOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics
	{
		struct K25ChainStrikeBaseState_eventGetK25Gateway_Parms
		{
			AK25Gateway* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeBaseState_eventGetK25Gateway_Parms, ReturnValue), Z_Construct_UClass_AK25Gateway_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeBaseState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeBaseState, nullptr, "GetK25Gateway", nullptr, nullptr, sizeof(K25ChainStrikeBaseState_eventGetK25Gateway_Parms), Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics
	{
		struct K25ChainStrikeBaseState_eventGetK25Power_Parms
		{
			AK25Power* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeBaseState_eventGetK25Power_Parms, ReturnValue), Z_Construct_UClass_AK25Power_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeBaseState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeBaseState, nullptr, "GetK25Power", nullptr, nullptr, sizeof(K25ChainStrikeBaseState_eventGetK25Power_Parms), Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics
	{
		struct K25ChainStrikeBaseState_eventGetPlayerOwner_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeBaseState_eventGetPlayerOwner_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeBaseState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeBaseState, nullptr, "GetPlayerOwner", nullptr, nullptr, sizeof(K25ChainStrikeBaseState_eventGetPlayerOwner_Parms), Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeBaseState_NoRegister()
	{
		return UK25ChainStrikeBaseState::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeBaseState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondaryInteractionIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__secondaryInteractionIDs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__secondaryInteractionIDs_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFSM_State,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Gateway, "GetK25Gateway" }, // 3546897529
		{ &Z_Construct_UFunction_UK25ChainStrikeBaseState_GetK25Power, "GetK25Power" }, // 905520325
		{ &Z_Construct_UFunction_UK25ChainStrikeBaseState_GetPlayerOwner, "GetPlayerOwner" }, // 2146879652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K25ChainStrikeBaseState.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeBaseState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::NewProp__secondaryInteractionIDs_MetaData[] = {
		{ "Category", "K25ChainStrikeBaseState" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeBaseState.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::NewProp__secondaryInteractionIDs = { "_secondaryInteractionIDs", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeBaseState, _secondaryInteractionIDs), METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::NewProp__secondaryInteractionIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::NewProp__secondaryInteractionIDs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::NewProp__secondaryInteractionIDs_ElementProp = { "_secondaryInteractionIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::NewProp__secondaryInteractionIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::NewProp__secondaryInteractionIDs_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeBaseState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::ClassParams = {
		&UK25ChainStrikeBaseState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeBaseState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeBaseState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeBaseState, 3427112588);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeBaseState>()
	{
		return UK25ChainStrikeBaseState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeBaseState(Z_Construct_UClass_UK25ChainStrikeBaseState, &UK25ChainStrikeBaseState::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeBaseState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeBaseState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
