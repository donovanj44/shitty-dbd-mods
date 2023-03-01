// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/BaseModifierCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseModifierCondition() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierCondition_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierCondition();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Competence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UModifierSubjectProvider_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseModifierCondition::execGetOwningActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseModifierCondition::execInitializeSubjectProviderClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSubjectProviderClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseModifierCondition::execOnRep_OwningModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OwningModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseModifierCondition::execOnRep_SubjectProviderClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SubjectProviderClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseModifierCondition::execSetSubjectProviderClass)
	{
		P_GET_OBJECT(UClass,Z_Param_subjectProviderClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubjectProviderClass(Z_Param_subjectProviderClass);
		P_NATIVE_END;
	}
	static FName NAME_UBaseModifierCondition_InitializeSubjectProviderClass = FName(TEXT("InitializeSubjectProviderClass"));
	void UBaseModifierCondition::InitializeSubjectProviderClass()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseModifierCondition_InitializeSubjectProviderClass),NULL);
	}
	void UBaseModifierCondition::StaticRegisterNativesUBaseModifierCondition()
	{
		UClass* Class = UBaseModifierCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningActor", &UBaseModifierCondition::execGetOwningActor },
			{ "InitializeSubjectProviderClass", &UBaseModifierCondition::execInitializeSubjectProviderClass },
			{ "OnRep_OwningModifier", &UBaseModifierCondition::execOnRep_OwningModifier },
			{ "OnRep_SubjectProviderClass", &UBaseModifierCondition::execOnRep_SubjectProviderClass },
			{ "SetSubjectProviderClass", &UBaseModifierCondition::execSetSubjectProviderClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics
	{
		struct BaseModifierCondition_eventGetOwningActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseModifierCondition_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierCondition, nullptr, "GetOwningActor", nullptr, nullptr, sizeof(BaseModifierCondition_eventGetOwningActor_Parms), Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierCondition, nullptr, "InitializeSubjectProviderClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierCondition, nullptr, "OnRep_OwningModifier", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierCondition, nullptr, "OnRep_SubjectProviderClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics
	{
		struct BaseModifierCondition_eventSetSubjectProviderClass_Parms
		{
			UClass* subjectProviderClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_subjectProviderClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::NewProp_subjectProviderClass = { "subjectProviderClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseModifierCondition_eventSetSubjectProviderClass_Parms, subjectProviderClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::NewProp_subjectProviderClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierCondition, nullptr, "SetSubjectProviderClass", nullptr, nullptr, sizeof(BaseModifierCondition_eventSetSubjectProviderClass_Parms), Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseModifierCondition_NoRegister()
	{
		return UBaseModifierCondition::StaticClass();
	}
	struct Z_Construct_UClass_UBaseModifierCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__subjectProviderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__subjectProviderClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__subjectProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__subjectProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__owningModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__owningModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseModifierCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseModifierCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseModifierCondition_GetOwningActor, "GetOwningActor" }, // 3481038521
		{ &Z_Construct_UFunction_UBaseModifierCondition_InitializeSubjectProviderClass, "InitializeSubjectProviderClass" }, // 3821149936
		{ &Z_Construct_UFunction_UBaseModifierCondition_OnRep_OwningModifier, "OnRep_OwningModifier" }, // 2977235038
		{ &Z_Construct_UFunction_UBaseModifierCondition_OnRep_SubjectProviderClass, "OnRep_SubjectProviderClass" }, // 2949599397
		{ &Z_Construct_UFunction_UBaseModifierCondition_SetSubjectProviderClass, "SetSubjectProviderClass" }, // 3023027718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseModifierCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProviderClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProviderClass = { "_subjectProviderClass", "OnRep_SubjectProviderClass", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseModifierCondition, _subjectProviderClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProviderClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProvider = { "_subjectProvider", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseModifierCondition, _subjectProvider), Z_Construct_UClass_UModifierSubjectProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__owningModifier_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseModifierCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__owningModifier = { "_owningModifier", "OnRep_OwningModifier", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseModifierCondition, _owningModifier), Z_Construct_UClass_UBaseModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__owningModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__owningModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseModifierCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProviderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__subjectProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseModifierCondition_Statics::NewProp__owningModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseModifierCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseModifierCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseModifierCondition_Statics::ClassParams = {
		&UBaseModifierCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseModifierCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierCondition_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseModifierCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseModifierCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseModifierCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseModifierCondition, 756080242);
	template<> COMPETENCE_API UClass* StaticClass<UBaseModifierCondition>()
	{
		return UBaseModifierCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseModifierCondition(Z_Construct_UClass_UBaseModifierCondition, &UBaseModifierCondition::StaticClass, TEXT("/Script/Competence"), TEXT("UBaseModifierCondition"), false, nullptr, nullptr, nullptr);

	void UBaseModifierCondition::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__owningModifier(TEXT("_owningModifier"));
		static const FName Name__subjectProviderClass(TEXT("_subjectProviderClass"));

		const bool bIsValid = true
			&& Name__owningModifier == ClassReps[(int32)ENetFields_Private::_owningModifier].Property->GetFName()
			&& Name__subjectProviderClass == ClassReps[(int32)ENetFields_Private::_subjectProviderClass].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseModifierCondition"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseModifierCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
