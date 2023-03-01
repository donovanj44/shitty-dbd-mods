// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TheGhostUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheGhostUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTheGhostUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTheGhostUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTheGhostUtilities::execIsKillerStealth)
	{
		P_GET_OBJECT(AActor,Z_Param_killer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTheGhostUtilities::IsKillerStealth(Z_Param_killer);
		P_NATIVE_END;
	}
	void UTheGhostUtilities::StaticRegisterNativesUTheGhostUtilities()
	{
		UClass* Class = UTheGhostUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsKillerStealth", &UTheGhostUtilities::execIsKillerStealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics
	{
		struct TheGhostUtilities_eventIsKillerStealth_Parms
		{
			AActor* killer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TheGhostUtilities_eventIsKillerStealth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TheGhostUtilities_eventIsKillerStealth_Parms), &Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TheGhostUtilities_eventIsKillerStealth_Parms, killer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TheGhostUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTheGhostUtilities, nullptr, "IsKillerStealth", nullptr, nullptr, sizeof(TheGhostUtilities_eventIsKillerStealth_Parms), Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTheGhostUtilities_NoRegister()
	{
		return UTheGhostUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UTheGhostUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheGhostUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTheGhostUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTheGhostUtilities_IsKillerStealth, "IsKillerStealth" }, // 1495103194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheGhostUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TheGhostUtilities.h" },
		{ "ModuleRelativePath", "Public/TheGhostUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheGhostUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheGhostUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheGhostUtilities_Statics::ClassParams = {
		&UTheGhostUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTheGhostUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheGhostUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheGhostUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheGhostUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheGhostUtilities, 3003218761);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTheGhostUtilities>()
	{
		return UTheGhostUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheGhostUtilities(Z_Construct_UClass_UTheGhostUtilities, &UTheGhostUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTheGhostUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheGhostUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
