// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ContextualQuestComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualQuestComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UContextualQuestComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UContextualQuestComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo();
// End Cross Module References
	DEFINE_FUNCTION(UContextualQuestComponent::execOnRep_SpecialBehaviourObjectsInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SpecialBehaviourObjectsInfo();
		P_NATIVE_END;
	}
	void UContextualQuestComponent::StaticRegisterNativesUContextualQuestComponent()
	{
		UClass* Class = UContextualQuestComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_SpecialBehaviourObjectsInfo", &UContextualQuestComponent::execOnRep_SpecialBehaviourObjectsInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualQuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualQuestComponent, nullptr, "OnRep_SpecialBehaviourObjectsInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UContextualQuestComponent_NoRegister()
	{
		return UContextualQuestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UContextualQuestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInitialized_MetaData[];
#endif
		static void NewProp__isInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__specialBehaviourObjectsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__specialBehaviourObjectsInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__specialBehaviourObjectsInfo_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualQuestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualQuestComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualQuestComponent_OnRep_SpecialBehaviourObjectsInfo, "OnRep_SpecialBehaviourObjectsInfo" }, // 3421317055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualQuestComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualQuestComponent.h" },
		{ "ModuleRelativePath", "Public/ContextualQuestComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__isInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualQuestComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__isInitialized_SetBit(void* Obj)
	{
		((UContextualQuestComponent*)Obj)->_isInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__isInitialized = { "_isInitialized", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContextualQuestComponent), &Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__isInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__isInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__isInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__specialBehaviourObjectsInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualQuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__specialBehaviourObjectsInfo = { "_specialBehaviourObjectsInfo", "OnRep_SpecialBehaviourObjectsInfo", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UContextualQuestComponent, _specialBehaviourObjectsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__specialBehaviourObjectsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__specialBehaviourObjectsInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__specialBehaviourObjectsInfo_Inner = { "_specialBehaviourObjectsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpecialBehaviourObjectsInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualQuestComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__isInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__specialBehaviourObjectsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualQuestComponent_Statics::NewProp__specialBehaviourObjectsInfo_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualQuestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualQuestComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContextualQuestComponent_Statics::ClassParams = {
		&UContextualQuestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContextualQuestComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualQuestComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualQuestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualQuestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualQuestComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContextualQuestComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContextualQuestComponent, 2690932291);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UContextualQuestComponent>()
	{
		return UContextualQuestComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContextualQuestComponent(Z_Construct_UClass_UContextualQuestComponent, &UContextualQuestComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UContextualQuestComponent"), false, nullptr, nullptr, nullptr);

	void UContextualQuestComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__specialBehaviourObjectsInfo(TEXT("_specialBehaviourObjectsInfo"));

		const bool bIsValid = true
			&& Name__specialBehaviourObjectsInfo == ClassReps[(int32)ENetFields_Private::_specialBehaviourObjectsInfo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UContextualQuestComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualQuestComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
