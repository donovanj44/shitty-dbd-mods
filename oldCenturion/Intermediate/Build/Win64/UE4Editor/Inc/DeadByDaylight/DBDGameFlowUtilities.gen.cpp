// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGameFlowUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGameFlowUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameFlowUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameFlowUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EUIFlowEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent();
// End Cross Module References
	DEFINE_FUNCTION(UDBDGameFlowUtilities::execTriggerUIFlowEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_ENUM(EUIFlowEvent,Z_Param_uiFlowEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameFlowUtilities::TriggerUIFlowEvent(Z_Param_worldContextObject,EUIFlowEvent(Z_Param_uiFlowEvent));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameFlowUtilities::execTriggerWorldFlowEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_ENUM(EWorldFlowEvent,Z_Param_worldFlowEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDBDGameFlowUtilities::TriggerWorldFlowEvent(Z_Param_worldContextObject,EWorldFlowEvent(Z_Param_worldFlowEvent));
		P_NATIVE_END;
	}
	void UDBDGameFlowUtilities::StaticRegisterNativesUDBDGameFlowUtilities()
	{
		UClass* Class = UDBDGameFlowUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerUIFlowEvent", &UDBDGameFlowUtilities::execTriggerUIFlowEvent },
			{ "TriggerWorldFlowEvent", &UDBDGameFlowUtilities::execTriggerWorldFlowEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics
	{
		struct DBDGameFlowUtilities_eventTriggerUIFlowEvent_Parms
		{
			UObject* worldContextObject;
			EUIFlowEvent uiFlowEvent;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_uiFlowEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_uiFlowEvent_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::NewProp_uiFlowEvent = { "uiFlowEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameFlowUtilities_eventTriggerUIFlowEvent_Parms, uiFlowEvent), Z_Construct_UEnum_DeadByDaylight_EUIFlowEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::NewProp_uiFlowEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameFlowUtilities_eventTriggerUIFlowEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::NewProp_uiFlowEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::NewProp_uiFlowEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameFlowUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameFlowUtilities, nullptr, "TriggerUIFlowEvent", nullptr, nullptr, sizeof(DBDGameFlowUtilities_eventTriggerUIFlowEvent_Parms), Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics
	{
		struct DBDGameFlowUtilities_eventTriggerWorldFlowEvent_Parms
		{
			UObject* worldContextObject;
			EWorldFlowEvent worldFlowEvent;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_worldFlowEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_worldFlowEvent_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::NewProp_worldFlowEvent = { "worldFlowEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameFlowUtilities_eventTriggerWorldFlowEvent_Parms, worldFlowEvent), Z_Construct_UEnum_DeadByDaylight_EWorldFlowEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::NewProp_worldFlowEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameFlowUtilities_eventTriggerWorldFlowEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::NewProp_worldFlowEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::NewProp_worldFlowEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameFlowUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameFlowUtilities, nullptr, "TriggerWorldFlowEvent", nullptr, nullptr, sizeof(DBDGameFlowUtilities_eventTriggerWorldFlowEvent_Parms), Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDGameFlowUtilities_NoRegister()
	{
		return UDBDGameFlowUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDGameFlowUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDGameFlowUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDGameFlowUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerUIFlowEvent, "TriggerUIFlowEvent" }, // 2839424514
		{ &Z_Construct_UFunction_UDBDGameFlowUtilities_TriggerWorldFlowEvent, "TriggerWorldFlowEvent" }, // 288363767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameFlowUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDGameFlowUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDGameFlowUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDGameFlowUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDGameFlowUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDGameFlowUtilities_Statics::ClassParams = {
		&UDBDGameFlowUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDGameFlowUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameFlowUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDGameFlowUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDGameFlowUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDGameFlowUtilities, 1646416335);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDGameFlowUtilities>()
	{
		return UDBDGameFlowUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDGameFlowUtilities(Z_Construct_UClass_UDBDGameFlowUtilities, &UDBDGameFlowUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDGameFlowUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDGameFlowUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
