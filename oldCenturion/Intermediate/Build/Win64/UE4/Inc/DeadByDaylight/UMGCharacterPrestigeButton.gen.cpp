// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterPrestigeButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterPrestigeButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrestigeButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrestigeButton();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrestigeIcon();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCharacterPrestigeButton::execOnPrestigeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrestigeButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCharacterPrestigeButton::execSetCharacterPrestigeData)
	{
		P_GET_UBOOL(Z_Param_canPrestige);
		P_GET_PROPERTY(FIntProperty,Z_Param_prestigeLevel);
		P_GET_ENUM(EPlayerRole,Z_Param_role);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterPrestigeData(Z_Param_canPrestige,Z_Param_prestigeLevel,EPlayerRole(Z_Param_role));
		P_NATIVE_END;
	}
	void UUMGCharacterPrestigeButton::StaticRegisterNativesUUMGCharacterPrestigeButton()
	{
		UClass* Class = UUMGCharacterPrestigeButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPrestigeButtonClicked", &UUMGCharacterPrestigeButton::execOnPrestigeButtonClicked },
			{ "SetCharacterPrestigeData", &UUMGCharacterPrestigeButton::execSetCharacterPrestigeData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterPrestigeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterPrestigeButton, nullptr, "OnPrestigeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics
	{
		struct UMGCharacterPrestigeButton_eventSetCharacterPrestigeData_Parms
		{
			bool canPrestige;
			int32 prestigeLevel;
			EPlayerRole role;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_prestigeLevel;
		static void NewProp_canPrestige_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canPrestige;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_role_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_role = { "role", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterPrestigeButton_eventSetCharacterPrestigeData_Parms, role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_role_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_prestigeLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_prestigeLevel = { "prestigeLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterPrestigeButton_eventSetCharacterPrestigeData_Parms, prestigeLevel), METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_prestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_prestigeLevel_MetaData)) };
	void Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_canPrestige_SetBit(void* Obj)
	{
		((UMGCharacterPrestigeButton_eventSetCharacterPrestigeData_Parms*)Obj)->canPrestige = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_canPrestige = { "canPrestige", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGCharacterPrestigeButton_eventSetCharacterPrestigeData_Parms), &Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_canPrestige_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_prestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::NewProp_canPrestige,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterPrestigeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterPrestigeButton, nullptr, "SetCharacterPrestigeData", nullptr, nullptr, sizeof(UMGCharacterPrestigeButton_eventSetCharacterPrestigeData_Parms), Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCharacterPrestigeButton_NoRegister()
	{
		return UUMGCharacterPrestigeButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeAnimationCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrestigeAnimationCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrestigeButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGCharacterPrestigeIcon,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCharacterPrestigeButton_OnPrestigeButtonClicked, "OnPrestigeButtonClicked" }, // 385042474
		{ &Z_Construct_UFunction_UUMGCharacterPrestigeButton_SetCharacterPrestigeData, "SetCharacterPrestigeData" }, // 2567820301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterPrestigeButton.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrestigeButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeAnimationCanvas_MetaData[] = {
		{ "Category", "UMGCharacterPrestigeButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrestigeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeAnimationCanvas = { "PrestigeAnimationCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPrestigeButton, PrestigeAnimationCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeAnimationCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeAnimationCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeButton_MetaData[] = {
		{ "Category", "UMGCharacterPrestigeButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterPrestigeButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeButton = { "PrestigeButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterPrestigeButton, PrestigeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeAnimationCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::NewProp_PrestigeButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterPrestigeButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::ClassParams = {
		&UUMGCharacterPrestigeButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterPrestigeButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterPrestigeButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterPrestigeButton, 3314804515);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterPrestigeButton>()
	{
		return UUMGCharacterPrestigeButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterPrestigeButton(Z_Construct_UClass_UUMGCharacterPrestigeButton, &UUMGCharacterPrestigeButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterPrestigeButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterPrestigeButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
