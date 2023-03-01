// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/AuthoritativePoolableActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthoritativePoolableActorComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativePoolableActorComponent();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBasePoolableActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UAuthoritativePoolableActorComponent::execOnRep_Acquired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Acquired();
		P_NATIVE_END;
	}
	void UAuthoritativePoolableActorComponent::StaticRegisterNativesUAuthoritativePoolableActorComponent()
	{
		UClass* Class = UAuthoritativePoolableActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Acquired", &UAuthoritativePoolableActorComponent::execOnRep_Acquired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthoritativePoolableActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuthoritativePoolableActorComponent, nullptr, "OnRep_Acquired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAuthoritativePoolableActorComponent_NoRegister()
	{
		return UAuthoritativePoolableActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__acquired_MetaData[];
#endif
		static void NewProp__acquired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__acquired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasePoolableActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuthoritativePoolableActorComponent_OnRep_Acquired, "OnRep_Acquired" }, // 1853713571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AuthoritativePoolableActorComponent.h" },
		{ "ModuleRelativePath", "Public/AuthoritativePoolableActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::NewProp__acquired_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthoritativePoolableActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::NewProp__acquired_SetBit(void* Obj)
	{
		((UAuthoritativePoolableActorComponent*)Obj)->_acquired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::NewProp__acquired = { "_acquired", "OnRep_Acquired", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAuthoritativePoolableActorComponent), &Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::NewProp__acquired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::NewProp__acquired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::NewProp__acquired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::NewProp__acquired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuthoritativePoolableActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::ClassParams = {
		&UAuthoritativePoolableActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAuthoritativePoolableActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAuthoritativePoolableActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAuthoritativePoolableActorComponent, 2577268332);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UAuthoritativePoolableActorComponent>()
	{
		return UAuthoritativePoolableActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAuthoritativePoolableActorComponent(Z_Construct_UClass_UAuthoritativePoolableActorComponent, &UAuthoritativePoolableActorComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UAuthoritativePoolableActorComponent"), false, nullptr, nullptr, nullptr);

	void UAuthoritativePoolableActorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__acquired(TEXT("_acquired"));

		const bool bIsValid = true
			&& Name__acquired == ClassReps[(int32)ENetFields_Private::_acquired].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAuthoritativePoolableActorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuthoritativePoolableActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
