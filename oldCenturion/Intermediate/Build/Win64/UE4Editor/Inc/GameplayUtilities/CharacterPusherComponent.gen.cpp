// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/CharacterPusherComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPusherComponent() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterPusherComponent_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UCharacterPusherComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UBasePushStrategyComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterPusherComponent::execConstruct)
	{
		P_GET_OBJECT(UCapsuleComponent,Z_Param_characterDetector);
		P_GET_OBJECT(UCapsuleComponent,Z_Param_characterCollision);
		P_GET_OBJECT(UBasePushStrategyComponent,Z_Param_pushStrategy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Construct(Z_Param_characterDetector,Z_Param_characterCollision,Z_Param_pushStrategy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterPusherComponent::execOnCharacterDetectorOverlapExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_hitComponent);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterDetectorOverlapExit(Z_Param_hitComponent,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterPusherComponent::execSetIgnoredCharacter)
	{
		P_GET_OBJECT(ACharacter,Z_Param_character);
		P_GET_UBOOL(Z_Param_ignore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoredCharacter(Z_Param_character,Z_Param_ignore);
		P_NATIVE_END;
	}
	void UCharacterPusherComponent::StaticRegisterNativesUCharacterPusherComponent()
	{
		UClass* Class = UCharacterPusherComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &UCharacterPusherComponent::execConstruct },
			{ "OnCharacterDetectorOverlapExit", &UCharacterPusherComponent::execOnCharacterDetectorOverlapExit },
			{ "SetIgnoredCharacter", &UCharacterPusherComponent::execSetIgnoredCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics
	{
		struct CharacterPusherComponent_eventConstruct_Parms
		{
			UCapsuleComponent* characterDetector;
			UCapsuleComponent* characterCollision;
			UBasePushStrategyComponent* pushStrategy;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pushStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pushStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterDetector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_pushStrategy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_pushStrategy = { "pushStrategy", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventConstruct_Parms, pushStrategy), Z_Construct_UClass_UBasePushStrategyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_pushStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_pushStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterCollision_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterCollision = { "characterCollision", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventConstruct_Parms, characterCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterDetector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterDetector = { "characterDetector", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventConstruct_Parms, characterDetector), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterDetector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_pushStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::NewProp_characterDetector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterPusherComponent, nullptr, "Construct", nullptr, nullptr, sizeof(CharacterPusherComponent_eventConstruct_Parms), Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterPusherComponent_Construct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterPusherComponent_Construct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics
	{
		struct CharacterPusherComponent_eventOnCharacterDetectorOverlapExit_Parms
		{
			UPrimitiveComponent* hitComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventOnCharacterDetectorOverlapExit_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventOnCharacterDetectorOverlapExit_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventOnCharacterDetectorOverlapExit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_hitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_hitComponent = { "hitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventOnCharacterDetectorOverlapExit_Parms, hitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_hitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_hitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_otherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::NewProp_hitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterPusherComponent, nullptr, "OnCharacterDetectorOverlapExit", nullptr, nullptr, sizeof(CharacterPusherComponent_eventOnCharacterDetectorOverlapExit_Parms), Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics
	{
		struct CharacterPusherComponent_eventSetIgnoredCharacter_Parms
		{
			ACharacter* character;
			bool ignore;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ignore_MetaData[];
#endif
		static void NewProp_ignore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ignore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_ignore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_ignore_SetBit(void* Obj)
	{
		((CharacterPusherComponent_eventSetIgnoredCharacter_Parms*)Obj)->ignore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_ignore = { "ignore", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CharacterPusherComponent_eventSetIgnoredCharacter_Parms), &Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_ignore_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_ignore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_ignore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterPusherComponent_eventSetIgnoredCharacter_Parms, character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_ignore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterPusherComponent, nullptr, "SetIgnoredCharacter", nullptr, nullptr, sizeof(CharacterPusherComponent_eventSetIgnoredCharacter_Parms), Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterPusherComponent_NoRegister()
	{
		return UCharacterPusherComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterPusherComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ignoredByPushedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ignoredByPushedCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ignoredByPushedCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pushStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pushStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ignoredCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__ignoredCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ignoredCharacters_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__charactersToPush_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__charactersToPush;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__charactersToPush_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterPusherComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterPusherComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterPusherComponent_Construct, "Construct" }, // 2256623091
		{ &Z_Construct_UFunction_UCharacterPusherComponent_OnCharacterDetectorOverlapExit, "OnCharacterDetectorOverlapExit" }, // 1617768000
		{ &Z_Construct_UFunction_UCharacterPusherComponent_SetIgnoredCharacter, "SetIgnoredCharacter" }, // 1764892251
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPusherComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterPusherComponent.h" },
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredByPushedCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredByPushedCharacters = { "_ignoredByPushedCharacters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterPusherComponent, _ignoredByPushedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredByPushedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredByPushedCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredByPushedCharacters_Inner = { "_ignoredByPushedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__pushStrategy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__pushStrategy = { "_pushStrategy", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterPusherComponent, _pushStrategy), Z_Construct_UClass_UBasePushStrategyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__pushStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__pushStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterCollision_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterCollision = { "_characterCollision", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterPusherComponent, _characterCollision), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterDetector = { "_characterDetector", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterPusherComponent, _characterDetector), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredCharacters = { "_ignoredCharacters", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterPusherComponent, _ignoredCharacters), METADATA_PARAMS(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredCharacters_ElementProp = { "_ignoredCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__charactersToPush_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterPusherComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__charactersToPush = { "_charactersToPush", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterPusherComponent, _charactersToPush), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__charactersToPush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__charactersToPush_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__charactersToPush_Inner = { "_charactersToPush", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterPusherComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredByPushedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredByPushedCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__pushStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__characterDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__ignoredCharacters_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__charactersToPush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterPusherComponent_Statics::NewProp__charactersToPush_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterPusherComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterPusherComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterPusherComponent_Statics::ClassParams = {
		&UCharacterPusherComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterPusherComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterPusherComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPusherComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterPusherComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterPusherComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterPusherComponent, 2742769417);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UCharacterPusherComponent>()
	{
		return UCharacterPusherComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterPusherComponent(Z_Construct_UClass_UCharacterPusherComponent, &UCharacterPusherComponent::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UCharacterPusherComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterPusherComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
