// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/HookSurvivorDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHookSurvivorDefinition() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UHookSurvivorDefinition_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UHookSurvivorDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMeatHook_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHookSurvivorDefinition::execGetMeatHook)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMeatHook**)Z_Param__Result=P_THIS->GetMeatHook();
		P_NATIVE_END;
	}
	void UHookSurvivorDefinition::StaticRegisterNativesUHookSurvivorDefinition()
	{
		UClass* Class = UHookSurvivorDefinition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeatHook", &UHookSurvivorDefinition::execGetMeatHook },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics
	{
		struct HookSurvivorDefinition_eventGetMeatHook_Parms
		{
			AMeatHook* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookSurvivorDefinition_eventGetMeatHook_Parms, ReturnValue), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookSurvivorDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookSurvivorDefinition, nullptr, "GetMeatHook", nullptr, nullptr, sizeof(HookSurvivorDefinition_eventGetMeatHook_Parms), Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHookSurvivorDefinition_NoRegister()
	{
		return UHookSurvivorDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UHookSurvivorDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorBeingHooked_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorBeingHooked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHookSurvivorDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHookSurvivorDefinition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHookSurvivorDefinition_GetMeatHook, "GetMeatHook" }, // 743673307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHookSurvivorDefinition_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HookSurvivorDefinition.h" },
		{ "ModuleRelativePath", "Public/HookSurvivorDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHookSurvivorDefinition_Statics::NewProp__survivorBeingHooked_MetaData[] = {
		{ "Category", "HookSurvivorDefinition" },
		{ "ModuleRelativePath", "Public/HookSurvivorDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHookSurvivorDefinition_Statics::NewProp__survivorBeingHooked = { "_survivorBeingHooked", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHookSurvivorDefinition, _survivorBeingHooked), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHookSurvivorDefinition_Statics::NewProp__survivorBeingHooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHookSurvivorDefinition_Statics::NewProp__survivorBeingHooked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHookSurvivorDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHookSurvivorDefinition_Statics::NewProp__survivorBeingHooked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHookSurvivorDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHookSurvivorDefinition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHookSurvivorDefinition_Statics::ClassParams = {
		&UHookSurvivorDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHookSurvivorDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHookSurvivorDefinition_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHookSurvivorDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHookSurvivorDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHookSurvivorDefinition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHookSurvivorDefinition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHookSurvivorDefinition, 3920989911);
	template<> DBDINTERACTION_API UClass* StaticClass<UHookSurvivorDefinition>()
	{
		return UHookSurvivorDefinition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHookSurvivorDefinition(Z_Construct_UClass_UHookSurvivorDefinition, &UHookSurvivorDefinition::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UHookSurvivorDefinition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHookSurvivorDefinition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
