// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MoriableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoriableComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMoriableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMoriableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMoriableComponent::execOnMoriFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoriFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoriableComponent::execOnMoriUpdateStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMoriUpdateStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoriableComponent::execOnRep_MoriInteractions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MoriInteractions();
		P_NATIVE_END;
	}
	void UMoriableComponent::StaticRegisterNativesUMoriableComponent()
	{
		UClass* Class = UMoriableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMoriFinished", &UMoriableComponent::execOnMoriFinished },
			{ "OnMoriUpdateStart", &UMoriableComponent::execOnMoriUpdateStart },
			{ "OnRep_MoriInteractions", &UMoriableComponent::execOnRep_MoriInteractions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoriableComponent_OnMoriFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoriableComponent_OnMoriFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoriableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoriableComponent_OnMoriFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoriableComponent, nullptr, "OnMoriFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoriableComponent_OnMoriFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoriableComponent_OnMoriFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoriableComponent_OnMoriFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoriableComponent_OnMoriFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoriableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoriableComponent, nullptr, "OnMoriUpdateStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoriableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoriableComponent, nullptr, "OnRep_MoriInteractions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMoriableComponent_NoRegister()
	{
		return UMoriableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMoriableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__moriInteractions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__moriInteractions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__moriInteractions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoriableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoriableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoriableComponent_OnMoriFinished, "OnMoriFinished" }, // 2173471177
		{ &Z_Construct_UFunction_UMoriableComponent_OnMoriUpdateStart, "OnMoriUpdateStart" }, // 1088480667
		{ &Z_Construct_UFunction_UMoriableComponent_OnRep_MoriInteractions, "OnRep_MoriInteractions" }, // 1402477951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoriableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoriableComponent.h" },
		{ "ModuleRelativePath", "Public/MoriableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoriableComponent_Statics::NewProp__moriInteractions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoriableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoriableComponent_Statics::NewProp__moriInteractions = { "_moriInteractions", "OnRep_MoriInteractions", (EPropertyFlags)0x0020088100002028, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoriableComponent, _moriInteractions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoriableComponent_Statics::NewProp__moriInteractions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoriableComponent_Statics::NewProp__moriInteractions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMoriableComponent_Statics::NewProp__moriInteractions_Inner = { "_moriInteractions", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoriableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoriableComponent_Statics::NewProp__moriInteractions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoriableComponent_Statics::NewProp__moriInteractions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoriableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoriableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoriableComponent_Statics::ClassParams = {
		&UMoriableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoriableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoriableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMoriableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoriableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoriableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoriableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoriableComponent, 22585548);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMoriableComponent>()
	{
		return UMoriableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoriableComponent(Z_Construct_UClass_UMoriableComponent, &UMoriableComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMoriableComponent"), false, nullptr, nullptr, nullptr);

	void UMoriableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__moriInteractions(TEXT("_moriInteractions"));

		const bool bIsValid = true
			&& Name__moriInteractions == ClassReps[(int32)ENetFields_Private::_moriInteractions].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMoriableComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoriableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
