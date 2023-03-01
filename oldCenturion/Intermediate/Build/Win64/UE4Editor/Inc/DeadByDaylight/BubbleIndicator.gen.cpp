// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BubbleIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBubbleIndicator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABubbleIndicator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ABubbleIndicator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static FName NAME_ABubbleIndicator_SetSilhouette = FName(TEXT("SetSilhouette"));
	void ABubbleIndicator::SetSilhouette(UStaticMesh* staticMesh)
	{
		BubbleIndicator_eventSetSilhouette_Parms Parms;
		Parms.staticMesh=staticMesh;
		ProcessEvent(FindFunctionChecked(NAME_ABubbleIndicator_SetSilhouette),&Parms);
	}
	void ABubbleIndicator::StaticRegisterNativesABubbleIndicator()
	{
	}
	struct Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BubbleIndicator_eventSetSilhouette_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::NewProp_staticMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BubbleIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABubbleIndicator, nullptr, "SetSilhouette", nullptr, nullptr, sizeof(BubbleIndicator_eventSetSilhouette_Parms), Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABubbleIndicator_SetSilhouette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABubbleIndicator_SetSilhouette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABubbleIndicator_NoRegister()
	{
		return ABubbleIndicator::StaticClass();
	}
	struct Z_Construct_UClass_ABubbleIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayToLocallyObserved_MetaData[];
#endif
		static void NewProp__displayToLocallyObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__displayToLocallyObserved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lifeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABubbleIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABubbleIndicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABubbleIndicator_SetSilhouette, "SetSilhouette" }, // 1399265204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABubbleIndicator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BubbleIndicator.h" },
		{ "ModuleRelativePath", "Public/BubbleIndicator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__displayToLocallyObserved_MetaData[] = {
		{ "Category", "BubbleIndicator" },
		{ "ModuleRelativePath", "Public/BubbleIndicator.h" },
	};
#endif
	void Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__displayToLocallyObserved_SetBit(void* Obj)
	{
		((ABubbleIndicator*)Obj)->_displayToLocallyObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__displayToLocallyObserved = { "_displayToLocallyObserved", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABubbleIndicator), &Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__displayToLocallyObserved_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__displayToLocallyObserved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__displayToLocallyObserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__lifeTime_MetaData[] = {
		{ "Category", "BubbleIndicator" },
		{ "ModuleRelativePath", "Public/BubbleIndicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__lifeTime = { "_lifeTime", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABubbleIndicator, _lifeTime), METADATA_PARAMS(Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__lifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__lifeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABubbleIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__displayToLocallyObserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABubbleIndicator_Statics::NewProp__lifeTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABubbleIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABubbleIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABubbleIndicator_Statics::ClassParams = {
		&ABubbleIndicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABubbleIndicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABubbleIndicator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABubbleIndicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABubbleIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABubbleIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABubbleIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABubbleIndicator, 3751798907);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ABubbleIndicator>()
	{
		return ABubbleIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABubbleIndicator(Z_Construct_UClass_ABubbleIndicator, &ABubbleIndicator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ABubbleIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABubbleIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
