// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaTutorialStateMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaTutorialStateMachine() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialStateMachine_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialStateMachine();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStateMachine();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaTutorialStateMachine::execOnBlockingNotificationDismissed)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_blockingNotificationID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBlockingNotificationDismissed(Z_Param_blockingNotificationID);
		P_NATIVE_END;
	}
	void UAtlantaTutorialStateMachine::StaticRegisterNativesUAtlantaTutorialStateMachine()
	{
		UClass* Class = UAtlantaTutorialStateMachine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBlockingNotificationDismissed", &UAtlantaTutorialStateMachine::execOnBlockingNotificationDismissed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics
	{
		struct AtlantaTutorialStateMachine_eventOnBlockingNotificationDismissed_Parms
		{
			FName blockingNotificationID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_blockingNotificationID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::NewProp_blockingNotificationID = { "blockingNotificationID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaTutorialStateMachine_eventOnBlockingNotificationDismissed_Parms, blockingNotificationID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::NewProp_blockingNotificationID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaTutorialStateMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaTutorialStateMachine, nullptr, "OnBlockingNotificationDismissed", nullptr, nullptr, sizeof(AtlantaTutorialStateMachine_eventOnBlockingNotificationDismissed_Parms), Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaTutorialStateMachine_NoRegister()
	{
		return UAtlantaTutorialStateMachine::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateMachine,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaTutorialStateMachine_OnBlockingNotificationDismissed, "OnBlockingNotificationDismissed" }, // 2595919884
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaTutorialStateMachine.h" },
		{ "ModuleRelativePath", "Public/AtlantaTutorialStateMachine.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaTutorialStateMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::ClassParams = {
		&UAtlantaTutorialStateMachine::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaTutorialStateMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaTutorialStateMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaTutorialStateMachine, 281528193);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaTutorialStateMachine>()
	{
		return UAtlantaTutorialStateMachine::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaTutorialStateMachine(Z_Construct_UClass_UAtlantaTutorialStateMachine, &UAtlantaTutorialStateMachine::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaTutorialStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaTutorialStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
