// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/ZombiesInterestEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiesInterestEventManager() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UZombiesInterestEventManager_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UZombiesInterestEventManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	DEFINE_FUNCTION(UZombiesInterestEventManager::execAuthority_OnLoudNoiseTriggered)
	{
		P_GET_OBJECT(AActor,Z_Param_originator);
		P_GET_OBJECT(AActor,Z_Param_instigatingActor);
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_UBOOL(Z_Param_shouldTrack);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_audibleRange);
		P_GET_UBOOL(Z_Param_isQuickAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnLoudNoiseTriggered(Z_Param_originator,Z_Param_instigatingActor,Z_Param_location,Z_Param_shouldTrack,Z_Param_Out_audibleRange,Z_Param_isQuickAction);
		P_NATIVE_END;
	}
	void UZombiesInterestEventManager::StaticRegisterNativesUZombiesInterestEventManager()
	{
		UClass* Class = UZombiesInterestEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnLoudNoiseTriggered", &UZombiesInterestEventManager::execAuthority_OnLoudNoiseTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics
	{
		struct ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms
		{
			AActor* originator;
			AActor* instigatingActor;
			FVector location;
			bool shouldTrack;
			float audibleRange;
			bool isQuickAction;
		};
		static void NewProp_isQuickAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isQuickAction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_audibleRange;
		static void NewProp_shouldTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldTrack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatingActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction_SetBit(void* Obj)
	{
		((ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms*)Obj)->isQuickAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction = { "isQuickAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms), &Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_audibleRange = { "audibleRange", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms, audibleRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack_SetBit(void* Obj)
	{
		((ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms*)Obj)->shouldTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack = { "shouldTrack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms), &Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_instigatingActor = { "instigatingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms, instigatingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_originator = { "originator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms, originator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_isQuickAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_audibleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_shouldTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_instigatingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::NewProp_originator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombiesInterestEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZombiesInterestEventManager, nullptr, "Authority_OnLoudNoiseTriggered", nullptr, nullptr, sizeof(ZombiesInterestEventManager_eventAuthority_OnLoudNoiseTriggered_Parms), Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UZombiesInterestEventManager_NoRegister()
	{
		return UZombiesInterestEventManager::StaticClass();
	}
	struct Z_Construct_UClass_UZombiesInterestEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieInterestEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__zombieInterestEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__zombieInterestEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombiesInterestEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UZombiesInterestEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered, "Authority_OnLoudNoiseTriggered" }, // 1913540139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombiesInterestEventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombiesInterestEventManager.h" },
		{ "ModuleRelativePath", "Public/ZombiesInterestEventManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombiesInterestEventManager_Statics::NewProp__zombieInterestEvents_MetaData[] = {
		{ "Category", "ZombiesInterestEventManager" },
		{ "ModuleRelativePath", "Public/ZombiesInterestEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZombiesInterestEventManager_Statics::NewProp__zombieInterestEvents = { "_zombieInterestEvents", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UZombiesInterestEventManager, _zombieInterestEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZombiesInterestEventManager_Statics::NewProp__zombieInterestEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesInterestEventManager_Statics::NewProp__zombieInterestEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZombiesInterestEventManager_Statics::NewProp__zombieInterestEvents_Inner = { "_zombieInterestEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZombiesInterestEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombiesInterestEventManager_Statics::NewProp__zombieInterestEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZombiesInterestEventManager_Statics::NewProp__zombieInterestEvents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombiesInterestEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZombiesInterestEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombiesInterestEventManager_Statics::ClassParams = {
		&UZombiesInterestEventManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UZombiesInterestEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesInterestEventManager_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZombiesInterestEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombiesInterestEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombiesInterestEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombiesInterestEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombiesInterestEventManager, 821572428);
	template<> THEK24_API UClass* StaticClass<UZombiesInterestEventManager>()
	{
		return UZombiesInterestEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombiesInterestEventManager(Z_Construct_UClass_UZombiesInterestEventManager, &UZombiesInterestEventManager::StaticClass, TEXT("/Script/TheK24"), TEXT("UZombiesInterestEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombiesInterestEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
