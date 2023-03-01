// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaCustomGameUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaCustomGameUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaCustomGameUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaCustomGameUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtlantaCustomGameUtilities::execIsCustomGameEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaCustomGameUtilities::IsCustomGameEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtlantaCustomGameUtilities::execIsInCustomGameLobby)
	{
		P_GET_OBJECT(UDBDGameInstance,Z_Param_gameInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtlantaCustomGameUtilities::IsInCustomGameLobby(Z_Param_gameInstance);
		P_NATIVE_END;
	}
	void UAtlantaCustomGameUtilities::StaticRegisterNativesUAtlantaCustomGameUtilities()
	{
		UClass* Class = UAtlantaCustomGameUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCustomGameEnabled", &UAtlantaCustomGameUtilities::execIsCustomGameEnabled },
			{ "IsInCustomGameLobby", &UAtlantaCustomGameUtilities::execIsInCustomGameLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics
	{
		struct AtlantaCustomGameUtilities_eventIsCustomGameEnabled_Parms
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
	void Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaCustomGameUtilities_eventIsCustomGameEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaCustomGameUtilities_eventIsCustomGameEnabled_Parms), &Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomGameUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaCustomGameUtilities, nullptr, "IsCustomGameEnabled", nullptr, nullptr, sizeof(AtlantaCustomGameUtilities_eventIsCustomGameEnabled_Parms), Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics
	{
		struct AtlantaCustomGameUtilities_eventIsInCustomGameLobby_Parms
		{
			const UDBDGameInstance* gameInstance;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtlantaCustomGameUtilities_eventIsInCustomGameLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtlantaCustomGameUtilities_eventIsInCustomGameLobby_Parms), &Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_gameInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_gameInstance = { "gameInstance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtlantaCustomGameUtilities_eventIsInCustomGameLobby_Parms, gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_gameInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::NewProp_gameInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaCustomGameUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtlantaCustomGameUtilities, nullptr, "IsInCustomGameLobby", nullptr, nullptr, sizeof(AtlantaCustomGameUtilities_eventIsInCustomGameLobby_Parms), Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtlantaCustomGameUtilities_NoRegister()
	{
		return UAtlantaCustomGameUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsCustomGameEnabled, "IsCustomGameEnabled" }, // 1679527903
		{ &Z_Construct_UFunction_UAtlantaCustomGameUtilities_IsInCustomGameLobby, "IsInCustomGameLobby" }, // 465658662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtlantaCustomGameUtilities.h" },
		{ "ModuleRelativePath", "Public/AtlantaCustomGameUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaCustomGameUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::ClassParams = {
		&UAtlantaCustomGameUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaCustomGameUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaCustomGameUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaCustomGameUtilities, 2404803014);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAtlantaCustomGameUtilities>()
	{
		return UAtlantaCustomGameUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaCustomGameUtilities(Z_Construct_UClass_UAtlantaCustomGameUtilities, &UAtlantaCustomGameUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAtlantaCustomGameUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaCustomGameUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
