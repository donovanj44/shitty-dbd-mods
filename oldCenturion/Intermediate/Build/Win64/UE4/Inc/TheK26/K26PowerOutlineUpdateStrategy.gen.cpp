// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26PowerOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26PowerOutlineUpdateStrategy() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26PowerOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UK26PowerOutlineUpdateStrategy::execIsOutlineVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOutlineVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK26PowerOutlineUpdateStrategy::execSetOutlineVisibility)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlineVisibility(Z_Param_isActive);
		P_NATIVE_END;
	}
	void UK26PowerOutlineUpdateStrategy::StaticRegisterNativesUK26PowerOutlineUpdateStrategy()
	{
		UClass* Class = UK26PowerOutlineUpdateStrategy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsOutlineVisible", &UK26PowerOutlineUpdateStrategy::execIsOutlineVisible },
			{ "SetOutlineVisibility", &UK26PowerOutlineUpdateStrategy::execSetOutlineVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics
	{
		struct K26PowerOutlineUpdateStrategy_eventIsOutlineVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((K26PowerOutlineUpdateStrategy_eventIsOutlineVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K26PowerOutlineUpdateStrategy_eventIsOutlineVisible_Parms), &Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerOutlineUpdateStrategy, nullptr, "IsOutlineVisible", nullptr, nullptr, sizeof(K26PowerOutlineUpdateStrategy_eventIsOutlineVisible_Parms), Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics
	{
		struct K26PowerOutlineUpdateStrategy_eventSetOutlineVisibility_Parms
		{
			bool isActive;
		};
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((K26PowerOutlineUpdateStrategy_eventSetOutlineVisibility_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K26PowerOutlineUpdateStrategy_eventSetOutlineVisibility_Parms), &Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K26PowerOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK26PowerOutlineUpdateStrategy, nullptr, "SetOutlineVisibility", nullptr, nullptr, sizeof(K26PowerOutlineUpdateStrategy_eventSetOutlineVisibility_Parms), Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_NoRegister()
	{
		return UK26PowerOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOnlyVisibleForKiller_MetaData[];
#endif
		static void NewProp__isOnlyVisibleForKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOnlyVisibleForKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOutlineEnabled_MetaData[];
#endif
		static void NewProp__isOutlineEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOutlineEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__k26ProjectileOutlineColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__k26ProjectileOutlineColour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_IsOutlineVisible, "IsOutlineVisible" }, // 3604933962
		{ &Z_Construct_UFunction_UK26PowerOutlineUpdateStrategy_SetOutlineVisibility, "SetOutlineVisibility" }, // 2934650134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K26PowerOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/K26PowerOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOnlyVisibleForKiller_MetaData[] = {
		{ "Category", "K26PowerOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/K26PowerOutlineUpdateStrategy.h" },
	};
#endif
	void Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOnlyVisibleForKiller_SetBit(void* Obj)
	{
		((UK26PowerOutlineUpdateStrategy*)Obj)->_isOnlyVisibleForKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOnlyVisibleForKiller = { "_isOnlyVisibleForKiller", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26PowerOutlineUpdateStrategy), &Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOnlyVisibleForKiller_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOnlyVisibleForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOnlyVisibleForKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOutlineEnabled_MetaData[] = {
		{ "Category", "K26PowerOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/K26PowerOutlineUpdateStrategy.h" },
	};
#endif
	void Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOutlineEnabled_SetBit(void* Obj)
	{
		((UK26PowerOutlineUpdateStrategy*)Obj)->_isOutlineEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOutlineEnabled = { "_isOutlineEnabled", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK26PowerOutlineUpdateStrategy), &Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOutlineEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOutlineEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOutlineEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__k26ProjectileOutlineColour_MetaData[] = {
		{ "Category", "K26PowerOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/K26PowerOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__k26ProjectileOutlineColour = { "_k26ProjectileOutlineColour", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK26PowerOutlineUpdateStrategy, _k26ProjectileOutlineColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__k26ProjectileOutlineColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__k26ProjectileOutlineColour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOnlyVisibleForKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__isOutlineEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::NewProp__k26ProjectileOutlineColour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK26PowerOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::ClassParams = {
		&UK26PowerOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK26PowerOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK26PowerOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK26PowerOutlineUpdateStrategy, 3848723869);
	template<> THEK26_API UClass* StaticClass<UK26PowerOutlineUpdateStrategy>()
	{
		return UK26PowerOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK26PowerOutlineUpdateStrategy(Z_Construct_UClass_UK26PowerOutlineUpdateStrategy, &UK26PowerOutlineUpdateStrategy::StaticClass, TEXT("/Script/TheK26"), TEXT("UK26PowerOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK26PowerOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
