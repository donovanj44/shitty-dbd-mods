// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNightmare/Public/DreamInducerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamInducerComponent() {}
// Cross Module References
	THENIGHTMARE_API UClass* Z_Construct_UClass_UDreamInducerComponent_NoRegister();
	THENIGHTMARE_API UClass* Z_Construct_UClass_UDreamInducerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheNightmare();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDreamInducerComponent::execAuthority_OnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnLevelReadyToPlay();
		P_NATIVE_END;
	}
	void UDreamInducerComponent::StaticRegisterNativesUDreamInducerComponent()
	{
		UClass* Class = UDreamInducerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnLevelReadyToPlay", &UDreamInducerComponent::execAuthority_OnLevelReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DreamInducerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDreamInducerComponent, nullptr, "Authority_OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDreamInducerComponent_NoRegister()
	{
		return UDreamInducerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDreamInducerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorDreamworldClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__generatorDreamworldClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDreamInducerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNightmare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDreamInducerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDreamInducerComponent_Authority_OnLevelReadyToPlay, "Authority_OnLevelReadyToPlay" }, // 1910880774
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamInducerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DreamInducerComponent.h" },
		{ "ModuleRelativePath", "Public/DreamInducerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDreamInducerComponent_Statics::NewProp__generatorDreamworldClass_MetaData[] = {
		{ "Category", "DreamInducerComponent" },
		{ "ModuleRelativePath", "Public/DreamInducerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDreamInducerComponent_Statics::NewProp__generatorDreamworldClass = { "_generatorDreamworldClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDreamInducerComponent, _generatorDreamworldClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDreamInducerComponent_Statics::NewProp__generatorDreamworldClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamInducerComponent_Statics::NewProp__generatorDreamworldClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDreamInducerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDreamInducerComponent_Statics::NewProp__generatorDreamworldClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDreamInducerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDreamInducerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDreamInducerComponent_Statics::ClassParams = {
		&UDreamInducerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDreamInducerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDreamInducerComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDreamInducerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDreamInducerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDreamInducerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDreamInducerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDreamInducerComponent, 956074525);
	template<> THENIGHTMARE_API UClass* StaticClass<UDreamInducerComponent>()
	{
		return UDreamInducerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDreamInducerComponent(Z_Construct_UClass_UDreamInducerComponent, &UDreamInducerComponent::StaticClass, TEXT("/Script/TheNightmare"), TEXT("UDreamInducerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDreamInducerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
