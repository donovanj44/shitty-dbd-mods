// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScreamComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreamComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreamComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreamComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMontagePlaybackDefinition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UScreamComponent::execCanScream)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanScream();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreamComponent::execPlayScreamSound)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_audioEvent);
		P_GET_UBOOL(Z_Param_fireLoudNoiseEvent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_audibleRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayScreamSound(Z_Param_audioEvent,Z_Param_fireLoudNoiseEvent,Z_Param_audibleRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreamComponent::execPlayScreamSoundAndAnimation)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_audioEvent);
		P_GET_UBOOL(Z_Param_fireLoudNoiseEvent);
		P_GET_STRUCT(FMontagePlaybackDefinition,Z_Param_montageDefinition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_audibleRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayScreamSoundAndAnimation(Z_Param_audioEvent,Z_Param_fireLoudNoiseEvent,Z_Param_montageDefinition,Z_Param_audibleRange);
		P_NATIVE_END;
	}
	void UScreamComponent::StaticRegisterNativesUScreamComponent()
	{
		UClass* Class = UScreamComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanScream", &UScreamComponent::execCanScream },
			{ "PlayScreamSound", &UScreamComponent::execPlayScreamSound },
			{ "PlayScreamSoundAndAnimation", &UScreamComponent::execPlayScreamSoundAndAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreamComponent_CanScream_Statics
	{
		struct ScreamComponent_eventCanScream_Parms
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
	void Z_Construct_UFunction_UScreamComponent_CanScream_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScreamComponent_eventCanScream_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreamComponent_CanScream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreamComponent_eventCanScream_Parms), &Z_Construct_UFunction_UScreamComponent_CanScream_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreamComponent_CanScream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_CanScream_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreamComponent_CanScream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreamComponent_CanScream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreamComponent, nullptr, "CanScream", nullptr, nullptr, sizeof(ScreamComponent_eventCanScream_Parms), Z_Construct_UFunction_UScreamComponent_CanScream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreamComponent_CanScream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreamComponent_CanScream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreamComponent_CanScream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreamComponent_CanScream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreamComponent_CanScream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics
	{
		struct ScreamComponent_eventPlayScreamSound_Parms
		{
			UAkAudioEvent* audioEvent;
			bool fireLoudNoiseEvent;
			float audibleRange;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_audibleRange;
		static void NewProp_fireLoudNoiseEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fireLoudNoiseEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScreamComponent_eventPlayScreamSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreamComponent_eventPlayScreamSound_Parms), &Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_audibleRange = { "audibleRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreamComponent_eventPlayScreamSound_Parms, audibleRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_fireLoudNoiseEvent_SetBit(void* Obj)
	{
		((ScreamComponent_eventPlayScreamSound_Parms*)Obj)->fireLoudNoiseEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_fireLoudNoiseEvent = { "fireLoudNoiseEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreamComponent_eventPlayScreamSound_Parms), &Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_fireLoudNoiseEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_audioEvent = { "audioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreamComponent_eventPlayScreamSound_Parms, audioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_audibleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_fireLoudNoiseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::NewProp_audioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreamComponent, nullptr, "PlayScreamSound", nullptr, nullptr, sizeof(ScreamComponent_eventPlayScreamSound_Parms), Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreamComponent_PlayScreamSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreamComponent_PlayScreamSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics
	{
		struct ScreamComponent_eventPlayScreamSoundAndAnimation_Parms
		{
			UAkAudioEvent* audioEvent;
			bool fireLoudNoiseEvent;
			FMontagePlaybackDefinition montageDefinition;
			float audibleRange;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_audibleRange;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_montageDefinition;
		static void NewProp_fireLoudNoiseEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fireLoudNoiseEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScreamComponent_eventPlayScreamSoundAndAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreamComponent_eventPlayScreamSoundAndAnimation_Parms), &Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_audibleRange = { "audibleRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreamComponent_eventPlayScreamSoundAndAnimation_Parms, audibleRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_montageDefinition = { "montageDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreamComponent_eventPlayScreamSoundAndAnimation_Parms, montageDefinition), Z_Construct_UScriptStruct_FMontagePlaybackDefinition, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_fireLoudNoiseEvent_SetBit(void* Obj)
	{
		((ScreamComponent_eventPlayScreamSoundAndAnimation_Parms*)Obj)->fireLoudNoiseEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_fireLoudNoiseEvent = { "fireLoudNoiseEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ScreamComponent_eventPlayScreamSoundAndAnimation_Parms), &Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_fireLoudNoiseEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_audioEvent = { "audioEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreamComponent_eventPlayScreamSoundAndAnimation_Parms, audioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_audibleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_montageDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_fireLoudNoiseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::NewProp_audioEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreamComponent, nullptr, "PlayScreamSoundAndAnimation", nullptr, nullptr, sizeof(ScreamComponent_eventPlayScreamSoundAndAnimation_Parms), Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreamComponent_NoRegister()
	{
		return UScreamComponent::StaticClass();
	}
	struct Z_Construct_UClass_UScreamComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montagePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montagePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perkManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreamComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreamComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreamComponent_CanScream, "CanScream" }, // 2447924315
		{ &Z_Construct_UFunction_UScreamComponent_PlayScreamSound, "PlayScreamSound" }, // 1667857278
		{ &Z_Construct_UFunction_UScreamComponent_PlayScreamSoundAndAnimation, "PlayScreamSoundAndAnimation" }, // 1293026820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreamComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScreamComponent.h" },
		{ "ModuleRelativePath", "Public/ScreamComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreamComponent_Statics::NewProp__montagePlayer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScreamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreamComponent_Statics::NewProp__montagePlayer = { "_montagePlayer", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreamComponent, _montagePlayer), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreamComponent_Statics::NewProp__montagePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreamComponent_Statics::NewProp__montagePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreamComponent_Statics::NewProp__perkManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScreamComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScreamComponent_Statics::NewProp__perkManager = { "_perkManager", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreamComponent, _perkManager), Z_Construct_UClass_UPerkManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScreamComponent_Statics::NewProp__perkManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreamComponent_Statics::NewProp__perkManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreamComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreamComponent_Statics::NewProp__montagePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreamComponent_Statics::NewProp__perkManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreamComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreamComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreamComponent_Statics::ClassParams = {
		&UScreamComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreamComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreamComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UScreamComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreamComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreamComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreamComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreamComponent, 1963009258);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UScreamComponent>()
	{
		return UScreamComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreamComponent(Z_Construct_UClass_UScreamComponent, &UScreamComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UScreamComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreamComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
