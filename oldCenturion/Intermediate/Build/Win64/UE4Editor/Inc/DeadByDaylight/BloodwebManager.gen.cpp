// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDesignTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebEntity_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebGenerator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebTunables_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UBloodwebManager::execInit)
	{
		P_GET_OBJECT(UDBDGameInstance,Z_Param_gameInstance);
		P_GET_OBJECT(UDBDDesignTunables,Z_Param_tunables);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_gameInstance,Z_Param_tunables);
		P_NATIVE_END;
	}
	void UBloodwebManager::StaticRegisterNativesUBloodwebManager()
	{
		UClass* Class = UBloodwebManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UBloodwebManager::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodwebManager_Init_Statics
	{
		struct BloodwebManager_eventInit_Parms
		{
			UDBDGameInstance* gameInstance;
			UDBDDesignTunables* tunables;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tunables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodwebManager_Init_Statics::NewProp_tunables = { "tunables", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodwebManager_eventInit_Parms, tunables), Z_Construct_UClass_UDBDDesignTunables_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodwebManager_Init_Statics::NewProp_gameInstance = { "gameInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodwebManager_eventInit_Parms, gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodwebManager_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodwebManager_Init_Statics::NewProp_tunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodwebManager_Init_Statics::NewProp_gameInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodwebManager_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodwebManager_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodwebManager, nullptr, "Init", nullptr, nullptr, sizeof(BloodwebManager_eventInit_Parms), Z_Construct_UFunction_UBloodwebManager_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodwebManager_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodwebManager_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodwebManager_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodwebManager_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodwebManager_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodwebManager_NoRegister()
	{
		return UBloodwebManager::StaticClass();
	}
	struct Z_Construct_UClass_UBloodwebManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodwebHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodwebBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodWebDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__bloodWebDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodwebTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__designTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__designTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebBuilderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__bloodwebBuilderClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodwebManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodwebManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodwebManager_Init, "Init" }, // 3031985902
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodwebManager.h" },
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebHandler = { "_bloodwebHandler", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _bloodwebHandler), Z_Construct_UClass_UBloodwebHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__entity_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__entity = { "_entity", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _entity), Z_Construct_UClass_UBloodwebEntity_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilder_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilder = { "_bloodwebBuilder", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _bloodwebBuilder), Z_Construct_UClass_UBloodwebGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodWebDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodWebDefinition = { "_bloodWebDefinition", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _bloodWebDefinition), Z_Construct_UClass_UDBDBloodwebDefinitionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodWebDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodWebDefinition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebTunables = { "_bloodwebTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _bloodwebTunables), Z_Construct_UClass_UBloodwebTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__designTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__designTunables = { "_designTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _designTunables), Z_Construct_UClass_UDBDDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__designTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__designTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__gameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__gameInstance = { "_gameInstance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _gameInstance), Z_Construct_UClass_UDBDGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__gameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__gameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilderClass_MetaData[] = {
		{ "Category", "BloodwebManager" },
		{ "ModuleRelativePath", "Public/BloodwebManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilderClass = { "_bloodwebBuilderClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebManager, _bloodwebBuilderClass), Z_Construct_UClass_UBloodwebGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilderClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodwebManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodWebDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__designTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__gameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebManager_Statics::NewProp__bloodwebBuilderClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodwebManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodwebManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodwebManager_Statics::ClassParams = {
		&UBloodwebManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBloodwebManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodwebManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodwebManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodwebManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodwebManager, 2324721705);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodwebManager>()
	{
		return UBloodwebManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodwebManager(Z_Construct_UClass_UBloodwebManager, &UBloodwebManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodwebManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodwebManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
