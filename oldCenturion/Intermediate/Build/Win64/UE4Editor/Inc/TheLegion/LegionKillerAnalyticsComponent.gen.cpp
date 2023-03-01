// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLegion/Public/LegionKillerAnalyticsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegionKillerAnalyticsComponent() {}
// Cross Module References
	THELEGION_API UClass* Z_Construct_UClass_ULegionKillerAnalyticsComponent_NoRegister();
	THELEGION_API UClass* Z_Construct_UClass_ULegionKillerAnalyticsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheLegion();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameEventDispatcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULegionKillerAnalyticsComponent::execSetGameEventDispatcher)
	{
		P_GET_OBJECT(UGameEventDispatcher,Z_Param_gameEventDispatcher);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameEventDispatcher(Z_Param_gameEventDispatcher);
		P_NATIVE_END;
	}
	void ULegionKillerAnalyticsComponent::StaticRegisterNativesULegionKillerAnalyticsComponent()
	{
		UClass* Class = ULegionKillerAnalyticsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGameEventDispatcher", &ULegionKillerAnalyticsComponent::execSetGameEventDispatcher },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics
	{
		struct LegionKillerAnalyticsComponent_eventSetGameEventDispatcher_Parms
		{
			UGameEventDispatcher* gameEventDispatcher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::NewProp_gameEventDispatcher = { "gameEventDispatcher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LegionKillerAnalyticsComponent_eventSetGameEventDispatcher_Parms, gameEventDispatcher), Z_Construct_UClass_UGameEventDispatcher_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::NewProp_gameEventDispatcher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LegionKillerAnalyticsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegionKillerAnalyticsComponent, nullptr, "SetGameEventDispatcher", nullptr, nullptr, sizeof(LegionKillerAnalyticsComponent_eventSetGameEventDispatcher_Parms), Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULegionKillerAnalyticsComponent_NoRegister()
	{
		return ULegionKillerAnalyticsComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLegion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULegionKillerAnalyticsComponent_SetGameEventDispatcher, "SetGameEventDispatcher" }, // 1760598049
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LegionKillerAnalyticsComponent.h" },
		{ "ModuleRelativePath", "Public/LegionKillerAnalyticsComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegionKillerAnalyticsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::ClassParams = {
		&ULegionKillerAnalyticsComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegionKillerAnalyticsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULegionKillerAnalyticsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULegionKillerAnalyticsComponent, 2859040838);
	template<> THELEGION_API UClass* StaticClass<ULegionKillerAnalyticsComponent>()
	{
		return ULegionKillerAnalyticsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULegionKillerAnalyticsComponent(Z_Construct_UClass_ULegionKillerAnalyticsComponent, &ULegionKillerAnalyticsComponent::StaticClass, TEXT("/Script/TheLegion"), TEXT("ULegionKillerAnalyticsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegionKillerAnalyticsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
