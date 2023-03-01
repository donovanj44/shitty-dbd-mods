// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDTunableUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTunableUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTunableUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTunableUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UDBDTunableUtilities::execGetEndGameTunableValue)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_valueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDTunableUtilities::GetEndGameTunableValue(Z_Param_worldContextObject,Z_Param_valueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTunableUtilities::execGetSlasherTunableValue)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_valueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDTunableUtilities::GetSlasherTunableValue(Z_Param_worldContextObject,Z_Param_valueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTunableUtilities::execGetTunableRowHandleValue)
	{
		P_GET_STRUCT_REF(FDBDTunableRowHandle,Z_Param_Out_rowHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDTunableUtilities::GetTunableRowHandleValue(Z_Param_Out_rowHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTunableUtilities::execGetTunableValue)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_valueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDBDTunableUtilities::GetTunableValue(Z_Param_worldContextObject,Z_Param_valueName);
		P_NATIVE_END;
	}
	void UDBDTunableUtilities::StaticRegisterNativesUDBDTunableUtilities()
	{
		UClass* Class = UDBDTunableUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndGameTunableValue", &UDBDTunableUtilities::execGetEndGameTunableValue },
			{ "GetSlasherTunableValue", &UDBDTunableUtilities::execGetSlasherTunableValue },
			{ "GetTunableRowHandleValue", &UDBDTunableUtilities::execGetTunableRowHandleValue },
			{ "GetTunableValue", &UDBDTunableUtilities::execGetTunableValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics
	{
		struct DBDTunableUtilities_eventGetEndGameTunableValue_Parms
		{
			UObject* worldContextObject;
			FName valueName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_valueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetEndGameTunableValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::NewProp_valueName = { "valueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetEndGameTunableValue_Parms, valueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetEndGameTunableValue_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::NewProp_valueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTunableUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTunableUtilities, nullptr, "GetEndGameTunableValue", nullptr, nullptr, sizeof(DBDTunableUtilities_eventGetEndGameTunableValue_Parms), Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics
	{
		struct DBDTunableUtilities_eventGetSlasherTunableValue_Parms
		{
			UObject* worldContextObject;
			FName valueName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_valueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetSlasherTunableValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::NewProp_valueName = { "valueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetSlasherTunableValue_Parms, valueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetSlasherTunableValue_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::NewProp_valueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTunableUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTunableUtilities, nullptr, "GetSlasherTunableValue", nullptr, nullptr, sizeof(DBDTunableUtilities_eventGetSlasherTunableValue_Parms), Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics
	{
		struct DBDTunableUtilities_eventGetTunableRowHandleValue_Parms
		{
			FDBDTunableRowHandle rowHandle;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rowHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rowHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetTunableRowHandleValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::NewProp_rowHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::NewProp_rowHandle = { "rowHandle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetTunableRowHandleValue_Parms, rowHandle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::NewProp_rowHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::NewProp_rowHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::NewProp_rowHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTunableUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTunableUtilities, nullptr, "GetTunableRowHandleValue", nullptr, nullptr, sizeof(DBDTunableUtilities_eventGetTunableRowHandleValue_Parms), Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics
	{
		struct DBDTunableUtilities_eventGetTunableValue_Parms
		{
			const UObject* worldContextObject;
			FName valueName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_valueName;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetTunableValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_valueName = { "valueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetTunableValue_Parms, valueName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTunableUtilities_eventGetTunableValue_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_valueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTunableUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTunableUtilities, nullptr, "GetTunableValue", nullptr, nullptr, sizeof(DBDTunableUtilities_eventGetTunableValue_Parms), Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDTunableUtilities_NoRegister()
	{
		return UDBDTunableUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTunableUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTunableUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDTunableUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDTunableUtilities_GetEndGameTunableValue, "GetEndGameTunableValue" }, // 1892292842
		{ &Z_Construct_UFunction_UDBDTunableUtilities_GetSlasherTunableValue, "GetSlasherTunableValue" }, // 203144228
		{ &Z_Construct_UFunction_UDBDTunableUtilities_GetTunableRowHandleValue, "GetTunableRowHandleValue" }, // 1191470433
		{ &Z_Construct_UFunction_UDBDTunableUtilities_GetTunableValue, "GetTunableValue" }, // 2996560596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTunableUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDTunableUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDTunableUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTunableUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTunableUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTunableUtilities_Statics::ClassParams = {
		&UDBDTunableUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDTunableUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTunableUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTunableUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTunableUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTunableUtilities, 2579873790);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDTunableUtilities>()
	{
		return UDBDTunableUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTunableUtilities(Z_Construct_UClass_UDBDTunableUtilities, &UDBDTunableUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDTunableUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTunableUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
