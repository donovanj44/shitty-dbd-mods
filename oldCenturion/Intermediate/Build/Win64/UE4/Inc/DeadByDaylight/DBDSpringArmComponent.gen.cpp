// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDSpringArmComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDSpringArmComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDSpringArmComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDSpringArmComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDBDSpringArmComponent::execClearIgnoreActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearIgnoreActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDSpringArmComponent::execIgnoreActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bShouldIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IgnoreActor(Z_Param_Actor,Z_Param_bShouldIgnore);
		P_NATIVE_END;
	}
	void UDBDSpringArmComponent::StaticRegisterNativesUDBDSpringArmComponent()
	{
		UClass* Class = UDBDSpringArmComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearIgnoreActors", &UDBDSpringArmComponent::execClearIgnoreActors },
			{ "IgnoreActor", &UDBDSpringArmComponent::execIgnoreActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDSpringArmComponent, nullptr, "ClearIgnoreActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics
	{
		struct DBDSpringArmComponent_eventIgnoreActor_Parms
		{
			AActor* Actor;
			bool bShouldIgnore;
		};
		static void NewProp_bShouldIgnore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::NewProp_bShouldIgnore_SetBit(void* Obj)
	{
		((DBDSpringArmComponent_eventIgnoreActor_Parms*)Obj)->bShouldIgnore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::NewProp_bShouldIgnore = { "bShouldIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDSpringArmComponent_eventIgnoreActor_Parms), &Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::NewProp_bShouldIgnore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDSpringArmComponent_eventIgnoreActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::NewProp_bShouldIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDSpringArmComponent, nullptr, "IgnoreActor", nullptr, nullptr, sizeof(DBDSpringArmComponent_eventIgnoreActor_Parms), Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDSpringArmComponent_NoRegister()
	{
		return UDBDSpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDSpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_IgnoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTraceMarkers_MetaData[];
#endif
		static void NewProp_bDrawDebugTraceMarkers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTraceMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDistanceLagSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDistanceLagSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceCameraLag_MetaData[];
#endif
		static void NewProp_bEnableDistanceCameraLag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceCameraLag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArmMinLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetArmMinLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponenwiseCameraLagSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponenwiseCameraLagSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableComponentwiseCameraLag_MetaData[];
#endif
		static void NewProp_bEnableComponentwiseCameraLag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableComponentwiseCameraLag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDSpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDSpringArmComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDSpringArmComponent_ClearIgnoreActors, "ClearIgnoreActors" }, // 2710664275
		{ &Z_Construct_UFunction_UDBDSpringArmComponent_IgnoreActor, "IgnoreActor" }, // 773058876
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "DBDSpringArmComponent.h" },
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0024080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDSpringArmComponent, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_IgnoreActors_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bDrawDebugTraceMarkers_MetaData[] = {
		{ "Category", "DBDSpringArmComponent" },
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bDrawDebugTraceMarkers_SetBit(void* Obj)
	{
		((UDBDSpringArmComponent*)Obj)->bDrawDebugTraceMarkers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bDrawDebugTraceMarkers = { "bDrawDebugTraceMarkers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDBDSpringArmComponent), &Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bDrawDebugTraceMarkers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bDrawDebugTraceMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bDrawDebugTraceMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_CameraDistanceLagSpeed_MetaData[] = {
		{ "Category", "DBDSpringArmComponent" },
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_CameraDistanceLagSpeed = { "CameraDistanceLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDSpringArmComponent, CameraDistanceLagSpeed), METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_CameraDistanceLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_CameraDistanceLagSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableDistanceCameraLag_MetaData[] = {
		{ "Category", "DBDSpringArmComponent" },
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableDistanceCameraLag_SetBit(void* Obj)
	{
		((UDBDSpringArmComponent*)Obj)->bEnableDistanceCameraLag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableDistanceCameraLag = { "bEnableDistanceCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDBDSpringArmComponent), &Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableDistanceCameraLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableDistanceCameraLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableDistanceCameraLag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_TargetArmMinLength_MetaData[] = {
		{ "Category", "DBDSpringArmComponent" },
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_TargetArmMinLength = { "TargetArmMinLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDSpringArmComponent, TargetArmMinLength), METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_TargetArmMinLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_TargetArmMinLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_ComponenwiseCameraLagSpeed_MetaData[] = {
		{ "Category", "DBDSpringArmComponent" },
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_ComponenwiseCameraLagSpeed = { "ComponenwiseCameraLagSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDSpringArmComponent, ComponenwiseCameraLagSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_ComponenwiseCameraLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_ComponenwiseCameraLagSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableComponentwiseCameraLag_MetaData[] = {
		{ "Category", "DBDSpringArmComponent" },
		{ "ModuleRelativePath", "Public/DBDSpringArmComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableComponentwiseCameraLag_SetBit(void* Obj)
	{
		((UDBDSpringArmComponent*)Obj)->bEnableComponentwiseCameraLag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableComponentwiseCameraLag = { "bEnableComponentwiseCameraLag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDBDSpringArmComponent), &Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableComponentwiseCameraLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableComponentwiseCameraLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableComponentwiseCameraLag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDSpringArmComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_IgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_IgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bDrawDebugTraceMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_CameraDistanceLagSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableDistanceCameraLag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_TargetArmMinLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_ComponenwiseCameraLagSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDSpringArmComponent_Statics::NewProp_bEnableComponentwiseCameraLag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDSpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDSpringArmComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDSpringArmComponent_Statics::ClassParams = {
		&UDBDSpringArmComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDSpringArmComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDSpringArmComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDSpringArmComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDSpringArmComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDSpringArmComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDSpringArmComponent, 6402639);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDSpringArmComponent>()
	{
		return UDBDSpringArmComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDSpringArmComponent(Z_Construct_UClass_UDBDSpringArmComponent, &UDBDSpringArmComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDSpringArmComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDSpringArmComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
