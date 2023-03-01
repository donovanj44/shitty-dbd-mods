// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anniversary/Public/CrownPlayerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrownPlayerComponent() {}
// Cross Module References
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPlayerComponent_NoRegister();
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPlayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Anniversary();
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
// End Cross Module References
	DEFINE_FUNCTION(UCrownPlayerComponent::execOnRep_hasInteractedWithCrownPillarThisGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_hasInteractedWithCrownPillarThisGame();
		P_NATIVE_END;
	}
	static FName NAME_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar = FName(TEXT("Cosmetic_OnInteractedWithCrownPillar"));
	void UCrownPlayerComponent::Cosmetic_OnInteractedWithCrownPillar()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar),NULL);
	}
	void UCrownPlayerComponent::StaticRegisterNativesUCrownPlayerComponent()
	{
		UClass* Class = UCrownPlayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_hasInteractedWithCrownPillarThisGame", &UCrownPlayerComponent::execOnRep_hasInteractedWithCrownPillarThisGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPlayerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrownPlayerComponent, nullptr, "Cosmetic_OnInteractedWithCrownPillar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CrownPlayerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrownPlayerComponent, nullptr, "OnRep_hasInteractedWithCrownPillarThisGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCrownPlayerComponent_NoRegister()
	{
		return UCrownPlayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCrownPlayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isCrownEventActive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__isCrownEventActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasInteractedWithCrownPillarThisGame_MetaData[];
#endif
		static void NewProp__hasInteractedWithCrownPillarThisGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasInteractedWithCrownPillarThisGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrownPlayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Anniversary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrownPlayerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrownPlayerComponent_Cosmetic_OnInteractedWithCrownPillar, "Cosmetic_OnInteractedWithCrownPillar" }, // 1189645122
		{ &Z_Construct_UFunction_UCrownPlayerComponent_OnRep_hasInteractedWithCrownPillarThisGame, "OnRep_hasInteractedWithCrownPillarThisGame" }, // 1646242888
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPlayerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CrownPlayerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CrownPlayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__isCrownEventActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrownPlayerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__isCrownEventActive = { "_isCrownEventActive", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrownPlayerComponent, _isCrownEventActive), Z_Construct_UScriptStruct_FTagStateBool, METADATA_PARAMS(Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__isCrownEventActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__isCrownEventActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__hasInteractedWithCrownPillarThisGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/CrownPlayerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__hasInteractedWithCrownPillarThisGame_SetBit(void* Obj)
	{
		((UCrownPlayerComponent*)Obj)->_hasInteractedWithCrownPillarThisGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__hasInteractedWithCrownPillarThisGame = { "_hasInteractedWithCrownPillarThisGame", "OnRep_hasInteractedWithCrownPillarThisGame", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCrownPlayerComponent), &Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__hasInteractedWithCrownPillarThisGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__hasInteractedWithCrownPillarThisGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__hasInteractedWithCrownPillarThisGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrownPlayerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__isCrownEventActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrownPlayerComponent_Statics::NewProp__hasInteractedWithCrownPillarThisGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrownPlayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrownPlayerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrownPlayerComponent_Statics::ClassParams = {
		&UCrownPlayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCrownPlayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPlayerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrownPlayerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPlayerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrownPlayerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrownPlayerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrownPlayerComponent, 1286674936);
	template<> ANNIVERSARY_API UClass* StaticClass<UCrownPlayerComponent>()
	{
		return UCrownPlayerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrownPlayerComponent(Z_Construct_UClass_UCrownPlayerComponent, &UCrownPlayerComponent::StaticClass, TEXT("/Script/Anniversary"), TEXT("UCrownPlayerComponent"), false, nullptr, nullptr, nullptr);

	void UCrownPlayerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__hasInteractedWithCrownPillarThisGame(TEXT("_hasInteractedWithCrownPillarThisGame"));

		const bool bIsValid = true
			&& Name__hasInteractedWithCrownPillarThisGame == ClassReps[(int32)ENetFields_Private::_hasInteractedWithCrownPillarThisGame].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCrownPlayerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrownPlayerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
