// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halloween2020/Public/ToxinPlantInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToxinPlantInteractable() {}
// Cross Module References
	HALLOWEEN2020_API UClass* Z_Construct_UClass_AToxinPlantInteractable_NoRegister();
	HALLOWEEN2020_API UClass* Z_Construct_UClass_AToxinPlantInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASpecialBehaviourInteractable();
	UPackage* Z_Construct_UPackage__Script_Halloween2020();
// End Cross Module References
	DEFINE_FUNCTION(AToxinPlantInteractable::execIsToxinPlantComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsToxinPlantComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AToxinPlantInteractable::execSetToxinPlantComplete)
	{
		P_GET_UBOOL(Z_Param_isComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToxinPlantComplete(Z_Param_isComplete);
		P_NATIVE_END;
	}
	static FName NAME_AToxinPlantInteractable_OnSalvageInteractionFinished = FName(TEXT("OnSalvageInteractionFinished"));
	void AToxinPlantInteractable::OnSalvageInteractionFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AToxinPlantInteractable_OnSalvageInteractionFinished),NULL);
	}
	static FName NAME_AToxinPlantInteractable_OnSalvageInteractionStart = FName(TEXT("OnSalvageInteractionStart"));
	void AToxinPlantInteractable::OnSalvageInteractionStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AToxinPlantInteractable_OnSalvageInteractionStart),NULL);
	}
	static FName NAME_AToxinPlantInteractable_OnToxinPlantComplete = FName(TEXT("OnToxinPlantComplete"));
	void AToxinPlantInteractable::OnToxinPlantComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_AToxinPlantInteractable_OnToxinPlantComplete),NULL);
	}
	void AToxinPlantInteractable::StaticRegisterNativesAToxinPlantInteractable()
	{
		UClass* Class = AToxinPlantInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsToxinPlantComplete", &AToxinPlantInteractable::execIsToxinPlantComplete },
			{ "SetToxinPlantComplete", &AToxinPlantInteractable::execSetToxinPlantComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics
	{
		struct ToxinPlantInteractable_eventIsToxinPlantComplete_Parms
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
	void Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ToxinPlantInteractable_eventIsToxinPlantComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ToxinPlantInteractable_eventIsToxinPlantComplete_Parms), &Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToxinPlantInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToxinPlantInteractable, nullptr, "IsToxinPlantComplete", nullptr, nullptr, sizeof(ToxinPlantInteractable_eventIsToxinPlantComplete_Parms), Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToxinPlantInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToxinPlantInteractable, nullptr, "OnSalvageInteractionFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToxinPlantInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToxinPlantInteractable, nullptr, "OnSalvageInteractionStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToxinPlantInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToxinPlantInteractable, nullptr, "OnToxinPlantComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics
	{
		struct ToxinPlantInteractable_eventSetToxinPlantComplete_Parms
		{
			bool isComplete;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isComplete_MetaData[];
#endif
		static void NewProp_isComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::NewProp_isComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::NewProp_isComplete_SetBit(void* Obj)
	{
		((ToxinPlantInteractable_eventSetToxinPlantComplete_Parms*)Obj)->isComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::NewProp_isComplete = { "isComplete", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ToxinPlantInteractable_eventSetToxinPlantComplete_Parms), &Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::NewProp_isComplete_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::NewProp_isComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::NewProp_isComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::NewProp_isComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToxinPlantInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToxinPlantInteractable, nullptr, "SetToxinPlantComplete", nullptr, nullptr, sizeof(ToxinPlantInteractable_eventSetToxinPlantComplete_Parms), Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AToxinPlantInteractable_NoRegister()
	{
		return AToxinPlantInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AToxinPlantInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToxinPlantInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpecialBehaviourInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Halloween2020,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AToxinPlantInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AToxinPlantInteractable_IsToxinPlantComplete, "IsToxinPlantComplete" }, // 3604491591
		{ &Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionFinished, "OnSalvageInteractionFinished" }, // 999503130
		{ &Z_Construct_UFunction_AToxinPlantInteractable_OnSalvageInteractionStart, "OnSalvageInteractionStart" }, // 3955829346
		{ &Z_Construct_UFunction_AToxinPlantInteractable_OnToxinPlantComplete, "OnToxinPlantComplete" }, // 2994774150
		{ &Z_Construct_UFunction_AToxinPlantInteractable_SetToxinPlantComplete, "SetToxinPlantComplete" }, // 3860023407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToxinPlantInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToxinPlantInteractable.h" },
		{ "ModuleRelativePath", "Public/ToxinPlantInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToxinPlantInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToxinPlantInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AToxinPlantInteractable_Statics::ClassParams = {
		&AToxinPlantInteractable::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AToxinPlantInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToxinPlantInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToxinPlantInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AToxinPlantInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AToxinPlantInteractable, 4189836317);
	template<> HALLOWEEN2020_API UClass* StaticClass<AToxinPlantInteractable>()
	{
		return AToxinPlantInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AToxinPlantInteractable(Z_Construct_UClass_AToxinPlantInteractable, &AToxinPlantInteractable::StaticClass, TEXT("/Script/Halloween2020"), TEXT("AToxinPlantInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToxinPlantInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
