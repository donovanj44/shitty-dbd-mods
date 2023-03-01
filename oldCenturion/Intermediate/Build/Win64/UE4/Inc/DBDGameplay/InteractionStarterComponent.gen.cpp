// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/InteractionStarterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionStarterComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UInteractionStarterComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UInteractionStarterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionStarterComponent::execOnInteractionStarted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractionStarted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionStarterComponent::execOnRep_ShouldStartInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShouldStartInteraction();
		P_NATIVE_END;
	}
	void UInteractionStarterComponent::StaticRegisterNativesUInteractionStarterComponent()
	{
		UClass* Class = UInteractionStarterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteractionStarted", &UInteractionStarterComponent::execOnInteractionStarted },
			{ "OnRep_ShouldStartInteraction", &UInteractionStarterComponent::execOnRep_ShouldStartInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionStarterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionStarterComponent, nullptr, "OnInteractionStarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionStarterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionStarterComponent, nullptr, "OnRep_ShouldStartInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionStarterComponent_NoRegister()
	{
		return UInteractionStarterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionStarterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldStartInteraction_MetaData[];
#endif
		static void NewProp__shouldStartInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldStartInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionStarterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionStarterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionStarterComponent_OnInteractionStarted, "OnInteractionStarted" }, // 157615780
		{ &Z_Construct_UFunction_UInteractionStarterComponent_OnRep_ShouldStartInteraction, "OnRep_ShouldStartInteraction" }, // 2683306357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionStarterComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionStarterComponent.h" },
		{ "ModuleRelativePath", "Public/InteractionStarterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__shouldStartInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__shouldStartInteraction_SetBit(void* Obj)
	{
		((UInteractionStarterComponent*)Obj)->_shouldStartInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__shouldStartInteraction = { "_shouldStartInteraction", "OnRep_ShouldStartInteraction", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionStarterComponent), &Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__shouldStartInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__shouldStartInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__shouldStartInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__interaction_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionStarterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__interaction = { "_interaction", nullptr, (EPropertyFlags)0x0040000000082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionStarterComponent, _interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionStarterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__shouldStartInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionStarterComponent_Statics::NewProp__interaction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionStarterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionStarterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionStarterComponent_Statics::ClassParams = {
		&UInteractionStarterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionStarterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionStarterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionStarterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionStarterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionStarterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionStarterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionStarterComponent, 828370577);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UInteractionStarterComponent>()
	{
		return UInteractionStarterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionStarterComponent(Z_Construct_UClass_UInteractionStarterComponent, &UInteractionStarterComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UInteractionStarterComponent"), false, nullptr, nullptr, nullptr);

	void UInteractionStarterComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__interaction(TEXT("_interaction"));
		static const FName Name__shouldStartInteraction(TEXT("_shouldStartInteraction"));

		const bool bIsValid = true
			&& Name__interaction == ClassReps[(int32)ENetFields_Private::_interaction].Property->GetFName()
			&& Name__shouldStartInteraction == ClassReps[(int32)ENetFields_Private::_shouldStartInteraction].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInteractionStarterComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionStarterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
