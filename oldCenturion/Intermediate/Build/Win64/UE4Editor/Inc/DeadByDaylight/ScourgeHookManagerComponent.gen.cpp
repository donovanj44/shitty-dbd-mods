// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScourgeHookManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScourgeHookManagerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScourgeHookManagerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScourgeHookManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMeatHook_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScourgeHookManagerComponent::execOnRep_ScourgeHooks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ScourgeHooks();
		P_NATIVE_END;
	}
	void UScourgeHookManagerComponent::StaticRegisterNativesUScourgeHookManagerComponent()
	{
		UClass* Class = UScourgeHookManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ScourgeHooks", &UScourgeHookManagerComponent::execOnRep_ScourgeHooks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScourgeHookManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScourgeHookManagerComponent, nullptr, "OnRep_ScourgeHooks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScourgeHookManagerComponent_NoRegister()
	{
		return UScourgeHookManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScourgeHookManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scourgeHooks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__scourgeHooks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__scourgeHooks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScourgeHookManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScourgeHookManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScourgeHookManagerComponent_OnRep_ScourgeHooks, "OnRep_ScourgeHooks" }, // 630122336
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScourgeHookManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScourgeHookManagerComponent.h" },
		{ "ModuleRelativePath", "Public/ScourgeHookManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScourgeHookManagerComponent_Statics::NewProp__scourgeHooks_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScourgeHookManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScourgeHookManagerComponent_Statics::NewProp__scourgeHooks = { "_scourgeHooks", "OnRep_ScourgeHooks", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScourgeHookManagerComponent, _scourgeHooks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScourgeHookManagerComponent_Statics::NewProp__scourgeHooks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScourgeHookManagerComponent_Statics::NewProp__scourgeHooks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScourgeHookManagerComponent_Statics::NewProp__scourgeHooks_Inner = { "_scourgeHooks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScourgeHookManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScourgeHookManagerComponent_Statics::NewProp__scourgeHooks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScourgeHookManagerComponent_Statics::NewProp__scourgeHooks_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScourgeHookManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScourgeHookManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScourgeHookManagerComponent_Statics::ClassParams = {
		&UScourgeHookManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScourgeHookManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScourgeHookManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScourgeHookManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScourgeHookManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScourgeHookManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScourgeHookManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScourgeHookManagerComponent, 2611491505);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UScourgeHookManagerComponent>()
	{
		return UScourgeHookManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScourgeHookManagerComponent(Z_Construct_UClass_UScourgeHookManagerComponent, &UScourgeHookManagerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UScourgeHookManagerComponent"), false, nullptr, nullptr, nullptr);

	void UScourgeHookManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__scourgeHooks(TEXT("_scourgeHooks"));

		const bool bIsValid = true
			&& Name__scourgeHooks == ClassReps[(int32)ENetFields_Private::_scourgeHooks].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UScourgeHookManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScourgeHookManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
