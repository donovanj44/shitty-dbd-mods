// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbUtilities() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbUtilities_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UBloodOrbUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	THEONI_API UClass* Z_Construct_UClass_ABloodOrb_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBloodOrbUtilities::execGetAllBloodOrbs)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ABloodOrb*>*)Z_Param__Result=UBloodOrbUtilities::GetAllBloodOrbs(Z_Param_worldContextObject);
		P_NATIVE_END;
	}
	void UBloodOrbUtilities::StaticRegisterNativesUBloodOrbUtilities()
	{
		UClass* Class = UBloodOrbUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllBloodOrbs", &UBloodOrbUtilities::execGetAllBloodOrbs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics
	{
		struct BloodOrbUtilities_eventGetAllBloodOrbs_Parms
		{
			const UObject* worldContextObject;
			TArray<ABloodOrb*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbUtilities_eventGetAllBloodOrbs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloodOrb_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BloodOrbUtilities_eventGetAllBloodOrbs_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodOrbUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBloodOrbUtilities, nullptr, "GetAllBloodOrbs", nullptr, nullptr, sizeof(BloodOrbUtilities_eventGetAllBloodOrbs_Parms), Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBloodOrbUtilities_NoRegister()
	{
		return UBloodOrbUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UBloodOrbUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodOrbUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBloodOrbUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBloodOrbUtilities_GetAllBloodOrbs, "GetAllBloodOrbs" }, // 2682875028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodOrbUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BloodOrbUtilities.h" },
		{ "ModuleRelativePath", "Public/BloodOrbUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodOrbUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodOrbUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodOrbUtilities_Statics::ClassParams = {
		&UBloodOrbUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBloodOrbUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodOrbUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodOrbUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodOrbUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodOrbUtilities, 3746784001);
	template<> THEONI_API UClass* StaticClass<UBloodOrbUtilities>()
	{
		return UBloodOrbUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodOrbUtilities(Z_Construct_UClass_UBloodOrbUtilities, &UBloodOrbUtilities::StaticClass, TEXT("/Script/TheOni"), TEXT("UBloodOrbUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodOrbUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
