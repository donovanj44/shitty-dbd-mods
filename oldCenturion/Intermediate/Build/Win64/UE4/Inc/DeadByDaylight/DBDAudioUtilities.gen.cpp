// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDAudioUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDAudioUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAudioUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDAudioUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDAudioUtilities::execDBD_LoadPersistentBank)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_bank);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDAudioUtilities::DBD_LoadPersistentBank(Z_Param_bank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAudioUtilities::execDBD_LoadPersistentBankAsync)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_bank);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDAudioUtilities::DBD_LoadPersistentBankAsync(Z_Param_bank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAudioUtilities::execDBD_LoadPersistentBankByAssetPtr)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UAkAudioBank>,Z_Param_bank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UDBDAudioUtilities::DBD_LoadPersistentBankByAssetPtr(Z_Param_bank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDAudioUtilities::execDBD_PostUiEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_event);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDAudioUtilities::DBD_PostUiEvent(Z_Param_event);
		P_NATIVE_END;
	}
	void UDBDAudioUtilities::StaticRegisterNativesUDBDAudioUtilities()
	{
		UClass* Class = UDBDAudioUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_LoadPersistentBank", &UDBDAudioUtilities::execDBD_LoadPersistentBank },
			{ "DBD_LoadPersistentBankAsync", &UDBDAudioUtilities::execDBD_LoadPersistentBankAsync },
			{ "DBD_LoadPersistentBankByAssetPtr", &UDBDAudioUtilities::execDBD_LoadPersistentBankByAssetPtr },
			{ "DBD_PostUiEvent", &UDBDAudioUtilities::execDBD_PostUiEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics
	{
		struct DBDAudioUtilities_eventDBD_LoadPersistentBank_Parms
		{
			UAkAudioBank* bank;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::NewProp_bank = { "bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAudioUtilities_eventDBD_LoadPersistentBank_Parms, bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::NewProp_bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAudioUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAudioUtilities, nullptr, "DBD_LoadPersistentBank", nullptr, nullptr, sizeof(DBDAudioUtilities_eventDBD_LoadPersistentBank_Parms), Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics
	{
		struct DBDAudioUtilities_eventDBD_LoadPersistentBankAsync_Parms
		{
			UAkAudioBank* bank;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::NewProp_bank = { "bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAudioUtilities_eventDBD_LoadPersistentBankAsync_Parms, bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::NewProp_bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAudioUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAudioUtilities, nullptr, "DBD_LoadPersistentBankAsync", nullptr, nullptr, sizeof(DBDAudioUtilities_eventDBD_LoadPersistentBankAsync_Parms), Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics
	{
		struct DBDAudioUtilities_eventDBD_LoadPersistentBankByAssetPtr_Parms
		{
			TSoftObjectPtr<UAkAudioBank> bank;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAudioUtilities_eventDBD_LoadPersistentBankByAssetPtr_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::NewProp_bank = { "bank", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAudioUtilities_eventDBD_LoadPersistentBankByAssetPtr_Parms, bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::NewProp_bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAudioUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAudioUtilities, nullptr, "DBD_LoadPersistentBankByAssetPtr", nullptr, nullptr, sizeof(DBDAudioUtilities_eventDBD_LoadPersistentBankByAssetPtr_Parms), Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics
	{
		struct DBDAudioUtilities_eventDBD_PostUiEvent_Parms
		{
			UAkAudioEvent* event;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDAudioUtilities_eventDBD_PostUiEvent_Parms, event), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::NewProp_event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDAudioUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDAudioUtilities, nullptr, "DBD_PostUiEvent", nullptr, nullptr, sizeof(DBDAudioUtilities_eventDBD_PostUiEvent_Parms), Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDAudioUtilities_NoRegister()
	{
		return UDBDAudioUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDAudioUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDAudioUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDAudioUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBank, "DBD_LoadPersistentBank" }, // 926974298
		{ &Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankAsync, "DBD_LoadPersistentBankAsync" }, // 3779214747
		{ &Z_Construct_UFunction_UDBDAudioUtilities_DBD_LoadPersistentBankByAssetPtr, "DBD_LoadPersistentBankByAssetPtr" }, // 1621804838
		{ &Z_Construct_UFunction_UDBDAudioUtilities_DBD_PostUiEvent, "DBD_PostUiEvent" }, // 2443608771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDAudioUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDAudioUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDAudioUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDAudioUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDAudioUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDAudioUtilities_Statics::ClassParams = {
		&UDBDAudioUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDAudioUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDAudioUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDAudioUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDAudioUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDAudioUtilities, 1869626677);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDAudioUtilities>()
	{
		return UDBDAudioUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDAudioUtilities(Z_Construct_UClass_UDBDAudioUtilities, &UDBDAudioUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDAudioUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDAudioUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
