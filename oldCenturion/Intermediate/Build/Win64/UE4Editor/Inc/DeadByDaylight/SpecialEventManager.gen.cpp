// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpecialEventManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpecialEventManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedSpecialEventData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ESpecialEventStatus();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpecialEventsContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpecialEventManager::execGetCurrentSpecialEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_STRUCT_REF(FCombinedSpecialEventData,Z_Param_Out_outSpecialEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpecialEventManager::GetCurrentSpecialEvent(Z_Param_worldContextObject,Z_Param_Out_outSpecialEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpecialEventManager::execGetSpecialEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_eventId);
		P_GET_STRUCT_REF(FCombinedSpecialEventData,Z_Param_Out_outSpecialEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpecialEventManager::GetSpecialEvent(Z_Param_worldContextObject,Z_Param_eventId,Z_Param_Out_outSpecialEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpecialEventManager::execGetStatus)
	{
		P_GET_STRUCT_REF(FCombinedSpecialEventData,Z_Param_Out_specialEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESpecialEventStatus*)Z_Param__Result=USpecialEventManager::GetStatus(Z_Param_Out_specialEventData);
		P_NATIVE_END;
	}
	void USpecialEventManager::StaticRegisterNativesUSpecialEventManager()
	{
		UClass* Class = USpecialEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentSpecialEvent", &USpecialEventManager::execGetCurrentSpecialEvent },
			{ "GetSpecialEvent", &USpecialEventManager::execGetSpecialEvent },
			{ "GetStatus", &USpecialEventManager::execGetStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics
	{
		struct SpecialEventManager_eventGetCurrentSpecialEvent_Parms
		{
			const UObject* worldContextObject;
			FCombinedSpecialEventData outSpecialEventData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSpecialEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpecialEventManager_eventGetCurrentSpecialEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpecialEventManager_eventGetCurrentSpecialEvent_Parms), &Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_outSpecialEventData = { "outSpecialEventData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpecialEventManager_eventGetCurrentSpecialEvent_Parms, outSpecialEventData), Z_Construct_UScriptStruct_FCombinedSpecialEventData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpecialEventManager_eventGetCurrentSpecialEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_outSpecialEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpecialEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpecialEventManager, nullptr, "GetCurrentSpecialEvent", nullptr, nullptr, sizeof(SpecialEventManager_eventGetCurrentSpecialEvent_Parms), Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics
	{
		struct SpecialEventManager_eventGetSpecialEvent_Parms
		{
			UObject* worldContextObject;
			FName eventId;
			FCombinedSpecialEventData outSpecialEventData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outSpecialEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_eventId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpecialEventManager_eventGetSpecialEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpecialEventManager_eventGetSpecialEvent_Parms), &Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_outSpecialEventData = { "outSpecialEventData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpecialEventManager_eventGetSpecialEvent_Parms, outSpecialEventData), Z_Construct_UScriptStruct_FCombinedSpecialEventData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_eventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_eventId = { "eventId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpecialEventManager_eventGetSpecialEvent_Parms, eventId), METADATA_PARAMS(Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_eventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_eventId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpecialEventManager_eventGetSpecialEvent_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_outSpecialEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_eventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpecialEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpecialEventManager, nullptr, "GetSpecialEvent", nullptr, nullptr, sizeof(SpecialEventManager_eventGetSpecialEvent_Parms), Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics
	{
		struct SpecialEventManager_eventGetStatus_Parms
		{
			FCombinedSpecialEventData specialEventData;
			ESpecialEventStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specialEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_specialEventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpecialEventManager_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_ESpecialEventStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_specialEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_specialEventData = { "specialEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpecialEventManager_eventGetStatus_Parms, specialEventData), Z_Construct_UScriptStruct_FCombinedSpecialEventData, METADATA_PARAMS(Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_specialEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_specialEventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::NewProp_specialEventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpecialEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpecialEventManager, nullptr, "GetStatus", nullptr, nullptr, sizeof(SpecialEventManager_eventGetStatus_Parms), Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpecialEventManager_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpecialEventManager_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpecialEventManager_NoRegister()
	{
		return USpecialEventManager::StaticClass();
	}
	struct Z_Construct_UClass_USpecialEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__specialEventsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__specialEventsContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpecialEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpecialEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpecialEventManager_GetCurrentSpecialEvent, "GetCurrentSpecialEvent" }, // 3231234245
		{ &Z_Construct_UFunction_USpecialEventManager_GetSpecialEvent, "GetSpecialEvent" }, // 1327800266
		{ &Z_Construct_UFunction_USpecialEventManager_GetStatus, "GetStatus" }, // 1162003072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecialEventManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpecialEventManager.h" },
		{ "ModuleRelativePath", "Public/SpecialEventManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpecialEventManager_Statics::NewProp__specialEventsContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpecialEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpecialEventManager_Statics::NewProp__specialEventsContainer = { "_specialEventsContainer", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpecialEventManager, _specialEventsContainer), Z_Construct_UClass_USpecialEventsContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpecialEventManager_Statics::NewProp__specialEventsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpecialEventManager_Statics::NewProp__specialEventsContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpecialEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecialEventManager_Statics::NewProp__specialEventsContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpecialEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecialEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpecialEventManager_Statics::ClassParams = {
		&USpecialEventManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpecialEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpecialEventManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpecialEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpecialEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpecialEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpecialEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpecialEventManager, 3128260944);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USpecialEventManager>()
	{
		return USpecialEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpecialEventManager(Z_Construct_UClass_USpecialEventManager, &USpecialEventManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USpecialEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpecialEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
