// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformUtilities/Public/PlatformSupportSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSupportSubsystem() {}
// Cross Module References
	PLATFORMUTILITIES_API UClass* Z_Construct_UClass_UPlatformSupportSubsystem_NoRegister();
	PLATFORMUTILITIES_API UClass* Z_Construct_UClass_UPlatformSupportSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_PlatformUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UPlatformSupportSubsystem::execDBD_StadiaCharacterSelectPoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_StadiaCharacterSelectPoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformSupportSubsystem::execDBD_StadiaRoleSelectPoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_StadiaRoleSelectPoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlatformSupportSubsystem::execDBD_StadiaShowStreamDebug)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_StadiaShowStreamDebug(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void UPlatformSupportSubsystem::StaticRegisterNativesUPlatformSupportSubsystem()
	{
		UClass* Class = UPlatformSupportSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_StadiaCharacterSelectPoll", &UPlatformSupportSubsystem::execDBD_StadiaCharacterSelectPoll },
			{ "DBD_StadiaRoleSelectPoll", &UPlatformSupportSubsystem::execDBD_StadiaRoleSelectPoll },
			{ "DBD_StadiaShowStreamDebug", &UPlatformSupportSubsystem::execDBD_StadiaShowStreamDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformSupportSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformSupportSubsystem, nullptr, "DBD_StadiaCharacterSelectPoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformSupportSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformSupportSubsystem, nullptr, "DBD_StadiaRoleSelectPoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics
	{
		struct PlatformSupportSubsystem_eventDBD_StadiaShowStreamDebug_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PlatformSupportSubsystem_eventDBD_StadiaShowStreamDebug_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlatformSupportSubsystem_eventDBD_StadiaShowStreamDebug_Parms), &Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformSupportSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformSupportSubsystem, nullptr, "DBD_StadiaShowStreamDebug", nullptr, nullptr, sizeof(PlatformSupportSubsystem_eventDBD_StadiaShowStreamDebug_Parms), Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlatformSupportSubsystem_NoRegister()
	{
		return UPlatformSupportSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformSupportSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformSupportSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlatformSupportSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaCharacterSelectPoll, "DBD_StadiaCharacterSelectPoll" }, // 660652746
		{ &Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaRoleSelectPoll, "DBD_StadiaRoleSelectPoll" }, // 1827703917
		{ &Z_Construct_UFunction_UPlatformSupportSubsystem_DBD_StadiaShowStreamDebug, "DBD_StadiaShowStreamDebug" }, // 2514327849
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSupportSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformSupportSubsystem.h" },
		{ "ModuleRelativePath", "Public/PlatformSupportSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformSupportSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformSupportSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlatformSupportSubsystem_Statics::ClassParams = {
		&UPlatformSupportSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlatformSupportSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSupportSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformSupportSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlatformSupportSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlatformSupportSubsystem, 821368164);
	template<> PLATFORMUTILITIES_API UClass* StaticClass<UPlatformSupportSubsystem>()
	{
		return UPlatformSupportSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformSupportSubsystem(Z_Construct_UClass_UPlatformSupportSubsystem, &UPlatformSupportSubsystem::StaticClass, TEXT("/Script/PlatformUtilities"), TEXT("UPlatformSupportSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformSupportSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
