// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BubbleIndicatorNotifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBubbleIndicatorNotifier() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBubbleIndicatorNotifier_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBubbleIndicatorNotifier();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABubbleIndicator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBubbleIndicatorNotifier::execSpawnBubbleIndicator)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_OBJECT(UClass,Z_Param_bubbleIndicatorBP);
		P_GET_STRUCT(FTransform,Z_Param_transform);
		P_GET_UBOOL(Z_Param_triggerLoudNoise);
		P_GET_UBOOL(Z_Param_spawnOnKillerSideOnly);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifetime);
		P_GET_OBJECT(UStaticMesh,Z_Param_silhouetteStaticMesh);
		P_GET_PROPERTY(FFloatProperty,Z_Param_audibleRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBubbleIndicatorNotifier::SpawnBubbleIndicator(Z_Param_worldContextObject,Z_Param_bubbleIndicatorBP,Z_Param_transform,Z_Param_triggerLoudNoise,Z_Param_spawnOnKillerSideOnly,Z_Param_lifetime,Z_Param_silhouetteStaticMesh,Z_Param_audibleRange);
		P_NATIVE_END;
	}
	void UBubbleIndicatorNotifier::StaticRegisterNativesUBubbleIndicatorNotifier()
	{
		UClass* Class = UBubbleIndicatorNotifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnBubbleIndicator", &UBubbleIndicatorNotifier::execSpawnBubbleIndicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics
	{
		struct BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms
		{
			UObject* worldContextObject;
			TSubclassOf<ABubbleIndicator>  bubbleIndicatorBP;
			FTransform transform;
			bool triggerLoudNoise;
			bool spawnOnKillerSideOnly;
			float lifetime;
			UStaticMesh* silhouetteStaticMesh;
			float audibleRange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_audibleRange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_silhouetteStaticMesh;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifetime;
		static void NewProp_spawnOnKillerSideOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_spawnOnKillerSideOnly;
		static void NewProp_triggerLoudNoise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_triggerLoudNoise;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bubbleIndicatorBP;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_audibleRange = { "audibleRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms, audibleRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_silhouetteStaticMesh = { "silhouetteStaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms, silhouetteStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms, lifetime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_spawnOnKillerSideOnly_SetBit(void* Obj)
	{
		((BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms*)Obj)->spawnOnKillerSideOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_spawnOnKillerSideOnly = { "spawnOnKillerSideOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms), &Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_spawnOnKillerSideOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_triggerLoudNoise_SetBit(void* Obj)
	{
		((BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms*)Obj)->triggerLoudNoise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_triggerLoudNoise = { "triggerLoudNoise", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms), &Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_triggerLoudNoise_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_bubbleIndicatorBP = { "bubbleIndicatorBP", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms, bubbleIndicatorBP), Z_Construct_UClass_ABubbleIndicator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_audibleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_silhouetteStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_spawnOnKillerSideOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_triggerLoudNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_bubbleIndicatorBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BubbleIndicatorNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBubbleIndicatorNotifier, nullptr, "SpawnBubbleIndicator", nullptr, nullptr, sizeof(BubbleIndicatorNotifier_eventSpawnBubbleIndicator_Parms), Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBubbleIndicatorNotifier_NoRegister()
	{
		return UBubbleIndicatorNotifier::StaticClass();
	}
	struct Z_Construct_UClass_UBubbleIndicatorNotifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBubbleIndicatorNotifier_SpawnBubbleIndicator, "SpawnBubbleIndicator" }, // 1494166226
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BubbleIndicatorNotifier.h" },
		{ "ModuleRelativePath", "Public/BubbleIndicatorNotifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBubbleIndicatorNotifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::ClassParams = {
		&UBubbleIndicatorNotifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBubbleIndicatorNotifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBubbleIndicatorNotifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBubbleIndicatorNotifier, 1775876048);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBubbleIndicatorNotifier>()
	{
		return UBubbleIndicatorNotifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBubbleIndicatorNotifier(Z_Construct_UClass_UBubbleIndicatorNotifier, &UBubbleIndicatorNotifier::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBubbleIndicatorNotifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBubbleIndicatorNotifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
