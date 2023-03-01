// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/BaseModifierContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseModifierContainer() {}
// Cross Module References
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierContainer_NoRegister();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierContainer();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Competence();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData();
	COMPETENCE_API UClass* Z_Construct_UClass_UConditionReceiver_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseModifierContainer::execCreateAndSetEventDrivenCondition)
	{
		P_GET_OBJECT(UClass,Z_Param_conditionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEventDrivenModifierCondition**)Z_Param__Result=P_THIS->CreateAndSetEventDrivenCondition(Z_Param_conditionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseModifierContainer::execIsApplicable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsApplicable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseModifierContainer::execOnRep_EventDrivenConditionData_Internal)
	{
		P_GET_STRUCT_REF(FModifierReplicatedEventConditionData,Z_Param_Out_oldReplicatedCondition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_EventDrivenConditionData_Internal(Z_Param_Out_oldReplicatedCondition);
		P_NATIVE_END;
	}
	static FName NAME_UBaseModifierContainer_Authority_OnInstantiateModifierConditions = FName(TEXT("Authority_OnInstantiateModifierConditions"));
	void UBaseModifierContainer::Authority_OnInstantiateModifierConditions()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseModifierContainer_Authority_OnInstantiateModifierConditions),NULL);
	}
	void UBaseModifierContainer::StaticRegisterNativesUBaseModifierContainer()
	{
		UClass* Class = UBaseModifierContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndSetEventDrivenCondition", &UBaseModifierContainer::execCreateAndSetEventDrivenCondition },
			{ "IsApplicable", &UBaseModifierContainer::execIsApplicable },
			{ "OnRep_EventDrivenConditionData_Internal", &UBaseModifierContainer::execOnRep_EventDrivenConditionData_Internal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierContainer, nullptr, "Authority_OnInstantiateModifierConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics
	{
		struct BaseModifierContainer_eventCreateAndSetEventDrivenCondition_Parms
		{
			TSubclassOf<UEventDrivenModifierCondition>  conditionType;
			UEventDrivenModifierCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_conditionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseModifierContainer_eventCreateAndSetEventDrivenCondition_Parms, ReturnValue), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::NewProp_conditionType = { "conditionType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseModifierContainer_eventCreateAndSetEventDrivenCondition_Parms, conditionType), Z_Construct_UClass_UEventDrivenModifierCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::NewProp_conditionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierContainer, nullptr, "CreateAndSetEventDrivenCondition", nullptr, nullptr, sizeof(BaseModifierContainer_eventCreateAndSetEventDrivenCondition_Parms), Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics
	{
		struct BaseModifierContainer_eventIsApplicable_Parms
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
	void Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseModifierContainer_eventIsApplicable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseModifierContainer_eventIsApplicable_Parms), &Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierContainer, nullptr, "IsApplicable", nullptr, nullptr, sizeof(BaseModifierContainer_eventIsApplicable_Parms), Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierContainer_IsApplicable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierContainer_IsApplicable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics
	{
		struct BaseModifierContainer_eventOnRep_EventDrivenConditionData_Internal_Parms
		{
			FModifierReplicatedEventConditionData oldReplicatedCondition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldReplicatedCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_oldReplicatedCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::NewProp_oldReplicatedCondition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::NewProp_oldReplicatedCondition = { "oldReplicatedCondition", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseModifierContainer_eventOnRep_EventDrivenConditionData_Internal_Parms, oldReplicatedCondition), Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::NewProp_oldReplicatedCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::NewProp_oldReplicatedCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::NewProp_oldReplicatedCondition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseModifierContainer, nullptr, "OnRep_EventDrivenConditionData_Internal", nullptr, nullptr, sizeof(BaseModifierContainer_eventOnRep_EventDrivenConditionData_Internal_Parms), Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseModifierContainer_NoRegister()
	{
		return UBaseModifierContainer::StaticClass();
	}
	struct Z_Construct_UClass_UBaseModifierContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__eventDrivenConditionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__eventDrivenConditionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseModifierContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseModifierContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseModifierContainer_Authority_OnInstantiateModifierConditions, "Authority_OnInstantiateModifierConditions" }, // 609289731
		{ &Z_Construct_UFunction_UBaseModifierContainer_CreateAndSetEventDrivenCondition, "CreateAndSetEventDrivenCondition" }, // 2046698286
		{ &Z_Construct_UFunction_UBaseModifierContainer_IsApplicable, "IsApplicable" }, // 3643742831
		{ &Z_Construct_UFunction_UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal, "OnRep_EventDrivenConditionData_Internal" }, // 574320278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseModifierContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseModifierContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__eventDrivenConditionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__eventDrivenConditionData = { "_eventDrivenConditionData", "OnRep_EventDrivenConditionData_Internal", (EPropertyFlags)0x0040008100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseModifierContainer, _eventDrivenConditionData), Z_Construct_UScriptStruct_FModifierReplicatedEventConditionData, METADATA_PARAMS(Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__eventDrivenConditionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__eventDrivenConditionData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__id_MetaData[] = {
		{ "Category", "BaseModifierContainer" },
		{ "ModuleRelativePath", "Public/BaseModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__id = { "_id", nullptr, (EPropertyFlags)0x0020080000002034, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseModifierContainer, _id), METADATA_PARAMS(Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseModifierContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__eventDrivenConditionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseModifierContainer_Statics::NewProp__id,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseModifierContainer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConditionReceiver_NoRegister, (int32)VTABLE_OFFSET(UBaseModifierContainer, IConditionReceiver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseModifierContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseModifierContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseModifierContainer_Statics::ClassParams = {
		&UBaseModifierContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseModifierContainer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierContainer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseModifierContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseModifierContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseModifierContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseModifierContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseModifierContainer, 3291300283);
	template<> COMPETENCE_API UClass* StaticClass<UBaseModifierContainer>()
	{
		return UBaseModifierContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseModifierContainer(Z_Construct_UClass_UBaseModifierContainer, &UBaseModifierContainer::StaticClass, TEXT("/Script/Competence"), TEXT("UBaseModifierContainer"), false, nullptr, nullptr, nullptr);

	void UBaseModifierContainer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__id(TEXT("_id"));
		static const FName Name__eventDrivenConditionData(TEXT("_eventDrivenConditionData"));

		const bool bIsValid = true
			&& Name__id == ClassReps[(int32)ENetFields_Private::_id].Property->GetFName()
			&& Name__eventDrivenConditionData == ClassReps[(int32)ENetFields_Private::_eventDrivenConditionData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseModifierContainer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseModifierContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
