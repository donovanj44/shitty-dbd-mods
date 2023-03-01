// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/SupplyCrateInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSupplyCrateInteractable() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_ASupplyCrateInteractable_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_ASupplyCrateInteractable();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UContainsItemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASupplyCrateInteractable::execOnRep_IsAutoClosing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsAutoClosing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASupplyCrateInteractable::execOnRep_IsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsOpen();
		P_NATIVE_END;
	}
	void ASupplyCrateInteractable::StaticRegisterNativesASupplyCrateInteractable()
	{
		UClass* Class = ASupplyCrateInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsAutoClosing", &ASupplyCrateInteractable::execOnRep_IsAutoClosing },
			{ "OnRep_IsOpen", &ASupplyCrateInteractable::execOnRep_IsOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASupplyCrateInteractable, nullptr, "OnRep_IsAutoClosing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASupplyCrateInteractable, nullptr, "OnRep_IsOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASupplyCrateInteractable_NoRegister()
	{
		return ASupplyCrateInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ASupplyCrateInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crateAutoCloseAnimationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__crateAutoCloseAnimationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crateSelfClosingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__crateSelfClosingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isAutoClosing_MetaData[];
#endif
		static void NewProp__isAutoClosing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAutoClosing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isOpen_MetaData[];
#endif
		static void NewProp__isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemDropPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemDropPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemSpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemSpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemInSupplyCrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemInSupplyCrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__openInteractionSecondsToCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__openInteractionSecondsToCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contamainationSerumCollectable_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__contamainationSerumCollectable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chargeableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASupplyCrateInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASupplyCrateInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsAutoClosing, "OnRep_IsAutoClosing" }, // 3752345605
		{ &Z_Construct_UFunction_ASupplyCrateInteractable_OnRep_IsOpen, "OnRep_IsOpen" }, // 3413115820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SupplyCrateInteractable.h" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateAutoCloseAnimationTime_MetaData[] = {
		{ "Category", "SupplyCrateInteractable" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateAutoCloseAnimationTime = { "_crateAutoCloseAnimationTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _crateAutoCloseAnimationTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateAutoCloseAnimationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateAutoCloseAnimationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateSelfClosingTime_MetaData[] = {
		{ "Category", "SupplyCrateInteractable" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateSelfClosingTime = { "_crateSelfClosingTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _crateSelfClosingTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateSelfClosingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateSelfClosingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isAutoClosing_MetaData[] = {
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	void Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isAutoClosing_SetBit(void* Obj)
	{
		((ASupplyCrateInteractable*)Obj)->_isAutoClosing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isAutoClosing = { "_isAutoClosing", "OnRep_IsAutoClosing", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASupplyCrateInteractable), &Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isAutoClosing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isAutoClosing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isAutoClosing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	void Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isOpen_SetBit(void* Obj)
	{
		((ASupplyCrateInteractable*)Obj)->_isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isOpen = { "_isOpen", "OnRep_IsOpen", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASupplyCrateInteractable), &Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemDropPoint_MetaData[] = {
		{ "Category", "SupplyCrateInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemDropPoint = { "_itemDropPoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _itemDropPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemDropPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemDropPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemSpawnPoint_MetaData[] = {
		{ "Category", "SupplyCrateInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemSpawnPoint = { "_itemSpawnPoint", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _itemSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemInSupplyCrate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemInSupplyCrate = { "_itemInSupplyCrate", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _itemInSupplyCrate), Z_Construct_UClass_ACollectable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemInSupplyCrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemInSupplyCrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__openInteractionSecondsToCharge_MetaData[] = {
		{ "Category", "SupplyCrateInteractable" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__openInteractionSecondsToCharge = { "_openInteractionSecondsToCharge", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _openInteractionSecondsToCharge), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__openInteractionSecondsToCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__openInteractionSecondsToCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__contamainationSerumCollectable_MetaData[] = {
		{ "Category", "SupplyCrateInteractable" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__contamainationSerumCollectable = { "_contamainationSerumCollectable", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _contamainationSerumCollectable), Z_Construct_UClass_ACollectable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__contamainationSerumCollectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__contamainationSerumCollectable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__chargeableComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SupplyCrateInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SupplyCrateInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__chargeableComponent = { "_chargeableComponent", nullptr, (EPropertyFlags)0x004000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASupplyCrateInteractable, _chargeableComponent), Z_Construct_UClass_UChargeableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__chargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__chargeableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASupplyCrateInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateAutoCloseAnimationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__crateSelfClosingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isAutoClosing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__isOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemDropPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemSpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__itemInSupplyCrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__openInteractionSecondsToCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__contamainationSerumCollectable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASupplyCrateInteractable_Statics::NewProp__chargeableComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UContainsItemInterface_NoRegister, (int32)VTABLE_OFFSET(ASupplyCrateInteractable, IContainsItemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASupplyCrateInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASupplyCrateInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASupplyCrateInteractable_Statics::ClassParams = {
		&ASupplyCrateInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASupplyCrateInteractable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASupplyCrateInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASupplyCrateInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASupplyCrateInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASupplyCrateInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASupplyCrateInteractable, 3494604534);
	template<> THEK24_API UClass* StaticClass<ASupplyCrateInteractable>()
	{
		return ASupplyCrateInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASupplyCrateInteractable(Z_Construct_UClass_ASupplyCrateInteractable, &ASupplyCrateInteractable::StaticClass, TEXT("/Script/TheK24"), TEXT("ASupplyCrateInteractable"), false, nullptr, nullptr, nullptr);

	void ASupplyCrateInteractable::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__itemInSupplyCrate(TEXT("_itemInSupplyCrate"));
		static const FName Name__isOpen(TEXT("_isOpen"));
		static const FName Name__isAutoClosing(TEXT("_isAutoClosing"));

		const bool bIsValid = true
			&& Name__itemInSupplyCrate == ClassReps[(int32)ENetFields_Private::_itemInSupplyCrate].Property->GetFName()
			&& Name__isOpen == ClassReps[(int32)ENetFields_Private::_isOpen].Property->GetFName()
			&& Name__isAutoClosing == ClassReps[(int32)ENetFields_Private::_isAutoClosing].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASupplyCrateInteractable"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASupplyCrateInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
