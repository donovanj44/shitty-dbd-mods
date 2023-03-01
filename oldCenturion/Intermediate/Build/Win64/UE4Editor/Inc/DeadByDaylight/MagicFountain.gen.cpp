// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MagicFountain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicFountain() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMagicFountain_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMagicFountain();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTION_API UClass* Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMagicFountain::execIsCorrupted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCorrupted_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMagicFountain_IsCorrupted = FName(TEXT("IsCorrupted"));
	bool AMagicFountain::IsCorrupted() const
	{
		MagicFountain_eventIsCorrupted_Parms Parms;
		const_cast<AMagicFountain*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMagicFountain_IsCorrupted),&Parms);
		return !!Parms.ReturnValue;
	}
	void AMagicFountain::StaticRegisterNativesAMagicFountain()
	{
		UClass* Class = AMagicFountain::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCorrupted", &AMagicFountain::execIsCorrupted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MagicFountain_eventIsCorrupted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagicFountain_eventIsCorrupted_Parms), &Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MagicFountain.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagicFountain, nullptr, "IsCorrupted", nullptr, nullptr, sizeof(MagicFountain_eventIsCorrupted_Parms), Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagicFountain_IsCorrupted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagicFountain_IsCorrupted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagicFountain_NoRegister()
	{
		return AMagicFountain::StaticClass();
	}
	struct Z_Construct_UClass_AMagicFountain_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInteractionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInteractionOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagicFountain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagicFountain_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagicFountain_IsCorrupted, "IsCorrupted" }, // 1302982550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicFountain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagicFountain.h" },
		{ "ModuleRelativePath", "Public/MagicFountain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagicFountain_Statics::NewProp_AIInteractionOffset_MetaData[] = {
		{ "Category", "MagicFountain" },
		{ "ModuleRelativePath", "Public/MagicFountain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMagicFountain_Statics::NewProp_AIInteractionOffset = { "AIInteractionOffset", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagicFountain, AIInteractionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMagicFountain_Statics::NewProp_AIInteractionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicFountain_Statics::NewProp_AIInteractionOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicFountain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicFountain_Statics::NewProp_AIInteractionOffset,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMagicFountain_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIInteractableTargetInterface_NoRegister, (int32)VTABLE_OFFSET(AMagicFountain, IAIInteractableTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagicFountain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicFountain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagicFountain_Statics::ClassParams = {
		&AMagicFountain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagicFountain_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagicFountain_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagicFountain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagicFountain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagicFountain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagicFountain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagicFountain, 4143316362);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AMagicFountain>()
	{
		return AMagicFountain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagicFountain(Z_Construct_UClass_AMagicFountain, &AMagicFountain::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AMagicFountain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicFountain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
