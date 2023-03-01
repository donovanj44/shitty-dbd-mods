// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CombinedSpecialEventDataUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombinedSpecialEventDataUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCombinedSpecialEventDataUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCombinedSpecialEventDataUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCombinedSpecialEventData();
// End Cross Module References
	DEFINE_FUNCTION(UCombinedSpecialEventDataUtilities::execGetObjectOutlineColour)
	{
		P_GET_STRUCT_REF(FCombinedSpecialEventData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UCombinedSpecialEventDataUtilities::GetObjectOutlineColour(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCombinedSpecialEventDataUtilities::execGetSpecialMusicState)
	{
		P_GET_STRUCT_REF(FCombinedSpecialEventData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UCombinedSpecialEventDataUtilities::GetSpecialMusicState(Z_Param_Out_data);
		P_NATIVE_END;
	}
	void UCombinedSpecialEventDataUtilities::StaticRegisterNativesUCombinedSpecialEventDataUtilities()
	{
		UClass* Class = UCombinedSpecialEventDataUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectOutlineColour", &UCombinedSpecialEventDataUtilities::execGetObjectOutlineColour },
			{ "GetSpecialMusicState", &UCombinedSpecialEventDataUtilities::execGetSpecialMusicState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics
	{
		struct CombinedSpecialEventDataUtilities_eventGetObjectOutlineColour_Parms
		{
			FCombinedSpecialEventData data;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombinedSpecialEventDataUtilities_eventGetObjectOutlineColour_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombinedSpecialEventDataUtilities_eventGetObjectOutlineColour_Parms, data), Z_Construct_UScriptStruct_FCombinedSpecialEventData, METADATA_PARAMS(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombinedSpecialEventDataUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombinedSpecialEventDataUtilities, nullptr, "GetObjectOutlineColour", nullptr, nullptr, sizeof(CombinedSpecialEventDataUtilities_eventGetObjectOutlineColour_Parms), Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics
	{
		struct CombinedSpecialEventDataUtilities_eventGetSpecialMusicState_Parms
		{
			FCombinedSpecialEventData data;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombinedSpecialEventDataUtilities_eventGetSpecialMusicState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombinedSpecialEventDataUtilities_eventGetSpecialMusicState_Parms, data), Z_Construct_UScriptStruct_FCombinedSpecialEventData, METADATA_PARAMS(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombinedSpecialEventDataUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombinedSpecialEventDataUtilities, nullptr, "GetSpecialMusicState", nullptr, nullptr, sizeof(CombinedSpecialEventDataUtilities_eventGetSpecialMusicState_Parms), Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCombinedSpecialEventDataUtilities_NoRegister()
	{
		return UCombinedSpecialEventDataUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetObjectOutlineColour, "GetObjectOutlineColour" }, // 3815514343
		{ &Z_Construct_UFunction_UCombinedSpecialEventDataUtilities_GetSpecialMusicState, "GetSpecialMusicState" }, // 2900648710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CombinedSpecialEventDataUtilities.h" },
		{ "ModuleRelativePath", "Public/CombinedSpecialEventDataUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombinedSpecialEventDataUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::ClassParams = {
		&UCombinedSpecialEventDataUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombinedSpecialEventDataUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCombinedSpecialEventDataUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCombinedSpecialEventDataUtilities, 1184171382);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCombinedSpecialEventDataUtilities>()
	{
		return UCombinedSpecialEventDataUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCombinedSpecialEventDataUtilities(Z_Construct_UClass_UCombinedSpecialEventDataUtilities, &UCombinedSpecialEventDataUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCombinedSpecialEventDataUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombinedSpecialEventDataUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
