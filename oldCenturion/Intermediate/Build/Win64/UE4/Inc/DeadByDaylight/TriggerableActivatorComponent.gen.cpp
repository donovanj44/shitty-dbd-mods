// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TriggerableActivatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerableActivatorComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTriggerableActivatorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTriggerableActivatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTriggerableWorldObjectComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerableActivatorComponent::execAuthority_OnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UTriggerableActivatorComponent::StaticRegisterNativesUTriggerableActivatorComponent()
	{
		UClass* Class = UTriggerableActivatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnLevelReadyToPlay", &UTriggerableActivatorComponent::execAuthority_OnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerableActivatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerableActivatorComponent, nullptr, "Authority_OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerableActivatorComponent_NoRegister()
	{
		return UTriggerableActivatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerableActivatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__triggerables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__triggerables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__triggerables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__triggerableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__triggerableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerableActivatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerableActivatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerableActivatorComponent_Authority_OnLevelReadyToPlay, "Authority_OnLevelReadyToPlay" }, // 1794074271
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerableActivatorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerableActivatorComponent.h" },
		{ "ModuleRelativePath", "Public/TriggerableActivatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerables_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerableActivatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerables = { "_triggerables", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerableActivatorComponent, _triggerables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerables_Inner = { "_triggerables", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerableWorldObjectComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerableClass_MetaData[] = {
		{ "Category", "TriggerableActivatorComponent" },
		{ "ModuleRelativePath", "Public/TriggerableActivatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerableClass = { "_triggerableClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerableActivatorComponent, _triggerableClass), Z_Construct_UClass_UTriggerableWorldObjectComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerableClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerableActivatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerableActivatorComponent_Statics::NewProp__triggerableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerableActivatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerableActivatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerableActivatorComponent_Statics::ClassParams = {
		&UTriggerableActivatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerableActivatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerableActivatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerableActivatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerableActivatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerableActivatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerableActivatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerableActivatorComponent, 4030757913);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTriggerableActivatorComponent>()
	{
		return UTriggerableActivatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerableActivatorComponent(Z_Construct_UClass_UTriggerableActivatorComponent, &UTriggerableActivatorComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTriggerableActivatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerableActivatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
