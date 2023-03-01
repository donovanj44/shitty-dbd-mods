// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/VomitStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVomitStateComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVomitStateComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UVomitStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ELinkedVomitState();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
// End Cross Module References
	DEFINE_FUNCTION(UVomitStateComponent::execgetVomitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELinkedVomitState*)Z_Param__Result=P_THIS->getVomitState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVomitStateComponent::execIsVomiting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVomiting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVomitStateComponent::execSetObjectState)
	{
		P_GET_OBJECT(UGameplayTagContainerComponent,Z_Param_objectState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectState(Z_Param_objectState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVomitStateComponent::execSetVomitState)
	{
		P_GET_ENUM(ELinkedVomitState,Z_Param_newVomitState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVomitState(ELinkedVomitState(Z_Param_newVomitState));
		P_NATIVE_END;
	}
	void UVomitStateComponent::StaticRegisterNativesUVomitStateComponent()
	{
		UClass* Class = UVomitStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getVomitState", &UVomitStateComponent::execgetVomitState },
			{ "IsVomiting", &UVomitStateComponent::execIsVomiting },
			{ "SetObjectState", &UVomitStateComponent::execSetObjectState },
			{ "SetVomitState", &UVomitStateComponent::execSetVomitState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics
	{
		struct VomitStateComponent_eventgetVomitState_Parms
		{
			ELinkedVomitState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VomitStateComponent_eventgetVomitState_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_ELinkedVomitState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VomitStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVomitStateComponent, nullptr, "getVomitState", nullptr, nullptr, sizeof(VomitStateComponent_eventgetVomitState_Parms), Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVomitStateComponent_getVomitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVomitStateComponent_getVomitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics
	{
		struct VomitStateComponent_eventIsVomiting_Parms
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
	void Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VomitStateComponent_eventIsVomiting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VomitStateComponent_eventIsVomiting_Parms), &Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VomitStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVomitStateComponent, nullptr, "IsVomiting", nullptr, nullptr, sizeof(VomitStateComponent_eventIsVomiting_Parms), Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVomitStateComponent_IsVomiting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVomitStateComponent_IsVomiting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics
	{
		struct VomitStateComponent_eventSetObjectState_Parms
		{
			UGameplayTagContainerComponent* objectState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_objectState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_objectState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::NewProp_objectState_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::NewProp_objectState = { "objectState", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VomitStateComponent_eventSetObjectState_Parms, objectState), Z_Construct_UClass_UGameplayTagContainerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::NewProp_objectState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::NewProp_objectState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::NewProp_objectState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VomitStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVomitStateComponent, nullptr, "SetObjectState", nullptr, nullptr, sizeof(VomitStateComponent_eventSetObjectState_Parms), Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVomitStateComponent_SetObjectState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVomitStateComponent_SetObjectState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics
	{
		struct VomitStateComponent_eventSetVomitState_Parms
		{
			ELinkedVomitState newVomitState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newVomitState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newVomitState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::NewProp_newVomitState = { "newVomitState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VomitStateComponent_eventSetVomitState_Parms, newVomitState), Z_Construct_UEnum_DeadByDaylight_ELinkedVomitState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::NewProp_newVomitState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::NewProp_newVomitState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::NewProp_newVomitState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VomitStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVomitStateComponent, nullptr, "SetVomitState", nullptr, nullptr, sizeof(VomitStateComponent_eventSetVomitState_Parms), Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVomitStateComponent_SetVomitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVomitStateComponent_SetVomitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVomitStateComponent_NoRegister()
	{
		return UVomitStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVomitStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCharging_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isCharging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVomitStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVomitStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVomitStateComponent_getVomitState, "getVomitState" }, // 476994313
		{ &Z_Construct_UFunction_UVomitStateComponent_IsVomiting, "IsVomiting" }, // 4233733081
		{ &Z_Construct_UFunction_UVomitStateComponent_SetObjectState, "SetObjectState" }, // 3770561743
		{ &Z_Construct_UFunction_UVomitStateComponent_SetVomitState, "SetVomitState" }, // 1793527889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVomitStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VomitStateComponent.h" },
		{ "ModuleRelativePath", "Public/VomitStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVomitStateComponent_Statics::NewProp__isCharging_MetaData[] = {
		{ "ModuleRelativePath", "Public/VomitStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVomitStateComponent_Statics::NewProp__isCharging = { "_isCharging", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVomitStateComponent, _isCharging), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UVomitStateComponent_Statics::NewProp__isCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVomitStateComponent_Statics::NewProp__isCharging_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVomitStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVomitStateComponent_Statics::NewProp__isCharging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVomitStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVomitStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVomitStateComponent_Statics::ClassParams = {
		&UVomitStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVomitStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVomitStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVomitStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVomitStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVomitStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVomitStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVomitStateComponent, 2445106444);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UVomitStateComponent>()
	{
		return UVomitStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVomitStateComponent(Z_Construct_UClass_UVomitStateComponent, &UVomitStateComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UVomitStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVomitStateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
