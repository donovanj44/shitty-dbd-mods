// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlasherStunnableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlasherStunnableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherStunnableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USlasherStunnableComponent();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStunnableComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(USlasherStunnableComponent::execServer_NotifyStunHasBeenProcessed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_NotifyStunHasBeenProcessed_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed = FName(TEXT("Server_NotifyStunHasBeenProcessed"));
	void USlasherStunnableComponent::Server_NotifyStunHasBeenProcessed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed),NULL);
	}
	void USlasherStunnableComponent::StaticRegisterNativesUSlasherStunnableComponent()
	{
		UClass* Class = USlasherStunnableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_NotifyStunHasBeenProcessed", &USlasherStunnableComponent::execServer_NotifyStunHasBeenProcessed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SlasherStunnableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlasherStunnableComponent, nullptr, "Server_NotifyStunHasBeenProcessed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlasherStunnableComponent_NoRegister()
	{
		return USlasherStunnableComponent::StaticClass();
	}
	struct Z_Construct_UClass_USlasherStunnableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlasherStunnableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStunnableComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlasherStunnableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlasherStunnableComponent_Server_NotifyStunHasBeenProcessed, "Server_NotifyStunHasBeenProcessed" }, // 1712295040
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlasherStunnableComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SlasherStunnableComponent.h" },
		{ "ModuleRelativePath", "Public/SlasherStunnableComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlasherStunnableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlasherStunnableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlasherStunnableComponent_Statics::ClassParams = {
		&USlasherStunnableComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlasherStunnableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlasherStunnableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlasherStunnableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlasherStunnableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlasherStunnableComponent, 1100913199);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USlasherStunnableComponent>()
	{
		return USlasherStunnableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlasherStunnableComponent(Z_Construct_UClass_USlasherStunnableComponent, &USlasherStunnableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USlasherStunnableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlasherStunnableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
