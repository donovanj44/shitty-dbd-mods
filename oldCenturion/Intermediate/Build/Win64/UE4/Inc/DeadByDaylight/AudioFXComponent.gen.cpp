// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AudioFXComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioFXComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAudioFXComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAudioFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAudioFXComponent::execDeafen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deafen(Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioFXComponent::execOnDeafenCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeafenCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioFXComponent::execOnLocallyObservedChanged)
	{
		P_GET_UBOOL(Z_Param_locallyObserved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged(Z_Param_locallyObserved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioFXComponent::execSetAudioAmbientDetector)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_audioAmbientDetector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioAmbientDetector(Z_Param_audioAmbientDetector);
		P_NATIVE_END;
	}
	void UAudioFXComponent::StaticRegisterNativesUAudioFXComponent()
	{
		UClass* Class = UAudioFXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deafen", &UAudioFXComponent::execDeafen },
			{ "OnDeafenCompleted", &UAudioFXComponent::execOnDeafenCompleted },
			{ "OnLocallyObservedChanged", &UAudioFXComponent::execOnLocallyObservedChanged },
			{ "SetAudioAmbientDetector", &UAudioFXComponent::execSetAudioAmbientDetector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics
	{
		struct AudioFXComponent_eventDeafen_Parms
		{
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioFXComponent_eventDeafen_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioFXComponent, nullptr, "Deafen", nullptr, nullptr, sizeof(AudioFXComponent_eventDeafen_Parms), Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioFXComponent_Deafen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioFXComponent_Deafen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioFXComponent, nullptr, "OnDeafenCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics
	{
		struct AudioFXComponent_eventOnLocallyObservedChanged_Parms
		{
			bool locallyObserved;
		};
		static void NewProp_locallyObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locallyObserved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit(void* Obj)
	{
		((AudioFXComponent_eventOnLocallyObservedChanged_Parms*)Obj)->locallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::NewProp_locallyObserved = { "locallyObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioFXComponent_eventOnLocallyObservedChanged_Parms), &Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::NewProp_locallyObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioFXComponent, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, sizeof(AudioFXComponent_eventOnLocallyObservedChanged_Parms), Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics
	{
		struct AudioFXComponent_eventSetAudioAmbientDetector_Parms
		{
			UPrimitiveComponent* audioAmbientDetector;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audioAmbientDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audioAmbientDetector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::NewProp_audioAmbientDetector_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::NewProp_audioAmbientDetector = { "audioAmbientDetector", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AudioFXComponent_eventSetAudioAmbientDetector_Parms, audioAmbientDetector), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::NewProp_audioAmbientDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::NewProp_audioAmbientDetector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::NewProp_audioAmbientDetector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioFXComponent, nullptr, "SetAudioAmbientDetector", nullptr, nullptr, sizeof(AudioFXComponent_eventSetAudioAmbientDetector_Parms), Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAudioFXComponent_NoRegister()
	{
		return UAudioFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioAmbientDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__audioAmbientDetector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioFXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioFXComponent_Deafen, "Deafen" }, // 185553513
		{ &Z_Construct_UFunction_UAudioFXComponent_OnDeafenCompleted, "OnDeafenCompleted" }, // 3414669245
		{ &Z_Construct_UFunction_UAudioFXComponent_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 1777399971
		{ &Z_Construct_UFunction_UAudioFXComponent_SetAudioAmbientDetector, "SetAudioAmbientDetector" }, // 2609510292
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AudioFXComponent.h" },
		{ "ModuleRelativePath", "Public/AudioFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioFXComponent_Statics::NewProp__audioAmbientDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AudioFXComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioFXComponent_Statics::NewProp__audioAmbientDetector = { "_audioAmbientDetector", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioFXComponent, _audioAmbientDetector), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioFXComponent_Statics::NewProp__audioAmbientDetector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFXComponent_Statics::NewProp__audioAmbientDetector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioFXComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioFXComponent_Statics::NewProp__audioAmbientDetector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioFXComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioFXComponent_Statics::ClassParams = {
		&UAudioFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioFXComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioFXComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioFXComponent, 4075941776);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UAudioFXComponent>()
	{
		return UAudioFXComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioFXComponent(Z_Construct_UClass_UAudioFXComponent, &UAudioFXComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UAudioFXComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioFXComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
