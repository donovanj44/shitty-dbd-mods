// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ClipManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClipManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AClipManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AClipManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOriginalState();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDClipRegionComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AClipManager::execRemoveDissolveMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDissolveMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AClipManager::execSphericalDissolveAt)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SphericalDissolveAt(Z_Param_Location,Z_Param_radius);
		P_NATIVE_END;
	}
	void AClipManager::StaticRegisterNativesAClipManager()
	{
		UClass* Class = AClipManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveDissolveMaterials", &AClipManager::execRemoveDissolveMaterials },
			{ "SphericalDissolveAt", &AClipManager::execSphericalDissolveAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClipManager, nullptr, "RemoveDissolveMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics
	{
		struct ClipManager_eventSphericalDissolveAt_Parms
		{
			FVector Location;
			float radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClipManager_eventSphericalDissolveAt_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClipManager_eventSphericalDissolveAt_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClipManager, nullptr, "SphericalDissolveAt", nullptr, nullptr, sizeof(ClipManager_eventSphericalDissolveAt_Parms), Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClipManager_SphericalDissolveAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClipManager_SphericalDissolveAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AClipManager_NoRegister()
	{
		return AClipManager::StaticClass();
	}
	struct Z_Construct_UClass_AClipManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sphericalDissolveMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__sphericalDissolveMaterials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dissolve2normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__dissolve2normal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dissolve2normal_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dissolve2normal_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normal2dissolve_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__normal2dissolve;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__normal2dissolve_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__normal2dissolve_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dissolvedMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__dissolvedMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dissolvedMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__meshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__meshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__meshComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__clippingZones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__clippingZones;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__clippingZones_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClipManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AClipManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AClipManager_RemoveDissolveMaterials, "RemoveDissolveMaterials" }, // 2850060558
		{ &Z_Construct_UFunction_AClipManager_SphericalDissolveAt, "SphericalDissolveAt" }, // 3527850506
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClipManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClipManager.h" },
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClipManager_Statics::NewProp__sphericalDissolveMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__sphericalDissolveMaterials = { "_sphericalDissolveMaterials", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClipManager, _sphericalDissolveMaterials), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClipManager_Statics::NewProp__sphericalDissolveMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::NewProp__sphericalDissolveMaterials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal = { "_dissolve2normal", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClipManager, _dissolve2normal), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal_Key_KeyProp = { "_dissolve2normal_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal_ValueProp = { "_dissolve2normal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve = { "_normal2dissolve", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClipManager, _normal2dissolve), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve_Key_KeyProp = { "_normal2dissolve_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve_ValueProp = { "_normal2dissolve", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClipManager_Statics::NewProp__dissolvedMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__dissolvedMeshes = { "_dissolvedMeshes", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClipManager, _dissolvedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AClipManager_Statics::NewProp__dissolvedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::NewProp__dissolvedMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__dissolvedMeshes_Inner = { "_dissolvedMeshes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialOriginalState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClipManager_Statics::NewProp__meshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__meshComponents = { "_meshComponents", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClipManager, _meshComponents), METADATA_PARAMS(Z_Construct_UClass_AClipManager_Statics::NewProp__meshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::NewProp__meshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__meshComponents_ElementProp = { "_meshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClipManager_Statics::NewProp__clippingZones_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__clippingZones = { "_clippingZones", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClipManager, _clippingZones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AClipManager_Statics::NewProp__clippingZones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::NewProp__clippingZones_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClipManager_Statics::NewProp__clippingZones_Inner = { "_clippingZones", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDBDClipRegionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClipManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__sphericalDissolveMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__dissolve2normal_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__normal2dissolve_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__dissolvedMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__dissolvedMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__meshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__meshComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__clippingZones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClipManager_Statics::NewProp__clippingZones_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClipManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClipManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClipManager_Statics::ClassParams = {
		&AClipManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AClipManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClipManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClipManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClipManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClipManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClipManager, 3431554800);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AClipManager>()
	{
		return AClipManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClipManager(Z_Construct_UClass_AClipManager, &AClipManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AClipManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClipManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
