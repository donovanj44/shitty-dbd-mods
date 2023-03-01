// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoudNoiseNotifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudNoiseNotifier() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseNotifier_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ULoudNoiseNotifier();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULoudNoiseNotifier::execFire)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContextObject);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_UBOOL(Z_Param_shouldTrack);
		P_GET_PROPERTY(FFloatProperty,Z_Param_audibleRange);
		P_GET_OBJECT(ADBDPlayer,Z_Param_instigatingPlayer);
		P_GET_UBOOL(Z_Param_isQuickAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULoudNoiseNotifier::Fire(Z_Param_worldContextObject,Z_Param_instigator,Z_Param_Out_location,Z_Param_shouldTrack,Z_Param_audibleRange,Z_Param_instigatingPlayer,Z_Param_isQuickAction);
		P_NATIVE_END;
	}
	void ULoudNoiseNotifier::StaticRegisterNativesULoudNoiseNotifier()
	{
		UClass* Class = ULoudNoiseNotifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ULoudNoiseNotifier::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics
	{
		struct LoudNoiseNotifier_eventFire_Parms
		{
			const UObject* worldContextObject;
			AActor* instigator;
			FVector location;
			bool shouldTrack;
			float audibleRange;
			ADBDPlayer* instigatingPlayer;
			bool isQuickAction;
		};
		static void NewProp_isQuickAction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isQuickAction;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatingPlayer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_audibleRange;
		static void NewProp_shouldTrack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_isQuickAction_SetBit(void* Obj)
	{
		((LoudNoiseNotifier_eventFire_Parms*)Obj)->isQuickAction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_isQuickAction = { "isQuickAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoudNoiseNotifier_eventFire_Parms), &Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_isQuickAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_instigatingPlayer = { "instigatingPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoudNoiseNotifier_eventFire_Parms, instigatingPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_audibleRange = { "audibleRange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoudNoiseNotifier_eventFire_Parms, audibleRange), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_shouldTrack_SetBit(void* Obj)
	{
		((LoudNoiseNotifier_eventFire_Parms*)Obj)->shouldTrack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_shouldTrack = { "shouldTrack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LoudNoiseNotifier_eventFire_Parms), &Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_shouldTrack_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoudNoiseNotifier_eventFire_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoudNoiseNotifier_eventFire_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_worldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_worldContextObject = { "worldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LoudNoiseNotifier_eventFire_Parms, worldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_worldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_worldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_isQuickAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_instigatingPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_audibleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_shouldTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::NewProp_worldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LoudNoiseNotifier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoudNoiseNotifier, nullptr, "Fire", nullptr, nullptr, sizeof(LoudNoiseNotifier_eventFire_Parms), Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoudNoiseNotifier_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoudNoiseNotifier_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoudNoiseNotifier_NoRegister()
	{
		return ULoudNoiseNotifier::StaticClass();
	}
	struct Z_Construct_UClass_ULoudNoiseNotifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudNoiseNotifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoudNoiseNotifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoudNoiseNotifier_Fire, "Fire" }, // 1645334007
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudNoiseNotifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoudNoiseNotifier.h" },
		{ "ModuleRelativePath", "Public/LoudNoiseNotifier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudNoiseNotifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudNoiseNotifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoudNoiseNotifier_Statics::ClassParams = {
		&ULoudNoiseNotifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULoudNoiseNotifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudNoiseNotifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudNoiseNotifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoudNoiseNotifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoudNoiseNotifier, 1866898914);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ULoudNoiseNotifier>()
	{
		return ULoudNoiseNotifier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoudNoiseNotifier(Z_Construct_UClass_ULoudNoiseNotifier, &ULoudNoiseNotifier::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ULoudNoiseNotifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudNoiseNotifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
