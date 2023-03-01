// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TutorialsUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialsUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialsUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATutorialsUtilities();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "TutorialsUtilitiesOnTutorialUIReady__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATutorialsUtilities::execDestroyAI)
	{
		P_GET_OBJECT(AAIController,Z_Param_aiController);
		P_FINISH;
		P_NATIVE_BEGIN;
		ATutorialsUtilities::DestroyAI(Z_Param_aiController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialsUtilities::execGetTutorialsUtilities)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATutorialsUtilities**)Z_Param__Result=ATutorialsUtilities::GetTutorialsUtilities(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialsUtilities::execTriggerTutorialHudFadeIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTutorialHudFadeIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATutorialsUtilities::execTriggerTutorialHudFadeOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTutorialHudFadeOut();
		P_NATIVE_END;
	}
	void ATutorialsUtilities::StaticRegisterNativesATutorialsUtilities()
	{
		UClass* Class = ATutorialsUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyAI", &ATutorialsUtilities::execDestroyAI },
			{ "GetTutorialsUtilities", &ATutorialsUtilities::execGetTutorialsUtilities },
			{ "TriggerTutorialHudFadeIn", &ATutorialsUtilities::execTriggerTutorialHudFadeIn },
			{ "TriggerTutorialHudFadeOut", &ATutorialsUtilities::execTriggerTutorialHudFadeOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics
	{
		struct TutorialsUtilities_eventDestroyAI_Parms
		{
			AAIController* aiController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aiController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::NewProp_aiController = { "aiController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialsUtilities_eventDestroyAI_Parms, aiController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::NewProp_aiController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialsUtilities, nullptr, "DestroyAI", nullptr, nullptr, sizeof(TutorialsUtilities_eventDestroyAI_Parms), Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialsUtilities_DestroyAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialsUtilities_DestroyAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics
	{
		struct TutorialsUtilities_eventGetTutorialsUtilities_Parms
		{
			UObject* WorldContextObject;
			ATutorialsUtilities* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialsUtilities_eventGetTutorialsUtilities_Parms, ReturnValue), Z_Construct_UClass_ATutorialsUtilities_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialsUtilities_eventGetTutorialsUtilities_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialsUtilities, nullptr, "GetTutorialsUtilities", nullptr, nullptr, sizeof(TutorialsUtilities_eventGetTutorialsUtilities_Parms), Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialsUtilities, nullptr, "TriggerTutorialHudFadeIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialsUtilities, nullptr, "TriggerTutorialHudFadeOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATutorialsUtilities_NoRegister()
	{
		return ATutorialsUtilities::StaticClass();
	}
	struct Z_Construct_UClass_ATutorialsUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTutorialUIReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTutorialUIReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATutorialsUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATutorialsUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialsUtilities_DestroyAI, "DestroyAI" }, // 594334400
		{ &Z_Construct_UFunction_ATutorialsUtilities_GetTutorialsUtilities, "GetTutorialsUtilities" }, // 1918845951
		{ &Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeIn, "TriggerTutorialHudFadeIn" }, // 1960496019
		{ &Z_Construct_UFunction_ATutorialsUtilities_TriggerTutorialHudFadeOut, "TriggerTutorialHudFadeOut" }, // 2123954907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialsUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TutorialsUtilities.h" },
		{ "ModuleRelativePath", "Public/TutorialsUtilities.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATutorialsUtilities_Statics::NewProp_OnTutorialUIReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/TutorialsUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATutorialsUtilities_Statics::NewProp_OnTutorialUIReady = { "OnTutorialUIReady", nullptr, (EPropertyFlags)0x0040000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATutorialsUtilities, OnTutorialUIReady), Z_Construct_UDelegateFunction_DeadByDaylight_TutorialsUtilitiesOnTutorialUIReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATutorialsUtilities_Statics::NewProp_OnTutorialUIReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialsUtilities_Statics::NewProp_OnTutorialUIReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorialsUtilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialsUtilities_Statics::NewProp_OnTutorialUIReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATutorialsUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialsUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATutorialsUtilities_Statics::ClassParams = {
		&ATutorialsUtilities::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATutorialsUtilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialsUtilities_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATutorialsUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialsUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATutorialsUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATutorialsUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATutorialsUtilities, 1301340301);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ATutorialsUtilities>()
	{
		return ATutorialsUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATutorialsUtilities(Z_Construct_UClass_ATutorialsUtilities, &ATutorialsUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ATutorialsUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialsUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
