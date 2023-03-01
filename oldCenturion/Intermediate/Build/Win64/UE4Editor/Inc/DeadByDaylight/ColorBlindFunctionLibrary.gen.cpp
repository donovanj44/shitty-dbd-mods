// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ColorBlindFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorBlindFunctionLibrary() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UColorBlindFunctionLibrary_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UColorBlindFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UColorBlindFunctionLibrary::execCallOnColorBlindSettingsChange)
	{
		P_GET_OBJECT(AActor,Z_Param_callingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UColorBlindFunctionLibrary::CallOnColorBlindSettingsChange(Z_Param_callingActor);
		P_NATIVE_END;
	}
	void UColorBlindFunctionLibrary::StaticRegisterNativesUColorBlindFunctionLibrary()
	{
		UClass* Class = UColorBlindFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallOnColorBlindSettingsChange", &UColorBlindFunctionLibrary::execCallOnColorBlindSettingsChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics
	{
		struct ColorBlindFunctionLibrary_eventCallOnColorBlindSettingsChange_Parms
		{
			AActor* callingActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_callingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::NewProp_callingActor = { "callingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorBlindFunctionLibrary_eventCallOnColorBlindSettingsChange_Parms, callingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::NewProp_callingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ColorBlindFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UColorBlindFunctionLibrary, nullptr, "CallOnColorBlindSettingsChange", nullptr, nullptr, sizeof(ColorBlindFunctionLibrary_eventCallOnColorBlindSettingsChange_Parms), Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UColorBlindFunctionLibrary_NoRegister()
	{
		return UColorBlindFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UColorBlindFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UColorBlindFunctionLibrary_CallOnColorBlindSettingsChange, "CallOnColorBlindSettingsChange" }, // 192228562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ColorBlindFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ColorBlindFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UColorBlindFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::ClassParams = {
		&UColorBlindFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UColorBlindFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UColorBlindFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UColorBlindFunctionLibrary, 2607496855);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UColorBlindFunctionLibrary>()
	{
		return UColorBlindFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UColorBlindFunctionLibrary(Z_Construct_UClass_UColorBlindFunctionLibrary, &UColorBlindFunctionLibrary::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UColorBlindFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UColorBlindFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
