// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperExposerInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperExposerInstance() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperExposerInstance_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperExposerInstance();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(ACamperExposerInstance::execExitSequenceComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitSequenceComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACamperExposerInstance::execStartExitSequence)
	{
		P_GET_UBOOL(Z_Param_withRandomDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartExitSequence_Implementation(Z_Param_withRandomDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACamperExposerInstance::execStartSpawnSequence)
	{
		P_GET_UBOOL(Z_Param_withRandomDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpawnSequence_Implementation(Z_Param_withRandomDelay);
		P_NATIVE_END;
	}
	static FName NAME_ACamperExposerInstance_SetIsInteriorBP = FName(TEXT("SetIsInteriorBP"));
	void ACamperExposerInstance::SetIsInteriorBP(bool interior)
	{
		CamperExposerInstance_eventSetIsInteriorBP_Parms Parms;
		Parms.interior=interior ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACamperExposerInstance_SetIsInteriorBP),&Parms);
	}
	static FName NAME_ACamperExposerInstance_StartExitSequence = FName(TEXT("StartExitSequence"));
	void ACamperExposerInstance::StartExitSequence(bool withRandomDelay)
	{
		CamperExposerInstance_eventStartExitSequence_Parms Parms;
		Parms.withRandomDelay=withRandomDelay ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACamperExposerInstance_StartExitSequence),&Parms);
	}
	static FName NAME_ACamperExposerInstance_StartSpawnSequence = FName(TEXT("StartSpawnSequence"));
	void ACamperExposerInstance::StartSpawnSequence(bool withRandomDelay)
	{
		CamperExposerInstance_eventStartSpawnSequence_Parms Parms;
		Parms.withRandomDelay=withRandomDelay ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACamperExposerInstance_StartSpawnSequence),&Parms);
	}
	void ACamperExposerInstance::StaticRegisterNativesACamperExposerInstance()
	{
		UClass* Class = ACamperExposerInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitSequenceComplete", &ACamperExposerInstance::execExitSequenceComplete },
			{ "StartExitSequence", &ACamperExposerInstance::execStartExitSequence },
			{ "StartSpawnSequence", &ACamperExposerInstance::execStartSpawnSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperExposerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperExposerInstance, nullptr, "ExitSequenceComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics
	{
		static void NewProp_interior_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::NewProp_interior_SetBit(void* Obj)
	{
		((CamperExposerInstance_eventSetIsInteriorBP_Parms*)Obj)->interior = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::NewProp_interior = { "interior", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CamperExposerInstance_eventSetIsInteriorBP_Parms), &Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::NewProp_interior_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::NewProp_interior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperExposerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperExposerInstance, nullptr, "SetIsInteriorBP", nullptr, nullptr, sizeof(CamperExposerInstance_eventSetIsInteriorBP_Parms), Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics
	{
		static void NewProp_withRandomDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_withRandomDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::NewProp_withRandomDelay_SetBit(void* Obj)
	{
		((CamperExposerInstance_eventStartExitSequence_Parms*)Obj)->withRandomDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::NewProp_withRandomDelay = { "withRandomDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CamperExposerInstance_eventStartExitSequence_Parms), &Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::NewProp_withRandomDelay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::NewProp_withRandomDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperExposerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperExposerInstance, nullptr, "StartExitSequence", nullptr, nullptr, sizeof(CamperExposerInstance_eventStartExitSequence_Parms), Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics
	{
		static void NewProp_withRandomDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_withRandomDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::NewProp_withRandomDelay_SetBit(void* Obj)
	{
		((CamperExposerInstance_eventStartSpawnSequence_Parms*)Obj)->withRandomDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::NewProp_withRandomDelay = { "withRandomDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CamperExposerInstance_eventStartSpawnSequence_Parms), &Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::NewProp_withRandomDelay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::NewProp_withRandomDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperExposerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACamperExposerInstance, nullptr, "StartSpawnSequence", nullptr, nullptr, sizeof(CamperExposerInstance_eventStartSpawnSequence_Parms), Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACamperExposerInstance_NoRegister()
	{
		return ACamperExposerInstance::StaticClass();
	}
	struct Z_Construct_UClass_ACamperExposerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioAgravationLevelRtpc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__audioAgravationLevelRtpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInterior_MetaData[];
#endif
		static void NewProp_IsInterior_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInterior;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamperExposerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACamperExposerInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACamperExposerInstance_ExitSequenceComplete, "ExitSequenceComplete" }, // 3748139105
		{ &Z_Construct_UFunction_ACamperExposerInstance_SetIsInteriorBP, "SetIsInteriorBP" }, // 708789898
		{ &Z_Construct_UFunction_ACamperExposerInstance_StartExitSequence, "StartExitSequence" }, // 4003401947
		{ &Z_Construct_UFunction_ACamperExposerInstance_StartSpawnSequence, "StartSpawnSequence" }, // 782475854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperExposerInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CamperExposerInstance.h" },
		{ "ModuleRelativePath", "Public/CamperExposerInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp__audioAgravationLevelRtpc_MetaData[] = {
		{ "Category", "CamperExposerInstance" },
		{ "ModuleRelativePath", "Public/CamperExposerInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp__audioAgravationLevelRtpc = { "_audioAgravationLevelRtpc", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACamperExposerInstance, _audioAgravationLevelRtpc), METADATA_PARAMS(Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp__audioAgravationLevelRtpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp__audioAgravationLevelRtpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp_IsInterior_MetaData[] = {
		{ "Category", "CamperExposerInstance" },
		{ "ModuleRelativePath", "Public/CamperExposerInstance.h" },
	};
#endif
	void Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp_IsInterior_SetBit(void* Obj)
	{
		((ACamperExposerInstance*)Obj)->IsInterior = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp_IsInterior = { "IsInterior", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACamperExposerInstance), &Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp_IsInterior_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp_IsInterior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp_IsInterior_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACamperExposerInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp__audioAgravationLevelRtpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACamperExposerInstance_Statics::NewProp_IsInterior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamperExposerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamperExposerInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamperExposerInstance_Statics::ClassParams = {
		&ACamperExposerInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACamperExposerInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACamperExposerInstance_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACamperExposerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamperExposerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamperExposerInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamperExposerInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamperExposerInstance, 1682883936);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ACamperExposerInstance>()
	{
		return ACamperExposerInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamperExposerInstance(Z_Construct_UClass_ACamperExposerInstance, &ACamperExposerInstance::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ACamperExposerInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamperExposerInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
