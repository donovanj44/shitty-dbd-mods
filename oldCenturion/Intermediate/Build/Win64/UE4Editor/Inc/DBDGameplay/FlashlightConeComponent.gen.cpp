// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/FlashlightConeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlashlightConeComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightConeComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UFlashlightConeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UFlashlightConeComponent::execGetEffectiveConeHalfAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEffectiveConeHalfAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlashlightConeComponent::execGetEffectiveConeLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEffectiveConeLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFlashlightConeComponent::execGetOcclusionDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOcclusionDistance();
		P_NATIVE_END;
	}
	void UFlashlightConeComponent::StaticRegisterNativesUFlashlightConeComponent()
	{
		UClass* Class = UFlashlightConeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectiveConeHalfAngle", &UFlashlightConeComponent::execGetEffectiveConeHalfAngle },
			{ "GetEffectiveConeLength", &UFlashlightConeComponent::execGetEffectiveConeLength },
			{ "GetOcclusionDistance", &UFlashlightConeComponent::execGetOcclusionDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics
	{
		struct FlashlightConeComponent_eventGetEffectiveConeHalfAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashlightConeComponent_eventGetEffectiveConeHalfAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightConeComponent, nullptr, "GetEffectiveConeHalfAngle", nullptr, nullptr, sizeof(FlashlightConeComponent_eventGetEffectiveConeHalfAngle_Parms), Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics
	{
		struct FlashlightConeComponent_eventGetEffectiveConeLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashlightConeComponent_eventGetEffectiveConeLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightConeComponent, nullptr, "GetEffectiveConeLength", nullptr, nullptr, sizeof(FlashlightConeComponent_eventGetEffectiveConeLength_Parms), Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics
	{
		struct FlashlightConeComponent_eventGetOcclusionDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FlashlightConeComponent_eventGetOcclusionDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlashlightConeComponent, nullptr, "GetOcclusionDistance", nullptr, nullptr, sizeof(FlashlightConeComponent_eventGetOcclusionDistance_Parms), Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFlashlightConeComponent_NoRegister()
	{
		return UFlashlightConeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFlashlightConeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cacheCollidingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__cacheCollidingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseBeamLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseBeamLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseBeamAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseBeamAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__flashlightBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__flashlightBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIAimBeamRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIAimBeamRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIAimBeamLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIAimBeamLocationOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlashlightConeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFlashlightConeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeHalfAngle, "GetEffectiveConeHalfAngle" }, // 300267959
		{ &Z_Construct_UFunction_UFlashlightConeComponent_GetEffectiveConeLength, "GetEffectiveConeLength" }, // 43835599
		{ &Z_Construct_UFunction_UFlashlightConeComponent_GetOcclusionDistance, "GetOcclusionDistance" }, // 2525605704
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightConeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlashlightConeComponent.h" },
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__cacheCollidingActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__cacheCollidingActor = { "_cacheCollidingActor", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightConeComponent, _cacheCollidingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__cacheCollidingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__cacheCollidingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamLength_MetaData[] = {
		{ "Category", "FlashlightConeComponent" },
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamLength = { "_baseBeamLength", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightConeComponent, _baseBeamLength), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamAngle_MetaData[] = {
		{ "Category", "FlashlightConeComponent" },
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamAngle = { "_baseBeamAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightConeComponent, _baseBeamAngle), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__flashlightBottom_MetaData[] = {
		{ "Category", "FlashlightConeComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__flashlightBottom = { "_flashlightBottom", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightConeComponent, _flashlightBottom), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__flashlightBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__flashlightBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamRotationOffset_MetaData[] = {
		{ "Category", "FlashlightConeComponent" },
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamRotationOffset = { "AIAimBeamRotationOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightConeComponent, AIAimBeamRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamLocationOffset_MetaData[] = {
		{ "Category", "FlashlightConeComponent" },
		{ "ModuleRelativePath", "Public/FlashlightConeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamLocationOffset = { "AIAimBeamLocationOffset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFlashlightConeComponent, AIAimBeamLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamLocationOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlashlightConeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__cacheCollidingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__baseBeamAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp__flashlightBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlashlightConeComponent_Statics::NewProp_AIAimBeamLocationOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlashlightConeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlashlightConeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFlashlightConeComponent_Statics::ClassParams = {
		&UFlashlightConeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFlashlightConeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFlashlightConeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlashlightConeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlashlightConeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFlashlightConeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFlashlightConeComponent, 2965298890);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UFlashlightConeComponent>()
	{
		return UFlashlightConeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFlashlightConeComponent(Z_Construct_UClass_UFlashlightConeComponent, &UFlashlightConeComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UFlashlightConeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlashlightConeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
