// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MapActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapActorComponent() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMapActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EMapActorCategory();
// End Cross Module References
	DEFINE_FUNCTION(UMapActorComponent::execGetDetectionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDetectionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapActorComponent::execIsKnownBy)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKnownBy(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMapActorComponent::execMulticast_SetDetectionEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetDetectionEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	static FName NAME_UMapActorComponent_Multicast_SetDetectionEnabled = FName(TEXT("Multicast_SetDetectionEnabled"));
	void UMapActorComponent::Multicast_SetDetectionEnabled(bool enabled)
	{
		MapActorComponent_eventMulticast_SetDetectionEnabled_Parms Parms;
		Parms.enabled=enabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UMapActorComponent_Multicast_SetDetectionEnabled),&Parms);
	}
	void UMapActorComponent::StaticRegisterNativesUMapActorComponent()
	{
		UClass* Class = UMapActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetectionEnabled", &UMapActorComponent::execGetDetectionEnabled },
			{ "IsKnownBy", &UMapActorComponent::execIsKnownBy },
			{ "Multicast_SetDetectionEnabled", &UMapActorComponent::execMulticast_SetDetectionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics
	{
		struct MapActorComponent_eventGetDetectionEnabled_Parms
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
	void Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapActorComponent_eventGetDetectionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapActorComponent_eventGetDetectionEnabled_Parms), &Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapActorComponent, nullptr, "GetDetectionEnabled", nullptr, nullptr, sizeof(MapActorComponent_eventGetDetectionEnabled_Parms), Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics
	{
		struct MapActorComponent_eventIsKnownBy_Parms
		{
			const ADBDPlayer* character;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MapActorComponent_eventIsKnownBy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapActorComponent_eventIsKnownBy_Parms), &Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapActorComponent_eventIsKnownBy_Parms, character), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapActorComponent, nullptr, "IsKnownBy", nullptr, nullptr, sizeof(MapActorComponent_eventIsKnownBy_Parms), Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapActorComponent_IsKnownBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapActorComponent_IsKnownBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((MapActorComponent_eventMulticast_SetDetectionEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapActorComponent_eventMulticast_SetDetectionEnabled_Parms), &Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapActorComponent, nullptr, "Multicast_SetDetectionEnabled", nullptr, nullptr, sizeof(MapActorComponent_eventMulticast_SetDetectionEnabled_Parms), Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC4, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMapActorComponent_NoRegister()
	{
		return UMapActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMapActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__detectionEnabled_MetaData[];
#endif
		static void NewProp__detectionEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__detectionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mapActorCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mapActorCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMapActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapActorComponent_GetDetectionEnabled, "GetDetectionEnabled" }, // 3529256642
		{ &Z_Construct_UFunction_UMapActorComponent_IsKnownBy, "IsKnownBy" }, // 1053529792
		{ &Z_Construct_UFunction_UMapActorComponent_Multicast_SetDetectionEnabled, "Multicast_SetDetectionEnabled" }, // 1719813600
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MapActorComponent.h" },
		{ "ModuleRelativePath", "Public/MapActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapActorComponent_Statics::NewProp__detectionEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMapActorComponent_Statics::NewProp__detectionEnabled_SetBit(void* Obj)
	{
		((UMapActorComponent*)Obj)->_detectionEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapActorComponent_Statics::NewProp__detectionEnabled = { "_detectionEnabled", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMapActorComponent), &Z_Construct_UClass_UMapActorComponent_Statics::NewProp__detectionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMapActorComponent_Statics::NewProp__detectionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapActorComponent_Statics::NewProp__detectionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapActorComponent_Statics::NewProp__mapActorCollider_MetaData[] = {
		{ "Category", "MapActorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapActorComponent_Statics::NewProp__mapActorCollider = { "_mapActorCollider", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapActorComponent, _mapActorCollider), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMapActorComponent_Statics::NewProp__mapActorCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapActorComponent_Statics::NewProp__mapActorCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapActorComponent_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "MapActorComponent" },
		{ "ModuleRelativePath", "Public/MapActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapActorComponent_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMapActorComponent, Category), Z_Construct_UEnum_DeadByDaylight_EMapActorCategory, METADATA_PARAMS(Z_Construct_UClass_UMapActorComponent_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapActorComponent_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapActorComponent_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapActorComponent_Statics::NewProp__detectionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapActorComponent_Statics::NewProp__mapActorCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapActorComponent_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapActorComponent_Statics::NewProp_Category_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMapActorComponent_Statics::ClassParams = {
		&UMapActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMapActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapActorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMapActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMapActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMapActorComponent, 53857189);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMapActorComponent>()
	{
		return UMapActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMapActorComponent(Z_Construct_UClass_UMapActorComponent, &UMapActorComponent::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMapActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
