// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TormentTrailController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTormentTrailController() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailController_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailController();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATrailControllerBase();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailPoint_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister();
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrailPointList();
// End Cross Module References
	DEFINE_FUNCTION(ATormentTrailController::execServer_SpawnTormentTrailPoint)
	{
		P_GET_OBJECT(ATormentTrailPoint,Z_Param_trailPoint);
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SpawnTormentTrailPoint_Validate(Z_Param_trailPoint,Z_Param_location,Z_Param_rotation))
		{
			RPC_ValidateFailed(TEXT("Server_SpawnTormentTrailPoint_Validate"));
			return;
		}
		P_THIS->Server_SpawnTormentTrailPoint_Implementation(Z_Param_trailPoint,Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	static FName NAME_ATormentTrailController_Server_SpawnTormentTrailPoint = FName(TEXT("Server_SpawnTormentTrailPoint"));
	void ATormentTrailController::Server_SpawnTormentTrailPoint(ATormentTrailPoint* trailPoint, const FVector_NetQuantize10 location, const FRotator rotation)
	{
		TormentTrailController_eventServer_SpawnTormentTrailPoint_Parms Parms;
		Parms.trailPoint=trailPoint;
		Parms.location=location;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_ATormentTrailController_Server_SpawnTormentTrailPoint),&Parms);
	}
	void ATormentTrailController::StaticRegisterNativesATormentTrailController()
	{
		UClass* Class = ATormentTrailController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_SpawnTormentTrailPoint", &ATormentTrailController::execServer_SpawnTormentTrailPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailController_eventServer_SpawnTormentTrailPoint_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailController_eventServer_SpawnTormentTrailPoint_Parms, location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_trailPoint = { "trailPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TormentTrailController_eventServer_SpawnTormentTrailPoint_Parms, trailPoint), Z_Construct_UClass_ATormentTrailPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::NewProp_trailPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TormentTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATormentTrailController, nullptr, "Server_SpawnTormentTrailPoint", nullptr, nullptr, sizeof(TormentTrailController_eventServer_SpawnTormentTrailPoint_Parms), Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATormentTrailController_NoRegister()
	{
		return ATormentTrailController::StaticClass();
	}
	struct Z_Construct_UClass_ATormentTrailController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mobileTormentTrailRenderer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mobileTormentTrailRenderer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailPointList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__trailPointList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATormentTrailController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATrailControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATormentTrailController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATormentTrailController_Server_SpawnTormentTrailPoint, "Server_SpawnTormentTrailPoint" }, // 1917779191
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentTrailController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TormentTrailController.h" },
		{ "ModuleRelativePath", "Public/TormentTrailController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentTrailController_Statics::NewProp__mobileTormentTrailRenderer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATormentTrailController_Statics::NewProp__mobileTormentTrailRenderer = { "_mobileTormentTrailRenderer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentTrailController, _mobileTormentTrailRenderer), Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATormentTrailController_Statics::NewProp__mobileTormentTrailRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailController_Statics::NewProp__mobileTormentTrailRenderer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATormentTrailController_Statics::NewProp__trailPointList_MetaData[] = {
		{ "ModuleRelativePath", "Public/TormentTrailController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATormentTrailController_Statics::NewProp__trailPointList = { "_trailPointList", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATormentTrailController, _trailPointList), Z_Construct_UScriptStruct_FReplicatedTrailPointList, METADATA_PARAMS(Z_Construct_UClass_ATormentTrailController_Statics::NewProp__trailPointList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailController_Statics::NewProp__trailPointList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATormentTrailController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentTrailController_Statics::NewProp__mobileTormentTrailRenderer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATormentTrailController_Statics::NewProp__trailPointList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATormentTrailController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATormentTrailController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATormentTrailController_Statics::ClassParams = {
		&ATormentTrailController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATormentTrailController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailController_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATormentTrailController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATormentTrailController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATormentTrailController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATormentTrailController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATormentTrailController, 3638121224);
	template<> THEEXECUTIONER_API UClass* StaticClass<ATormentTrailController>()
	{
		return ATormentTrailController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATormentTrailController(Z_Construct_UClass_ATormentTrailController, &ATormentTrailController::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("ATormentTrailController"), false, nullptr, nullptr, nullptr);

	void ATormentTrailController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__trailPointList(TEXT("_trailPointList"));

		const bool bIsValid = true
			&& Name__trailPointList == ClassReps[(int32)ENetFields_Private::_trailPointList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATormentTrailController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATormentTrailController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
