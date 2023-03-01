// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerSoundCuesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerSoundCuesComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerSoundCuesComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerSoundCuesComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UKillerSoundCuesComponent::execStartTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actorToStartTracking);
		P_GET_PROPERTY(FNameProperty,Z_Param_distanceDataID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTrackingActor(Z_Param_actorToStartTracking,Z_Param_distanceDataID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerSoundCuesComponent::execStartTrackingActorWithLifetime)
	{
		P_GET_OBJECT(AActor,Z_Param_actorToStartTracking);
		P_GET_PROPERTY(FNameProperty,Z_Param_distanceDataID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_trackerLifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTrackingActorWithLifetime(Z_Param_actorToStartTracking,Z_Param_distanceDataID,Z_Param_trackerLifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKillerSoundCuesComponent::execStopTrackingActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actorToStopTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTrackingActor(Z_Param_actorToStopTracking);
		P_NATIVE_END;
	}
	void UKillerSoundCuesComponent::StaticRegisterNativesUKillerSoundCuesComponent()
	{
		UClass* Class = UKillerSoundCuesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTrackingActor", &UKillerSoundCuesComponent::execStartTrackingActor },
			{ "StartTrackingActorWithLifetime", &UKillerSoundCuesComponent::execStartTrackingActorWithLifetime },
			{ "StopTrackingActor", &UKillerSoundCuesComponent::execStopTrackingActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics
	{
		struct KillerSoundCuesComponent_eventStartTrackingActor_Parms
		{
			AActor* actorToStartTracking;
			FName distanceDataID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_distanceDataID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorToStartTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::NewProp_distanceDataID = { "distanceDataID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerSoundCuesComponent_eventStartTrackingActor_Parms, distanceDataID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::NewProp_actorToStartTracking = { "actorToStartTracking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerSoundCuesComponent_eventStartTrackingActor_Parms, actorToStartTracking), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::NewProp_distanceDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::NewProp_actorToStartTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerSoundCuesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerSoundCuesComponent, nullptr, "StartTrackingActor", nullptr, nullptr, sizeof(KillerSoundCuesComponent_eventStartTrackingActor_Parms), Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics
	{
		struct KillerSoundCuesComponent_eventStartTrackingActorWithLifetime_Parms
		{
			AActor* actorToStartTracking;
			FName distanceDataID;
			float trackerLifetime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_trackerLifetime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_distanceDataID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorToStartTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::NewProp_trackerLifetime = { "trackerLifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerSoundCuesComponent_eventStartTrackingActorWithLifetime_Parms, trackerLifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::NewProp_distanceDataID = { "distanceDataID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerSoundCuesComponent_eventStartTrackingActorWithLifetime_Parms, distanceDataID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::NewProp_actorToStartTracking = { "actorToStartTracking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerSoundCuesComponent_eventStartTrackingActorWithLifetime_Parms, actorToStartTracking), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::NewProp_trackerLifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::NewProp_distanceDataID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::NewProp_actorToStartTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerSoundCuesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerSoundCuesComponent, nullptr, "StartTrackingActorWithLifetime", nullptr, nullptr, sizeof(KillerSoundCuesComponent_eventStartTrackingActorWithLifetime_Parms), Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics
	{
		struct KillerSoundCuesComponent_eventStopTrackingActor_Parms
		{
			AActor* actorToStopTracking;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorToStopTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::NewProp_actorToStopTracking = { "actorToStopTracking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KillerSoundCuesComponent_eventStopTrackingActor_Parms, actorToStopTracking), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::NewProp_actorToStopTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerSoundCuesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKillerSoundCuesComponent, nullptr, "StopTrackingActor", nullptr, nullptr, sizeof(KillerSoundCuesComponent_eventStopTrackingActor_Parms), Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKillerSoundCuesComponent_NoRegister()
	{
		return UKillerSoundCuesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKillerSoundCuesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKillerSoundCuesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKillerSoundCuesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActor, "StartTrackingActor" }, // 994899641
		{ &Z_Construct_UFunction_UKillerSoundCuesComponent_StartTrackingActorWithLifetime, "StartTrackingActorWithLifetime" }, // 825487680
		{ &Z_Construct_UFunction_UKillerSoundCuesComponent_StopTrackingActor, "StopTrackingActor" }, // 3795699750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKillerSoundCuesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KillerSoundCuesComponent.h" },
		{ "ModuleRelativePath", "Public/KillerSoundCuesComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKillerSoundCuesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKillerSoundCuesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKillerSoundCuesComponent_Statics::ClassParams = {
		&UKillerSoundCuesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKillerSoundCuesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKillerSoundCuesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKillerSoundCuesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKillerSoundCuesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKillerSoundCuesComponent, 2973914744);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UKillerSoundCuesComponent>()
	{
		return UKillerSoundCuesComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKillerSoundCuesComponent(Z_Construct_UClass_UKillerSoundCuesComponent, &UKillerSoundCuesComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UKillerSoundCuesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKillerSoundCuesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
