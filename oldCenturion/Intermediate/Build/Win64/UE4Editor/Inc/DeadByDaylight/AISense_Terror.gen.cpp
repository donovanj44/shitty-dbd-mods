// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AISense_Terror.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Terror() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISense_Terror_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISense_Terror();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITerrorEvent();
// End Cross Module References
	DEFINE_FUNCTION(UAISense_Terror::execReportTerrorEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObj);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(UTerrorRadiusEmitterComponent,Z_Param_terrorEmitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAISense_Terror::ReportTerrorEvent(Z_Param_worldContextObj,Z_Param_location,Z_Param_instigator,Z_Param_terrorEmitter);
		P_NATIVE_END;
	}
	void UAISense_Terror::StaticRegisterNativesUAISense_Terror()
	{
		UClass* Class = UAISense_Terror::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportTerrorEvent", &UAISense_Terror::execReportTerrorEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics
	{
		struct AISense_Terror_eventReportTerrorEvent_Parms
		{
			UObject* worldContextObj;
			FVector location;
			AActor* instigator;
			UTerrorRadiusEmitterComponent* terrorEmitter;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_terrorEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_terrorEmitter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_terrorEmitter_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_terrorEmitter = { "terrorEmitter", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Terror_eventReportTerrorEvent_Parms, terrorEmitter), Z_Construct_UClass_UTerrorRadiusEmitterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_terrorEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_terrorEmitter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Terror_eventReportTerrorEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Terror_eventReportTerrorEvent_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_worldContextObj = { "worldContextObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Terror_eventReportTerrorEvent_Parms, worldContextObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_terrorEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::NewProp_worldContextObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AISense_Terror.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Terror, nullptr, "ReportTerrorEvent", nullptr, nullptr, sizeof(AISense_Terror_eventReportTerrorEvent_Parms), Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Terror_NoRegister()
	{
		return UAISense_Terror::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Terror_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__events;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__events_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Terror_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Terror_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Terror_ReportTerrorEvent, "ReportTerrorEvent" }, // 532613301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Terror_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISense_Terror.h" },
		{ "ModuleRelativePath", "Public/AISense_Terror.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Terror_Statics::NewProp__events_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISense_Terror.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Terror_Statics::NewProp__events = { "_events", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Terror, _events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Terror_Statics::NewProp__events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Terror_Statics::NewProp__events_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Terror_Statics::NewProp__events_Inner = { "_events", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITerrorEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Terror_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Terror_Statics::NewProp__events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Terror_Statics::NewProp__events_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Terror_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Terror>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Terror_Statics::ClassParams = {
		&UAISense_Terror::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISense_Terror_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Terror_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Terror_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Terror_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Terror()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Terror_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Terror, 4015935011);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAISense_Terror>()
	{
		return UAISense_Terror::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Terror(Z_Construct_UClass_UAISense_Terror, &UAISense_Terror::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAISense_Terror"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Terror);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
