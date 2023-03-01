// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/MobileTormentTrailRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileTormentTrailRenderer() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_AMobileTormentTrailRenderer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FTormentTrailPointInfo();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMobileTormentTrailRenderer::execMulticast_AddInstance)
	{
		P_GET_OBJECT(ABaseTormentTrailPoint,Z_Param_trailPoint);
		P_GET_UBOOL(Z_Param_isAttackTrailPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddInstance_Implementation(Z_Param_trailPoint,Z_Param_isAttackTrailPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMobileTormentTrailRenderer::execMulticast_RemoveInstance)
	{
		P_GET_OBJECT(ABaseTormentTrailPoint,Z_Param_trailPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveInstance_Implementation(Z_Param_trailPoint);
		P_NATIVE_END;
	}
	static FName NAME_AMobileTormentTrailRenderer_Multicast_AddInstance = FName(TEXT("Multicast_AddInstance"));
	void AMobileTormentTrailRenderer::Multicast_AddInstance(ABaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint)
	{
		MobileTormentTrailRenderer_eventMulticast_AddInstance_Parms Parms;
		Parms.trailPoint=trailPoint;
		Parms.isAttackTrailPoint=isAttackTrailPoint ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMobileTormentTrailRenderer_Multicast_AddInstance),&Parms);
	}
	static FName NAME_AMobileTormentTrailRenderer_Multicast_RemoveInstance = FName(TEXT("Multicast_RemoveInstance"));
	void AMobileTormentTrailRenderer::Multicast_RemoveInstance(ABaseTormentTrailPoint* trailPoint)
	{
		MobileTormentTrailRenderer_eventMulticast_RemoveInstance_Parms Parms;
		Parms.trailPoint=trailPoint;
		ProcessEvent(FindFunctionChecked(NAME_AMobileTormentTrailRenderer_Multicast_RemoveInstance),&Parms);
	}
	void AMobileTormentTrailRenderer::StaticRegisterNativesAMobileTormentTrailRenderer()
	{
		UClass* Class = AMobileTormentTrailRenderer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_AddInstance", &AMobileTormentTrailRenderer::execMulticast_AddInstance },
			{ "Multicast_RemoveInstance", &AMobileTormentTrailRenderer::execMulticast_RemoveInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics
	{
		static void NewProp_isAttackTrailPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttackTrailPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::NewProp_isAttackTrailPoint_SetBit(void* Obj)
	{
		((MobileTormentTrailRenderer_eventMulticast_AddInstance_Parms*)Obj)->isAttackTrailPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::NewProp_isAttackTrailPoint = { "isAttackTrailPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MobileTormentTrailRenderer_eventMulticast_AddInstance_Parms), &Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::NewProp_isAttackTrailPoint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::NewProp_trailPoint = { "trailPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileTormentTrailRenderer_eventMulticast_AddInstance_Parms, trailPoint), Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::NewProp_isAttackTrailPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::NewProp_trailPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobileTormentTrailRenderer, nullptr, "Multicast_AddInstance", nullptr, nullptr, sizeof(MobileTormentTrailRenderer_eventMulticast_AddInstance_Parms), Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::NewProp_trailPoint = { "trailPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileTormentTrailRenderer_eventMulticast_RemoveInstance_Parms, trailPoint), Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::NewProp_trailPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMobileTormentTrailRenderer, nullptr, "Multicast_RemoveInstance", nullptr, nullptr, sizeof(MobileTormentTrailRenderer_eventMulticast_RemoveInstance_Parms), Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMobileTormentTrailRenderer_NoRegister()
	{
		return AMobileTormentTrailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_AMobileTormentTrailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailMaterialInstanceDynamic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trailMaterialInstanceDynamic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__instanceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__instanceMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__instanceMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__instanceMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wireOutlineIsmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__wireOutlineIsmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pillarOutlineIsmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pillarOutlineIsmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailIsmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__trailIsmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wireIsmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__wireIsmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pillarIsmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pillarIsmComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_AddInstance, "Multicast_AddInstance" }, // 2152641984
		{ &Z_Construct_UFunction_AMobileTormentTrailRenderer_Multicast_RemoveInstance, "Multicast_RemoveInstance" }, // 1784523410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MobileTormentTrailRenderer.h" },
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailMaterialInstanceDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailMaterialInstanceDynamic = { "_trailMaterialInstanceDynamic", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileTormentTrailRenderer, _trailMaterialInstanceDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailMaterialInstanceDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailMaterialInstanceDynamic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap = { "_instanceMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileTormentTrailRenderer, _instanceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap_Key_KeyProp = { "_instanceMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap_ValueProp = { "_instanceMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTormentTrailPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireOutlineIsmComponent_MetaData[] = {
		{ "Category", "MobileTormentTrailRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireOutlineIsmComponent = { "_wireOutlineIsmComponent", nullptr, (EPropertyFlags)0x0040000000082009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileTormentTrailRenderer, _wireOutlineIsmComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireOutlineIsmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireOutlineIsmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarOutlineIsmComponent_MetaData[] = {
		{ "Category", "MobileTormentTrailRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarOutlineIsmComponent = { "_pillarOutlineIsmComponent", nullptr, (EPropertyFlags)0x0040000000082009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileTormentTrailRenderer, _pillarOutlineIsmComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarOutlineIsmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarOutlineIsmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailIsmComponent_MetaData[] = {
		{ "Category", "MobileTormentTrailRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailIsmComponent = { "_trailIsmComponent", nullptr, (EPropertyFlags)0x0040000000082009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileTormentTrailRenderer, _trailIsmComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailIsmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailIsmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireIsmComponent_MetaData[] = {
		{ "Category", "MobileTormentTrailRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireIsmComponent = { "_wireIsmComponent", nullptr, (EPropertyFlags)0x0040000000082009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileTormentTrailRenderer, _wireIsmComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireIsmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireIsmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarIsmComponent_MetaData[] = {
		{ "Category", "MobileTormentTrailRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileTormentTrailRenderer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarIsmComponent = { "_pillarIsmComponent", nullptr, (EPropertyFlags)0x0040000000082009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMobileTormentTrailRenderer, _pillarIsmComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarIsmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarIsmComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailMaterialInstanceDynamic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__instanceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireOutlineIsmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarOutlineIsmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__trailIsmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__wireIsmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::NewProp__pillarIsmComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMobileTormentTrailRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::ClassParams = {
		&AMobileTormentTrailRenderer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMobileTormentTrailRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMobileTormentTrailRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMobileTormentTrailRenderer, 2877281687);
	template<> THEEXECUTIONER_API UClass* StaticClass<AMobileTormentTrailRenderer>()
	{
		return AMobileTormentTrailRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMobileTormentTrailRenderer(Z_Construct_UClass_AMobileTormentTrailRenderer, &AMobileTormentTrailRenderer::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("AMobileTormentTrailRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMobileTormentTrailRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
