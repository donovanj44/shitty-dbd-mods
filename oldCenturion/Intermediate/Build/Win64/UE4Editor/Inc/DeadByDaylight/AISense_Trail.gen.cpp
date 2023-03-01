// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AISense_Trail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Trail() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISense_Trail_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAISense_Trail();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITrailEvent();
// End Cross Module References
	DEFINE_FUNCTION(UAISense_Trail::execReportTrailEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObj);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_STRUCT(FGameplayTag,Z_Param_ignoreOnPerkTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAISense_Trail::ReportTrailEvent(Z_Param_worldContextObj,Z_Param_location,Z_Param_instigator,Z_Param_ignoreOnPerkTag,Z_Param_lifeTime);
		P_NATIVE_END;
	}
	void UAISense_Trail::StaticRegisterNativesUAISense_Trail()
	{
		UClass* Class = UAISense_Trail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportTrailEvent", &UAISense_Trail::execReportTrailEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics
	{
		struct AISense_Trail_eventReportTrailEvent_Parms
		{
			UObject* worldContextObj;
			FVector location;
			AActor* instigator;
			FGameplayTag ignoreOnPerkTag;
			float lifeTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ignoreOnPerkTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_lifeTime = { "lifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Trail_eventReportTrailEvent_Parms, lifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_ignoreOnPerkTag = { "ignoreOnPerkTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Trail_eventReportTrailEvent_Parms, ignoreOnPerkTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Trail_eventReportTrailEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Trail_eventReportTrailEvent_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_worldContextObj = { "worldContextObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISense_Trail_eventReportTrailEvent_Parms, worldContextObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_lifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_ignoreOnPerkTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::NewProp_worldContextObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AISense_Trail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Trail, nullptr, "ReportTrailEvent", nullptr, nullptr, sizeof(AISense_Trail_eventReportTrailEvent_Parms), Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Trail_NoRegister()
	{
		return UAISense_Trail::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Trail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Trail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Trail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Trail_ReportTrailEvent, "ReportTrailEvent" }, // 2682028113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Trail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISense_Trail.h" },
		{ "ModuleRelativePath", "Public/AISense_Trail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Trail_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/AISense_Trail.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Trail_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Trail, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Trail_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Trail_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Trail_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITrailEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Trail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Trail_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Trail_Statics::NewProp_Events_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Trail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Trail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Trail_Statics::ClassParams = {
		&UAISense_Trail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISense_Trail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Trail_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Trail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Trail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Trail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Trail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Trail, 2852072082);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAISense_Trail>()
	{
		return UAISense_Trail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Trail(Z_Construct_UClass_UAISense_Trail, &UAISense_Trail::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAISense_Trail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Trail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
