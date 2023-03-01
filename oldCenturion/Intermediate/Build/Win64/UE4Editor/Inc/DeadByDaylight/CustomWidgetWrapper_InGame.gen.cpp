// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomWidgetWrapper_InGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomWidgetWrapper_InGame() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_InGame_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper_InGame();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCustomWidgetWrapper();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UCustomWidgetWrapper_InGame::execUpdateSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSettings();
		P_NATIVE_END;
	}
	void UCustomWidgetWrapper_InGame::StaticRegisterNativesUCustomWidgetWrapper_InGame()
	{
		UClass* Class = UCustomWidgetWrapper_InGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSettings", &UCustomWidgetWrapper_InGame::execUpdateSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_InGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomWidgetWrapper_InGame, nullptr, "UpdateSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomWidgetWrapper_InGame_NoRegister()
	{
		return UCustomWidgetWrapper_InGame::StaticClass();
	}
	struct Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualJoystickIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VirtualJoystickIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomWidgetWrapper,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomWidgetWrapper_InGame_UpdateSettings, "UpdateSettings" }, // 3041059944
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomWidgetWrapper_InGame.h" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_InGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::NewProp_VirtualJoystickIndex_MetaData[] = {
		{ "Category", "CustomWidgetWrapper_InGame" },
		{ "ModuleRelativePath", "Public/CustomWidgetWrapper_InGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::NewProp_VirtualJoystickIndex = { "VirtualJoystickIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomWidgetWrapper_InGame, VirtualJoystickIndex), METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::NewProp_VirtualJoystickIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::NewProp_VirtualJoystickIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::NewProp_VirtualJoystickIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomWidgetWrapper_InGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::ClassParams = {
		&UCustomWidgetWrapper_InGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomWidgetWrapper_InGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomWidgetWrapper_InGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomWidgetWrapper_InGame, 2827368565);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCustomWidgetWrapper_InGame>()
	{
		return UCustomWidgetWrapper_InGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomWidgetWrapper_InGame(Z_Construct_UClass_UCustomWidgetWrapper_InGame, &UCustomWidgetWrapper_InGame::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCustomWidgetWrapper_InGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomWidgetWrapper_InGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif