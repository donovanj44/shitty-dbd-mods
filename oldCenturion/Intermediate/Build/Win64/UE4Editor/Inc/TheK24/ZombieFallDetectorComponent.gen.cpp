// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombieFallDetectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieFallDetectorComponent() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombieFallDetectorComponent_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombieFallDetectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UZombieFallDetectorComponent::execAuthority_OnMovementModeChange)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_GET_PROPERTY(FByteProperty,Z_Param_prevMovementMode);
		P_GET_PROPERTY(FByteProperty,Z_Param_previousCustomMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnMovementModeChange(Z_Param_character,EMovementMode(Z_Param_prevMovementMode),Z_Param_previousCustomMode);
		P_NATIVE_END;
	}
	void UZombieFallDetectorComponent::StaticRegisterNativesUZombieFallDetectorComponent()
	{
		UClass* Class = UZombieFallDetectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnMovementModeChange", &UZombieFallDetectorComponent::execAuthority_OnMovementModeChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics
	{
		struct ZombieFallDetectorComponent_eventAuthority_OnMovementModeChange_Parms
		{
			ACharacter* character;
			TEnumAsByte<EMovementMode> prevMovementMode;
			uint8 previousCustomMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_previousCustomMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_prevMovementMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::NewProp_previousCustomMode = { "previousCustomMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieFallDetectorComponent_eventAuthority_OnMovementModeChange_Parms, previousCustomMode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::NewProp_prevMovementMode = { "prevMovementMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieFallDetectorComponent_eventAuthority_OnMovementModeChange_Parms, prevMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieFallDetectorComponent_eventAuthority_OnMovementModeChange_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::NewProp_previousCustomMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::NewProp_prevMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieFallDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZombieFallDetectorComponent, nullptr, "Authority_OnMovementModeChange", nullptr, nullptr, sizeof(ZombieFallDetectorComponent_eventAuthority_OnMovementModeChange_Parms), Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZombieFallDetectorComponent_NoRegister()
	{
		return UZombieFallDetectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZombieFallDetectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieDistanceConsideredSmashFall_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieDistanceConsideredSmashFall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombieFallDetectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZombieFallDetectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZombieFallDetectorComponent_Authority_OnMovementModeChange, "Authority_OnMovementModeChange" }, // 1369494326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieFallDetectorComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieFallDetectorComponent.h" },
		{ "ModuleRelativePath", "Public/ZombieFallDetectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombieFallDetectorComponent_Statics::NewProp__zombieDistanceConsideredSmashFall_MetaData[] = {
		{ "Category", "ZombieFallDetectorComponent" },
		{ "ModuleRelativePath", "Public/ZombieFallDetectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZombieFallDetectorComponent_Statics::NewProp__zombieDistanceConsideredSmashFall = { "_zombieDistanceConsideredSmashFall", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombieFallDetectorComponent, _zombieDistanceConsideredSmashFall), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UZombieFallDetectorComponent_Statics::NewProp__zombieDistanceConsideredSmashFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieFallDetectorComponent_Statics::NewProp__zombieDistanceConsideredSmashFall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombieFallDetectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombieFallDetectorComponent_Statics::NewProp__zombieDistanceConsideredSmashFall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombieFallDetectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombieFallDetectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombieFallDetectorComponent_Statics::ClassParams = {
		&UZombieFallDetectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZombieFallDetectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombieFallDetectorComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZombieFallDetectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombieFallDetectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombieFallDetectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombieFallDetectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombieFallDetectorComponent, 1051182756);
	template<> THEK24_API UClass* StaticClass<UZombieFallDetectorComponent>()
	{
		return UZombieFallDetectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombieFallDetectorComponent(Z_Construct_UClass_UZombieFallDetectorComponent, &UZombieFallDetectorComponent::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombieFallDetectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombieFallDetectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
