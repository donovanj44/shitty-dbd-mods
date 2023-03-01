// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LevelReadyToPlayPlayerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelReadyToPlayPlayerComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULevelReadyToPlayPlayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements();
// End Cross Module References
	DEFINE_FUNCTION(ULevelReadyToPlayPlayerComponent::execOnRep_LevelReadyToPlayRequirementsTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LevelReadyToPlayRequirementsTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelReadyToPlayPlayerComponent::execServer_SetIsReadyToPlay)
	{
		P_GET_UBOOL(Z_Param_readyToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetIsReadyToPlay_Validate(Z_Param_readyToPlay))
		{
			RPC_ValidateFailed(TEXT("Server_SetIsReadyToPlay_Validate"));
			return;
		}
		P_THIS->Server_SetIsReadyToPlay_Implementation(Z_Param_readyToPlay);
		P_NATIVE_END;
	}
	static FName NAME_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay = FName(TEXT("Server_SetIsReadyToPlay"));
	void ULevelReadyToPlayPlayerComponent::Server_SetIsReadyToPlay(bool readyToPlay)
	{
		LevelReadyToPlayPlayerComponent_eventServer_SetIsReadyToPlay_Parms Parms;
		Parms.readyToPlay=readyToPlay ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay),&Parms);
	}
	void ULevelReadyToPlayPlayerComponent::StaticRegisterNativesULevelReadyToPlayPlayerComponent()
	{
		UClass* Class = ULevelReadyToPlayPlayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_LevelReadyToPlayRequirementsTarget", &ULevelReadyToPlayPlayerComponent::execOnRep_LevelReadyToPlayRequirementsTarget },
			{ "Server_SetIsReadyToPlay", &ULevelReadyToPlayPlayerComponent::execServer_SetIsReadyToPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelReadyToPlayPlayerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelReadyToPlayPlayerComponent, nullptr, "OnRep_LevelReadyToPlayRequirementsTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics
	{
		static void NewProp_readyToPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_readyToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::NewProp_readyToPlay_SetBit(void* Obj)
	{
		((LevelReadyToPlayPlayerComponent_eventServer_SetIsReadyToPlay_Parms*)Obj)->readyToPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::NewProp_readyToPlay = { "readyToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelReadyToPlayPlayerComponent_eventServer_SetIsReadyToPlay_Parms), &Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::NewProp_readyToPlay_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::NewProp_readyToPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelReadyToPlayPlayerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelReadyToPlayPlayerComponent, nullptr, "Server_SetIsReadyToPlay", nullptr, nullptr, sizeof(LevelReadyToPlayPlayerComponent_eventServer_SetIsReadyToPlay_Parms), Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_NoRegister()
	{
		return ULevelReadyToPlayPlayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelReadyToPlayRequirementsTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__levelReadyToPlayRequirementsTarget;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__levelReadyToPlayRequirementsTarget_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_OnRep_LevelReadyToPlayRequirementsTarget, "OnRep_LevelReadyToPlayRequirementsTarget" }, // 3734957877
		{ &Z_Construct_UFunction_ULevelReadyToPlayPlayerComponent_Server_SetIsReadyToPlay, "Server_SetIsReadyToPlay" }, // 1694743952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelReadyToPlayPlayerComponent.h" },
		{ "ModuleRelativePath", "Public/LevelReadyToPlayPlayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::NewProp__levelReadyToPlayRequirementsTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelReadyToPlayPlayerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::NewProp__levelReadyToPlayRequirementsTarget = { "_levelReadyToPlayRequirementsTarget", "OnRep_LevelReadyToPlayRequirementsTarget", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelReadyToPlayPlayerComponent, _levelReadyToPlayRequirementsTarget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::NewProp__levelReadyToPlayRequirementsTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::NewProp__levelReadyToPlayRequirementsTarget_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::NewProp__levelReadyToPlayRequirementsTarget_Inner = { "_levelReadyToPlayRequirementsTarget", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelReadyToPlayRequirements, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::NewProp__levelReadyToPlayRequirementsTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::NewProp__levelReadyToPlayRequirementsTarget_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelReadyToPlayPlayerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::ClassParams = {
		&ULevelReadyToPlayPlayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelReadyToPlayPlayerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelReadyToPlayPlayerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelReadyToPlayPlayerComponent, 913568425);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULevelReadyToPlayPlayerComponent>()
	{
		return ULevelReadyToPlayPlayerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelReadyToPlayPlayerComponent(Z_Construct_UClass_ULevelReadyToPlayPlayerComponent, &ULevelReadyToPlayPlayerComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULevelReadyToPlayPlayerComponent"), false, nullptr, nullptr, nullptr);

	void ULevelReadyToPlayPlayerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__levelReadyToPlayRequirementsTarget(TEXT("_levelReadyToPlayRequirementsTarget"));

		const bool bIsValid = true
			&& Name__levelReadyToPlayRequirementsTarget == ClassReps[(int32)ENetFields_Private::_levelReadyToPlayRequirementsTarget].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULevelReadyToPlayPlayerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelReadyToPlayPlayerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
