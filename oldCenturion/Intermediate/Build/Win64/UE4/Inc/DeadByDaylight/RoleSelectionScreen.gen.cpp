// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RoleSelectionScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoleSelectionScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URoleSelectionScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URoleSelectionScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(URoleSelectionScreen::execOnButtonSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonSelected(Z_Param_buttonId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URoleSelectionScreen::execOnChangeUserButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeUserButtonClick();
		P_NATIVE_END;
	}
	void URoleSelectionScreen::StaticRegisterNativesURoleSelectionScreen()
	{
		UClass* Class = URoleSelectionScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonSelected", &URoleSelectionScreen::execOnButtonSelected },
			{ "OnChangeUserButtonClick", &URoleSelectionScreen::execOnChangeUserButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics
	{
		struct RoleSelectionScreen_eventOnButtonSelected_Parms
		{
			int32 buttonId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::NewProp_buttonId = { "buttonId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoleSelectionScreen_eventOnButtonSelected_Parms, buttonId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::NewProp_buttonId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoleSelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoleSelectionScreen, nullptr, "OnButtonSelected", nullptr, nullptr, sizeof(RoleSelectionScreen_eventOnButtonSelected_Parms), Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RoleSelectionScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoleSelectionScreen, nullptr, "OnChangeUserButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URoleSelectionScreen_NoRegister()
	{
		return URoleSelectionScreen::StaticClass();
	}
	struct Z_Construct_UClass_URoleSelectionScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoleSelectionScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URoleSelectionScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoleSelectionScreen_OnButtonSelected, "OnButtonSelected" }, // 3818270365
		{ &Z_Construct_UFunction_URoleSelectionScreen_OnChangeUserButtonClick, "OnChangeUserButtonClick" }, // 4061462889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoleSelectionScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoleSelectionScreen.h" },
		{ "ModuleRelativePath", "Public/RoleSelectionScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoleSelectionScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoleSelectionScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoleSelectionScreen_Statics::ClassParams = {
		&URoleSelectionScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URoleSelectionScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoleSelectionScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoleSelectionScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoleSelectionScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoleSelectionScreen, 3819648450);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URoleSelectionScreen>()
	{
		return URoleSelectionScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoleSelectionScreen(Z_Construct_UClass_URoleSelectionScreen, &URoleSelectionScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URoleSelectionScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoleSelectionScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
