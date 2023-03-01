// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SubtitlesManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitlesManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USubtitlesManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USubtitlesManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAkEventWithSubtitle();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventSubtitlesManagerPostEventCallback_Parms
		{
			EAkCallbackType CallbackType;
			UAkCallbackInfo* CallbackInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventSubtitlesManagerPostEventCallback_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventSubtitlesManagerPostEventCallback_Parms, CallbackType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "SubtitlesManagerPostEventCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventSubtitlesManagerPostEventCallback_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USubtitlesManager::execPostAkEventWithSubtitles)
	{
		P_GET_OBJECT(UAkGameObject,Z_Param_target);
		P_GET_TARRAY_REF(FAkEventWithSubtitle,Z_Param_Out_akEventRandomizer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxSubtitleDistance);
		P_GET_PROPERTY(FIntProperty,Z_Param_callbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_postEventCallback);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_externalSources);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USubtitlesManager::PostAkEventWithSubtitles(Z_Param_target,Z_Param_Out_akEventRandomizer,Z_Param_maxSubtitleDistance,Z_Param_callbackMask,FSubtitlesManagerPostEventCallback(Z_Param_Out_postEventCallback),Z_Param_Out_externalSources);
		P_NATIVE_END;
	}
	void USubtitlesManager::StaticRegisterNativesUSubtitlesManager()
	{
		UClass* Class = USubtitlesManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostAkEventWithSubtitles", &USubtitlesManager::execPostAkEventWithSubtitles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics
	{
		struct SubtitlesManager_eventPostAkEventWithSubtitles_Parms
		{
			UAkGameObject* target;
			TArray<FAkEventWithSubtitle> akEventRandomizer;
			float maxSubtitleDistance;
			int32 callbackMask;
			FScriptDelegate postEventCallback;
			TArray<FAkExternalSourceInfo> externalSources;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_externalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_externalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_externalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_postEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_postEventCallback;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_callbackMask;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSubtitleDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_akEventRandomizer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_akEventRandomizer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_akEventRandomizer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesManager_eventPostAkEventWithSubtitles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_externalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_externalSources = { "externalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesManager_eventPostAkEventWithSubtitles_Parms, externalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_externalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_externalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_externalSources_Inner = { "externalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_postEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_postEventCallback = { "postEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesManager_eventPostAkEventWithSubtitles_Parms, postEventCallback), Z_Construct_UDelegateFunction_DeadByDaylight_SubtitlesManagerPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_postEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_postEventCallback_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_callbackMask = { "callbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesManager_eventPostAkEventWithSubtitles_Parms, callbackMask), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_maxSubtitleDistance = { "maxSubtitleDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesManager_eventPostAkEventWithSubtitles_Parms, maxSubtitleDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_akEventRandomizer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_akEventRandomizer = { "akEventRandomizer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesManager_eventPostAkEventWithSubtitles_Parms, akEventRandomizer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_akEventRandomizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_akEventRandomizer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_akEventRandomizer_Inner = { "akEventRandomizer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkEventWithSubtitle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubtitlesManager_eventPostAkEventWithSubtitles_Parms, target), Z_Construct_UClass_UAkGameObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_externalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_externalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_postEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_callbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_maxSubtitleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_akEventRandomizer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_akEventRandomizer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubtitlesManager, nullptr, "PostAkEventWithSubtitles", nullptr, nullptr, sizeof(SubtitlesManager_eventPostAkEventWithSubtitles_Parms), Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubtitlesManager_NoRegister()
	{
		return USubtitlesManager::StaticClass();
	}
	struct Z_Construct_UClass_USubtitlesManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubtitlesManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubtitlesManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubtitlesManager_PostAkEventWithSubtitles, "PostAkEventWithSubtitles" }, // 3338114292
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubtitlesManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubtitlesManager.h" },
		{ "ModuleRelativePath", "Public/SubtitlesManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubtitlesManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubtitlesManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubtitlesManager_Statics::ClassParams = {
		&USubtitlesManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubtitlesManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubtitlesManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubtitlesManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubtitlesManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubtitlesManager, 1997749007);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USubtitlesManager>()
	{
		return USubtitlesManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubtitlesManager(Z_Construct_UClass_USubtitlesManager, &USubtitlesManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USubtitlesManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubtitlesManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
