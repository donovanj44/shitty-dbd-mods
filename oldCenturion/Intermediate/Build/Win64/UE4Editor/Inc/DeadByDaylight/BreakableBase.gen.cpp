// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BreakableBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableBase() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABreakableBase_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABreakableBase();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBreakableState();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABreakableBase::execExplode)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Explode(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABreakableBase::execIsUnbroken)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUnbroken();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABreakableBase::execPlayAudioBreakable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAudioBreakable();
		P_NATIVE_END;
	}
	static FName NAME_ABreakableBase_ExplodeVfxSfx = FName(TEXT("ExplodeVfxSfx"));
	void ABreakableBase::ExplodeVfxSfx(const FVector impulseDir)
	{
		BreakableBase_eventExplodeVfxSfx_Parms Parms;
		Parms.impulseDir=impulseDir;
		ProcessEvent(FindFunctionChecked(NAME_ABreakableBase_ExplodeVfxSfx),&Parms);
	}
	void ABreakableBase::StaticRegisterNativesABreakableBase()
	{
		UClass* Class = ABreakableBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Explode", &ABreakableBase::execExplode },
			{ "IsUnbroken", &ABreakableBase::execIsUnbroken },
			{ "PlayAudioBreakable", &ABreakableBase::execPlayAudioBreakable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABreakableBase_Explode_Statics
	{
		struct BreakableBase_eventExplode_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableBase_Explode_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreakableBase_eventExplode_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableBase_Explode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBase_Explode_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBase_Explode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableBase_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableBase, nullptr, "Explode", nullptr, nullptr, sizeof(BreakableBase_eventExplode_Parms), Z_Construct_UFunction_ABreakableBase_Explode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_Explode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableBase_Explode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_Explode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableBase_Explode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableBase_Explode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_impulseDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_impulseDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::NewProp_impulseDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::NewProp_impulseDir = { "impulseDir", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BreakableBase_eventExplodeVfxSfx_Parms, impulseDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::NewProp_impulseDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::NewProp_impulseDir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::NewProp_impulseDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableBase, nullptr, "ExplodeVfxSfx", nullptr, nullptr, sizeof(BreakableBase_eventExplodeVfxSfx_Parms), Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics
	{
		struct BreakableBase_eventIsUnbroken_Parms
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
	void Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BreakableBase_eventIsUnbroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BreakableBase_eventIsUnbroken_Parms), &Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableBase, nullptr, "IsUnbroken", nullptr, nullptr, sizeof(BreakableBase_eventIsUnbroken_Parms), Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableBase_IsUnbroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableBase_IsUnbroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABreakableBase, nullptr, "PlayAudioBreakable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABreakableBase_NoRegister()
	{
		return ABreakableBase::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__akAudioBreakEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__akAudioBreakEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__akAudioBreakable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__akAudioBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__breakableCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__breakableCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABreakableBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABreakableBase_Explode, "Explode" }, // 502455213
		{ &Z_Construct_UFunction_ABreakableBase_ExplodeVfxSfx, "ExplodeVfxSfx" }, // 3399887773
		{ &Z_Construct_UFunction_ABreakableBase_IsUnbroken, "IsUnbroken" }, // 487760404
		{ &Z_Construct_UFunction_ABreakableBase_PlayAudioBreakable, "PlayAudioBreakable" }, // 2299853723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableBase.h" },
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBase_Statics::NewProp__rootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBase_Statics::NewProp__rootComponent = { "_rootComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableBase, _rootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableBase_Statics::NewProp__rootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBase_Statics::NewProp__rootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakEvent_MetaData[] = {
		{ "Category", "BreakableBase" },
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakEvent = { "_akAudioBreakEvent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableBase, _akAudioBreakEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakable_MetaData[] = {
		{ "Category", "BreakableBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakable = { "_akAudioBreakable", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableBase, _akAudioBreakable), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBase_Statics::NewProp__state_MetaData[] = {
		{ "Category", "BreakableBase" },
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABreakableBase_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableBase, _state), Z_Construct_UEnum_DeadByDaylight_EBreakableState, METADATA_PARAMS(Z_Construct_UClass_ABreakableBase_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBase_Statics::NewProp__state_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABreakableBase_Statics::NewProp__state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBase_Statics::NewProp__breakableCollision_MetaData[] = {
		{ "Category", "BreakableBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BreakableBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBase_Statics::NewProp__breakableCollision = { "_breakableCollision", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableBase, _breakableCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableBase_Statics::NewProp__breakableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBase_Statics::NewProp__breakableCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBase_Statics::NewProp__rootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBase_Statics::NewProp__akAudioBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBase_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBase_Statics::NewProp__state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBase_Statics::NewProp__breakableCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreakableBase_Statics::ClassParams = {
		&ABreakableBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABreakableBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ABreakableBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreakableBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABreakableBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABreakableBase, 3740341748);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ABreakableBase>()
	{
		return ABreakableBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreakableBase(Z_Construct_UClass_ABreakableBase, &ABreakableBase::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ABreakableBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
