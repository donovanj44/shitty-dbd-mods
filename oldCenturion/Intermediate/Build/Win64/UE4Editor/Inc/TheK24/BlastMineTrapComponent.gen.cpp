// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/BlastMineTrapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlastMineTrapComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UBlastMineTrapComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UBlastMineTrapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	DEFINE_FUNCTION(UBlastMineTrapComponent::execOnRep_IsTrapActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsTrapActive();
		P_NATIVE_END;
	}
	void UBlastMineTrapComponent::StaticRegisterNativesUBlastMineTrapComponent()
	{
		UClass* Class = UBlastMineTrapComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsTrapActive", &UBlastMineTrapComponent::execOnRep_IsTrapActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlastMineTrapComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlastMineTrapComponent, nullptr, "OnRep_IsTrapActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlastMineTrapComponent_NoRegister()
	{
		return UBlastMineTrapComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlastMineTrapComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTrapActive_MetaData[];
#endif
		static void NewProp__isTrapActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTrapActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlastMineTrapComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlastMineTrapComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlastMineTrapComponent_OnRep_IsTrapActive, "OnRep_IsTrapActive" }, // 2376850521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMineTrapComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlastMineTrapComponent.h" },
		{ "ModuleRelativePath", "Public/BlastMineTrapComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlastMineTrapComponent_Statics::NewProp__isTrapActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlastMineTrapComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBlastMineTrapComponent_Statics::NewProp__isTrapActive_SetBit(void* Obj)
	{
		((UBlastMineTrapComponent*)Obj)->_isTrapActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlastMineTrapComponent_Statics::NewProp__isTrapActive = { "_isTrapActive", "OnRep_IsTrapActive", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBlastMineTrapComponent), &Z_Construct_UClass_UBlastMineTrapComponent_Statics::NewProp__isTrapActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlastMineTrapComponent_Statics::NewProp__isTrapActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMineTrapComponent_Statics::NewProp__isTrapActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlastMineTrapComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlastMineTrapComponent_Statics::NewProp__isTrapActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlastMineTrapComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlastMineTrapComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlastMineTrapComponent_Statics::ClassParams = {
		&UBlastMineTrapComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBlastMineTrapComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMineTrapComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlastMineTrapComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlastMineTrapComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlastMineTrapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlastMineTrapComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlastMineTrapComponent, 1075598240);
	template<> THEK24_API UClass* StaticClass<UBlastMineTrapComponent>()
	{
		return UBlastMineTrapComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlastMineTrapComponent(Z_Construct_UClass_UBlastMineTrapComponent, &UBlastMineTrapComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("UBlastMineTrapComponent"), false, nullptr, nullptr, nullptr);

	void UBlastMineTrapComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__isTrapActive(TEXT("_isTrapActive"));

		const bool bIsValid = true
			&& Name__isTrapActive == ClassReps[(int32)ENetFields_Private::_isTrapActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBlastMineTrapComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlastMineTrapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
