// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemPerformedInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemPerformedInteraction() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemPerformedInteraction_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemPerformedInteraction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IItemPerformedInteraction::execIsInteractionPerformedWithItem)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractionPerformedWithItem_Implementation(Z_Param_instigator);
		P_NATIVE_END;
	}
	bool IItemPerformedInteraction::IsInteractionPerformedWithItem(ADBDPlayer* instigator)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInteractionPerformedWithItem instead.");
		ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms Parms;
		return Parms.ReturnValue;
	}
	void UItemPerformedInteraction::StaticRegisterNativesUItemPerformedInteraction()
	{
		UClass* Class = UItemPerformedInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInteractionPerformedWithItem", &IItemPerformedInteraction::execIsInteractionPerformedWithItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms), &Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms, instigator), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::NewProp_instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemPerformedInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemPerformedInteraction, nullptr, "IsInteractionPerformedWithItem", nullptr, nullptr, sizeof(ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms), Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemPerformedInteraction_NoRegister()
	{
		return UItemPerformedInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UItemPerformedInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemPerformedInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemPerformedInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemPerformedInteraction_IsInteractionPerformedWithItem, "IsInteractionPerformedWithItem" }, // 2573760469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemPerformedInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemPerformedInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemPerformedInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemPerformedInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemPerformedInteraction_Statics::ClassParams = {
		&UItemPerformedInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItemPerformedInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemPerformedInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemPerformedInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemPerformedInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemPerformedInteraction, 1084393723);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UItemPerformedInteraction>()
	{
		return UItemPerformedInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemPerformedInteraction(Z_Construct_UClass_UItemPerformedInteraction, &UItemPerformedInteraction::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UItemPerformedInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemPerformedInteraction);
	static FName NAME_UItemPerformedInteraction_IsInteractionPerformedWithItem = FName(TEXT("IsInteractionPerformedWithItem"));
	bool IItemPerformedInteraction::Execute_IsInteractionPerformedWithItem(UObject* O, ADBDPlayer* instigator)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemPerformedInteraction::StaticClass()));
		ItemPerformedInteraction_eventIsInteractionPerformedWithItem_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemPerformedInteraction_IsInteractionPerformedWithItem);
		if (Func)
		{
			Parms.instigator=instigator;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IItemPerformedInteraction*)(O->GetNativeInterfaceAddress(UItemPerformedInteraction::StaticClass())))
		{
			Parms.ReturnValue = I->IsInteractionPerformedWithItem_Implementation(instigator);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
