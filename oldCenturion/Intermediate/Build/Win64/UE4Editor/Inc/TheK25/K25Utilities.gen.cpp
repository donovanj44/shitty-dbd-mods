// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25Utilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25Utilities() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25Utilities_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25Utilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25ControlledProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Gateway_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Husk_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25Power_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_ALamentConfiguration_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UK25Utilities::execGetK25ControlledProjectile)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25ControlledProjectile**)Z_Param__Result=UK25Utilities::GetK25ControlledProjectile(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25Utilities::execGetK25Gateway)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25Gateway**)Z_Param__Result=UK25Utilities::GetK25Gateway(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25Utilities::execGetK25Husk)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25Husk**)Z_Param__Result=UK25Utilities::GetK25Husk(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25Utilities::execGetK25Power)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AK25Power**)Z_Param__Result=UK25Utilities::GetK25Power(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25Utilities::execGetLamentConfiguration)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALamentConfiguration**)Z_Param__Result=UK25Utilities::GetLamentConfiguration(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	void UK25Utilities::StaticRegisterNativesUK25Utilities()
	{
		UClass* Class = UK25Utilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetK25ControlledProjectile", &UK25Utilities::execGetK25ControlledProjectile },
			{ "GetK25Gateway", &UK25Utilities::execGetK25Gateway },
			{ "GetK25Husk", &UK25Utilities::execGetK25Husk },
			{ "GetK25Power", &UK25Utilities::execGetK25Power },
			{ "GetLamentConfiguration", &UK25Utilities::execGetLamentConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics
	{
		struct K25Utilities_eventGetK25ControlledProjectile_Parms
		{
			UObject* worldContextObject;
			AK25ControlledProjectile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25ControlledProjectile_Parms, ReturnValue), Z_Construct_UClass_AK25ControlledProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25ControlledProjectile_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Utilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25Utilities, nullptr, "GetK25ControlledProjectile", nullptr, nullptr, sizeof(K25Utilities_eventGetK25ControlledProjectile_Parms), Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics
	{
		struct K25Utilities_eventGetK25Gateway_Parms
		{
			UObject* worldContextObject;
			AK25Gateway* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25Gateway_Parms, ReturnValue), Z_Construct_UClass_AK25Gateway_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25Gateway_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Utilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25Utilities, nullptr, "GetK25Gateway", nullptr, nullptr, sizeof(K25Utilities_eventGetK25Gateway_Parms), Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25Utilities_GetK25Gateway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25Utilities_GetK25Gateway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics
	{
		struct K25Utilities_eventGetK25Husk_Parms
		{
			UObject* worldContextObject;
			AK25Husk* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25Husk_Parms, ReturnValue), Z_Construct_UClass_AK25Husk_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25Husk_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Utilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25Utilities, nullptr, "GetK25Husk", nullptr, nullptr, sizeof(K25Utilities_eventGetK25Husk_Parms), Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25Utilities_GetK25Husk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25Utilities_GetK25Husk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics
	{
		struct K25Utilities_eventGetK25Power_Parms
		{
			UObject* worldContextObject;
			AK25Power* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25Power_Parms, ReturnValue), Z_Construct_UClass_AK25Power_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetK25Power_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Utilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25Utilities, nullptr, "GetK25Power", nullptr, nullptr, sizeof(K25Utilities_eventGetK25Power_Parms), Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25Utilities_GetK25Power()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25Utilities_GetK25Power_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics
	{
		struct K25Utilities_eventGetLamentConfiguration_Parms
		{
			UObject* worldContextObject;
			ALamentConfiguration* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetLamentConfiguration_Parms, ReturnValue), Z_Construct_UClass_ALamentConfiguration_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25Utilities_eventGetLamentConfiguration_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25Utilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25Utilities, nullptr, "GetLamentConfiguration", nullptr, nullptr, sizeof(K25Utilities_eventGetLamentConfiguration_Parms), Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25Utilities_NoRegister()
	{
		return UK25Utilities::StaticClass();
	}
	struct Z_Construct_UClass_UK25Utilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25Utilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25Utilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25Utilities_GetK25ControlledProjectile, "GetK25ControlledProjectile" }, // 1374976239
		{ &Z_Construct_UFunction_UK25Utilities_GetK25Gateway, "GetK25Gateway" }, // 2440081603
		{ &Z_Construct_UFunction_UK25Utilities_GetK25Husk, "GetK25Husk" }, // 3314580224
		{ &Z_Construct_UFunction_UK25Utilities_GetK25Power, "GetK25Power" }, // 2818079162
		{ &Z_Construct_UFunction_UK25Utilities_GetLamentConfiguration, "GetLamentConfiguration" }, // 1742349722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25Utilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "K25Utilities.h" },
		{ "ModuleRelativePath", "Public/K25Utilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25Utilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25Utilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25Utilities_Statics::ClassParams = {
		&UK25Utilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK25Utilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25Utilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25Utilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25Utilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25Utilities, 3786484466);
	template<> THEK25_API UClass* StaticClass<UK25Utilities>()
	{
		return UK25Utilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25Utilities(Z_Construct_UClass_UK25Utilities, &UK25Utilities::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25Utilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25Utilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
