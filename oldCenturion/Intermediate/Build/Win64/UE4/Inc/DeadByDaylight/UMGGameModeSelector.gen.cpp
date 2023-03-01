// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGGameModeSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGGameModeSelector() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGameModeSelector_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGameModeSelector();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayMode();
// End Cross Module References
	DEFINE_FUNCTION(UUMGGameModeSelector::execSetGameplayMode)
	{
		P_GET_ENUM(EGameplayMode,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameplayMode(EGameplayMode(Z_Param_mode));
		P_NATIVE_END;
	}
	static FName NAME_UUMGGameModeSelector_SetActiveGameplayMode = FName(TEXT("SetActiveGameplayMode"));
	void UUMGGameModeSelector::SetActiveGameplayMode(EGameplayMode mode, bool visible)
	{
		UMGGameModeSelector_eventSetActiveGameplayMode_Parms Parms;
		Parms.mode=mode;
		Parms.visible=visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGGameModeSelector_SetActiveGameplayMode),&Parms);
	}
	void UUMGGameModeSelector::StaticRegisterNativesUUMGGameModeSelector()
	{
		UClass* Class = UUMGGameModeSelector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGameplayMode", &UUMGGameModeSelector::execSetGameplayMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((UMGGameModeSelector_eventSetActiveGameplayMode_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGGameModeSelector_eventSetActiveGameplayMode_Parms), &Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGGameModeSelector_eventSetActiveGameplayMode_Parms, mode), Z_Construct_UEnum_DeadByDaylight_EGameplayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::NewProp_mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGGameModeSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGGameModeSelector, nullptr, "SetActiveGameplayMode", nullptr, nullptr, sizeof(UMGGameModeSelector_eventSetActiveGameplayMode_Parms), Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics
	{
		struct UMGGameModeSelector_eventSetGameplayMode_Parms
		{
			EGameplayMode mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGGameModeSelector_eventSetGameplayMode_Parms, mode), Z_Construct_UEnum_DeadByDaylight_EGameplayMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::NewProp_mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGGameModeSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGGameModeSelector, nullptr, "SetGameplayMode", nullptr, nullptr, sizeof(UMGGameModeSelector_eventSetGameplayMode_Parms), Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGGameModeSelector_NoRegister()
	{
		return UUMGGameModeSelector::StaticClass();
	}
	struct Z_Construct_UClass_UUMGGameModeSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGGameModeSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGGameModeSelector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGGameModeSelector_SetActiveGameplayMode, "SetActiveGameplayMode" }, // 3866593580
		{ &Z_Construct_UFunction_UUMGGameModeSelector_SetGameplayMode, "SetGameplayMode" }, // 1610321904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGGameModeSelector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGGameModeSelector.h" },
		{ "ModuleRelativePath", "Public/UMGGameModeSelector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGGameModeSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGGameModeSelector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGGameModeSelector_Statics::ClassParams = {
		&UUMGGameModeSelector::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGGameModeSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGGameModeSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGGameModeSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGGameModeSelector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGGameModeSelector, 318432682);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGGameModeSelector>()
	{
		return UUMGGameModeSelector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGGameModeSelector(Z_Construct_UClass_UUMGGameModeSelector, &UUMGGameModeSelector::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGGameModeSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGGameModeSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
