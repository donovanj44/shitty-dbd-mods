// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CinematicManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCinematicManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCinematicManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCinematicManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCinematic();
// End Cross Module References
	DEFINE_FUNCTION(UCinematicManager::execCancelAllCinematicToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAllCinematicToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicManager::execGetNextCinematicToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCinematic*)Z_Param__Result=P_THIS->GetNextCinematicToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicManager::execHasCinematicToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCinematicToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicManager::execPlayMultiple)
	{
		P_GET_TARRAY_REF(FCinematic,Z_Param_Out_cinematics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMultiple(Z_Param_Out_cinematics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCinematicManager::execPlaySingle)
	{
		P_GET_STRUCT_REF(FCinematic,Z_Param_Out_cinematic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySingle(Z_Param_Out_cinematic);
		P_NATIVE_END;
	}
	void UCinematicManager::StaticRegisterNativesUCinematicManager()
	{
		UClass* Class = UCinematicManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAllCinematicToPlay", &UCinematicManager::execCancelAllCinematicToPlay },
			{ "GetNextCinematicToPlay", &UCinematicManager::execGetNextCinematicToPlay },
			{ "HasCinematicToPlay", &UCinematicManager::execHasCinematicToPlay },
			{ "PlayMultiple", &UCinematicManager::execPlayMultiple },
			{ "PlaySingle", &UCinematicManager::execPlaySingle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicManager, nullptr, "CancelAllCinematicToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics
	{
		struct CinematicManager_eventGetNextCinematicToPlay_Parms
		{
			FCinematic ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicManager_eventGetNextCinematicToPlay_Parms, ReturnValue), Z_Construct_UScriptStruct_FCinematic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicManager, nullptr, "GetNextCinematicToPlay", nullptr, nullptr, sizeof(CinematicManager_eventGetNextCinematicToPlay_Parms), Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics
	{
		struct CinematicManager_eventHasCinematicToPlay_Parms
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
	void Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CinematicManager_eventHasCinematicToPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CinematicManager_eventHasCinematicToPlay_Parms), &Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicManager, nullptr, "HasCinematicToPlay", nullptr, nullptr, sizeof(CinematicManager_eventHasCinematicToPlay_Parms), Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics
	{
		struct CinematicManager_eventPlayMultiple_Parms
		{
			TArray<FCinematic> cinematics;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cinematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_cinematics;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cinematics_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::NewProp_cinematics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::NewProp_cinematics = { "cinematics", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicManager_eventPlayMultiple_Parms, cinematics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::NewProp_cinematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::NewProp_cinematics_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::NewProp_cinematics_Inner = { "cinematics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCinematic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::NewProp_cinematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::NewProp_cinematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicManager, nullptr, "PlayMultiple", nullptr, nullptr, sizeof(CinematicManager_eventPlayMultiple_Parms), Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicManager_PlayMultiple()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicManager_PlayMultiple_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics
	{
		struct CinematicManager_eventPlaySingle_Parms
		{
			FCinematic cinematic;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cinematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_cinematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::NewProp_cinematic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::NewProp_cinematic = { "cinematic", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CinematicManager_eventPlaySingle_Parms, cinematic), Z_Construct_UScriptStruct_FCinematic, METADATA_PARAMS(Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::NewProp_cinematic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::NewProp_cinematic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::NewProp_cinematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CinematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCinematicManager, nullptr, "PlaySingle", nullptr, nullptr, sizeof(CinematicManager_eventPlaySingle_Parms), Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCinematicManager_PlaySingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCinematicManager_PlaySingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCinematicManager_NoRegister()
	{
		return UCinematicManager::StaticClass();
	}
	struct Z_Construct_UClass_UCinematicManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cinematicQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cinematicQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cinematicQueue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCinematicManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCinematicManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCinematicManager_CancelAllCinematicToPlay, "CancelAllCinematicToPlay" }, // 4151953469
		{ &Z_Construct_UFunction_UCinematicManager_GetNextCinematicToPlay, "GetNextCinematicToPlay" }, // 1390143936
		{ &Z_Construct_UFunction_UCinematicManager_HasCinematicToPlay, "HasCinematicToPlay" }, // 3505325909
		{ &Z_Construct_UFunction_UCinematicManager_PlayMultiple, "PlayMultiple" }, // 994955874
		{ &Z_Construct_UFunction_UCinematicManager_PlaySingle, "PlaySingle" }, // 1224434557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinematicManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CinematicManager.h" },
		{ "ModuleRelativePath", "Public/CinematicManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCinematicManager_Statics::NewProp__cinematicQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/CinematicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCinematicManager_Statics::NewProp__cinematicQueue = { "_cinematicQueue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCinematicManager, _cinematicQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCinematicManager_Statics::NewProp__cinematicQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicManager_Statics::NewProp__cinematicQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCinematicManager_Statics::NewProp__cinematicQueue_Inner = { "_cinematicQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCinematic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCinematicManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicManager_Statics::NewProp__cinematicQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCinematicManager_Statics::NewProp__cinematicQueue_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCinematicManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCinematicManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCinematicManager_Statics::ClassParams = {
		&UCinematicManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCinematicManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCinematicManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCinematicManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCinematicManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCinematicManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCinematicManager, 2034807761);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCinematicManager>()
	{
		return UCinematicManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCinematicManager(Z_Construct_UClass_UCinematicManager, &UCinematicManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCinematicManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCinematicManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
