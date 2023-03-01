// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagUtilities/Public/DBDGameplayTagUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGameplayTagUtilities() {}
// Cross Module References
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UDBDGameplayTagUtilities_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UDBDGameplayTagUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameplayTagUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UDBDGameplayTagUtilities::execGameplayTagExists)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_tagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDBDGameplayTagUtilities::GameplayTagExists(Z_Param_tagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameplayTagUtilities::execGetScoreModifierName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_scoreEventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDBDGameplayTagUtilities::GetScoreModifierName(Z_Param_scoreEventID);
		P_NATIVE_END;
	}
	void UDBDGameplayTagUtilities::StaticRegisterNativesUDBDGameplayTagUtilities()
	{
		UClass* Class = UDBDGameplayTagUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameplayTagExists", &UDBDGameplayTagUtilities::execGameplayTagExists },
			{ "GetScoreModifierName", &UDBDGameplayTagUtilities::execGetScoreModifierName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics
	{
		struct DBDGameplayTagUtilities_eventGameplayTagExists_Parms
		{
			FName tagName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_tagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDGameplayTagUtilities_eventGameplayTagExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameplayTagUtilities_eventGameplayTagExists_Parms), &Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::NewProp_tagName = { "tagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameplayTagUtilities_eventGameplayTagExists_Parms, tagName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::NewProp_tagName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameplayTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameplayTagUtilities, nullptr, "GameplayTagExists", nullptr, nullptr, sizeof(DBDGameplayTagUtilities_eventGameplayTagExists_Parms), Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics
	{
		struct DBDGameplayTagUtilities_eventGetScoreModifierName_Parms
		{
			FName scoreEventID;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_scoreEventID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameplayTagUtilities_eventGetScoreModifierName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::NewProp_scoreEventID = { "scoreEventID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameplayTagUtilities_eventGetScoreModifierName_Parms, scoreEventID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::NewProp_scoreEventID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameplayTagUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameplayTagUtilities, nullptr, "GetScoreModifierName", nullptr, nullptr, sizeof(DBDGameplayTagUtilities_eventGetScoreModifierName_Parms), Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDGameplayTagUtilities_NoRegister()
	{
		return UDBDGameplayTagUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDGameplayTagUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTagUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDGameplayTagUtilities_GameplayTagExists, "GameplayTagExists" }, // 2600161696
		{ &Z_Construct_UFunction_UDBDGameplayTagUtilities_GetScoreModifierName, "GetScoreModifierName" }, // 941927504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDGameplayTagUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDGameplayTagUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDGameplayTagUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::ClassParams = {
		&UDBDGameplayTagUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDGameplayTagUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDGameplayTagUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDGameplayTagUtilities, 3932829409);
	template<> GAMEPLAYTAGUTILITIES_API UClass* StaticClass<UDBDGameplayTagUtilities>()
	{
		return UDBDGameplayTagUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDGameplayTagUtilities(Z_Construct_UClass_UDBDGameplayTagUtilities, &UDBDGameplayTagUtilities::StaticClass, TEXT("/Script/GameplayTagUtilities"), TEXT("UDBDGameplayTagUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDGameplayTagUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
