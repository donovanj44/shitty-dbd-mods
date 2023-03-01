// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlinkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlinkComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlinkComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBlinkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventBlinkComponentOnBlinkStateChangedDelegate_Parms
		{
			bool isInBlinkingState;
		};
		static void NewProp_isInBlinkingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInBlinkingState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::NewProp_isInBlinkingState_SetBit(void* Obj)
	{
		((_Script_DeadByDaylight_eventBlinkComponentOnBlinkStateChangedDelegate_Parms*)Obj)->isInBlinkingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::NewProp_isInBlinkingState = { "isInBlinkingState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DeadByDaylight_eventBlinkComponentOnBlinkStateChangedDelegate_Parms), &Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::NewProp_isInBlinkingState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::NewProp_isInBlinkingState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventBlinkComponentOnBlinkStateChangedDelegate_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBlinkComponent::execIsOwnerInBlinkingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOwnerInBlinkingState();
		P_NATIVE_END;
	}
	void UBlinkComponent::StaticRegisterNativesUBlinkComponent()
	{
		UClass* Class = UBlinkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsOwnerInBlinkingState", &UBlinkComponent::execIsOwnerInBlinkingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics
	{
		struct BlinkComponent_eventIsOwnerInBlinkingState_Parms
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
	void Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlinkComponent_eventIsOwnerInBlinkingState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlinkComponent_eventIsOwnerInBlinkingState_Parms), &Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlinkComponent, nullptr, "IsOwnerInBlinkingState", nullptr, nullptr, sizeof(BlinkComponent_eventIsOwnerInBlinkingState_Parms), Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlinkComponent_NoRegister()
	{
		return UBlinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInBlinkingState_MetaData[];
#endif
		static void NewProp__isInBlinkingState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInBlinkingState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlinkStateChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkStateChangedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlinkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlinkComponent_IsOwnerInBlinkingState, "IsOwnerInBlinkingState" }, // 2665450015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlinkComponent.h" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp__isInBlinkingState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BlinkComponent" },
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBlinkComponent_Statics::NewProp__isInBlinkingState_SetBit(void* Obj)
	{
		((UBlinkComponent*)Obj)->_isInBlinkingState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp__isInBlinkingState = { "_isInBlinkingState", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlinkComponent), &Z_Construct_UClass_UBlinkComponent_Statics::NewProp__isInBlinkingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp__isInBlinkingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp__isInBlinkingState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStateChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStateChangedDelegate = { "OnBlinkStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBlinkComponent, OnBlinkStateChangedDelegate), Z_Construct_UDelegateFunction_DeadByDaylight_BlinkComponentOnBlinkStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStateChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStateChangedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlinkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp__isInBlinkingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlinkComponent_Statics::NewProp_OnBlinkStateChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlinkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlinkComponent_Statics::ClassParams = {
		&UBlinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlinkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlinkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlinkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlinkComponent, 3467944895);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBlinkComponent>()
	{
		return UBlinkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlinkComponent(Z_Construct_UClass_UBlinkComponent, &UBlinkComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBlinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
