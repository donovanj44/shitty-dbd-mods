// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PhantomTrap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhantomTrap() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APhantomTrap_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_APhantomTrap();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APhantomTrap::execEvaluateLineOfSight)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_start);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_end);
		P_GET_OBJECT(AActor,Z_Param_ignoredActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateLineOfSight(Z_Param_Out_start,Z_Param_Out_end,Z_Param_ignoredActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomTrap::execInitializeTerrorRadiusEmitter)
	{
		P_GET_OBJECT(ASlasherPlayer,Z_Param_OwningSlasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTerrorRadiusEmitter(Z_Param_OwningSlasher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APhantomTrap::execIsTrapSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTrapSet_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_APhantomTrap_GetMesh = FName(TEXT("GetMesh"));
	USkeletalMeshComponent* APhantomTrap::GetMesh() const
	{
		PhantomTrap_eventGetMesh_Parms Parms;
		const_cast<APhantomTrap*>(this)->ProcessEvent(FindFunctionChecked(NAME_APhantomTrap_GetMesh),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_APhantomTrap_IsTrapSet = FName(TEXT("IsTrapSet"));
	bool APhantomTrap::IsTrapSet() const
	{
		PhantomTrap_eventIsTrapSet_Parms Parms;
		const_cast<APhantomTrap*>(this)->ProcessEvent(FindFunctionChecked(NAME_APhantomTrap_IsTrapSet),&Parms);
		return !!Parms.ReturnValue;
	}
	void APhantomTrap::StaticRegisterNativesAPhantomTrap()
	{
		UClass* Class = APhantomTrap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateLineOfSight", &APhantomTrap::execEvaluateLineOfSight },
			{ "InitializeTerrorRadiusEmitter", &APhantomTrap::execInitializeTerrorRadiusEmitter },
			{ "IsTrapSet", &APhantomTrap::execIsTrapSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics
	{
		struct PhantomTrap_eventEvaluateLineOfSight_Parms
		{
			FVector start;
			FVector end;
			const AActor* ignoredActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignoredActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ignoredActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_end;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhantomTrap_eventEvaluateLineOfSight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhantomTrap_eventEvaluateLineOfSight_Parms), &Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ignoredActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ignoredActor = { "ignoredActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomTrap_eventEvaluateLineOfSight_Parms, ignoredActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ignoredActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ignoredActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_end_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomTrap_eventEvaluateLineOfSight_Parms, end), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_end_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_end_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomTrap_eventEvaluateLineOfSight_Parms, start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_ignoredActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_end,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomTrap, nullptr, "EvaluateLineOfSight", nullptr, nullptr, sizeof(PhantomTrap_eventEvaluateLineOfSight_Parms), Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomTrap_GetMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomTrap_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomTrap, nullptr, "GetMesh", nullptr, nullptr, sizeof(PhantomTrap_eventGetMesh_Parms), Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomTrap_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhantomTrap_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics
	{
		struct PhantomTrap_eventInitializeTerrorRadiusEmitter_Parms
		{
			ASlasherPlayer* OwningSlasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningSlasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::NewProp_OwningSlasher = { "OwningSlasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhantomTrap_eventInitializeTerrorRadiusEmitter_Parms, OwningSlasher), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::NewProp_OwningSlasher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomTrap, nullptr, "InitializeTerrorRadiusEmitter", nullptr, nullptr, sizeof(PhantomTrap_eventInitializeTerrorRadiusEmitter_Parms), Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhantomTrap_eventIsTrapSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhantomTrap_eventIsTrapSet_Parms), &Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhantomTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhantomTrap, nullptr, "IsTrapSet", nullptr, nullptr, sizeof(PhantomTrap_eventIsTrapSet_Parms), Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhantomTrap_IsTrapSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhantomTrap_IsTrapSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhantomTrap_NoRegister()
	{
		return APhantomTrap::StaticClass();
	}
	struct Z_Construct_UClass_APhantomTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lineOfSightTraceMinInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lineOfSightTraceMinInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__terrorRadiusEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__terrorRadiusEmitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhantomTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhantomTrap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhantomTrap_EvaluateLineOfSight, "EvaluateLineOfSight" }, // 3251700587
		{ &Z_Construct_UFunction_APhantomTrap_GetMesh, "GetMesh" }, // 2194987449
		{ &Z_Construct_UFunction_APhantomTrap_InitializeTerrorRadiusEmitter, "InitializeTerrorRadiusEmitter" }, // 3911199811
		{ &Z_Construct_UFunction_APhantomTrap_IsTrapSet, "IsTrapSet" }, // 3430639197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomTrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhantomTrap.h" },
		{ "ModuleRelativePath", "Public/PhantomTrap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomTrap_Statics::NewProp__lineOfSightTraceMinInterval_MetaData[] = {
		{ "Category", "PhantomTrap" },
		{ "ModuleRelativePath", "Public/PhantomTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhantomTrap_Statics::NewProp__lineOfSightTraceMinInterval = { "_lineOfSightTraceMinInterval", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomTrap, _lineOfSightTraceMinInterval), METADATA_PARAMS(Z_Construct_UClass_APhantomTrap_Statics::NewProp__lineOfSightTraceMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomTrap_Statics::NewProp__lineOfSightTraceMinInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhantomTrap_Statics::NewProp__terrorRadiusEmitter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhantomTrap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PhantomTrap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhantomTrap_Statics::NewProp__terrorRadiusEmitter = { "_terrorRadiusEmitter", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APhantomTrap, _terrorRadiusEmitter), Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhantomTrap_Statics::NewProp__terrorRadiusEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomTrap_Statics::NewProp__terrorRadiusEmitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhantomTrap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomTrap_Statics::NewProp__lineOfSightTraceMinInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhantomTrap_Statics::NewProp__terrorRadiusEmitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhantomTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhantomTrap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhantomTrap_Statics::ClassParams = {
		&APhantomTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APhantomTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APhantomTrap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhantomTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhantomTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhantomTrap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhantomTrap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhantomTrap, 1047304695);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<APhantomTrap>()
	{
		return APhantomTrap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhantomTrap(Z_Construct_UClass_APhantomTrap, &APhantomTrap::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("APhantomTrap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhantomTrap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
