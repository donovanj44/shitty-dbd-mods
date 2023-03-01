// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAudio/Public/InteractionAudioComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionAudioComponent() {}
// Cross Module References
	DBDAUDIO_API UClass* Z_Construct_UClass_UInteractionAudioComponent_NoRegister();
	DBDAUDIO_API UClass* Z_Construct_UClass_UInteractionAudioComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNonTunableStat();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionAudioComponent::execPostAkEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_akEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PostAkEvent(Z_Param_akEvent);
		P_NATIVE_END;
	}
	void UInteractionAudioComponent::StaticRegisterNativesUInteractionAudioComponent()
	{
		UClass* Class = UInteractionAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostAkEvent", &UInteractionAudioComponent::execPostAkEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics
	{
		struct InteractionAudioComponent_eventPostAkEvent_Parms
		{
			UAkAudioEvent* akEvent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_akEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionAudioComponent_eventPostAkEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionAudioComponent_eventPostAkEvent_Parms), &Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::NewProp_akEvent = { "akEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionAudioComponent_eventPostAkEvent_Parms, akEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::NewProp_akEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionAudioComponent, nullptr, "PostAkEvent", nullptr, nullptr, sizeof(InteractionAudioComponent_eventPostAkEvent_Parms), Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionAudioComponent_NoRegister()
	{
		return UInteractionAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__audioRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__audioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__audioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionAudioComponent_PostAkEvent, "PostAkEvent" }, // 3685726531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InteractionAudioComponent.h" },
		{ "ModuleRelativePath", "Public/InteractionAudioComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioRadius_MetaData[] = {
		{ "Category", "InteractionAudioComponent" },
		{ "ModuleRelativePath", "Public/InteractionAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioRadius = { "_audioRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionAudioComponent, _audioRadius), Z_Construct_UScriptStruct_FNonTunableStat, METADATA_PARAMS(Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioComponent_MetaData[] = {
		{ "Category", "InteractionAudioComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionAudioComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioComponent = { "_audioComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionAudioComponent, _audioComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionAudioComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionAudioComponent_Statics::NewProp__audioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionAudioComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionAudioComponent_Statics::ClassParams = {
		&UInteractionAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionAudioComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionAudioComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionAudioComponent, 1854042612);
	template<> DBDAUDIO_API UClass* StaticClass<UInteractionAudioComponent>()
	{
		return UInteractionAudioComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionAudioComponent(Z_Construct_UClass_UInteractionAudioComponent, &UInteractionAudioComponent::StaticClass, TEXT("/Script/DBDAudio"), TEXT("UInteractionAudioComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionAudioComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
