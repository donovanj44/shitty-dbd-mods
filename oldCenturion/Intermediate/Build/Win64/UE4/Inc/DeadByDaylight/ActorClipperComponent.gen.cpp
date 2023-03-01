// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ActorClipperComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorClipperComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorClipperComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UActorClipperComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	PHYSICSUTILITIES_API UClass* Z_Construct_UClass_UPrimitiveCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FClippedActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActorClipperComponent::execOnOwnerLocallyObservedChanged)
	{
		P_GET_UBOOL(Z_Param_locallyObserved);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerLocallyObservedChanged(Z_Param_locallyObserved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorClipperComponent::execSetClippingEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClippingEnabled(Z_Param_enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorClipperComponent::execSetPrimitiveCollection)
	{
		P_GET_OBJECT(UPrimitiveCollection,Z_Param_clippables);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimitiveCollection(Z_Param_clippables);
		P_NATIVE_END;
	}
	void UActorClipperComponent::StaticRegisterNativesUActorClipperComponent()
	{
		UClass* Class = UActorClipperComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOwnerLocallyObservedChanged", &UActorClipperComponent::execOnOwnerLocallyObservedChanged },
			{ "SetClippingEnabled", &UActorClipperComponent::execSetClippingEnabled },
			{ "SetPrimitiveCollection", &UActorClipperComponent::execSetPrimitiveCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics
	{
		struct ActorClipperComponent_eventOnOwnerLocallyObservedChanged_Parms
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
	void Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit(void* Obj)
	{
		((ActorClipperComponent_eventOnOwnerLocallyObservedChanged_Parms*)Obj)->locallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::NewProp_locallyObserved = { "locallyObserved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorClipperComponent_eventOnOwnerLocallyObservedChanged_Parms), &Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::NewProp_locallyObserved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::NewProp_locallyObserved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorClipperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorClipperComponent, nullptr, "OnOwnerLocallyObservedChanged", nullptr, nullptr, sizeof(ActorClipperComponent_eventOnOwnerLocallyObservedChanged_Parms), Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics
	{
		struct ActorClipperComponent_eventSetClippingEnabled_Parms
		{
			bool enabled;
		};
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((ActorClipperComponent_eventSetClippingEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ActorClipperComponent_eventSetClippingEnabled_Parms), &Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorClipperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorClipperComponent, nullptr, "SetClippingEnabled", nullptr, nullptr, sizeof(ActorClipperComponent_eventSetClippingEnabled_Parms), Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics
	{
		struct ActorClipperComponent_eventSetPrimitiveCollection_Parms
		{
			const UPrimitiveCollection* clippables;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clippables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_clippables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::NewProp_clippables_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::NewProp_clippables = { "clippables", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorClipperComponent_eventSetPrimitiveCollection_Parms, clippables), Z_Construct_UClass_UPrimitiveCollection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::NewProp_clippables_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::NewProp_clippables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::NewProp_clippables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorClipperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorClipperComponent, nullptr, "SetPrimitiveCollection", nullptr, nullptr, sizeof(ActorClipperComponent_eventSetPrimitiveCollection_Parms), Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorClipperComponent_NoRegister()
	{
		return UActorClipperComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorClipperComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__clippables_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__clippables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__clippedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__clippedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__clippedActors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__clippedActors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorClipperComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorClipperComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorClipperComponent_OnOwnerLocallyObservedChanged, "OnOwnerLocallyObservedChanged" }, // 1489622001
		{ &Z_Construct_UFunction_UActorClipperComponent_SetClippingEnabled, "SetClippingEnabled" }, // 1108537042
		{ &Z_Construct_UFunction_UActorClipperComponent_SetPrimitiveCollection, "SetPrimitiveCollection" }, // 1582941022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorClipperComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorClipperComponent.h" },
		{ "ModuleRelativePath", "Public/ActorClipperComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippables_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorClipperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippables = { "_clippables", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorClipperComponent, _clippables), Z_Construct_UClass_UPrimitiveCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorClipperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors = { "_clippedActors", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorClipperComponent, _clippedActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors_Key_KeyProp = { "_clippedActors_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors_ValueProp = { "_clippedActors", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FClippedActor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorClipperComponent_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "ActorClipperComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorClipperComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorClipperComponent_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorClipperComponent, Shape), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorClipperComponent_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorClipperComponent_Statics::NewProp_Shape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorClipperComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorClipperComponent_Statics::NewProp__clippedActors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorClipperComponent_Statics::NewProp_Shape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorClipperComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorClipperComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorClipperComponent_Statics::ClassParams = {
		&UActorClipperComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorClipperComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorClipperComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorClipperComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorClipperComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorClipperComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorClipperComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorClipperComponent, 2359729061);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UActorClipperComponent>()
	{
		return UActorClipperComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorClipperComponent(Z_Construct_UClass_UActorClipperComponent, &UActorClipperComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UActorClipperComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorClipperComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
