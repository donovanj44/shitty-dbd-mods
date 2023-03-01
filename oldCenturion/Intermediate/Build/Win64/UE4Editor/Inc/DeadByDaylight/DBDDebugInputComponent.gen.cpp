// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDDebugInputComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDDebugInputComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDebugInputComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDebugInputComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UDBDDebugInputComponent::execDBD_ItsAlive)
	{
		P_GET_UBOOL(Z_Param_aliveEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ItsAlive(Z_Param_aliveEnabled);
		P_NATIVE_END;
	}
	void UDBDDebugInputComponent::StaticRegisterNativesUDBDDebugInputComponent()
	{
		UClass* Class = UDBDDebugInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_ItsAlive", &UDBDDebugInputComponent::execDBD_ItsAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics
	{
		struct DBDDebugInputComponent_eventDBD_ItsAlive_Parms
		{
			bool aliveEnabled;
		};
		static void NewProp_aliveEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_aliveEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::NewProp_aliveEnabled_SetBit(void* Obj)
	{
		((DBDDebugInputComponent_eventDBD_ItsAlive_Parms*)Obj)->aliveEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::NewProp_aliveEnabled = { "aliveEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDDebugInputComponent_eventDBD_ItsAlive_Parms), &Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::NewProp_aliveEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::NewProp_aliveEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDDebugInputComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDDebugInputComponent, nullptr, "DBD_ItsAlive", nullptr, nullptr, sizeof(DBDDebugInputComponent_eventDBD_ItsAlive_Parms), Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDDebugInputComponent_NoRegister()
	{
		return UDBDDebugInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDBDDebugInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDDebugInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDDebugInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDDebugInputComponent_DBD_ItsAlive, "DBD_ItsAlive" }, // 2022942608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDDebugInputComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDDebugInputComponent.h" },
		{ "ModuleRelativePath", "Public/DBDDebugInputComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDDebugInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDDebugInputComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDDebugInputComponent_Statics::ClassParams = {
		&UDBDDebugInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDDebugInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDDebugInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDDebugInputComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDDebugInputComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDDebugInputComponent, 1725582273);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDDebugInputComponent>()
	{
		return UDBDDebugInputComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDDebugInputComponent(Z_Construct_UClass_UDBDDebugInputComponent, &UDBDDebugInputComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDDebugInputComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDDebugInputComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
